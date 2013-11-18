/*
 * EtatAVideFaceObstacle.h
 *
 *  Created on: 18 nov. 2013
 *      Author: user
 */

#ifndef ETATAVIDEFACEOBSTACLE_H_
#define ETATAVIDEFACEOBSTACLE_H_

class EtatAVideFaceObstacle {
public:
	EtatAVideFaceObstacle();
	virtual ~EtatAVideFaceObstacle();


	void saisir(Objet);
	int evaluerObstacle();
	void tourner(char);

};

#endif /* ETATAVIDEFACEOBSTACLE_H_ */
