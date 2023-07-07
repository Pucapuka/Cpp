
#include <iostream>

using namespace std;

int potencia(float valor, float expoente){
    int i; 
    float resultado;
    resultado = 1;
    
    if(expoente > 0){
        for (i=0; i<expoente; i++){
            resultado *= valor;
        }
    }else if (expoente < 0){
        for (i=0; i>expoente; i--){
            resultado *= valor;
        }
    }
    
    return resultado;
    
}

int main(){
    
    float valor, expoente, resultado;
    
        cout<<"\n---------------\nPOTENCIACAO \n---------------\n";
        cout <<"Digite os valores que deseja calcular:\n";
        cout<<"base: "; cin>>valor;
        cout<<"expoente: "; cin>>expoente;
        
        resultado = potencia(valor, expoente);
        
        if(expoente>=0){
        cout<<"Resultado: "<<resultado;
        }else{
            cout<<"Resultado: "<<1/resultado;
        }
    return 0;
}
