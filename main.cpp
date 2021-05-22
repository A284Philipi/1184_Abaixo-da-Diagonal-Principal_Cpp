#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int cont = 1, cont2 = 1;
    float numero, soma = 0;
    string teste;
    cin >> teste;
    while (cont <= 12){
        while (cont2 <= 12){
            cin >> numero;
            if (cont2 < cont){
                soma += numero;
            }
            cont2++;
        }
        cont2 = 1;
        cont++;
    }
    if (teste[0] == 'S'){
        cout << soma <<endl;
    }else{
        soma = soma / 66;
        cout << soma <<endl;
    }
    return 0;
}
