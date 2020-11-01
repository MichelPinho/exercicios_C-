#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc,char** argv) {
	
int idade;

cout<< " Por favor, informe sua idade : "<<endl;
cin>> idade;


	if (idade<16){
	
	cout<< "Voce nao pode votar ."<<endl;
			
}
	else
		if ((idade>17)&&(idade<66)){
			
			cout<<"Voce e um eleitor obrigatorio ."<<endl;
}
		
		else 		
			if (idade>66){
			
				cout<< " Voce pode votar, mas nao e obrigatorio ."<<endl;
}
			else
				cout<< "Voce e um eleitor ."<<endl;
			

   
   system ("pause");
return 0;


}
