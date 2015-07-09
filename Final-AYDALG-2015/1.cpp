#include <iostream>
#include <cstdlib>
#include <vector>
#include <queue>
#include <string.h>
#define MAX 500

using namespace std;

// vamos a usar una lista de adyacencia porque se hace busqueda en anchura (BFS)
vector<int> ady[ MAX ]; 
// arreglo para ver si se visito el nodo de nuestra red de contactos
bool visitado[ MAX ];

void bfs(){
    int ini , fin;
    cout << "Nro. Amigo de origen: ";
    cin >> ini;
    cout << "Nro. Amigo de destino: ";
    cin >> fin;
    bool ok = false;
    queue<int> Q; // creamos una cola vacia para guardar los adyacentes
    Q.push( ini ); // insertamos al amigo de origen en la cola
    int pasos = 0 ; // guardamos cuantos pasos o nodos son necesarios para llegar a nuestro amigo
    while( !Q.empty() ){ // miestras no este vacio recorremos la cola para los nodos totales
       int actual = Q.front(); Q.pop(); // desencolamos al amigo de origen para buscar sus adyacentes
       pasos++; // aumentamos en 1, ya que encontramos un amigo de nuestra red de contactos
       if( actual == fin ) {
			ok = true; // llegue a solucion
	   		break;  //si se llego al destino termina la busqueda
	   }
	   visitado[ actual ] = true;
       for( int i = 0 ; i < ady[ actual ].size() ; ++i ){              //vemos adyacentes de nodo actual
          if( !visitado[ ady[ actual ][ i ] ] ){                   //si no esta visitado insertamos
             Q.push( ady[ actual ][ i ] ); // insertamos el amigo actual para buscar sus adyacentes y ver si es posible encontrar
          }
       }
    }
    if(ok)  cout << "Nro de amigos visitados: " << pasos << "\n";
    else cout << "No es posible encontrar a el amigo de destino" << "\n";
}
int main(){
	int V, E, x, y;
	cout << "Ingrese cantidad de personas: ";
	cin >> V;
	cout << "Ingrese cantidad de conexion de las personas: ";
	cin >> E;
	// ingresamos todos los amigos, debe estar entre [1 y V]
	for(int i = 1; i <= E; i++){
		cout << "Origen: ";
		cin >> x;
		cout << "Destino: ";
		cin >> y;
		ady[ x ].push_back( y ); // ingresamos un enlace al amigo y dentro del amigo x
	}
	bfs();
}
