/*
 * multiplicateur.cpp
 *
 *  Created on: 19 mars 2020
 *      Author: inc
 */

#include <multiplicateur.h>
#include "imp_flot.h"

multiplicateur::multiplicateur() : filtre_base(2,1){
	// TODO Auto-generated constructor stub


}

void multiplicateur::connecter() {
	std::shared_ptr<flot> tmp(new imp_flot());
	double e1(getSortie(0)->extraire());
	double e2(getSortie(1)->extraire());
	tmp->inserer(e1*e2);
	this->connecterEntree(tmp, 0);
}
multiplicateur::~multiplicateur() {
	// TODO Auto-generated destructor stub
}

