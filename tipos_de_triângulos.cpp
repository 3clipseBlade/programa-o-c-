/******************************************************************************



*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double a, b ,c;
    cout<<"Digite o valor do lado A: ";
    cin>> a;
    cout<<"Digite o valor do lado B: ";
    cin>> b;   
    cout<<"Digite o valor do lado C: ";
    cin>> c; 
    
    if((a + b >c)&&(a+c>b)&& (b+c>a)){
        if((a != b) && (a != c) && (b != c)){
            cout<< "Os números formam um triângulo escaleno.";
        }else{ //o computador não consegue computar a=b=c de uma vez só
            if((a==b) && (a==c)){ //não precisa colocar o b=c
                cout<<"Os números formam um triângulo equilatero.";
            }else{   //comparar 2 a 2
                cout<<"Os números formam um triângulo isóceles.";
            }
            
        }
    
    }else{
        cout<<"Esses números não podem formar um triângulo";
    }
    return 0;
}