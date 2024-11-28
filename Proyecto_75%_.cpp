#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <sstream>
#include <ctime>  // Para obtener la fecha y hora actual
using namespace std;

// Clase 1: Empresa
class Empresa {
private:
    string nombre;
    string responsable;
    string contacto;

public:
    void ingresarInformacion() {
        cout << "Ingrese el nombre de la empresa: ";
        getline(cin, nombre);
        cout << "Ingrese el nombre del responsable: ";
        getline(cin, responsable);
        cout << "Ingrese el contacto de la empresa: ";
        getline(cin, contacto);
    }

    void mostrarInformacion() const {
        cout << "\n===========================================\n";
        cout << "        Sistema de Gestion de Consumo\n";
        cout << "          Empresa: " << nombre << "\n";
        cout << "Responsable: " << responsable << "\n";
        cout << "  Contacto: " << contacto << "\n";
        cout << "===========================================\n\n";
    }

    string getNombre() const { return nombre; }
};

// Clase 2: Artefacto
class Artefacto {
private:
    string nombre;
    double consumo_por_minuto_watts;

public:
    Artefacto(const string& nombre, double consumo_por_minuto_watts)
        : nombre(nombre), consumo_por_minuto_watts(consumo_por_minuto_watts) {}

    string getNombre() const { return nombre; }
    double getConsumoPorMinuto() const { return consumo_por_minuto_watts; }

    double calcularConsumoMensualKW(double minutos, int dias) const {
        return consumo_por_minuto_watts * minutos * dias / 1000; // En kWh
    }

    double calcularCosto(double minutos, int dias, double tarifa) const {
        return calcularConsumoMensualKW(minutos, dias) * tarifa;
    }

    void mostrarConsumo(double minutos, int dias, double tarifa) const {
        double consumo_kw = calcularConsumoMensualKW(minutos, dias);
        double costo = calcularCosto(minutos, dias, tarifa);

        cout << fixed << setprecision(2);
        cout << "Artefacto: " << nombre << "\n";
        cout << "Consumo mensual: " << consumo_kw << " kWh\n";
        cout << "Costo mensual: " << costo << " $\n";
    }
};

// Clase 3: GestorArtefactos
class GestorArtefactos {
private:
    vector<Artefacto> disponibles;

public:
    GestorArtefactos() {
        disponibles = {
            {"Bombilla LED", 0.15},
            {"Ventilador", 0.8},
            {"Televisor LED", 1.6},
            {"Refrigerador", 3.0},
            {"Lavadora", 8.0},
            {"Secadora", 12.0},
            {"Lavavajillas", 14.0},
            {"Cocina electrica", 9.5},
            {"Horno electrico", 14.5},
            {"Congeladora", 4.5},
            {"Campana extractora", 6.5},
            {"Termo electrico", 3.8},
            {"Cargadores", 0.18},
            {"Focos", 0.08},
            {"Router", 0.48},
            {"Plancha", 14.8},
            {"Parlantes", 1.8},
            {"Microondas", 9.5},
            {"Computadora", 2.8}
        };
    }

    void mostrarMenu() const {
        cout << "\n--- Seleccion de Artefactos ---\n";
        cout << "Seleccione los artefactos que desea agregar, separados por espacio (0 para terminar):\n";
        for (size_t i = 0; i < disponibles.size(); ++i) {
            cout << i + 1 << ". " << setw(20) << left << disponibles[i].getNombre()
                 << " (" << disponibles[i].getConsumoPorMinuto() << " W/min)\n";
        }
    }

    Artefacto seleccionarArtefacto(int indice) const {
        return disponibles[indice];
    }

    size_t size() const {
        return disponibles.size();
    }
};

// Clase 4: GestionConsumo
class GestionConsumo {
private:
    vector<Artefacto> artefactos;
    vector<double> minutos_uso;
    vector<int> dias_uso;
    double tarifa_kwh;
    double limite_consumo_mensual_kw;

public:
    GestionConsumo(double tarifa)
        : tarifa_kwh(tarifa), limite_consumo_mensual_kw(1000) {}

    void agregarArtefacto(const Artefacto& artefacto, double minutos, int dias) {
        artefactos.push_back(artefacto);
        minutos_uso.push_back(minutos);
        dias_uso.push_back(dias);
    }

    void establecerLimite(int cantidadArtefactos) {
        limite_consumo_mensual_kw = 100 + (cantidadArtefactos * 50);
    }

    void mostrarCantidadArtefactosYConsumoIdeal() const {
        int cantidadArtefactos = artefactos.size();
        double consumoIdeal = 100 + (cantidadArtefactos * 50);

        cout << "\n--- Resumen de Artefactos ---\n";
        cout << "Cantidad de artefactos seleccionados: " << cantidadArtefactos << "\n";
        cout << "Consumo mensual ideal recomendado: " << consumoIdeal << " kWh\n";

        if (!artefactos.empty()) {
            double consumoTotal = 0;
            for (size_t i = 0; i < artefactos.size(); ++i) {
                consumoTotal += artefactos[i].calcularConsumoMensualKW(minutos_uso[i], dias_uso[i]);
            }
            cout << "Consumo mensual actual: " << fixed << setprecision(2) << consumoTotal << " kWh\n";

            if (consumoTotal > consumoIdeal) {
                cout << "** Advertencia: Su consumo actual excede el ideal recomendado. **\n";
                cout << "Recomendaciones:\n";
                cout << "1. Optimizar el tiempo de uso de los artefactos.\n";
                cout << "2. Usar dispositivos de bajo consumo.\n";
            } else {
                cout << "Su consumo está dentro del límite ideal.\n";
            }
        } else {
            cout << "No hay artefactos registrados.\n";
        }
    }

