// ============================================================================
//  TP Integrador 2 - ACP - Ingeniería Mecánica
//  Datos del sistema de bombeo cargados en una MATRIZ de float en C++
//
//  Cada FILA    = una prueba (ensayo)       -> 20 filas  (índices 0 a 19)
//  Cada COLUMNA = una variable medida       ->  4 columnas (índices 0 a 3)
//
//      columna 0: Presión     (bar)
//      columna 1: Caudal      (L/s)
//      columna 2: Temperatura (°C)
//      columna 3: Potencia    (kW)
//
//  OJO: la prueba N está en la fila N-1  (la prueba 1 es datos[0][...])
//
//  Compilar:  g++ -Wall -o bombeo bombeo_matriz.cpp
//  Ejecutar:  ./bombeo
// ============================================================================

#include <iostream>
#include <cmath>  // necesario para sqrt()

using namespace std;

int main() {
   // Tamaño de la matriz como constantes: si cambia la cantidad de pruebas
   // o de variables, se modifica en un solo lugar.
   const int FILAS    = 20;   // pruebas
   const int COLUMNAS = 4;    // variables

   const int COL_PRESION = 0;
   const int COL_CAUDAL = 1;
   const int COL_TEMP = 2;
   const int COL_POTENCIA = 3;


    // Declaración + inicialización de la matriz de datos.
    // Cada par de llaves internas { ... } es UNA fila de la tabla del TP.
    float datos[FILAS][COLUMNAS] = {
        // Presión  Caudal  Temp.  Potencia
        {  2.1f,    17.0f,  32.0f,  5.3f },   // Prueba  1  -> fila  0
        {  2.8f,    14.1f,  37.0f,  5.8f },   // Prueba  2  -> fila  1
        {  2.3f,    16.2f,  33.0f,  5.4f },   // Prueba  3  -> fila  2
        {  3.2f,    17.7f,  38.0f,  6.7f },   // Prueba  4  -> fila  3
        {  2.7f,    13.8f,  36.0f,  5.5f },   // Prueba  5  -> fila  4
        {  1.9f,    15.8f,  31.0f,  4.8f },   // Prueba  6  -> fila  5
        {  3.4f,    16.1f,  42.0f,  6.3f },   // Prueba  7  -> fila  6
        {  2.4f,    18.0f,  34.0f,  5.8f },   // Prueba  8  -> fila  7
        {  3.0f,    14.8f,  37.0f,  6.2f },   // Prueba  9  -> fila  8
        {  2.0f,    13.5f,  34.0f,  5.1f },   // Prueba 10  -> fila  9
        {  2.7f,    13.9f,  37.0f,  5.7f },   // Prueba 11  -> fila 10
        {  2.1f,    16.3f,  33.0f,  5.0f },   // Prueba 12  -> fila 11
        {  2.6f,    16.9f,  35.0f,  5.9f },   // Prueba 13  -> fila 12
        {  3.1f,    17.7f,  38.0f,  6.4f },   // Prueba 14  -> fila 13
        {  3.4f,    16.4f,  41.0f,  6.8f },   // Prueba 15  -> fila 14
        {  2.6f,    16.2f,  37.0f,  5.7f },   // Prueba 16  -> fila 15
        {  1.9f,    15.4f,  31.0f,  5.2f },   // Prueba 17  -> fila 16
        {  2.5f,    12.9f,  36.0f,  5.5f },   // Prueba 18  -> fila 17
        {  3.4f,    14.7f,  40.0f,  6.3f },   // Prueba 19  -> fila 18
        {  3.2f,    16.1f,  40.0f,  6.2f }    // Prueba 20  -> fila 19
    };

    int i,j;
    cout << "Pr(bar)\tCa(L/s)\tTemp(C)\tPot(kW)" << endl;
    for(i=0; i<FILAS; i++){
        for(j=0; j<COLUMNAS; j++){
            cout << datos[i][j] << "\t";
        }
        cout << endl;
    }

    float sumaPresiones = 0.0f;
    for(i=0; i<FILAS; i++){
        sumaPresiones += datos[i][COL_PRESION];
    }

    float mediaPresion = sumaPresiones / FILAS;
    cout << "Promedio Presión " << mediaPresion << " bar." << endl;

    // Desvío estándar muestral de presión
    float sumaCuadrados = 0.0f;
    for(i=0; i<FILAS; i++){
        float diff = datos[i][COL_PRESION] - mediaPresion;
        sumaCuadrados += diff * diff;
    }

    float varianzaMuestral = sumaCuadrados / (FILAS - 1); // Se divide por n-1
    float desvioMuestral   = sqrt(varianzaMuestral);
    
    cout << "Desvío estándar muestral Presión: " << desvioMuestral << " bar." << endl;

    // ------------------------------------------------------------------------
    // Ejemplo de acceso a un elemento:  datos[fila][columna]
    // ------------------------------------------------------------------------
    cout << "Presion de la prueba 1:  " << datos[0][0]  << " bar" << endl;
    cout << "Potencia de la prueba 20: " << datos[19][3] << " kW"  << endl;
    cout << endl;

    // ------------------------------------------------------------------------
    // A PARTIR DE ACÁ TRABAJAN USTEDES
    // ------------------------------------------------------------------------
    // Sugerencias (usando lo visto en la presentación):
    //
    //  1) Mostrar la tabla completa con dos for anidados
    //     (for de filas por fuera, for de columnas por dentro).
    //
    //  2) Recorrer cada COLUMNA (fijar j, variar i) para obtener
    //     lo que pide el inciso b) para cada variable.
    //
    //  3) Guardar resultados en otras estructuras, por ejemplo:
    //        float media[COLUMNAS];
    //        float z[FILAS][COLUMNAS];   // matriz estandarizada
    //
    //  4) Pensar de qué tamaño tiene que ser la matriz de correlaciones
    //     del inciso c) y cómo se recorre.
    // ------------------------------------------------------------------------


    return 0;
}
