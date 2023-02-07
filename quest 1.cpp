// faça um programa que receba as idades de 10 pessoas e armazene em um vetor. mostre as idades em ordem crescente. Use ordenação por inserção//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void insertion_sort(int arr[], int n){
	int  i, j, aux;
	for(int i = 1; i < n; i++){
		aux = arr[i];
		int j = i - 1;
			
		while (aux > arr[j] && j>=0){
		    arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = aux;
	}
}


int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	// criar um vetor com o nome q se quer e o "tamanho ou quantidade"//	
	int idades[10];

//criar-se um laço for, aqui ele ta dizendo que comça em 1 e vai ate 10
	for(int i = 0; i < 10; i++){
	//pede para informar a quantidade de idades q serão informadas	
		printf("Informe as idades, por favor:\n ");
	    scanf("%d", &idades[i]);
	
	}
	//ele vai chamar a função criada la em cima de insertion_sort para a odenação das idades informadas
	 insertion_sort(idades,10);
	 
	//aqui ele cria outro for para mostrar as idades e em ordem, aqui pode se usar qualquer outra variavel, no caso escolhi "x"// 
	 for(int x=0; x<10; x++){
	 	
	 	printf("A Ordem decrescente das idades informadas são: %d\n", idades[x]);
	 	
	}

	
	return 0;
}
