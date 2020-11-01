#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
	int x,num;
	
	for (x=0;x<20;x++)
	{
		cout<<"Digite um numero: "<<endl;
		cin>>num;
		
		if (num%2==0){
			cout<< " O numero "<<num<<" e par"<<endl;	
		}
		else
			cout<<"O numero"<<num<<" e impar"<<endl;
			
	
			
   }
   
   
   	system ("pause");
	return 0;
   

 }




