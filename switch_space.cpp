/******************************************************************************


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	int cod;
	cout<< "Digite o cC3digo";
	cin>> cod;

	switch(cod) { //para fazer seleC'C#o em menu
	case 1:
		cout<<"Sul";
		break; //para quebrar o caso
	case 2:
		cout<<"Norte";
		break;
	case 3:
		cout<<"Leste";
		break;
	case 4:
		cout<<"Oeste";
		break;
	case 5: //Fazer assim para multiplas opC'C5es
	case 6:
		cout<<"Nordeste";

	default: //se os anteriores nC#o funcionarem, esse C) o resto
		cout<<"IMPORTADO";
		//esse nC#o precisa colocar break
	}



	return 0;
}