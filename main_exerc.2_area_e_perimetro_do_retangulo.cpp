#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	int maior,menor,area,perimetro;
	
	cout<<"Informe o lado maior: "<<endl;
	cin>>maior;
	
	cout<<"Informe o lado menor: "<<endl;
	
	if (menor>maior)
		cout<<"Os valores estao trocados, favor inverter o valor dos lados "<<endl;
			
	else
	cin>>menor;
		
	area=(maior*menor);
	cout<<"A area do retangulo e : "<<area<<endl;
	
	perimetro=((maior*2)+(menor*2));
	cout<<"O perimetro do retangulo e : "<<perimetro<<endl;
	
	   
   system ("pause");
return 0;


}
