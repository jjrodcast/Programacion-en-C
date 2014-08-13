/* 6.- ¿Cuál es el volúmen de un paralepépedo de largo, ancho y la
	altura conocidas?
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   float h,l,a,vol;
    cout<<"Ingrese altura: "; cin>>h;
    cout<<"Ingrese largo: "; cin>>l;
    cout<<"Ingrese anchura: "; cin>>a;
    vol=h*l*a;
    cout<<"El volumen del paralepidedo es: "<<vol<<endl;
    cout<<
    system("PAUSE");
    return EXIT_SUCCESS;
}
