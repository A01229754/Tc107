#include<iostream> //este es el include principal y estandar
#include<math.h> //el include que permite hacer acciones matematicas
using namespace std;

int main() //codigo principal
{
	int F,C;
	cout<<"Dame la temperatura de Farenheit para convertirla en Celsius"<<endl;
	cin>>F;//pedir al ususario un numero para la variable F "Farenheit"
	C=((F-32)*5)/9; //la operacion matematica para convertir
	cout<<"La temperatura en Celsius es de: "<<C<<endl;
	if(C<=0){ //condicion para poder poner el mensaje del estado del agua
		cout<<"La temperatura en Celsius en el agua esta solida su estado"<<endl;
		return 0; //para que el usuario ya no ponga nada mas y se cierrra en automatico el programa
	}else{
		if(C>=100){
				cout<<"La temperatura en Celisus permite al agua estar en estado gaseoso"<<endl;
				return 0;
		}else{
			cout<<"La temperatura en Celsisus permite al agua estar en estado liquido"<<endl;
			return 0;
		}
	}
	return 0;
}
