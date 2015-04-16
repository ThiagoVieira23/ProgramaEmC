#include<stdlib.h>
#include<stdio.h>

int main(){
	int nota=0, contador = 1;
	

	while(contador < 6)
	{
		printf("Digite a nota do aluno %d:",contador);
		scanf("%d[contador]", &nota);
		printf("A nota do aluno %d eh: %d \n", contador, nota);
		contador++;		
 	}	
	system("pause");
}
