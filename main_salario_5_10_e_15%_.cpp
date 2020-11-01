#include <iostream>
#include <cstdlib>
using namespace std;


int main(void) {

   float salario ;
   
   cout<<"Digite o seu salario:";
   cin>>salario;

   if (salario<500){
	salario = salario*1.15;
   }
   else {
    	if (salario<=1000){
		    salario=salario*1.10;
       }
    	else {
	    	salario=salario*1.05;
    	}
  }
 cout<<"O novo salario e igual a R$"<<salario<<endl;
      
 system("pause");
 return 0;
}