    void mostrarConsumos() const {
        if (artefactos.empty()) {
            cout << "\nNo hay artefactos registrados.\n";
            return;
        }

        double total_kw = 0;
        double total_costo = 0;

        cout << "\n--- Consumos Registrados ---\n";
        for (size_t i = 0; i < artefactos.size(); ++i) {
            artefactos[i].mostrarConsumo(minutos_uso[i], dias_uso[i], tarifa_kwh);
            total_kw += artefactos[i].calcularConsumoMensualKW(minutos_uso[i], dias_uso[i]);
            total_costo += artefactos[i].calcularCosto(minutos_uso[i], dias_uso[i], tarifa_kwh);
        }

        cout << "\nConsumo total mensual: " << fixed << setprecision(2) << total_kw << " kWh\n";
        cout << "Costo aproximado: " << total_costo << " $\n";

        if (total_kw > limite_consumo_mensual_kw) {
            cout << "** Aviso: Se ha excedido el limite mensual! **\n";
        } else {
            cout << "Consumo dentro del limite permitido.\n";
        }
    }

    void exportarAArchivo(const Empresa& empresa) const {
        ofstream archivo("consumo_energia.txt");
        if (!archivo) {
            cerr << "Error al crear el archivo.\n";
            return;
        }

        // Información de la empresa
        archivo << "===========================================\n";
        archivo << "        Sistema de Gestion de Consumo\n";
        archivo << "          Empresa: " << empresa.getNombre() << "\n";
        archivo << "===========================================\n\n";

        // Detalles del consumo
        double total_kw = 0, total_costo = 0;

        archivo << "--- Consumos Registrados ---\n";
        for (size_t i = 0; i < artefactos.size(); ++i) {
            double consumo_kw = artefactos[i].calcularConsumoMensualKW(minutos_uso[i], dias_uso[i]);
            double costo = artefactos[i].calcularCosto(minutos_uso[i], dias_uso[i], tarifa_kwh);

            archivo << fixed << setprecision(2);
            archivo << "Artefacto: " << artefactos[i].getNombre() << "\n";
            archivo << "Consumo mensual: " << consumo_kw << " kWh\n";
            archivo << "Costo mensual: " << costo << " $\n\n";

            total_kw += consumo_kw;
            total_costo += costo;
        }

        archivo << "Consumo total mensual: " << total_kw << " kWh\n";
        archivo << "Costo total mensual: " << total_costo << " $\n";

        archivo.close();
        cout << "Datos exportados a 'consumo_energia.txt'.\n";
    }
};

// Función para mostrar el menú principal
void mostrarMenuPrincipal() {
    cout << "\n===========================================\n";
    cout << "           Sistema de Gestion de Consumo\n";
    cout << "===========================================\n";
    cout << "1. Agregar artefactos\n";
    cout << "2. Mostrar consumo total\n";
    cout << "3. Mostrar cantidad de artefactos y consumo ideal\n";
    cout << "4. Exportar a archivo\n";
    cout << "5. Salir\n";
    cout << "===========================================\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    Empresa empresa;
    empresa.ingresarInformacion();

    GestorArtefactos gestor;
    GestionConsumo gestion(0.15); // Tarifa de $0.15 por kWh

    int opcion;
    do {
        mostrarMenuPrincipal();
        cin >> opcion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar buffer de entrada

        switch (opcion) {
            case 1: {
                gestor.mostrarMenu();
                vector<int> seleccion;
                string linea;
                getline(cin, linea);
                istringstream iss(linea);
                int indice;

                while (iss >> indice && indice != 0) {
                    if (indice > 0 && indice <= (int)gestor.size()) {
                        cout << "Ingrese los minutos diarios de uso para "
                             << gestor.seleccionarArtefacto(indice - 1).getNombre() << ": ";
                        double minutos;
                        cin >> minutos;
                        cout << "Ingrese los días de uso por mes para "
                             << gestor.seleccionarArtefacto(indice - 1).getNombre() << ": ";
                        int dias;
                        cin >> dias;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        gestion.agregarArtefacto(gestor.seleccionarArtefacto(indice - 1), minutos, dias);
                    } else {
                        cout << "Opcion invalida. Intente nuevamente.\n";
                    }
                }
                break;
            }
            case 2:
                gestion.mostrarConsumos();
                break;
            case 3:
                gestion.mostrarCantidadArtefactosYConsumoIdeal();
                break;
            case 4:
                gestion.exportarAArchivo(empresa);
                break;
            case 5:
                cout << "Saliendo del programa. Hasta pronto!\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 5);

    return 0;
}



