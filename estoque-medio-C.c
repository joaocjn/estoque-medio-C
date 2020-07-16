//função: Calcular o estoque médio de peças
//autor: João Cândido

#include <stdio.h>
#include <locale.h>
int main ( ){
	setlocale(LC_ALL,"portuguese");
	
	//declaração de variáveis
	float estmed, qmin, qmax;
	
    //entradas
	printf ("Informe a quantidade mínina: ");
    scanf ("%f", &qmin);
    printf ("Informe a quantidade máxima: ");
    scanf ("%f", &qmax);

    //processamento
	estmed = (qmin + qmax) / 2;
	
	//saída
	printf ("O estoque médio da peça é: %.1f", estmed);

return 0;
}
