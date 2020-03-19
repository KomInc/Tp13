/*
 * harmonique.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#include <harmonique.h>
#include <cmath>
#include <iostream>
#include "imp_flot.h"

harmonique::harmonique(unsigned int const frequence, double const dephasage) :m_in(0), m_frequence(frequence) , m_dephasage(dephasage), m_sortie(new imp_flot()){
	// TODO Auto-generated constructor stub
	m_lesSorties.push_back(m_sortie);
}

void harmonique::calculer(){
	m_sortie->inserer(calculerH(m_in));
	m_in ++;
}

harmonique::~harmonique() {
	// TODO Auto-generated destructor stub
}
double harmonique::calculerH(unsigned int indice) {
	return std::sin(
			((float)indice / MixageSonore::frequency) * 2 * MixageSonore::pi
					* m_frequence + m_dephasage);
}

const std::shared_ptr<flot> & harmonique::getSortie(unsigned int numsortie) const{
	return m_lesSorties[numsortie];
}
