#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float x,a,b,y;
	
	cout<<"Ola, para calcularmos a expressão x=(2+a)/(b+4)-2y, precisamos dar valores para as variaveis da expressao a seguir, entao vamos la."<<endl;
	
	cout<<"Digite um valor para substituirmos na variavel a : "<<endl;
	cin>>a;
	
	cout<<"Digite um valor para substituirmos na variavel b : "<<endl;
	cin>>b;
	
	cout<<"Digite um valor para substituirmos na variavel y : "<<endl;
	cin>>y;
	
	x=((2+a)/(b+4))-(2*y);	
	
	cout<<"O valor da variavel X : "<<x<<endl;
	
	

		system("pause");
	return 0;
}
