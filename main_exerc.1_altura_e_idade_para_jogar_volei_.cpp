#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	float altura,idade;
	
	cout<<"Qual a sua idade : "<<endl;
	cin>>idade;
	
	cout<<"Digite a sua altura: "<<endl;
	cin>>altura;
	
	
	if ((idade<15)&&(altura>1.75))
	
		cout<<"Voce foi selecionado, Parabens."<<endl;
		
	else 
		
		cout<<"Voce nao foi selecionado, desculpe."<<endl;
		
	
   
   system ("pause");
return 0;
   

 }



