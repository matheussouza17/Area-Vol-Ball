#pragma once
#ifndef BALL_H
#define BALL_H
class ball{
private:
    double areaBall;
    double raio;
    double volBall;
    double pi;
public:
    ball();
    void setRaio(double);
    double getRaio()const;

    double getAreaBall()const;

    double getVolBall()const;

};
#endif



