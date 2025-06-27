#include <iostream>
using namespace std;
int main ( ){

    int cantidad = 5;
    int array[cantidad];
cout<<"Orden original\n";
    for ( int i = 0; i < cantidad; i++){
        cout<<i<<endl;
       
    }
    cout<<"Inverso\n";
    for ( int j = cantidad-1; j>=0; j--){
        cout<< j<<endl;
        
    }


    return 0;
}