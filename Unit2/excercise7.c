#include <stdio.h>
#include "excercise7.h"

int main(){

    ROBOT markovito;
    markovito.name = "markovito";
    markovito.type = "ServiceRobot";
    markovito.height = 1.2;
    markovito.weight = 2.5;
    markovito.degreesOfFreedom = 3;

    markovito.sayHelloToRobot = sayHelloToRobot;

    ROBOT tiago;
    tiago.name = "tiago";
    tiago.type = "ServiceRobot";
    tiago.height = 1.7;
    tiago.weight = 2.8;
    tiago.degreesOfFreedom = 7;

    tiago.sayHelloToRobot = sayHelloToRobot; 

    markovito.sayHelloToRobot(tiago);  
}