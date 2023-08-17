
#include <iostream>
using namespace std;
main(){
  const int TAM_MAX_MATRIZ = 4;
  int matriz[TAM_MAX_MATRIZ][TAM_MAX_MATRIZ];
  int i,j;
  int somaimpardp, somapards;
  	for (i=0;i<TAM_MAX_MATRIZ; i++){
  		for (j=0; j<TAM_MAX_MATRIZ; j++){
  		    cout << "Digite elemento ("<<
			  i << "-" << j << "): ";	
			  cin >> matriz[i][j];
		  }
	  }	
	cout << "\nMatriz Digitada: \n";
	for (i=0;i<TAM_MAX_MATRIZ; i++){
		cout << "\n";
  		for (j=0; j<TAM_MAX_MATRIZ; j++){
  		cout << matriz[i][j]<< "\t";	
  		}
  	}
  	cout << "\nElementos da DP: \n";
	for (i=0;i<TAM_MAX_MATRIZ; i++){
		cout << "\n";
  		for (j=0; j<TAM_MAX_MATRIZ; j++){
  		  if (i==j){
		  cout << matriz[i][j]<< "\t";	
  		  }
  		  else{
  		  cout << " *\t";	
			}
  	    }
    }
  	cout << "\nElementos da DS: \n";
	for (i=0;i<TAM_MAX_MATRIZ; i++){
		cout << "\n";
  		for (j=0; j<TAM_MAX_MATRIZ; j++){
  		  if (i+j==TAM_MAX_MATRIZ-1){
		  cout << matriz[i][j]<< "\t";	
  		  }
  		  else{
  		  cout << " *\t";	
			}
  	    }
    }
	cout << "\nSoma dos impares da DP: \n";
	for (i=0;i<TAM_MAX_MATRIZ; i++){
  		for (j=0; j<TAM_MAX_MATRIZ; j++){
  		  if ((i==j)&&(matriz[i][j]%2==1)){
		  somaimpardp = somaimpardp + matriz [i] [j];
  		  }
				
}
}
cout << somaimpardp;

	cout << "\nSoma dos pares da DS: \n";
	for (i=0;i<TAM_MAX_MATRIZ; i++){
  		for (j=0; j<TAM_MAX_MATRIZ; j++){
  		  if ((i==j)&&(matriz[i][j]%2==0)){
		  somapards = somapards + matriz [i] [j];
  		  }
}
}
cout << somapards;
}
