
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void bubble_sort(int v[], int t){
	int aux;
	
	for(int i = 0; i < t; i++){
		//esse segundo for garante q percorra cada numero para ser realizada as trocas de ordenação//
		for(int j = 0; j < t - 1; j++){
			//aq no if, diz q se o primeiro numero for maior q o proximo entt troque de posição//
			if(v[j]>v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				printf("%d: Trocou %d por %d\n", i, aux, v[j+1]);
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	int v[5] = {5, 8, -5, 13};
	
	bubble_sort(v, 5);
	
	for(int i = 0; i < 5; i++){
		printf("%d", v[i]);
	}
	
	return 0;
}
