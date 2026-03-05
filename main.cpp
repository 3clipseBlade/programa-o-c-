/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


//main() a partir disso, lê tudo
int main()
{
    
    double x = 10;
    double y = 20;
    
    cout<<"\nOperadores Aritméticos";
    cout<<"\nValor de x + y: "<< x + y; //o << ajuda a juntar elementos de funções diferentes como texte e conta
    cout<<"\nValor de x - y: "<< x - y;
    cout<<"\nValor de x * y: "<< x * y;
    cout<<"\nValor de x / y: "<< x / y;


    cout<<"\nValores Lógicos";
    bool menor = x<y;   //bool é logica booleana (0 ou 1)
    //char menor1= x(menor == ? = v
    
    bool maior = x>y;
    bool igual = x==y; //usa o == para fazer uma comparação lógica de igualdade
    bool diferente = x!=y; //usa o ! para negar ou oposto
    
    
    cout<<"\nValor de x < y: "<< menor;
    cout<<"\nValor de x < y: "<< maior;
    cout<<"\nValor de x = y: "<< igual;
    cout<<"\nValor de x != y: "<< diferente;


    return 0;
}