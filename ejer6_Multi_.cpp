#include <iostream>
using namespace std;

class Androide {
public:
    void caminar() { cout << "Caminando como humano.\n"; }
};

class BrazoRobotico {
public:
    void manipular() { cout << "Manipulando objetos.\n"; }
};

class RobotMultifuncional : public Androide, public BrazoRobotico {
public:
    void ejecutarTarea() { cout << "Ejecutando múltiples tareas.\n"; }
};

int main() {
    RobotMultifuncional robot;
    robot.caminar();
    robot.manipular();
    robot.ejecutarTarea();
    return 0;
}
