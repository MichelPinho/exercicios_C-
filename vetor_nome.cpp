#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch,CCor input loop */

int main(int argc, char** argv) {
	
	char matriz [5][6];
	char l,c;

	
		for (l=0;l<5;l++){
			for (c=0;c<6;c++){
				cin>>matriz [l][c];
			}
		}
	
			for (l=0;l<5;l++){
				for (c=0;c<6;c++){
					cout<<matriz[l][c]<<" ";
				}
		
				cout<<matriz[l][c]<<" ";				
			}	
	
			cout<< endl;
			
				
		system("pause");
	
	return 0;
}
