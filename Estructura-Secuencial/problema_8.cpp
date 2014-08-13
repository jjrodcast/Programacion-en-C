/* 9.- En todo triángulo se cumple que cada lado es proporcional al
       seno del ángulo opuesto. Esta ley se llama "ley de los senos",
       matemáticamente:  [a/sen(x)] = [b/sen(y)] = [c/sen(z)].
       Si se conocen los lados 'a', 'b', 'c' y el ángulo 'z'. ¿Cuánto
       valen los otros dos ángulos?
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{   float a,b,c,gamma;
    double alpha,betha;
    cout<<"Ingresar los lados a,b,c: "; cin>>a>>b>>c;
    cout<<"Ingresar angulo gamma: "; cin>>gamma;
    betha = asin((sin(gamma)*b)/c);   
    alpha = asin((sin(gamma)*a)/c);
    cout<<"El angulo betha: "<<betha<<endl;
    cout<<"El angulo alpha: "<<alpha<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
