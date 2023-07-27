#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>&numbers){
    //sorting
    bool swapped;
    do{
        swapped = false;
        for(int i=0; i<4; i++){
            if (numbers[i]>numbers[i+1]){
                swapped=true;
                int aux = numbers[i];
                numbers[i]=numbers[i+1];
                numbers[i+1]= aux;
            }
        }
        
    }while(swapped);
}

int main(){
    
    vector<int> numbers(5);
    
    //introduction
    cout<<"Training Sort. Include the items:\n";
    
    //inserting items
    for (int i=0; i<5; i++){
        cout<<"Item "<<i+1<<": ";
        cin>>numbers[i];
    }
    
    cout<<"Array not yet sorted: \n";
    for (int i=0; i<5; i++){
        cout<<numbers[i]<<" ";
    }
    
    sort(numbers);
    
    //printing them
    
    cout<<"\nSorted array: \n";
    for (int i=0; i<5; i++){
        cout<<numbers[i]<<" ";
    }
    
    
    return 0;
}
