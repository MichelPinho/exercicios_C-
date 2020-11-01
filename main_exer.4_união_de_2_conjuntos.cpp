#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(void) {
	
	float a,b,aub,bua;
	
	cout<<"Digite um valor para incluimos no conjunto A: "<<endl;
	cin>>a;
	
	cout<<"Digite um valor para incluimos no conjunto B: "<<endl;
	cin>>b;
	

	aub=a+b;	
	
	cout<<"A uniao (U) do conjunto AUB: "<<aub<<endl;
	
	bua=b+a;
	
	cout<<"A uniao (U) do conjunto BUA: "<<bua<<endl;


		system("pause");
	return 0;
}
