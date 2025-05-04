#include <stdio.h>
#include <windows.h>
#include <ctype.h>

int main(){
    SetConsoleOutputCP(65001);

    float nota1, nota2, media;
    char continuar;

   do {
        do
        {
            printf("\nDigite as notas de 0 a 10\n");
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

        }
        while ((nota1 > 10 || nota2 > 10) || (nota1 < 0 || nota2 < 0));
            media = (nota1 + nota2) / 2;
            printf("A média é %.1f\n", media);

            printf("Você quer continuar [S/N]? ");
            scanf(" %c", &continuar);

            continuar = toupper(continuar);

            while(continuar != 'S' && continuar != 'N'){
                printf("Opção inválida! Digite apenas S ou N: ");
                scanf(" %c", &continuar);
                continuar = toupper(continuar);
            }
   } 
   while (continuar == 'S');
   
   printf("FIM DO PROGRAMA!!!");
        
    return 0;
}