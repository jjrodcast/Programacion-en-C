// 1.- Calcule la longitud de una circunferencia con radio conocido.
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   float r, lgt;
    cout<<"Ingresar radio: ";
    cin>>r;
    lgt=6.28*r;
    cout<<"El resultado es: "<<lgt<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
