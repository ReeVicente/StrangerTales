// StrangeTales.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "Sala.h"
#include "Objeto.h"
#include <iostream>

int main() {
	Objeto objeto[4]{ {"Arma", "Essa é uma arma"},
					  {"Televisão", "Está passando o Faustão"}, 
					  {"Mesa", "Apenas uma mesa."}, 
	{"Teste", "Drive"} };
	Sala *salaAtual = new Sala("Essa e uma sala", objeto);
	
	sala->Examinar("Mesa");
	
	getchar();
}