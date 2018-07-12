#include "stdafx.h"
#include "Sala.h"

Sala::Sala(std::string mensagem, std::string objCorreto, Sala *salaEsq, Sala *salaDir, Objeto *objetos) {
	this->mensagem = mensagem;
	this->salaEsq = salaEsq;
	this->salaDir = salaDir;
	this->objetos = objetos;
	this->objCorreto = objCorreto;
	this->certa = true;
}

Sala::Sala(std::string mensagem, Objeto *objetos) {
	this->mensagem = mensagem;
	this->objetos = objetos;
}

void Sala::Examinar(std::string nome) {
	if (this->objetos[0].getNome().compare(nome) == 0){
		this->objetos[0].Interagir();
	}
	else if (this->objetos[1].getNome().compare(nome) == 0) {
		this->objetos[1].Interagir();
	} 
	else if (this->objetos[2].getNome().compare(nome) == 0) {
		this->objetos[2].Interagir();
	}
	else if (this->objetos[3].getNome().compare(nome) == 0) {
		this->objetos[3].Interagir();
	}
}

void Sala::Mensagem() {
	std::cout << this->mensagem << std::endl;
	std::cout << "========= Esses são os objetos da sala ============" << std::endl;
	std::cout << this->objetos[0].getNome() << std::endl;
	std::cout << this->objetos[1].getNome() << std::endl;
	std::cout << this->objetos[2].getNome() << std::endl;
	std::cout << this->objetos[3].getNome() << std::endl;
}

Sala *Sala::Esquerda() {
	return salaEsq;
}

Sala *Sala::Direita() {
	return salaDir;
}

Sala *Sala::Voltar() {
	return salaPai;
}

bool Sala::estaAberta() {
	return aberta;
}

bool Sala::eCerta() {
	return certa;
}

std::string Sala::correto() {
	return objCorreto;
}

Sala::~Sala() {
	delete this->salaEsq;
	delete this->salaPai;
	delete this->salaPai;
}