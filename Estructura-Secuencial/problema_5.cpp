/* 5.- Calcule el perímetro de un triángulo rectángulo si se conocen
       sus catetos.
*/

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   float c1,c2,h,r;
    cout<<"Ingrese pimer cateto: "; cin>>c1;
    cout<<"Ingrese segundo cateto: "; cin>>c2;
    h=sqrt((c1*c1)+(c2*c2));
    cout<<"La hipotenusa es: "<<h<<endl;
    r=h+c1+c2;
    cout<<"El perimetro del triangulo rectangulo es: "<<r<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
