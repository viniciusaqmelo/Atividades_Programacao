#include  <stdio.h>





int size1, size2,i,j;

int main(){

    do {
        printf("Digite o tamanho do vetor 1: ");
        scanf("%i", &size1);
        getchar();

    } while (size1 < 1);

    

    do {
        printf("Digite o tamanho do vetor 2: ");
        scanf("%i", &size2);
        getchar();

    } while (size2 < 1);

    int vet1[size1], vet2[size2];


    for(i = 0; i < size1; i++){
       if(i == 0){
        
        printf("digite os elementos do primeiro vetor: ");
        scanf("%d", &vet1[i]);
        getchar();
        }


        else{

            int cond = 0;
            int valor;



             do {

                printf("Digite o valor %i: ", i+1);
                scanf("%i", &valor);
                getchar();

                // Verifica se valor ja existe no vetor
                for (int j = 0; j < i; j++) {
                    if (valor == vet1[j]) {
                        printf("Esse valor ja existe!\n");
                        j = i;
                    } else if (valor != vet1[j] && j == (i-1)) {
                        cond = 1;
                    }
                }

            } while (!cond);

            vet1[i] = valor;
            i++;
        }
    }
    for (i = 0; i < size2; i++){
       for (int i = 0; i < size2; ) {
        if (i == 0) {
            printf("Digite o valor %i: ", i+1);
            scanf("%i", &vet2[i]);
            getchar();

            i++;

        } else {

            int cond = 0;
            int valor;

            do {

                printf("Digite o valor %i: ", i+1);
                scanf("%i", &valor);
                getchar();

                // Verifica se valor ja existe no vetor
                for (int j = 0; j < i; j++) {
                    if (valor == vet2[j]) {
                        printf("Esse valor ja existe!\n");
                        j = i;
                    } else if (valor != vet2[j] && j == (i-1)) {
                        cond = 1;
                    }
                }

            } while (!cond);

            vet2[i] = valor;
            i++;

        }
    }
   

    printf("%i",vet1[i]);
    printf("%i", vet2[j]);
}








