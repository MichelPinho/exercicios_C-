#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float x,k,b,y;
	
	cout<<"Ola, para calcularmos a expressao y=(2b^2+5+3k)/2x, precisamos dar valores para as variaveis da expressao a seguir, entao vamos la."<<endl;
	
	cout<<"Digite um valor para substituirmos na variavel k : "<<endl;
	cin>>k;
	
	cout<<"Digite um valor para substituirmos na variavel b : "<<endl;
	cin>>b;
	
	cout<<"Digite um valor para substituirmos na variavel x : "<<endl;
	cin>>x;
	
	y=((2*b+3*k)+5)/(2*x);	
	
	cout<<"O valor da variavel Y : "<<y<<endl;
	
	

		system("pause");
	return 0;
}
