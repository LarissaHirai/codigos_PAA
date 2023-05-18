#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *v, int n) {
    if (n < 1)
        return;

    for (int i = 0; i < n - 1; i++)
        if (v[i] > v[i + 1])
            swap(&v[i], &v[i + 1]);

    bubbleSort(v, n - 1);
}

void preferencia(int *potencia,int *centena,char *ordenacao){
    printf("\nQual o numero de elementos a serem ordenados? 10 na potencia de 3, 4, 5 ou 6? ");
    scanf("%d", potencia);

    *centena=1;

    if (*potencia == 5) {
        printf("\nQual a centena de milhar desejada? de 1 a 9");
        scanf("%d", centena);
    }

    printf("\nDe que forma deseja os elementos no vetor? Digite a para aleatorio, c para crescente e d para decrescente. ");
    scanf("%s",ordenacao);

}

FILE* entrada(int potencia,int centena,char ordenacao,FILE *arquivo){
    if(potencia==3){
        if(ordenacao=='a'){
            arquivo = fopen("entrada_a_10a3.txt", "r");
        }else{
            if(ordenacao=='d'){
                arquivo = fopen("entrada_d_10a3.txt", "r");
            }else{
                arquivo = fopen("entrada_c_10a3.txt", "r");
            }
        }
    }
    if(potencia==4){
        if(ordenacao=='a'){
            arquivo = fopen("entrada_a_10a4.txt", "r");
        }else{
            if(ordenacao=='d'){
                arquivo = fopen("entrada_d_10a4.txt", "r");
            }else{
                arquivo = fopen("entrada_c_10a4.txt", "r");
            }
        }
    }
    if(potencia==6){
        if(ordenacao=='a'){
            arquivo = fopen("entrada_a_10a6.txt", "r");
        }else{
            if(ordenacao=='d'){
                arquivo = fopen("entrada_d_10a6.txt", "r");
            }else{
                arquivo = fopen("entrada_c_10a6.txt", "r");
            }
        }
    }
    if(potencia==5){
        if(centena==1){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_1x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_1x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_1x10a5.txt", "r");
                }
            }
        }
        if(centena==2){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_2x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_2x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_2x10a5.txt", "r");
                }
            }
        }
        if(centena==3){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_3x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_3x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_3x10a5.txt", "r");
                }
            }
        }
        if(centena==4){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_4x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_4x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_4x10a5.txt", "r");
                }
            }
        }
        if(centena==5){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_5x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_5x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_5x10a5.txt", "r");
                }
            }
        }
        if(centena==6){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_6x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_6x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_6x10a5.txt", "r");
                }
            }
        }
        if(centena==7){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_7x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_7x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_7x10a5.txt", "r");
                }
            }
        }
        if(centena==8){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_8x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_8x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_8x10a5.txt", "r");
                }
            }
        }
        if(centena==9){
            if(ordenacao=='a'){
                arquivo = fopen("entrada_a_9x10a5.txt", "r");
            }else{
                if(ordenacao=='d'){
                    arquivo = fopen("entrada_d_9x10a5.txt", "r");
                }else{
                    arquivo = fopen("entrada_c_9x10a5.txt", "r");
                }
            }
        }
        return arquivo;
    }
}

int main() {
    FILE *arquivo;
    int potencia;
    int centena;
    int tam_vetor;
    char ordenacao;

    preferencia(&potencia,&centena,&ordenacao);

    printf("\n potencia: %d",potencia);
    printf("\n centena: %d",centena);
    printf("\n ordenacao: %c",ordenacao);

    arquivo=entrada(potencia,centena,ordenacao,arquivo);

    tam_vetor = centena*(pow(10, potencia));

    int numeros[tam_vetor];
    int num_elementos = 0; // Variável para acompanhar o número de elementos


    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    

    while (fscanf(arquivo, "%d", &numeros[num_elementos]) == 1) {
        printf("\ntam_vetor: %d",tam_vetor);
        printf("\nnum_elementos: %d",num_elementos);
        if (num_elementos < tam_vetor) {
            num_elementos++;
        } else {
            printf("\nLimite maximo de numeros excedido.\n");
            break;
        }
    }

    printf("Aqui2");

    fclose(arquivo);

    // Exibir os números armazenados no vetor
    printf("\nNumeros no vetor antes de ordenar: ");
    for (int j = 0; j < num_elementos; j++) {
        printf("%d ", numeros[j]);
    }

    // Usar bubble sort
    bubbleSort(numeros, num_elementos);

    // Exibir os números armazenados no vetor após a ordenação
    printf("\nNumeros no vetor depois de ordenar: ");
    for (int j = 0; j < num_elementos; j++) {
        printf("%d ", numeros[j]);
    }

    return 0;
}
