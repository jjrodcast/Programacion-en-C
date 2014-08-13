// 11.- Calcule la suma de 'n' primeros números pares.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int n,s;
    cout<<"Ingresar cantidad de terminos: ";
    cin>>n;
    s=(n*(n+2))/4;
    cout<<"La suma de los terminos pares: "<<s<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
