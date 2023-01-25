
#include <stdio.h>
#include <stdlib.h>

float peso,
      altura,
      idade,
      imc;
	  	     
int ideal[2][2];
int op=0;


void calc_imc()
{
	imc=(peso/(altura*altura));
}
    
void calc_ideal()
{
ideal[0][0]=18.5;
ideal[1][0]=25;
ideal[0][1]=((altura*altura)*ideal[0][0]);
ideal[0][2]=((altura*altura)*ideal[1][0]);
}
 
void mens_ideal()
{
	switch(op)
	{	
	case 0:
		
	printf("\nPara atingir um valor de IMC normal, seu peso deve estar entre %dKg e %dKg\n",ideal[0][1], ideal[0][2]);
			
	break;
	
	default:
	
	printf("\nPara manter o valor do seu IMC normal, seu peso pode variar entre %dKg e %dKg\n",ideal[0][1], ideal[0][2]);

	break;
    }
}
void tabela()
{
	if(imc<18.5)
    {
     printf("\nCLASSIFICACAO: ABAIXO DO PESO\n");
 	}
 	else if(imc>=18.5 && imc<25)
    {
     printf("\nCLASSIFICACAO: PESO NORMAL\n");
     op=1;
 	}
 	else if(imc>=25 && imc<30)
    {
     printf("\nCLASSIFICACAO: SOBREPESO\n");
 	}
 	else if(imc>=30 && imc<40)
    {
     printf("\nCLASSIFICACAO: OBESIDADE DO TIPO I\n");
 	}
 	else if(imc>=40)
    {
     printf("\nCLASSIFICACAO: OBESIDADE MORBIDA\n");
 	}
}

 
 
int main()
{

	printf("CALCULO DO INDICE DE MASSA CORPORAL(IMC)\n\n");
	printf("Idade:");
	scanf("%f", &idade);
	printf("Peso:");
	scanf("%f", &peso);
	printf("Altura:");
	scanf("%f", &altura);
	
	calc_imc();
	printf("\nSeu imc e de: %.2f\n ", imc);
	
	if(idade<18)
	{
		printf("\n*Clasificacao aplicada apenas para adultos.\n");
	}
	else
	{
		tabela();
	 	calc_ideal();
	 	mens_ideal();
	}
}

