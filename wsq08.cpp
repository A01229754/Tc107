#include<iostream>
#include<math.h> //this is the new include for the librery of math for C
using namespace std;//this is standar for every program
int main()//the main code
{
	int a,b,suma=0,resta=0,division=0,residuo=0;
	cout<<"Dame un primer numero a introducir: ";//dos valores dados por el ussuario
	cin>>a;
	cout<<"Dame un segundo numero a introducir: ";
	cin>>b;
	suma=a+b;
	resta=a-b;
	division=a/b;
	residuo=a%b;
	cout<<"La suma de los 2 numeros es: "<<suma<<endl;//suma
	cout<<"La resta de los 2 numeros es: "<<resta<<endl;//resta
	cout<<"La division de los 2 numeros es: "<<division<<endl;//division entera
	cout<<"El residuo de la division entre los 2 numeros es: "<<residuo<<endl;//residuo entero

	return 0;//para que ya no te regrese ningun valor
}
