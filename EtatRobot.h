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

	virtual void avancer(int x, int y);
	virtual void tourner(char direction);
	virtual void rencontrerObstacle(Obstacle o);
	virtual void evaluerObstacle();
	virtual void saisir(Objet o);






};

#endif /* ETATROBOT_H_ */
