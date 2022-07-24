#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <cstdlib>
#include <cstring>


using namespace std;
using namespace System;
using namespace msclr::interop;

class Equacao
{
public:
	vector<string> expressao;
	
	void limpar()
	{
		expressao.resize(1);
		expressao.back() = "";
	}

	void deletar()
	{
		expressao.back().pop_back();

	}
	String^ InserirNumero(String^ digito)
	{
		string numero = marshal_as<string>(digito);
		if (expressao.empty())expressao.push_back("");
		if (expressao.back().length() == 1 && expressao.back() == "0")
		{
			expressao.back() = numero;
			return ("Inserido com 0 na frente");
		}
		else
		{
			expressao.back() += numero;
			return ("Inserido");
		}
	}

	void InserirOperador(String^ digito)
	{
		string operador = marshal_as<string>(digito);
		expressao.push_back("");
		expressao.push_back(operador);
		expressao.push_back("");
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

};
