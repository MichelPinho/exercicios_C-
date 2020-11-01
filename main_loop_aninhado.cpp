#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main ()
{
    int matriz[3][3];
    int i,j;
    for(i=0;i<3;i++)
       for(j=0;j<3;j++){
           cout << "("<<i<<","<<j<<")=";
           cin >> matriz[i][j];
       }
    cout <<" FIM DA ENTRADA\n\n";
    
    for(i=0;i<3;i++){
       for(j=0;j<3;j++)
           if (i != j)
               cout <<matriz [i][j];
	     		 cout << "\t";
        		else
            		cout << "X\t";
       cout <<"\n";
       
    }
	system ("pause");
	return 0;
	
}
