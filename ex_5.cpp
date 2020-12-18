////crear un programa de porcentaje de variacion.

#include <iostream>
#include <cmath>
using namespace std;

int main (){


//mis variables 

double inicial, final, vp;


//lo que tengo que pedir para poder calcularlo


cout << "Dime el precio inicial: "; 
cin>>inicial;
cout << " Dime el precio final: ";
cin>>final;

vp = 100 *(final-inicial)/inicial;


cout<< "la variacion porcentual es de: "<<vp;
//como hago para que salte a otra linea al final?


}
