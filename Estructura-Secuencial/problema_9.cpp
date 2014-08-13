/* 10.- En un campeonato de fútbol participan 'n' equipos. ¿Cuántos
        partidos habrá en la primera rueda?
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int n,pj;
    cout<<"Ingresar numero de equipos: ";
    cin>>n;
    pj = n*(n-1);
    cout<<"La cantidad de partidos jugados es: "<<pj<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
