/******************************************************************************




*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{

    cout<<"Calculadora de aprovação (a nota máxima é 100)";
    //tipo inteiro é n inteiros
 
    double T1, T2, T3;  
    
    cout<< "\nDigite o nota do 1º trimestre: ";
    cin>> T1;
    cout<< "\nDigite o nota do 2º trimestre: ";
    cin>> T2;
    cout<< "\nDigite o nota do 3º trimestre: ";
    cin>> T3; 
    
    double media;
    media = (T1+T2+T3)/3;
    if (T1 >=0 && T1 <= 100 && T2 >=0 && T2 <= 100 && T3 >=0 && T3 <= 100){
         // && indica que tudo tem que acontecer para ser válido
        cout<< "\nA sua média foi " << media;
    
        if (media >= 70){ //essa estrutura é usada para adicionar uma condição.   não esquecer do {

        cout<< "\nO aluno foi aprovado :D";
        }else{ 
        cout<< "\nO aluno foi reprovado :(";
    }
        
    }else{
    cout<< "\nPor favor verifique seus valores";  
        
    }
        cout<< "\n OBRIGADO POR USAR NOSSO SISTEMA!";
    
    return 0;
}