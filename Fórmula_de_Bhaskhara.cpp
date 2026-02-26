/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
//biblioteca de comandos matemáticos

using namespace std; //isso é pra não ter que escrever std toda hora
int main()    //função principal
{
    cout<<"Calculadora de Bhaskhara";
    cout<<"\n------------------------";


    float a; //float são numeros reais  
    float b; //double  é reais, mas mais pesado, para nuemros maiores
    float c;
    float Delta;
    double Raiz_Delta;
    double Solução_1;
    double Solução_2;
    
    
    //Entrada de dados
    
    cout<< "\nDigite o valor de a:";
    cin>> a;
    cout<< "\nDigite o valor de b:";
    cin>> b;
    cout<< "\nDigite o valor de c:";
    cin>> c;
    
    //Calculo do Delta
    
    Delta = b*b - 4*a*c;

    cout<< "\nDelta = " << Delta;

    Raiz_Delta= sqrt(Delta);
    cout<< "\nRaiz de delta = " << Raiz_Delta;

    //Solucionando

    Solução_1= (-b+Raiz_Delta)/2*a;
    cout<< "\nX1 = " << Solução_1;
    
    Solução_2= (-b-Raiz_Delta)/2*a;
    cout<< "\nX2 = " << Solução_2;
    
    return 0;
}
