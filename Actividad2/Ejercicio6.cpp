#include "iostream"
#include "string"

using namespace std;

int main(){
	
	int N;
	int J;
	
	
	cout << "Ingrese el numero de estudiantes ";
  	cin >> N;
  	
  	cout << "Ingrese el numero de materias ";
  	cin >> J;
	
	int matriz[N][J];
	int promedio[N];
	int valor;
	
	for (int j = 0; j< N; j++){
		
			valor =0;
			cout << "Ingrese las " << J << " calificaiones del estudiante " << j;
  			for (int i = 0; i < J; i++) {
    			cin >> matriz[N][J];
    			
    			valor += matriz[N][J];
    			
    			if(i == J-1){
    				
    				valor = valor/J;
    				promedio[j] = valor;
    				
				}
    			
	}
  }
  
  
  	for (int i=0; i <N; i++){
  		
  		for(int j = 0; j<J; j++){
	  	
	  	cout << "La calificacion del estudiante " << i << " en la materia " << j << " es de: " << matriz[i][j] << "\n";
	  	
	  }
  		cout << endl;
	  }
	  
	for (int i = 0; i <N;i++){
		
		cout<< "El promedio del estudiante " << i << " es de : " << promedio[i] << "\n";
		
	}
	  
	 
	  
	
}