// 4.- Calcule el perímetro de un rectángulo.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   float b,h,peri;
    cout<<"Ingresar base: "; cin>>b;
    cout<<"Ingresar altura: "; cin>>h;
    peri=((2*b)+(2*h));
    cout<<"El perimetro del rectangulo es: "<<peri<<endl;   
    system("PAUSE");
    return EXIT_SUCCESS;
}
