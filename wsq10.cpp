#include<iostream>
#include<math.h>
//#include<conio.h>

using namespace std;

int main(){
	int cont,num;
	float numero[90];
	float sum=0,prom,varianza,restp;
	cout<<"Dame la cantidad de numeros ha almacenar: ";
	cin>>num;
	for(cont=1;cont<=num;cont++){
		cout<<"Dame el numero["<<cont<<"]: ";
		cin>>numero[cont];
		sum=sum+numero[cont];
	}
	prom=sum/num;
	cout<<"La suma total es de: "<<sum<<endl;
	for(cont=1,sum=0;cont<=num;cont++){
		restp=(numero[cont]-prom)*(numero[cont]-prom);
		sum=sum+restp;
	}
	varianza=sum/num;
  	cout<<"La varianza es: "<<varianza<<endl;
	cout<<"El promedio es de: "<<prom<<endl;

}
	
