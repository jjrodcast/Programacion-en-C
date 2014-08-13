/* 3.- Sabiendo que una milla equivale a 1609 Km, lea una cantidad en
       millas y conviértala a Km.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   float milla,km,r;
    cout<<"Ingresar cantidad en millas: "; cin>>milla;
    r=milla*1609;
    cout<<"Su equivalente en kilometros es: "<<r<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
