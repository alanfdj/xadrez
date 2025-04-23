#include <stdio.h>

int main(){



    //RESERVANDO VARIAVEIS
    int casastorre = 1;
    int casasbispo = 1;
    


    printf("\n\nMOVIMENTOS DA TORRE\n\n");
//MOVIMENTO DA TORRE
while (casastorre <= 5)
{

    printf("Direita\n");
    casastorre++;
}



printf("\n\nMOVIMENTOS DO BISPO\n\n");
//MOVIMENTO DO BISPO
do
{
    printf("Cima, Direita\n");

    casasbispo++;

} while (casasbispo <=5);



printf("\n\nMOVIMENTOS DA RAINHA\n\n");
//MOVIMENTO DA RAINHA
for (int casasrainha = 1; casasrainha <= 8; casasrainha++)
{
    
    printf("Esquerda\n");

}


return 0;


}