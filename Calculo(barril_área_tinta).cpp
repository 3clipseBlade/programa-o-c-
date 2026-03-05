/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{


    double raio, altura, n_barril;
    
    cout<< "Digite o valor do raio do barril em metros:";
    cin>> raio;
    cout<< "Digite o valor da altura do barril em metros:";
    cin>> altura;
    cout<< "Digite a quantia de barris:";
    cin>> n_barril;

    double área_total= ((6.28*raio*altura) + (6.28*raio*raio))*n_barril;
    //ceil arredonda pra cima, e round ou  pra baixo
    double n_de_latas = (ceil(área_total/15))*50;
    cout<< "\nO preço para pintar um barril será: R$"<<n_de_latas;
    
    
    return 0;
}