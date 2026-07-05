#include <iostream>
using namespace std;

int main() {
    int codigoCurso;
    int cantidadInscriptos;
    int cantidadAprobados;

    int cantidadCursosMas30Porciento = 0;

    int minInscriptos = -1;
    int codigoCursoMenosInscriptos = -1;

    cout << "Codigo de curso: ";
    cin >> codigoCurso;

    while (codigoCurso != 0) {
        cout << "Cantidad de alumnos inscriptos: ";
        cin >> cantidadInscriptos;
        cout << "Cantidad de alumnos aprobados: ";
        cin >> cantidadAprobados;

        float porcentajeAprobados = (float)cantidadAprobados / cantidadInscriptos * 100;

        if (porcentajeAprobados > 30) {
            cantidadCursosMas30Porciento++;
        }

        if (minInscriptos == -1 || cantidadInscriptos < minInscriptos) {
            minInscriptos = cantidadInscriptos;
            codigoCursoMenosInscriptos = codigoCurso;
        }

        cout << "Codigo de curso: ";
        cin >> codigoCurso;
    }

    cout << "A) Cantidad de cursos con mas del 30% de aprobados: "
         << cantidadCursosMas30Porciento << endl;

    cout << "B) Curso con menos alumnos inscriptos: "
         << codigoCursoMenosInscriptos << endl;

    return 0;
}
