#include <iostream>

using namespace std;

int inline multiply(int var, int aux){
    return aux * var;
}


int main(){
    int i, var, repeat, aux = 1;
    
    cout<<"Potenciação\n\n";
    cout<<"Base: "; cin>>var;
    cout<<"Expoente: "; cin>>repeat;
    
    for (i=0; i<repeat; i++){
        aux = multiply(var, aux);
    }
    cout<<"Resultado: "<<aux;
    
    return 0;
}
