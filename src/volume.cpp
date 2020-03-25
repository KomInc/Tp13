/*
 * volume.cpp
 *
 *  Created on: 20 mars 2020
 *      Author: haga2
 */

#include "volume.h"

volume::volume(double signal) :
		filtre_base(1, 1), s_constant(new signal_constant(signal)), m_multiplicateur(
				new multiplicateur()) {
	// TODO Auto-generated constructor stub
	m_multiplicateur->connecterEntree(s_constant->getSortie(0), 0);
	connecterSortie(m_multiplicateur->getSortie(0), 0);
}

volume::~volume() {
	// TODO Auto-generated destructor stub
}

void volume::connecterEntree(const std::shared_ptr<flot> &f, unsigned int numentree){
	filtre_base::connecterEntree(f,numentree);
	m_multiplicateur->connecterEntree(f, 1);
}

void volume::calculer() {
	s_constant->calculer();
	m_multiplicateur->calculer();
}
