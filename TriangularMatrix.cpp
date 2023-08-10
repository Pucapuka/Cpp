/******************************************************************************

Triangular Matrix

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   //declaring the size of array
    int rows = 5;
    //declaring the pointer
    int ** array = new int* [rows];
    
    //The matrix
    cout<<"Triangular Matrix\n";
    for (int r=0; r<rows; r++){
        array[r] = new int [r + 1];
        for (int c=0; c<=r; c++){
            array[r][c] = (r + 1) * 10 + c + 1;
        }
    }
    
    //printing the array
    for (int r=0; r<rows; r++){
        for(int c=0; c<=r; c++){
            cout<<array[r][c]<<" "; 
        }
        cout<<endl;
    }
    
    //free the array
    for(int r=0; r<rows; r++){
        delete[] array[r];
    }
    delete[] array;
    
    return 0;
}
