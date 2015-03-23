#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a=0,b=1;
	int n,i,c;
	cout<<"Dame hasta donde quieres que sea la secuencia"<<endl;
	cin>>c;

	for(i=0;i<=c-2;i++){
		n=a+b;
		a=b;
		b=n;
	}
	cout<<"Este es el resultado de la secuencia "<<n<<endl;
	
}
