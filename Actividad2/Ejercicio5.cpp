#include "iostream"

using namespace std;

int main(){
	
	int suma;
	
	int x;
	
	cout << "Ingrese el valor de N, del cual desea su matriz NXN";
  	cin >> x;
	
	
	int y = x;
	
	int matriz[x][y];
	
	for (int j = 0; j< x; j++){
		
			
  			for (int i = 0; i < x; i++) {
  				
  				cout << "Ingrese el valor del sector de [" << j << "] [" << i << "] ";
    			cin >> matriz[j][i];
    			
    			}
	}
	
	for (int j = 0; j< x; j++){
		
			
  			for (int i = 0; i < x; i++) {
  				
  				if(j == i){
  					
  					suma += matriz[j][i];
  					
				  }
    			
    			}
	}
	
	cout << "La suma de los valores de la diagonal es de " << suma;

	


}