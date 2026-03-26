/******************************************************************************


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{

    int c;
    cout<<"Digite seu código de encomenda (de 1 a 30): ";
    cin>> c;
    if(((c<1)&&(c>30))||(c>19)&&(c<25)){
        cout<< "Produto importado!";
    }else{
        if(c==1){
            cout<<"Sua procedência é para o Sul.";
        }else{
            if(c==2){
                cout<<"Sua procedência é para o Norte.";
            }else{
                if(c==3){
                    cout<<"Sua procedência é para o Leste.";
                }else{
                    if(c==4){
                        cout<<"Sua procedência é para o Oeste.";
                    }else{
                        if((c>4)&&(c<7)){ // || significa ou
                            cout<<"Sua procedência é para o Nordeste.";
                        }else{
                            if((c>6)&&(c<10)){ // || significa ou
                                cout<<"Sua procedência é para o Sudoeste.";
                            }else{
                                if((c>9)&&(c<21)){ // || significa ou
                                    cout<<"Sua procedência é para o Sudoeste.";
                                }else{
                                    if((c>24)&&(c<31)){ // || significa ou
                                        cout<<"Sua procedência é para o Noroeste.";
                                    }
                                }
                            }
                        }
                    }
                }    
            }
        }
    }
    

    return 0;
}