#include<iostream>
#include<math.h>
#include<vector>

using namespace std;


int main(){
	int a, b, c;
	int i,x=0;
	//int values[a];
	cout<<"Dame la cantidad de numeros a introducir"<<endl;
	cin>>a;
	int values[a];
	for( i=0; i<a; i++){ 
	cout<<"Dame un numero a introducir"<<endl;
	cin>>values[i];
	b=values[i]%3;
	if( b==0 ){
	 x=x+values[i];
	 }
	}
	cout<<"Este es el resultado 3"<<x<<endl;
	
}
