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
template<class Type1, class Operation>
class operation_binaire :public  filtre_base{
private:
	Type1 element1;
	Type1 element2;
	Operation operation;
public:
	operation_binaire(imp_flot element1, imp_flot element2, Operation operation);
	~operation_binaire();

};

#endif /* SRC_OPERATION_BINAIRE_H_ */
