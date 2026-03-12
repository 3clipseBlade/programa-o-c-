/******************************************************************************

Welcome to GDB Online.


*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double km, d;
 ;
    
    cout<<"Digite quantos quilômetros foram percorridos ao todo: ";
    cin>> km;
    
    cout<<"Digite por quantos dias o carro foi alugado: ";
    cin>> d;
    double preço = (0.2*km)+(90*d);
    cout<<"Você deverá pagar R$" << preço;
    
    
    return 0;
}