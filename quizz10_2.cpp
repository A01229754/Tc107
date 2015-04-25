#include<iostream>
#include<math.h>
 using namespace std;

int main(){
	int a,b;
	int x,y=0;
	cout<<"Dame la cantidad de valores del primer rango"<<endl;
	cin>>a;
	int sys1[a];
	for(int i=0; i<a; i++){
	 cout<<"Dame uno de los numeros"<<endl;
	 cin>>sys1[i];
	}
	cout<<"Dame la cantidad de valores del segundo rango"<<endl;
	cin>>b;
	if(a==b){
	int sys2[b];
	for(int i=0; i<a; i++){
	 cout<<"Dame uno de los numeros"<<endl;
	 cin>>sys2[i];
	}
	for(int i=0; i<a; i++){
	  x=sys1[i]*sys2[i];
	  y=y+x;
	}
	cout<<"El resultado es "<<y<<endl;
      }else{
	cout<<"Poner la misma cantidad de valores"<<endl;
	}
	
}
