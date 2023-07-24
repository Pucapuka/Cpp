#include <iostream>

using namespace std;

int passing_by_pointer(int *pointer){
    
    *pointer *= 2;
    
}

int main(){
    int variable;
    int *any_pointer;
    
    variable = 1;
    any_pointer = &variable;
    
    passing_by_pointer(any_pointer);
    
    cout<<"variable = "<<*any_pointer<<endl;
    
    
    return 0;
}
