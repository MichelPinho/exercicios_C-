#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	int a,b,c,d;
	
	cout<<"Ola, vamos comecar. Digite o primeiro numero: "<<endl;
	cin>>a;
	
	cout<<"Digite um valor para o segundo numero : "<<endl;
	cin>>b;
	
	cout<<"Digite um valor para o terceiro numero : "<<endl;
	cin>>c;
	cout<< a<<"-"<< b<<"-"<< c<<endl;
	
	if ((a<b)&&(a<c)&&(b<c)){
		cout<< "Os valores em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;
	}	
	else
		if ((b<a)&&(b<c)&&(c>a)){
			
			d = a;
			a = b;
			b = d;
					
			cout<< "Os valores em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;	
			
		}
		else
			if ((b>a)&&(b>c)&&(a>c)){
				
				d = a;
				a = c;
				c = d;
				
				cout<< "Os valores em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;
			}
			else
				if ((b>c)&&(b>a)&&(c>a)){
				
				
					d = c;
					c = b;
					b = d;
				
					
					cout<< "Os valores em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;
					
				}
				else
					if  ((a>b)&&(a>c)&&(b>c)){
						
						d = c;
						c = a;
						a = d;
						
						cout<< "Os valores em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;
						
					}
					else
						if ((a>c)&&(a>b)&&(c>b)){
							
							d = c;
							c = a;
							a = b;
							b = d;
							cout<< "Os valores em ordem decrescente sao: "<<c<<"-"<<b<<"-"<<a<<endl;
						}
						else
						
							cout<< " Voce digitou todos os numeros iguais"<<endl;
	

	
   
   
   	system ("pause");
	return 0;
   

 }

