#include "stdafx.h"
#include <iostream>
#include <string>
#include "Objeto.h"

#pragma once
class Sala {
private:
	bool aberta;
	Sala *salaEsq;
	Sala *salaDir;
	Sala *salaPai;
	Objeto *objetos;
	std::string objCorreto;
	bool certa = false;
	std::string mensagem;

public:

	Sala(std::string mensagem, std::string objCorreto, Sala *salaEsq, Sala *salaDir, Objeto *objetos);

	Sala(std::string mensagem, Objeto *objetos);

	void Mensagem();

	void Examinar(std::string nome);

	bool Checar(std::string nome);

	Sala *Esquerda();

	Sala *Direita();

	Sala *Voltar();

	bool estaAberta();

	bool eCerta();

	std::string correto();

	~Sala();
};