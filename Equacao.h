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

using namespace std;
using namespace System;
using namespace msclr::interop;

class Equacao
{
public:
	string input;
	vector<string> expressao;
	unordered_map<string, int> opMap = {
		{"*", 2},
		{"/", 2},
		{"+", 1},
		{"-", 1},
		{"(", -1},
		{")", -1}
	};

	unordered_map<string, int> funMap = {

	};
	unordered_map<string, int> negMap = {

	};
	void limpar()
	{
		expressao.resize(1);
		expressao.back() = "";
	}

	void deletar()
	{
		expressao.back().pop_back();

	}

	vector <string> Conversao(vector<string> & Infix, unordered_map<string, int> & opMap)
	{
		vector<string> polonesa = {};
		vector<string> pilha = {"("};
		Infix.push_back(")");
		for (string token : Infix)
		{

			if (opMap.find(token) == opMap.end())
				polonesa.push_back(token);
			else if (token == "(")
				pilha.push_back(token);
			else if (token == ")")
			{
				while (pilha.back() != "(")
				{
					polonesa.push_back(pilha.back());
					pilha.pop_back();
				}
				pilha.pop_back();
			}
			else
			{
				while(pilha.size() > 0 && opMap[token] <= opMap[pilha.back()])
				{
					polonesa.push_back(pilha.back());
					pilha.pop_back();
				}
				pilha.push_back(token);
			}
		}
		return polonesa;
	}

	void Tokenize(string  & exp) 
	{	
		
		string temp = "";
		for (char c : exp)
		{
			if (c == ' ') continue;
			else if (opMap.find(string(1 ,c)) != opMap.end())
			{
				if (temp != "")expressao.push_back(temp);
				temp = "";
				expressao.push_back(string(1,c));

			}
			else temp += c;
		}
		if (temp != "") expressao.push_back(temp);

		return;
	}

	void InserirNumero(String^ digito)
	{
		string numero = marshal_as<string>(digito);
		if (input.empty()) input = "";
		if (input.length() == 1 && input.back() == '0')
		{
			input = numero;
		}
		else
		{
			input += numero;
		}
		return;
	}

	void InserirOperador(String^ digito)
	{
		string operador = marshal_as<string>(digito);
		expressao.push_back("");
		expressao.push_back(operador);
		expressao.push_back("");
	}

	void Inserir(String^ digito)
	{
		InserirNumero(digito);
		Tokenize(input);
		input = "";
	}

	String^ MostrarEquacao()
	{
		String^ result;
		for (string i : expressao)
		{
			result += marshal_as<String^>(i);
		}
		return result;
	}

	String^ MostrarPolonesa()
	{
		vector<string> test = { "1 + 2 + 3" };
		String^ result1 = { "" };
		vector<string> temp = Conversao(expressao, opMap);
		for (string ch : temp)
		{
			result1 += marshal_as<String^>(ch);
		}
		return result1;
	}

};
