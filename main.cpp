#include <iostream>
#include <cstdlib>
using namespace std;

int main ( )
{
    int matricula; 
    float salario;
    char indice;
    do {
     cout <<"Matricula: ";
     cin >> matricula;
     if (matricula > 0){
       cout << "Salario: R$ ";
       cin >> salario;
       cout <<"Indice : ";
       cin >> indice;
       		switch (indice){
          		case 'e': salario = salario * 1.4;
				break; 
           		case 'b': salario = salario * 1.2;
				break;
           		case 'r': salario = salario *1.05;
				break;
				
           		default: cout << "Indice Invalido "<<endl;
      }
      	cout << "Matricula: "<< matricula ;     
	cout  <<" Salario: R$ " << salario<<",00" << endl; 
    }
  } while (matricula> 0);
  
  
  system ("pause");
  return 0;
}

