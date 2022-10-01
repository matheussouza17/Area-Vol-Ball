#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>
#include "ball.h"

ball::ball() {
    pi = 3.14;
}

void ball::setRaio(double aux) {
    raio = aux;
}
double ball::getRaio() const {
    return raio;
}

double ball::getAreaBall() const {
    return 4*(pi* pow(getRaio(), 2));
}

double ball::getVolBall() const {
    return ((4/3)* pi * pow(getRaio(),3));
}





