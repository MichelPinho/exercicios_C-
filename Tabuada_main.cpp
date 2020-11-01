#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv){
	int cont,num;
	
	cout<<"Digite um numero inteiro de 1 a 9: ";
	cin>>num;
	
	for (cont=0;cont<11;cont++){
		
	cout<<num<<"X"<<cont<<"=  ";
	
	cout<<num*cont<<endl;
	
}
	
	cout<<"FIM DA TABUADA DE : "<<num<<endl;
	cout<<"Obrigado"<<endl;
	  
			
	
	
  system ("pause");
return 0;	
	
}
