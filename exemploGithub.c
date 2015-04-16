#include<stdlib.h>
#include<stdio.h>

int main(){
	int nota=0, contador = 1;
	

	for(contador=6;contador>0;contador --)
	{
		printf("Digite a nota do aluno %d:",contador);
		scanf("%d[contador]", &nota);
		printf("A nota do aluno %d eh: %d \n", contador, nota);
		contador++;		
 	}	
	system("pause");
}
