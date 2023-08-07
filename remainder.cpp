/******************************************************************************

Calculate the remainder
It seems to be redundant, but it's just an algorithm to show how the calculation
of the remainder works under the hood.

*******************************************************************************/
#include <iostream>

using namespace std;

int rem(int dividend, int divisor){
    int remaind, quotient;
    
    quotient = dividend / divisor;
    remaind = dividend - (divisor * quotient);
    
    return remaind;
}

int main()
{
    int dividend, divisor, remaind;
    
    cout<<"Remainder. Type the values to calculate:\n";
    cout <<"Dividend: "; cin>>dividend;
    cout <<"Divisor: "; cin>>divisor;
    
    remaind = rem(dividend, divisor);
    
    cout << "Remainder: "<<remaind<<endl;
    return 0;
}
