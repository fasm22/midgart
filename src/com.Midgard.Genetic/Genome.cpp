/*
 * Genome.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: fabian
 */

#include "Genome.h"
/**
 * Constructor
 * Esta clase genoma hereda de lista, de esta forma insertamos los 8 genes de manera automatica
 */
Genome::Genome(uint16_t Attack,uint16_t Speed, uint16_t Defense, uint16_t Intelligence,
		uint16_t Magic, uint16_t Energy, uint16_t Blot, uint16_t RunesPower){

	insertTail(Attack);
	insertTail(Speed);
	insertTail(Defense);
	insertTail(Intelligence);
	insertTail(Magic);
	insertTail(Energy);
	insertTail(Blot);
	insertTail(RunesPower);
}

/**
 * Destructor
 */
Genome::~Genome() {}

/**
 * Retorna un cromosoma segundo el int que indica la posicion en la lista
 */
uint16_t Genome::getCromosome(int pCromID){
	Node<uint16_t>* tmp = getHead();
	for (int i=0; i < pCromID; i++){
		tmp = tmp->getNext();
	}
	return tmp->getData();
}

/**
 * Setter para un gen deseado, ubicado en la posucion pCromID
 * con el dato pData
 */
void Genome::setCromosome(int pCromID, uint16_t pData){
	Node<uint16_t>* tmp = getHead();
	for(int i = 0; i!=pCromID;i++){
		tmp = tmp->getNext();
	}
	tmp->setData(pData);
}

//* metodos get
uint16_t Genome::getAttack(){ return getCromosome(0); }
uint16_t Genome::getSpeed(){ return getCromosome(1); }
uint16_t Genome::getDefense(){ return getCromosome(2); }
uint16_t Genome::getIntelligence(){ return getCromosome(3); }
uint16_t Genome::getMagic(){ return getCromosome(4); }
uint16_t Genome::getEnergy(){ return getCromosome(5); }
uint16_t Genome::getBlot(){ return getCromosome(6); }
uint16_t Genome::getRunesPower(){ return getCromosome(7); }











