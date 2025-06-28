#include <iostream>
#include <fstream>
using namespace std;
int main( ){

    int x;
    cout<<"ingresa un numero para que se guarde en otro archivo"<<endl;
    cin>> x;
    ofstream archivo("mensaje.txt");
    if(archivo.is_open()){
        archivo<< x;
        cout<< "el mensaje fue guardado correctamente "<<endl;
        archivo.close();
    } else{

        cout << " tu archivo no se guardo ";
    }
return 0;
}


