#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> // para o toupper


int main(){
setlocale(LC_ALL, "Portuguese");
char NomesVendedores[10][15], resposta;
int venda[10], maior=0, menor=99999999;
int percent[10], i=0, quant, NomeMa, NomeMe, per=0;
float percentVendaMa=0, percentVendaMe=0;

do{
    printf("Quantos vendedores? O máximo é 10 vendedores \n");
    scanf("%d", &quant);

    for(i=0; i < quant; i++){
        printf("\nNome do vendedor:");
        scanf(" %s", &NomesVendedores[i]); //mudei o %c para %s
        printf("Valor de venda:");
        scanf("%d", &venda[i]);
        printf("O percentual de venda(Digite 9 para 9%%):");
        scanf("%d", &percent[i]);
        printf("\n..................................................");

        if(venda[i]> maior){
            maior = venda[i];
            NomeMa = NomesVendedores[i];
            per = percent[i];
            percentVendaMa = maior * per /100;
        }

        if(venda[i]< menor){
            menor = venda[i];
            NomeMe = NomesVendedores[i];
            per = percent[i];
            percentVendaMe = menor * per/100;
        }
    }

    for(i=0; i< quant; i++){
        printf("\nO nome vendedor é: %s", NomesVendedores[i]);
        printf("\nO valor de venda é: %d", venda[i]);
        printf("\nA percentagem é de: %i\n\n", percent[i]);
    }
    printf("O nome do vendedor que alcançou a maior venda é %s e seu salário é %.2f", NomeMa, percentVendaMa);
    printf("\nO nome do vendedor que alcançou a menor venda é %s e seu salário é %.2f", NomeMe, percentVendaMe);
    printf("\n..................................................\n\n");

    printf("Deseja continuar (S/N)?\n");
    scanf(" %c", &resposta);
    resposta = toupper(resposta);


    printf("\n..................................................\n\n");

}
while(resposta == 'S');

return 0;
}
