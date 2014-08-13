/* 2.- Calcule la longitud de un trapecio cuyas base menor, base mayor
       y altura son conocidas.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   float B,b,h,atrap;
    cout<<"Ingresar base mayor: "; cin>>B;
    cout<<"Ingresar base menor: "; cin>>b;
    cout<<"Ingresar altura: "; cin>>h;
    atrap=(((B+b)*h)/2);
    cout<<"El area del trapecio es: "<<atrap<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
