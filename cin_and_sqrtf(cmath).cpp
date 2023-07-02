#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    float numero, raizQuadrada;
    
    cout<<"Digite um número para calcular sua raiz quadrada\n";
    cin>>numero;
    raizQuadrada = sqrtf(numero);
    cout<< "A raiz quadrada de "<<numero<<" "<<"é "<<raizQuadrada<<" ."<<endl;
    cout<<"FIM";
    return 0;
}
