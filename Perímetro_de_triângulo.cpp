/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout<<"Nantes";  // Saída de dados
    cout<<"\nAlgo";  // \n é pra pular linha        cout<< é passar um valor pra tela
    cout<<"\n\n\nCalculadora de perímetro de triângulo";
    //tipo inteiro é n inteiros
 
     
    int a;
    int b;
    int c;    
    
    cout<< "\nDigite o valor de a:";
    cin>> a;                                    //cin>> é para 
    cout<< "\nDigite o valor de b:";     //cin é para colocar input
    cin>> b;     
    cout<< "\nDigite o valor de c:";     //cin é para colocar input
    cin>> c;      
    
    int perímetro = a+b+c;

    cout << "\nO perímetro do triângulo é = " << perímetro;

    return 0;
}