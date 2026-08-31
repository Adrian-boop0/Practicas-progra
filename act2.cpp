#include <iostream>
#include <string>
using namespace std;

struct reg_estudiantes{
    string nombre, carrera, semestre;
    float promedio;
}estudiante[5];


void mostrarEstudiante(int i){
    cout << "Nombre: "   << estudiante[i].nombre   << endl;
    cout << "Carrera: "    << estudiante[i].carrera  << endl;
    cout << "Semestre: "   << estudiante[i].semestre << endl;
    cout << "Promedio: "   << estudiante[i].promedio << endl;
}


void buscarPorNombre(string nombre){
    bool encontrado = false;
    for(int i = 0; i < 5; i++){
        if(estudiante[i].nombre == nombre){
            mostrarEstudiante(i);
            encontrado = true;
        }
    }
    if(!encontrado){
        cout << "Alumno no encontrado" << endl;
    }
}


void buscarPorCarrera(string carrera){
    bool encontrado = false;
    for(int i = 0; i < 5; i++){
        if(estudiante[i].carrera == carrera){
            mostrarEstudiante(i);
            encontrado = true;
        }
    }
    if(!encontrado){
        cout << "Alumno no encontrado" << endl;
    }
}

int main(){

    int i;

    for(i=0; i<5; i++){
        cout << "Ingrese el nombre del estudiante: "<< endl;
        cin >> estudiante[i].nombre;
        cout << "Ingrese la carrera del estudiante: "<< endl;
        cin >> estudiante[i].carrera;
        cout << "Ingrese el semestre del estudiante: "<< endl;
        cin >> estudiante[i].semestre;
        cout << "Ingrese el promedio del estudiante: "<< endl;
        cin >> estudiante[i].promedio;
    }

    int opcion;
    string busqueda;

    do{
        cout << "\n===== MENU =====" << endl;
        cout << "1. Mostrar todos los estudiantes" << endl;
        cout << "2. Buscar por nombre" << endl;
        cout << "3. Buscar por carrera" << endl;
        cout << "0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "\nDatos de los estudiantes: " << endl;
                for(i=0; i<5; i++){
                    mostrarEstudiante(i);
                }
                break;
            case 2:
                cout << "Ingrese el nombre a buscar: ";
                cin >> busqueda;
                buscarPorNombre(busqueda);
                break;
            case 3:
                cout << "Ingrese la carrera a buscar: ";
                cin >> busqueda;
                buscarPorCarrera(busqueda);
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    }while(opcion != 0);

    return 0;
}