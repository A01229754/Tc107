//Juan Abdiel Mercado Velazquez A01229754
#include<iostream>
#include<cmath>

using namespace std;
void trg(int n){
int x=1;
int y;
string b="T";

while(x<=n){
	for(y=1;y<=x;y++){
		cout<<b;
		}
	cout<<endl;
	x++;	
	}
while(x>=0){
	for(y=1;y<=x;y++){
	cout<<b;
	}
	cout<<endl;
	x--;
}
}
	

int main(){
	int x;
	cout<<"Dame el tamaño del triangulo"<<endl;
	cin>>x;
	trg(x);
	return 0;
}
