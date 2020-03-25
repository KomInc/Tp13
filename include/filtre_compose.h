/*
 * filtre_compose.h
 *
 *  Created on: 20 mars 2020
 *      Author: inc
 */

#ifndef INCLUDE_FILTRE_COMPOSE_H_
#define INCLUDE_FILTRE_COMPOSE_H_

#include "filtre_base.h"
#include <array>

class filtre_compose : public filtre_base {
private:
	std::vector<std::shared_ptr<filtre_base>> m_lesComposants;
	std::vector<std::array<unsigned int, 3>> m_lesAssoEntrees;
	std::vector<std::array<unsigned int, 3>> m_lesAssoSorites;

protected:
	void addComposant(const std::shared_ptr<filtre_base> & f);
	void connexionEntreesInternes();
	void connexionSortiesInternes();

public:
	filtre_compose(const unsigned int nbSorties, const unsigned int nbEntrees);
	void connecterEntree(const std::shared_ptr<flot> &f, unsigned int numentree);
	virtual ~filtre_compose();
};

#endif /* INCLUDE_FILTRE_COMPOSE_H_ */
