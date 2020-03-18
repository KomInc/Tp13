/*
 * signal_constant.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#include <signal_constant.h>
#include "imp_flot.h"
#include <cassert>

signal_constant::signal_constant(double sc) : m_sc(sc), m_sortie(new imp_flot()) {
	// TODO Auto-generated constructor stub

}

unsigned int signal_constant::nbSorties() const{
	return 1;

}
const std::shared_ptr<flot> & signal_constant::getSortie(unsigned int numsortie) const{
	assert((0 <= numsortie) && (numsortie < nbSorties()));

	return m_sortie;
}

void signal_constant::calculer() {
	m_sortie->inserer(m_sc);
}
signal_constant::~signal_constant() {
	// TODO Auto-generated destructor stub
}

