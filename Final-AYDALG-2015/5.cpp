#include <iostream>
#include <math.h>

using namespace std;

//arreglo de las potencias a multiplicar
int pot[12] = {1, 2, 4, 8 ,16 ,32 , 64, 128, 256, 512, 1024, 2048};
//arreglo para valores acumulados
int acum[100];

int main(){
	int n1, n2;
	cout << "Multiplicando <= 200 : " ; 
	cin >> n1;
	cout << "Multiplicador <= 200 : " ; 
	cin >> n2;	
	int r = n1 * n2;
	//calculamos los valores a guardar como solucion
	for(int i = 0; i < 12; i++){
		acum[i] = pot[i]*n2;
	}
	//buscamos la solucion para mostrar la respuesta
	for(int i = 11; i >= 0; i--){
		// en caso aun de poder formar la solucion se sigue buscado con el while
		while(n1 >= pot[i]){
			cout << acum[i] << " + "; // mostramos la solucion encontrada
			n1 -= pot[i]; // restamos al multiplicando para buscar la siguiente potencia que da el resultado que queremos
		}
	}
	cout << " 0 = " << r << "\n"; // mostramos la solucion con el resultado de la multiplicacion
	
	
	return 0;
}
