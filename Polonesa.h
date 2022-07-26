#pragma once



#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

#include "Asm.h"
#include "Tabela.h"

using namespace std;
unordered_map<string, int> opMap = {
		{"^", 3},	//elevado	
		{"l", 3},	//log
		{"e", 3},   //ln
		{"n", 3},   //n-esima raiz de x
		{"*", 2},	//multiplicacao
		{"/", 2},	//divisao
		{"+", 1},	//soma
		{"-", 1},	//subtracao
		{"(", -1},	//abre parenteses
		{")", -1}	//fecha parenteses
};
unordered_map<string, int> funMap = // mapeamento de funcoes com apenas 1 operando
{
		{"~", 4},	//numero negativo
		{"z", 3},	//sen
		{"c", 3},	//cos
		{"x", 3},	//tg
		{"q", 3},	//arcseno
		{"w", 3},	//arco cosseno
		{"d", 3},	//arco tg
		{"!", 3},   //fatorial
		{"s", 3},   //sqrt
};

float Calcular(vector<string>& equacao, bool Grau)
{
	Asm operacao;
	vector<float> pilha = {};
	for (string token : equacao)
	{
		if (funMap.find(token) != funMap.end()) //verifica se o token é um operador de apenas 1 operando, se for ele entra no loop
		{
		float a = pilha[pilha.size() - 1]; //pega o elemento anterior da pilha (vai ser um numero)
		switch (token[0]) //procura o operador selecionado e chama a função equivalente
		{
		case '!':
			a = operacao.fatorial(a);
			break;
		case '~':
			a = operacao.negativo(a);
			break;
		case 'z':
			a = operacao.sen(a, Grau);
			break;
		case 'c':
			a = operacao.cos(a, Grau);
			break;
		case 'x':
			a = operacao.tg(a, Grau);
			break;
		case 'd':
			a = operacao.arctg(a, Grau);
			break;
		case 'w':
			a = operacao.arccos(a, Grau);
			break;
		case 'q':
			a = operacao.arcsen(a, Grau);
			break;
		}
		
		pilha.pop_back();
		pilha.push_back(a);

		}
		else if (opMap.find(token) != opMap.end()) //verifica se o token é um operador com 2 operandos
		{
			float a = pilha[pilha.size() - 1]; //pega o elemento anterior da pilha, que é um operando
			float b = pilha[pilha.size() - 2]; //pega o elemento antepenultimo ao token encontrado

			switch (token[0]) //procurado o operador encontrado e chama a funcao determinada
			{
			case '+':
				a = operacao.soma(a,b);
				break;
			case '-':
				a = operacao.subtracao(b,a);
				break;
			case '*':
				a = operacao.multiplicacao(a,b);
				break;
			case '/':
				a = operacao.divisao(b,a);
				break;
			case '^':
				if (a == 2)a = operacao.xElevado2(b, a);
				else a = operacao.xElevadoy(b, a);
				break;
			case 'l':
				a = operacao.log(a, b);
				break;
			case'n':
				a = operacao.NRaiz(a, b);
				break;
			}
			pilha.pop_back(); //tira da pilha os dois operandos utilizados 
			pilha.pop_back();
			pilha.push_back(a); //retorna o valor do calculo pra pilha
		}
		
		else //se passou por tudo, então é um operando e ai ele é inserido na pilha
		{
			pilha.push_back(atof(token.c_str()));
		}
	}
	return pilha[1]; //retorna o valor na posicao 1 do vetor (é o resultado encontrado), o primeiro elemento tem o valor 0
}