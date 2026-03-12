/******************************************************************************




*******************************************************************************/
#include <iostream>

#include <cmath>
using namespace std;

int main()
{
    double n1, n2;
    
    cout<<"Insira o primeiro valor: ";
    cin>> n1;
    
    cout<<"Insira o Segundo valor: ";
    cin>> n2;
    
    
    double soma = n1 + n2;
    cout<<"A soma dos dois números é igual a: "<<soma;
    
    double sub = n1 - n2;
    cout<<"\nA subtração dos dois números é igual a: "<<sub;
    
    double mult = n1 * n2;
    cout<<"\nA multiplicação dos dois números é igual a: "<<mult;
    
    double divi = n1 / n2;
    cout<<"\nA divisão dos dois números é igual a: "<<divi;
    
    double powe = pow(n1, n2);
    cout<<"\nO primeiro número elevado ao segundo número é igual a: "<<powe;
    
    double root = pow(n1,1/n2);
    cout<<"\nA raiz do primeiro número pelo segundo é igual a: "<<root;


    return 0;
}