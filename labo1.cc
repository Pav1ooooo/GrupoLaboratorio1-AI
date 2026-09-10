void ConsumirCombustible(double *combustible, double litros) {
    if (litros < 0) {
        std::cout << "Error: No se permiten cantidades negativas al consumir.\n";
        return;
    }
    if (*combustible - litros < 0) {
        std::cout << "Error: El consumo excede la cantidad de combustible disponible.\n";
        return;
    }
    *combustible -= litros;
    std::cout << "Consumo realizado con exito (- " << litros << " litros).\n";
}

int main() {
    double combustible = 50.0;

    std::cout << "=== PRUEBA CONSUMIR COMBUSTIBLE ===\n";
    std::cout << "Nivel inicial: " << combustible << " litros.\n";

    std::cout << "\nConsumo valido (-40L):\n";
    ConsumirCombustible(&combustible, 40.0);
    std::cout << "Nivel actual: " << combustible << " litros.\n";

    std::cout << "\nConsumo invalido (-50L - Tanque insuficiente):\n";
    ConsumirCombustible(&combustible, 50.0);
    std::cout << "Nivel actual: " << combustible << " litros.\n";

    return 0;
}