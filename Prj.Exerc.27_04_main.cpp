#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	int a,b,c,maior,menor,medio;
	
	cout<<"Ola, vamos comecar, digite o primeiro numero: "<<endl;
	cin>>a;
	
	cout<<"Digite um valor para o segundo numero : "<<endl;
	cin>>b;
	
	cout<<"Digite um valor para o terceiro numero : "<<endl;
	cin>>c;
	
	if(((a>b)&&(a>c))&&((b<a)&&(b>c))&&((c<b)&&(c<a)))
	
	maior=a;
	medio=b;
	menor=c;
          cout<< "Os numeros em ordem decrescente sao: "<<maior<<medio<<menor<<endl;
   
   
   system("pause");
return 0;
   

 }





