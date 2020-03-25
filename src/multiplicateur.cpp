/*
 * multiplicateur.cpp
 *
 *  Created on: 19 mars 2020
 *      Author: inc
 */

#include <multiplicateur.h>
#include "imp_flot.h"


multiplicateur::multiplicateur() : filtre_base(1,2){
	// TODO Auto-generated constructor stub


}

void multiplicateur::calculer() {
	if(this->yaDesEchantillons()){
    double e1(getEntree(0)->extraire());
    double e2(getEntree(1)->extraire());
    m_lesSorties[0]->inserer(e1*e2);

	}
}


multiplicateur::~multiplicateur() {
	// TODO Auto-generated destructor stub
}

