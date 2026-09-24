#include 
#include "RoboticArm.h"

int main() {
    RoboticArm arm(1.0, 2.0, 3.0);

    std::cout << "Posicion inicial: (" << arm.getX() << ", " << arm.getY() << ", " << arm.getZ() << ")\n";
    
    arm.move(5.5, 6.0, 2.1);
    arm.grab();

    std::cout << "Nueva posicion: (" << arm.getX() << ", " << arm.getY() << ", " << arm.getZ() << ")\n";
    std::cout << "¿Esta sujetando un objeto? " << (arm.isHoldingObject() ? "Si" : "No") << "\n";

    return 0;
}
