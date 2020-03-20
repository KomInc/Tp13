/*
 * consommateur_base.h
 *
 *  Created on: 18 mars 2020
 *      Author: haga2
 */

#ifndef SRC_CONSOMMATEUR_BASE_H_
#define SRC_CONSOMMATEUR_BASE_H_
#include "consommateur.h"
#include <vector>
class consommateur_base:public virtual consommateur {
protected:
	std::vector<std::shared_ptr<flot>> m_lesEntrees;
public:
	consommateur_base(unsigned int nbEntrees = 1);
	virtual ~consommateur_base();
	unsigned int nbEntrees() const;
	const std::shared_ptr<flot>& getEntree(unsigned int numentree) const;
	void connecterEntree(const std::shared_ptr<flot> &f,
			unsigned int numentree);
	bool yaDesEchantillons() const;
};

#endif /* SRC_CONSOMMATEUR_BASE_H_ */
