/*
 * EtatAVide.h
 *
 *  Created on: 18 nov. 2013
 *      Author: user
 */

#ifndef ETATAVIDE_H_
#define ETATAVIDE_H_

class EtatAVide {
public:
	EtatAVide();
	virtual ~EtatAVide();

	void avancer(int, int);
	void tourner(char);
	void rencontrerObstacle(Obstacle);





};

#endif /* ETATAVIDE_H_ */
