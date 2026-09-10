#include <iostream>

// 1. Consultar combustible (Paso por valor)
void ConsultarCombustible(float combustible) {
    std::cout << "Combustible actual: " << combustible << " litros.\n";
}

int main() {

  std::cout <<"Sistema de gestion de combustible \n";
    float combustible = 50;

    std::cout << "=== PRUEBA CONSULTAR COMBUSTIBLE ===\n";
    ConsultarCombustible(combustible);

    return 0;
}