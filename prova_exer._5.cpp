#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i;
	float x[5],y[5],z[5];
	
	cout<< "Preencher vetor x:"<<endl;
	
	for (i=0;i<5;i++){
		
		cout<< " Entre com o valor :  "<<endl;
		
		cin>>x[i];
	}
	
	cout<< "Preencher vetor y:"<<endl;
	
	for (i=0;i<5;i++){
		
		cout<< " Entre com o valor :  "<<endl;
		
		cin>>y[i];
		
	}
	
	for (i=0;i<5;i++){
		
		z[i]=x[i]+y[i];
	}
	
	cout<< "Vetor z: " <<endl;
	
	for (i=0;i<5;i++){
		
		cout<<z[i]<<endl;
	}
	
	system("pause");
	
	return 0;
}
