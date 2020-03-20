/*
 * operation_binaire.h
 *
 *  Created on: 19 mars 2020
 *      Author: haga2
 */

#ifndef SRC_OPERATION_BINAIRE_H_
#define SRC_OPERATION_BINAIRE_H_
#include <functional>
#include "imp_flot.h"
#include "filtre_base.h"
template<class Operation>
class operation_binaire :public  filtre_base{
private:
	std::shared_ptr<Operation> m_op;
public:
	operation_binaire() :filtre_base(2,1), m_op(new Operation()){

	}
	virtual void calculer(){
	    double e1(getSortie(0)->extraire());
	    double e2(getSortie(1)->extraire());
	    m_lesEntrees[0]->inserer((*m_op)(e1,e2));
	    getSortie(0)->inserer(e1);
	    getSortie(1)->inserer(e2);
	}
	~operation_binaire(){

	}

};

#endif /* SRC_OPERATION_BINAIRE_H_ */
