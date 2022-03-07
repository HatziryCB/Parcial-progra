#include <iostream>
using namespace std;

int main() {
    int op, n1, i, factorial;

    cout<<"Bienvenido seas a este programa de prueba en el cual puedes realizar distintas funciones"<<endl;
    cout<<"\n1: Calcular la factorial de un numero"<<endl;
    cout<<"2: Tabla de multiplicar de un numero"<<endl;
    cout<<"3: Clasificacion de numeros pares e impares, suma de numeros pares y promedio de numeros impares"<<endl;
    cout<<"4: Conocer los dias laborales de la empresa Programacion I"<<endl;
    cout<<"5: Ingresar a su cuenta bancaria"<<endl;
    cout<<"6: Salir del programa"<<endl;

	cout<<"\nSeleccione el numero de la operacion que desea realizar"<<endl;
    cin>>op;

    switch (op) {

        case 1:{
		
            cout<<"\nIngrese el numero que desea consultar"<<endl;
            cin>>n1;
            factorial=1;
            for(int i = 1; i <=n1; ++i)
               factorial= factorial*i;
            cout<<"\nEl factorial de "<<n1<<"es: "<<factorial<<endl;
        }
			break;
 return 0;
	}
}
