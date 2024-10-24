#include <iostream>

void sumar_vectores(int* restrict v1, int* restrict v2, int* restrict resultado, int n) {
  for (int i = 0; i < n; ++i) {
    resultado[i] = v1[i] + v2[i];
  }
}

int main() {
  int n = 3;
  int* v1 = new int[n]; // Vector 1
  int* v2 = new int[n]; // Vector 2
  int* resultado = new int[n]; // Vector para el resultado

  // Asignar valores a los vectores
  v1[0] = 1;
  v1[1] = 2;
  v1[2] = 3;

  v2[0] = 4;
  v2[1] = 5;
  v2[2] = 6;

  // Sumar los vectores usando la función con restrict
  sumar_vectores(v1, v2, resultado, n);

  // Mostrar el resultado
  std::cout << "Resultado de la suma de vectores:" << std::endl;
  for (int i = 0; i < n; ++i) {
    std::cout << resultado[i] << " ";
  }
  std::cout << std::endl;

  delete[] v1;
  delete[] v2;
  delete[] resultado;

  return 0;
}