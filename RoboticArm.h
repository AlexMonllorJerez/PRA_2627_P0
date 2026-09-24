#ifndef ROBOTIC_ARM_H
#define ROBOTIC_ARM_H

class RoboticArm {
private:
    double x;
    double y;
    double z;
    bool holdingObject;

public:
    // Constructor
    RoboticArm(double initialX = 0.0, double initialY = 0.0, double initialZ = 0.0);

    // Métodos consultores (Getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool isHoldingObject() const;

    // Acciones del brazo
    void grab();
    void release();
    void move(double newX, double newY, double newZ);
};

#endif // ROBOTIC_ARM_H
