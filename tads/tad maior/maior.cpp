#include <iostream>
#include "maior.hpp"

/*
Title: maior.cpp
Description: maior cpp file
Author: Mateus Arnaud Goldbarg
Date: 24/04/2023
*/

Maior::Maior()
{
	std::cout << "Construindo objeto Padrao\n";
	listaInteiros[CAPACIDADE] = {};
}

Maior::~Maior()
{
	std::cout << "Destruindo objeto "
			  << "\n";
}

void Maior::insere(int valor)
{
	if (tamanho < CAPACIDADE)
	{
		listaInteiros[tamanho] = valor;
		tamanho++;
	
		if (tamanho > 1 && valor > maior)
		{
			maior = valor;
		}
		else if (tamanho == 1)
		{
			maior = valor;
		}
	}
}

int Maior::buscaMaior()
{
	return maior;
}

void Maior::imprime()
{
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << listaInteiros[i] << " ";
	}
	std::cout << std::endl;
}

int Maior::size()
{
	return tamanho;
}

void Maior::ordenar()
{
	int temp;
	for (int i = 0; i < tamanho; i++)
	{
		for (int j = 0; j < (tamanho - i) - 1; j++)
		{
			if (listaInteiros[j] > listaInteiros[j + 1])
			{
				temp = listaInteiros[j];
				listaInteiros[j] = listaInteiros[j + 1];
				listaInteiros[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << listaInteiros[i] << " ";
	}
	std::cout << "\n";
}