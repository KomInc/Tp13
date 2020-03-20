/*
 * multiplicateur.cpp
 *
 *  Created on: 19 mars 2020
 *      Author: inc
 */

#include <multiplicateur.h>
#include "imp_flot.h"
#include <iostream>

multiplicateur::multiplicateur() : filtre_base(2,1){
	// TODO Auto-generated constructor stub


}

void multiplicateur::calculer() {
    double e1(getSortie(0)->extraire());
    double e2(getSortie(1)->extraire());
    m_lesEntrees[0]->inserer(e1*e2);
    getSortie(0)->inserer(e1);
    getSortie(1)->inserer(e2);

}


multiplicateur::~multiplicateur() {
	// TODO Auto-generated destructor stub
}

