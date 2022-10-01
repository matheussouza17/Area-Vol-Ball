#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>
#include "testBall.h"

using namespace std;

testBall::testBall() {

}
void testBall::eng() {
	bool progress = true;
	double raio;
	char cont='S';

	 do{
		do {
			printf("Digite valor do raio(raio>0) da esfera: ");
			cin >> raio;
			object.setRaio(raio);
		} while (object.getRaio() < 0.0);

		printf("Área da esfera = %.2f\n",object.getAreaBall());
		printf("Volume da esfera = %.2f\n",object.getVolBall());
		printf("Quer continuar? \n \t'S' ou 'N'\n");
		cin >> cont;
		if (cont == 'N') progress = false;

	}while (progress == true);
}
