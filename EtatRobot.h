/*
 * EtatRobot.h
 *
 *  Created on: 15 nov. 2013
 *      Author: user
 */

#ifndef ETATROBOT_H_
#define ETATROBOT_H_

class EtatRobot {
public:
	EtatRobot();
	virtual ~EtatRobot();


	virtual void avancer(int , int );
	virtual void tourner(char );
	virtual void rencontrerObstacle(Obstacle );
	virtual void evaluerObstacle();
	virtual void saisir(Objet );
	virtual int peser();
	virtual void poser();
	virtual void figer();
	virtual void repartir();






};

#endif /* ETATROBOT_H_ */
