#include <iostream>
#include <cstdlib>
using namespace std;
#include "string.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float media,na,nb;
	
	
	cout<<"Digite a nota A : "<<endl;
	cin>>na;
	
	cout<<"Digite a nota B : "<<endl;
	cin>>nb;
	
	media=(na+nb)/2;
	
	cout<<"A sua media final foi de : "<<media<<endl;
	
	
		system("pause");
	return 0;
}
