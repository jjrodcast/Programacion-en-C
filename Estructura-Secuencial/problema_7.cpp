/* 8.- Calcule el área de un triángulo cuando se conocen 2 lados y
       el ángulo que forma. (Aplicar ley de cosenos).
*/

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   float a,b,theta,h,area;
    double c,alfa,beta;
    cout<<"Ingresar lado a: "; cin>>a;
    cout<<"Ingresar lado b: "; cin>>b;
    cout<<"Ingresar angulo formado entre a y b: "; cin>>theta;
    c =(a*a+b*b)-(2*a*b*cos(theta));
    h=sqrt((b*b)+(c/2)*(c/2));
    area=(c*h)/2;
    cout<<"El lado c: "<<c<<endl;
    cout<<"La altura del triangulo es: "<<h<<endl;
    cout<<"El area del triangulo es: "<<area<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
