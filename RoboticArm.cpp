#include "RoboticArm.h"

// Constructor que inicializa las coordenadas y establece que no sostiene nada por defecto
RoboticArm::RoboticArm(double initialX, double initialY, double initialZ) 
    : x(initialX), y(initialY), z(initialZ), holdingObject(false) {}

// Consultores
double RoboticArm::getX() const {
    return x;
}

double RoboticArm::getY() const {
    return y;
}

double RoboticArm::getZ() const {
    return z;
}

bool RoboticArm::isHoldingObject() const {
    return holdingObject;
}

// Métodos de control
void RoboticArm::grab() {
    holdingObject = true;
}

void RoboticArm::release() {
    holdingObject = false;
}

void RoboticArm::move(double newX, double newY, double newZ) {
    x = newX;
    y = newY;
    z = newZ;
}
