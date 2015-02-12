#include<iostream>
#include<math.h>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int z,j,x,i=1;
	z=rand()%101;
	cout<<"Estoy pensando en un numero del 1 al 100, ¿Cual es?"<<endl;
	cin>>j;

	while(j!=z)
	{
		i++;
		if(j<z)
		{
			cout<<"Lo siento pero "<<j<<" es menor al numero, Intentalo de nuevo!"<<endl;
			cin>>j;
		}else
		{	
			cout<<"Lo siento pero "<<j<<" es mayor al numero, Intentalo de nuevo!"<<endl;
			cin>>j;
		}
	}
	while(j==z)
	{
		cout<<"Muy bien porfin...el numero de intentos toales fue "<<i<<endl;
		if(i<5)
		{
			cout<<"Wow!!! Eres asombroso"<<endl;
			return 0;
		}else
		{
			cout<<"Necesitas mejorar tu habilidad de logica!!"<<endl;
			return 0;
		}
	}
return 0;
}
