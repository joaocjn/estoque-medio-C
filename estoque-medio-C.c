//fun��o: Calcular o estoque m�dio de pe�as
//autor: Jo�o C�ndido

#include <stdio.h>
#include <locale.h>
int main ( ){
	setlocale(LC_ALL,"portuguese");
	
	//declara��o de vari�veis
	float estmed, qmin, qmax;
	
    //entradas
	printf ("Informe a quantidade m�nina: ");
    scanf ("%f", &qmin);
    printf ("Informe a quantidade m�xima: ");
    scanf ("%f", &qmax);

    //processamento
	estmed = (qmin + qmax) / 2;
	
	//sa�da
	printf ("O estoque m�dio da pe�a �: %.1f", estmed);

return 0;
}
