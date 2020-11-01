#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	int a,b,c;
	
	cout<<"Ola, vamos comecar. Digite o primeiro numero: "<<endl;
	cin>>a;
	
	cout<<"Digite um valor para o segundo numero : "<<endl;
	cin>>b;
	
	cout<<"Digite um valor para o terceiro numero : "<<endl;
	cin>>c;
	
	if ((a>b)&&(a>c)&&(b>c)){
	cout<< "Os numeros em ordem decrescente sao: "<<a<<"-"<<b<<"-"<<c<<endl;
	}
				
	else
		if ((a>c)&&(c>b)&&(a>b)){
		cout<< "Os numeros em ordem decrescente sao: "<<a<<"-"<<c<<"-"<<b<<endl;
		}
	
		else
			if ((b>a)&&(b>c)&&(a>c)){
			cout<< "Os numeros em ordem decrescente sao: "<<b<<"-"<<a<<"-"<<c<<endl;
			}
		
			else
				if((b>a)&&(b>c)&&(c>a))
				cout<< "Os numeros em ordem decrescente sao: "<<b<<"-"<<c<<"-"<<a<<endl;
				
						
				else
					if ((c>a)&&(c>b)&&(a>b)){
					cout<< "Os numeros em ordem decrescente sao: "<<c<<"-"<<a<<"-"<<b<<endl;
				}
					else
					cout<< "Os numeros em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;
														
	
	
	
   
   
   system ("pause");
return 0;
   

 }





