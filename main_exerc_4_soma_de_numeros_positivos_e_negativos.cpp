#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	float contador,positivo,negativo,num;
	
	contador=0;
	positivo=0;
	negativo=0;
	
	while (contador<20){
		
		cout<<"Digite um numero: "<<endl;
		cin>>num;
		
		if (num>=0)
			positivo=positivo+num;
		else
			negativo=negativo+1;
	contador++;	
		
	}
	cout<< " A soma dos numeros positivos sao : "<<positivo<<endl;
	
	cout<< "A quantidade de numeros negativos sao: "<<negativo<<endl;

	system ("pause");
	return 0;
   

 }




