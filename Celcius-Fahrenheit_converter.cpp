#include <iostream>

using namespace std;

float fahrenheit_to_celsius(float temperature){
    float celcius;
    
    celcius = (temperature - 32)* 5.0/9.0;
    return celcius;
}

float celcius_to_fahrenheit(float temperature){
    float fahrenheit;
    
    fahrenheit = (temperature * 9.0/5.0) + 32;
    return fahrenheit;
}

int main(){
    
    int option;
    float temperature, converted;
    
    cout<<"Temperature converter. Choose an option:\n\n";
    cout<<"1.Fahrenheit to Celcius\n"<<"2.Celcius to Fahrenheit\nOption:";
    cin>>option;
    
    switch (option){
    
        case 1:
            cout<<"Type the temperature in Fahrenheit\n";
            cin>> temperature;
            converted = fahrenheit_to_celsius(temperature);
            cout<<"The temperature in Celcius is "<<converted;
        break;
        
        case 2:
            cout<<"Type the temperature in Celsius\n";
            cin>> temperature;
            converted = celcius_to_fahrenheit(temperature);
            cout<<"The temperature in Fahrenheit is "<<converted;
        break;
    }
    
    return 0;
}
