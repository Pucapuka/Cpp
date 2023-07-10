#include <iostream>

using namespace std;

float temperatura[7][24] ;
float To = 0;
float quantidade = 0;
float media = 0;

void tempCalc(float Ti[7][24]){
    int i, j;
    for (i = 0; i<sizeof(temperatura[i]); i++){
        for (j = 0; j < sizeof(temperatura[i][j]);i++){
            cout<<"Dia"<<i+1<<": ";
            if (0){
                return;
            }else{
                cin>>Ti[i][j];
                To += Ti[i][j];
                quantidade++;
            }
        }
    } 
}

float mediaCalc(float To, float qt){
    return To/qt;
}

int main(){
    int opcao;
    float media;
    
    while(true){
        cout<<"-------------------\nTEMPERATURA DA SEMANA\n-----------------------";
        cout<<"\nEscolha uma opção: \n1.Registrar Temperatura\n2.Mostrar média atual\n3.Sair\n";
        cin>>opcao;
        switch (opcao){
        
        case 1:
        
            cout<<"Preencha adequadamente cada campo de tempertura:\n";
        
            tempCalc(temperatura);
            
            break;
        
        case 2:
        
            media = mediaCalc(To, quantidade);
            cout<<"Média atual: "<<media<<endl;
            
            break;
            
        case 3:
            
            return 0;
        }
        
    }
}
