#include<iostream>
#include<math.h>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int z,j,x;
	z=rand()%101;
	cout<<"Tu numero es "<<z<<endl;
	return z;	
}
