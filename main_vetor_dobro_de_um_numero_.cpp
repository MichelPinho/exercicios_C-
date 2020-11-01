#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, vetor [6], dobro[6];
	
	for (i=0; i<6; i++)
	{
		cout<<"Qual o valor do vetor ["<<i<<"]?"<<endl;
		cin>>vetor [i];
		
		dobro [i]= vetor [i]*2;
		
	}
		
		for (i=0;i <6;i++)
		{
		 		
			cout<<"dobro["<<i<<"] =  "<< dobro[i]<<endl;

			
		}
		
		
	
	
	
	
	
	
	
	
	
	
	
	 system ("pause");
return 0;

}
