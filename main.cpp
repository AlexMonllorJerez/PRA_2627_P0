#include 
#include "RoboticArm.h"

int main() {
    // 1. Crear una instancia de la clase RoboticArm con una posición inicial
    std::cout << "=== INICIALIZANDO ROBOTIC ARM ===\n";
    RoboticArm myArm(0.0, 0.0, 0.0);

    // Mostrar estado inicial
    std::cout << "Posicion inicial -> X: " << myArm.getX() 
              << ", Y: " << myArm.getY() 
              << ", Z: " << myArm.getZ() << "\n";
    std::cout << "Sujetando objeto: " << (myArm.isHoldingObject() ? "Si" : "No") << "\n\n";

    // 2. Mover el brazo a una nueva posición en el espacio 3D
    std::cout << "=== MOVIENDO EL BRAZO ===\n";
    myArm.move(12.5, 5.0, 3.2);
    
    std::cout << "Nueva posicion tras move() -> X: " << myArm.getX() 
              << ", Y: " << myArm.getY() 
              << ", Z: " << myArm.getZ() << "\n\n";

    // 3. Coger un objeto utilizando el método grab()
    std::cout << "=== ACCION DE AGARRAR ===\n";
    myArm.grab();
    
    std::cout << "Sujetando objeto despues de grab(): " 
              << (myArm.isHoldingObject() ? "Si" : "No") << "\n\n";

    // 4. (Opcional) Demostración de soltar el objeto para completar el ciclo
    std::cout << "=== ACCION DE SOLTAR ===\n";
    myArm.release();
    std::cout << "Sujetando objeto despues de release(): " 
              << (myArm.isHoldingObject() ? "Si" : "No") << "\n";

    return 0;
}
