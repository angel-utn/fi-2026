#include <iostream>
using namespace std;

int main() {
    const int CANT_REPARTIDORES = 40, CANT_HORAS = 24, ZONA_CONTROL = 8, FIN = 999;

    int repartidor, zona, hora;
    float distancia;

    int pedidosPorHora[CANT_HORAS] = {0};
    int pedidosPorRepartidor[CANT_REPARTIDORES] = {0};
    int pedidosZona8PorRepartidor[CANT_REPARTIDORES] = {0};

    float maxDistancia = -1;
    int repartidorMaxDistancia = -1;

    cout << "Numero de repartidor (999 para terminar): ";
    cin >> repartidor;

    while (repartidor != FIN) {
        cout << "Zona de entrega (1-8): ";
        cin >> zona;
        cout << "Hora de entrega (0-23): ";
        cin >> hora;
        cout << "Distancia recorrida (km): ";
        cin >> distancia;

        pedidosPorHora[hora]++;
        pedidosPorRepartidor[repartidor - 1]++;

        if (zona == ZONA_CONTROL) {
            pedidosZona8PorRepartidor[repartidor - 1]++;
        }

        if (distancia > maxDistancia) {
            maxDistancia = distancia;
            repartidorMaxDistancia = repartidor;
        }

        cout << "Numero de repartidor (999 para terminar): ";
        cin >> repartidor;
    }

    cout << "1) Horas con mas de 10 pedidos entregados:" << endl;
    for (int h = 0; h < CANT_HORAS; h++) {
        if (pedidosPorHora[h] > 10) {
            cout << "   Hora " << h << ": " << pedidosPorHora[h] << " pedidos" << endl;
        }
    }

    cout << "2) Repartidores con menos de 5 pedidos en el mes:" << endl;
    for (int i = 0; i < CANT_REPARTIDORES; i++) {
        if (pedidosPorRepartidor[i] < 5) {
            cout << "   Repartidor " << i + 1 << ": " << pedidosPorRepartidor[i] << " pedidos" << endl;
        }
    }

    cout << "3) Repartidores que nunca entregaron en la Zona 8:" << endl;
    for (int i = 0; i < CANT_REPARTIDORES; i++) {
        if (pedidosZona8PorRepartidor[i] == 0) {
            cout << "   Repartidor " << i + 1 << endl;
        }
    }

    cout << "4) Repartidor con el pedido de mayor distancia: ";
    if (repartidorMaxDistancia != -1) {
        cout << repartidorMaxDistancia << " (" << maxDistancia << " km)" << endl;
    } else {
        cout << "no se registraron pedidos." << endl;
    }

    return 0;
}
