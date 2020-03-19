/*
 * consommateur_base.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: haga2
 */

#include "consommateur_base.h"
#include <cassert>
#include "imp_flot.h"

consommateur_base::consommateur_base(unsigned int nbEntrees) {
    // TODO Auto-generated constructor stub
	for(unsigned int i(0); i<nbEntrees;i++){
		std::shared_ptr<flot> ptr(new imp_flot());
		m_lesEntrees.push_back(ptr);
	}
}

unsigned int consommateur_base::nbEntrees() const {
    return m_lesEntrees.size();
}
bool consommateur_base::yaDesEchantillons() const {
    return m_lesEntrees.size() > 0;
}
consommateur_base::~consommateur_base() {
    // TODO Auto-generated destructor stub
}

void consommateur_base::connecterEntree(const std::shared_ptr<flot> &f,
        unsigned int numentree) {
    assert(0 <= numentree && numentree < nbEntrees());
    m_lesEntrees[numentree] = f;
}

const std::shared_ptr<flot>& consommateur_base::getEntree(
        unsigned int numentree) const {
    assert(0 <= numentree && numentree < nbEntrees());
    return m_lesEntrees[numentree];
}
