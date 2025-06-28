#include <iostream>
using namespace std;

struct estudiante{

    string nombre;
    int edad;
    float promedio;

};

int main( ){
        int N;
        cout<<"cuantos estudiantes deseas guardar\n";
        cin>>N;
    estudiante estudiantes[10];

        for ( int i = 0; i < N; i++){
            cout<< "estudiante #"<< i + 1 << endl;
            cout<< "nombre: ";
            cin>>estudiantes[i].nombre;
            cout<< " edad: ";
            cin>> estudiantes[i].edad;
            cout<< " Promedio: ";
            cin>> estudiantes[i].promedio;

        }
    cout<< "Datos de los estudiantes: "<<endl;
    for (int i = 0; i < N; i++){
        cout<<" Estudiante #" << i + 1<<",";
        cout<< "Nombre: " << estudiantes[i].nombre<< " , ";
        cout << " edad: " << estudiantes[i].edad<< " , ";
        cout<< " promedio " << estudiantes[i].promedio<< " , ";


    }


return 0;
}
