#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int tamanho;

	cout << "Qual tamanho deseja? ";
	cin >> tamanho;

	if(tamanho==1){
		tamanho = 2;
	}
	// Parte de cima do Losango
	for(int linhas=0;linhas<tamanho;linhas++){
		// Parte que afasta o desenho da borda
		for(int espacos_vazios=tamanho-linhas;espacos_vazios>=0;espacos_vazios--){
			cout << " ";
		}
		// Lado esquerdo do primeiro triangulo (metade do Losango)
		for(int triangulo_esquerda=0;triangulo_esquerda<=linhas;triangulo_esquerda++){
			cout << "*";
		}
		// Lado direito do primeiro triangulo (metade do Losango)
		for(int triangulo_direito=0;triangulo_direito<=linhas-1;triangulo_direito++){
			cout << "*";
		}
		cout << endl;
	}

	// Parte inferior do Losango
	for(int linhas=tamanho-2;linhas>=0;linhas--){
		// Parte que afasta o desenho da borda
		for(int espacos_vazios=tamanho-linhas;espacos_vazios>=0;espacos_vazios--){
			cout << " ";
		}
		// Lado esquerdo do segundo triangulo (metade do Losango)
		for(int triangulo_esquerda=0;triangulo_esquerda<=linhas;triangulo_esquerda++){
			cout << "*";
		}
		// Lado direito do segundo triangulo (metade do Losango)
		for(int triangulo_direito=0;triangulo_direito<=linhas-1;triangulo_direito++){
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}