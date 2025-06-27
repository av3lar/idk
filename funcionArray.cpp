#include <iostream>
using namespace std;

void guardarArray ( int array[], int tam = 5 ){


    for ( int i = 0; i < tam; i++){
        cout<<" nota "<< i + 1 <<":" << array[i]<<endl;

      
    }

}
int main ( ){

    int array[5] = {76,87,98,87,98};
    cout<<" tus notas son: "<< endl;
    guardarArray(array);




    return 0;
}
