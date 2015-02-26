#include<iostream>//include junto con el "using std" es lo normal para iniciar un programa
#include<math.h>//include para poder hacer operaciones matematicas en el programa

using namespace std;

int main()//codigo principal
{
	int l,h,x=0,i;//declaracion de variables
	cout<<"Dame el numero mas bajo a sumar"<<endl;
	cin>>l;
	cout<<"Dame el numero mas alto a sumar"<<endl;
	cin>>h;//obtencion de los valores de las variables por el usuario

	for(i==l;i<h;i++)//en el cilo for se divide en 3 partes: la primera es la condicion con la cual se va a iniciar o el arranque del for, despues sigue la condicion por la cual se va a ejecutar el for, por ultimo se tiene lo que va a pasar cada vez que se repite el programa
	{
		x=x+i;//codigo para sumar un numero y obtenga el nuevo valor una variable vieja
	}

	cout<<"El resultado de la suma del "<<l<<" al "<<h<<" es de: "<<x<<endl;
	return 0;
}
