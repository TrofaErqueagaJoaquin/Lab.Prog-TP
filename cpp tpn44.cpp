#include <iostream>
#include <string>

using namespace std;

float CalcularPromedio(float nota1, float nota2, float nota3) {
    float promedio = (nota1 + nota2 + nota3) / 3;
    return promedio;
}

string SituacionDelAlumno(float promedio) {
    if (promedio > 9 && promedio <= 10) {
    return "Excelente";
    } 
    else if (promedio ==9) {
    return "Muy Bien";
    } 
    else if (promedio ==8) {
    return "Bien";
    } 
    else if (promedio >= 7 && promedio < 8) {
    return "Aprobó";
    } 
    else if (promedio >= 5 && promedio < 6) {
    return "Desaprobado (por poco)";
    } 
    else {
    return "En el horno";
    }
}

int main() {
    string NombreAlumno;
    float nota1, nota2, nota3;

    cout << "Ingrese el nombre del alumno: ";
    getline(cin, NombreAlumno);

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    float promedio = CalcularPromedio(nota1, nota2, nota3);

    string mensaje =SituacionDelAlumno(promedio);

    cout<<"El promedio del alumno "<<NombreAlumno<<" es: "<<promedio<<endl;
    cout<<"LA nota del alumno está "<<mensaje<<endl;

    return 0;
}

