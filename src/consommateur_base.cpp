/*
 * consommateur_base.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: haga2
 */

#include "consommateur_base.h"
#include <cassert>
consommateur_base::consommateur_base() {
    // TODO Auto-generated constructor stub

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
