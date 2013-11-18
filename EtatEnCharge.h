/*
 * EtatEnCharge.h
 *
 *  Created on: 18 nov. 2013
 *      Author: user
 */

#ifndef ETATENCHARGE_H_
#define ETATENCHARGE_H_

class EtatEnCharge {
public:
	EtatEnCharge();
	virtual ~EtatEnCharge();


	void tourner(char);
	int peser();
	void avancer(int, int);

};

#endif /* ETATENCHARGE_H_ */
