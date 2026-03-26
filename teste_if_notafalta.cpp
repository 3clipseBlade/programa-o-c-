/******************************************************************************



*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    
    int nota, falta;
    cout<< "Digite sua nota final numa escala de 0 a 100: ";
    cin>> nota;
    cout<< "Digite seu número de faltas: ";
    cin>> falta;

    if(nota >= 60){
        if(falta<20){
        cout<< "Você foi aprovado."   ; 
            }else{
            cout<<"Você foi reprovado por falta.";
        }    
        
        }else{
        if(falta<20){
        cout<<"Você foi reprovado por nota.";
        
            }else{
        cout<<"Você foi reprovado por nota e falta... \nO que você pensa que está fazendo?";
        
        }
    }
    return 0;
}