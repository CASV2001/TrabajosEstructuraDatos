#include "iostream"

using namespace std;

int main()

{
	int compara;
	int compara2;
	int conta = 0;
	int conta2 = 0;
	
	int n;
 	 cout << "Ingrese el tamaño de la lista: ";
  	cin >> n;

  	int Lista[n];
  	cout << "Ingrese los " << n << " números enteros separados por espacios: ";
  	for (int i = 0; i < n; i++) {
    	cin >> Lista[i];
  	}
  	
  	int limite = n;
	
	for (int i=0; i<limite; i++){
		
		for(int x = 0; x<limite; x++){
			
				if(Lista[i] < Lista[x]){
					
					conta++;
					
					if(conta == limite - 1){	
					compara = Lista[i];
					cout << compara << endl;
						
					}
					
						
				}
				
				if(Lista[i] > Lista[x]){
					
					conta2++;
					
					if(conta2 == limite - 1){	
					compara2 = Lista[i];
					cout << compara2 << endl;
						
					}
					
						
				}
						
		}
		
		conta = 0;
		conta2= 0;
	}
		
	

	
}
