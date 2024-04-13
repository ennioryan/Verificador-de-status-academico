#include <stdio.h> 
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "portuguese");
    char nome[50];  
    float n1, n2, n3, media;  

    printf("Informe o nome do aluno: ");  
    fgets(nome, 50, stdin);  

    printf("Informe as notas do aluno: ");  
    scanf("%f %f %f", &n1, &n2, &n3);  
    
    media = (n1 + n2 + n3) / 3; 

    
    if (media >= 7) {
        printf("%s está aprovado com média %.2f\n", nome, media);
    } else if (media >= 3.5 && media < 7) {
        printf("%s está de recuperação com média %.2f\n", nome, media);
    } else {
        printf("%s está reprovado com média %.2f\n", nome, media);
    }

    return 0;  
}
