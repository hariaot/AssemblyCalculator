#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <cstdlib>
#include <cstring>
#include <unordered_map>

#include "Tabela.h"
#include "Polonesa.h"

using namespace std;
using namespace System;
using namespace msclr::interop;


class Equacao
{
public:
	string input;				//string que vai receber os digitos da interface
	vector<string> expressao;	//vetor de string que apos passar pelo processo de tokenizacao vira a expressao matematica que queremos
	unordered_map<string, int> opMap = {
		//utilizando a biblioteca de mapeamento sem ordem para determinar a precedencia dos operadores e funcoes
		{"~", 4},	//numero negativo
		{"!", 3},   //fatorial
		{"l", 3},   //log
		{"e", 3},	//ln 
		{"^", 3},	//elevado
		{"s", 3},   //sqrt
		{"n", 3},	//n-esima raiz de x

		{"z", 3},	//sen
		{"c", 3},	//cos
		{"x", 3},	//tg
		{"q", 3},	//arcseno
		{"w", 3},	//arco cosseno
		{"d", 3},	//arco tg

		{"*", 2},	//multiplicacao
		{"/", 2},	//divisao
		{"+", 1},	//soma
		{"-", 1},	//subtracao
		{"(", -1},	//abre parenteses
		{")", -1}	//fecha parenteses
	};
	
	//funcao para limpar todos os registros
	void limpar()
	{
		expressao.resize(1);
		expressao.back() = "";
	} 
	//funcao para deletar o ultimo caracter
	void deletar()
	{
		expressao.back().pop_back();

	}
	//funcao de conversao da equacao matematica infixa para a notacao polonesa reversa
	vector <string> Conversao(vector<string> & Infix)
	{
		vector<string> polonesa = {};    //vetor de string que vai conter a equacao em notacao posfixa  
		vector<string> pilha = {"("};	//pilha auxiliar de strings para calcular a precedencia
		Infix.push_back(")");
		for (string token : Infix)		//loop que pega todos as strings (caracteres) dentro da do vetor de strings da equacao
		{

			if (opMap.find(token) == opMap.end()) //procura no mapeamento o token e vê se ele chegar ao final quer dizer que nao é uma funcao ou operador
				polonesa.push_back(token); //coloca o numero no vetor da polonesa
			else if (token == "(")		 //caso abra parenteses entao coloca na pilha até fechar
				pilha.push_back(token);
			else if (token == ")")		//caso fecha parenteses, busca na pilha tudo que tinha antes de abrir e insere no vetoer da polonesa
			{
				while (pilha.back() != "(") //ate chegar no fecha parenteses tudo faz parte da equacao e tem alta precedencia
				{	
					polonesa.push_back(pilha.back());	//coloca o caracter que ta na pilha na polonesa
					pilha.pop_back();	//tira o caracter da pilha
				}
				pilha.pop_back(); //apos tudo tira o caracter ( da pilha
			}
			else //se nao tiver parenteses cai no calculo de precedencia
			{
				while(pilha.size() > 0 && opMap[token] <= opMap[pilha.back()]) //verifica o valor do token dentro do mapeamento e enquanto for menor ele vai inserindo na polonesa
				{	//a verificacao consiste na ordem de entrada dos parametros e no int determinado a ele no mapeamento entao quanto mais "acima" mais precedencia
					polonesa.push_back(pilha.back()); //coloca o caracter no vetor da polonesa
					pilha.pop_back();	//tira o caracter da pilha
				}
				pilha.push_back(token);	//aqui fica o operador com maior procedencia 
			}
		}
		return polonesa; //retorna o vetor de strings contendo a notacao polonesa
	}

	void Tokenize()  //funcao para inserir o caracter dentro do vetor de strings da expressao matematica infixa
	{	
		
		string temp = "";
		for (char c : input) // pega cada caracter individual na string
		{
			if (c == ' ') continue; // se for um 'espaco' normal ele continua o loop
			else if (opMap.find(string(1 ,c)) != opMap.end()) //procura no mapeamento se é um operador
			{
				if (temp != "")expressao.push_back(temp);	//se tiver algum caracter na string temporaria ele coloca dentro do vetor da expressao
				temp = ""; // limpa a string temp pra procurar novos operandos e operadores
				expressao.push_back(string(1, c)); //coloca o operador no vetor da string

			}
			else temp += c; //caso nao encontre operador ele continua populando a string temporaria (importante para numeros decimais)
		}
		if (temp != "") expressao.push_back(temp);// no final de tudo ele coloca o ultimo caracter lido dentro do vetor da expressao 

		return;
	}

	void InserirDigito(String^ digito) //insere o digito apertado na interface dentro de uma string auxliar input 
	{
		string caracter = marshal_as<string>(digito); 
		if (input.empty()) input = ""; 
		if (input.length() == 1 && input.back() == '0')
		{
			input = caracter;
		}
		else
		{
			input += caracter;
		}
		return;
	}


	void Inserir(String^ digito)
	{
		InserirDigito(digito);
		Tokenize();
		input = "";
	}
	
	String^ Resultado(bool Grau) //funcao que chama a conversao e calcula a equacao
	{
		
		Tokenize();
		input = "";
		expressao = Conversao(expressao);
		String^ result = marshal_as<String^>(to_string(Calcular(expressao, Grau)));
		return result;
	}

	String^ MostrarEquacao() //funcao auxiliar para mostrar a notacao infixa
	{
		String^ result;
		for (string i : expressao)
		{
			result += marshal_as<String^>(i);
		}
		return result;
	}

	String^ MostrarPolonesa() //funcao auxiliar para mostrar a notacao posfixa
	{
		String^ result1 = { "" };
		for (string ch : expressao)
		{
			result1 += marshal_as<String^>(ch);
		}
		return result1;
	}

};
