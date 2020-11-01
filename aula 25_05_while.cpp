#include <iostream>
#include <cstdlib>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opcao;
	
	while (opcao!=9)
	{
		cout<<"MENU"<<endl;
		cout<<"1 - INCLUIR "<<endl;
		cout<<"2 - EXCLUIR "<<endl;
		cout<<"3 - CONSULTAR "<<endl;
		cout<<"9 - SAIR "<<endl;
		cin>>opcao;
		
	switch (opcao){
		
		case 1: cout<<"VAI INCLUIR"<<endl;
		break;
		
		case 2: cout<<"VAI EXCLUIR"<<endl;
		break;
		
		case 3: cout<<"VAI CONSULTAR"<<endl;
		break;
		
		case 9: cout<<"VAI SAIR"<<endl;
		break;
		
		default: cout<<"OPCAO INVALIDA"<<endl;
		
	}
	}
	


 system ("pause");
return 0;

}
