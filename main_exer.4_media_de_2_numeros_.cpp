#include <iostream>
#include <cstdlib>
using namespace std;
#include "string.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float media,n1,n2;
	string nome;
	
	cout<<"Digite sua primeira nota : "<<endl;
	cin>>n1;
	
	cout<<"Digite sua segunda nota : "<<endl;
	cin>>n2;
	
	cout<<"Digite o seu nome : "<<endl;
	cin>>nome;
	
	media=(n1+n2)/2;
		
	if (media>=6){
		cout<<"Sr(a)"<<nome<<endl<< "Sua media foi de : "<< media<<endl<< "Status: APROVADO"<<endl;
		
	}
	else{
		cout<<"Sr(a)"<<nome<<endl<< "Sua media foi de : "<< media<<endl<< "Status: PROVA FINAL"<<endl;
		}
	
		system("pause");
	return 0;
}
