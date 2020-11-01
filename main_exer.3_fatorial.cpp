#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	int fat;
	
	cout<<"Entre com o numero que gostaria de saber o fatorial: "<<endl;
	cin>>fat;
	
	
	fat=fat*8;
	fat=fat*7;
	fat=fat*6;
	fat=fat*5;
	fat=fat*4;
	fat=fat*3;
	fat=fat*2;
	fat=fat*1;
	
	cout<<"O fatorial do numero escolhido foi: "<<fat<<endl;					
	
	
   
   system ("pause");
return 0;


}
