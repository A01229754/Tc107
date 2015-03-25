#include<iostream>
#include<cmath>

using namespace std;
int gcd(int x, int y){
	if (x==y){
	return x;
	}else{
		if(x>y){
		return(x-y,y);
		}else{
		return(x,y-x);}
	}
	return 0;
}
	
	

int main(){

	int a,b;
	cout<<"Dame el primer valor"<<endl;
	cin>>a;
	cout<<"Dame el segundo valor"<<endl;
	cin>>b;
	cout<<endl;
	cout<<"El maximo comun divisor es: "<<endl;
	cout<<gcd(a,b)<<endl;
	return 0;
}
