#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Informe um n�mero: ");
    scanf(" %d", &n);
    for(int i=2; i < n / 4 ; i++){
        if(n % i == 0){
            printf("Resposta: N�o � primo!\n");
            return 0;
        }
    }
    printf("Resposta: Primo!\n");



    return 0;
}