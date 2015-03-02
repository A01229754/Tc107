#include<iostream>
#include<math.h>

using namespace std;

int main()
{	
	 int x,fac=1,y,c=0;
	string a;
	cout<<"Dame un numero entero para sacar su factorial \nDame el numero: "<<endl;
	cin>>x;
while(c==0){
	for(y=1,fac=1;y<=x;y++){
		fac=y*fac;
	}
	cout<<"El factorial de "<<x<<" es: "<<fac<<endl;
	cout<<"Quieres hacer otro(y/n)?"<<endl;
	cin>>a;
	if(a=="y"){
		cout<<"Dame otro numero para su factorial"<<endl;
		cin>>x;
	}else{
		cout<<"Adios!\nQUe tengas un buen dia y que Dios te bendiga"<<endl;
		c++;
	}
}
}
