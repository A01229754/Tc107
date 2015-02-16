#include<iostream>
#include<math.h> //this is the new include for the librery of math for C
using namespace std;//this is standar for every program
int main()//the main code
{
	int a,b;
	cout<<"Dame un primer numero a introducir: ";//dos valores dados por el ussuario
	cin>>a;
	cout<<"Dame un segundo numero a introducir: ";
	cin>>b;
	cout<<"La suma de los 2 numeros es: "<<a+b<<endl;//suma
	cout<<"La resta de los 2 numeros es: "<<a-b<<endl;//resta
	cout<<"La division de los 2 numeros es: "<<a/b<<endl;//division entera
	cout<<"El residuo de la division entre los 2 numeros es: "<<a%b<<endl;//residuo entero

	return 0;//para que ya no te regrese ningun valor
}
