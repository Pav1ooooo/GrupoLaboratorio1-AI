#include <iostream>


void Recargar(float &combustible, float litros) {
    if (litros < 0) {
        std::cout << "Error: No se permiten cantidades negativas al repostar.\n";
        return;
    }
    if (combustible + litros > 100) {
        std::cout << "Error: La recarga excede la capacidad maxima del tanque (100 litros).\n";
        return;
    }
    combustible += litros;
    std::cout << "Recarga realizada con exito (+ " << litros << " litros).\n";
}

int main() {
    float combustible = 50;

    std::cout << "=== PRUEBA RECARGAR ===\n";
    std::cout << "Nivel inicial: " << combustible << " litros.\n";

    std::cout << "\nRecarga valida (+30L):\n";
    Recargar(combustible, 30);
    std::cout << "Nivel actual: " << combustible << " litros.\n";

    std::cout << "\nRecarga invalida (+30L - Excede los 100L):\n";
    Recargar(combustible, 30);
    std::cout << "Nivel actual: " << combustible << " litros.\n";

    return 0;
}