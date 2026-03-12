/******************************************************************************



*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double smk_d, smk_y;
    
    cout << "Quantos cigarros você fuma por dia? ";
    cin >> smk_d;
    
    cout << "Há quantos anos você fuma? ";
    cin >> smk_y;

    double smk_t = smk_d*10*smk_y*365/1440;
    cout << "Você já perdeu " << smk_t << " dias de vida.";

    return 0;
}