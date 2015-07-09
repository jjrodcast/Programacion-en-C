#include <iostream>
#include <algorithm>
#include <string.h>
#define MAX 100

using namespace std;

int dp[MAX][MAX]; // arreglo para soluciones acumuladas, donde 0 es que no se puede formar y 1 si se puede formar
int arr[MAX]; // arreglo para los numeros

int main(){
	int n;
	cout << "Cantidad de numeros: ";
	cin >> n;
	int m = 0;
	//ingresmos los numeros
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		m += arr[i];
	}
	m++;
	// llenamos de ceros toda la matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			dp[i][j] = 0;
		}
	}
	// buscamos las soluciones por programacion dinamica 
	dp[0][arr[0]] = 1; 
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(j - arr[i] < 0) dp[i][j] = dp[i-1][j]; // si es menor que el valor actual entonces se pone la solucion anterior
			else if((j - arr[i]) == 0) dp[i][j] = 1; // si la diferencia da como resultado 0 quiere decir que es el mismo numero, se pone 1
			else dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i]]);  // sino, buscamos en la tabla la solucion anterior para ver si es posible formar una suma
		}
	}
	// la solucion se encuentra en la ultima fila de la matriz
	cout << "Las sumas son: ";
	for(int i = 0; i < m; i++){
		if(dp[n-1][i] > 0){
			cout << i << ", "; // imprimimos el valor donde se tiene un 1
		}
	}
	cout << "\n";
	return 0;
}
