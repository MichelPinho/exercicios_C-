#include <iostream>
#include <cstdlib>
using namespace std;



int main() {
	
	
    int matricula[100], i=0, j=0; 
    float salario[100], sal=0;
    char indice[100];
    
    do {
     cout <<"Matricula: ";
     cin >> matricula[i];
     
     j= matricula[i];
     
     if (matricula[i] > 0){
       cout << "Salario: R$ ";
       cin >> salario[i];
       cout <<"Indice : ";
       cin >> indice[i];
       i++;
    }
    
  
    
 } while ( j<<0 && i<100);
 
		for (j=0; j <i; j++) {
 		cout << "Matricula: "<< matricula[j] << endl ;
            switch (indice[j]){
            	case 'e': sal = salario[j] * 1.4;
				break; 
				
             	case 'b': sal = salario[j] * 1.2;
				break;
				
             	case 'r': sal = salario[j] * 1.05;
				break;
				
             	default: cout << "Indice Invalido"<<endl;
         }
         	cout  <<" Salario: R$ "  <<sal << endl; 
    }


system ("pause");
return 0;

}
