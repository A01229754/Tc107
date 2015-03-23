#include<iostream>
#include<cmath>

using namespace std;
void triangulo(int x){
int y;
int z=1;
string b="T";

while(z<=x){
	for(y=1;y<=z;y++){
		cout<<b;
	}
	cout<<endl;
	z++;
}
while(z>=0){
	for(y=1;y<=z;y++){
		cout<<b;
	}
	cout<<endl;
	z--;
}
	
}
	

int main(){
int a;
	cout<<"Dame el tamaño del triangulo"<<endl;
	cin>>a;
	
	if(a<=1){
		cout<<"Pon un numero mayor a uno"<<endl;
	}else{
		triangulo(a);
	}
return 0;
}
