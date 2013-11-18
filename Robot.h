/*
 * Robot.h
 *
 *  Created on: 15 nov. 2013
 *      Author: user
 */



#ifndef ROBOT_H_
#define ROBOT_H_

class Robot {

private:

	EtatRobot etatRobot;
	char direction;
	Position position;
	Obstacle obstacle;
	Objet objet;

public:
	Robot();
	virtual ~Robot();


	void avancer(int, int);
	void tourner(char);
	void saisir(Objet);
	void poser();
	void rencontrerObstacle(Obstacle);
	void figer();
	void repartir();
	void afficher();
	int peser();
	int evaluerObstacle();
};

#endif /* ROBOT_H_ */
