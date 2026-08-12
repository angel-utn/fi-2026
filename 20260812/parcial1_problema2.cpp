/**
Un centro de salud registra los turnos solicitados de un día. Por cada turno se ingresan los
siguientes datos: - - - - -
Número de paciente (entero mayor a 0)
Edad del paciente (entero)
Especialidad consultada (1 - Clínica General; 2 - Pediatría; 3 - Traumatología)
Tiempo de espera en minutos (entero)
Asistió al turno (1 - Asistió; 0 - No asistió)
El ingreso de turnos finaliza cuando se ingresa 0 como número de paciente.
Luego de ingresar todos los turnos, se solicita informar:
A) El número de paciente que haya asistido al turno y haya tenido el mayor tiempo de espera.
B) El promedio de edad de los pacientes atendidos en Pediatría.
C) La cantidad de pacientes que no asistieron al turno y tenían más de 60 años.
Aclaración: Solamente uno de los pacientes tendrá el mayor tiempo de espera entre los que
asistieron.
*/
#include <iostream>
using namespace std;

int main(){
    int numero, edad, especialidad, tiempo, asistio;

    // A
    int maxTiempoEspera = 0, pacienteMayorEspera;
    // B
    int sumaEdadPediatria = 0, cantPacientesPediatria = 0;
    float promedioEdadPediatria;

    // C
    int cantNoAsistieron60 = 0;

    cout << "Número de paciente: ";
    cin >> numero;

    while (numero != 0){
        cout << "Edad: ";
        cin >> edad;
        cout << "Especialidad (1 - Clínica General; 2 - Pediatría; 3 - Traumatología): ";
        cin >> especialidad;
        cout << "Tiempo en minutos: ";
        cin >> tiempo;
        cout << "Asistió (1 - Sí / 0 - No): ";
        cin >> asistio;

        if (asistio == 1){
            // A
            if (tiempo > maxTiempoEspera){
                maxTiempoEspera = tiempo;
                pacienteMayorEspera = numero;
            }
            // B
            if (especialidad == 2){
                cantPacientesPediatria++;
                sumaEdadPediatria+=edad;
            }
        }
        else if (asistio == 0){
            if (edad > 60){
                cantNoAsistieron60++;
            }
        }

        cout << "-----------------------------------" << endl;
        cout << "Número de paciente: ";
        cin >> numero;
    }

    cout << endl << endl;
    cout << "A) Número de paciente con mayor espera: " << pacienteMayorEspera << endl;

    if (cantPacientesPediatria > 0){
        promedioEdadPediatria = (float) sumaEdadPediatria / cantPacientesPediatria;
        cout << "B) Promedio de edad: " << promedioEdadPediatria << endl;
    }

    cout << "C) Cantidad de pacientes de +60 que no asistieron: " << cantNoAsistieron60 << endl;

    return 0;
}
