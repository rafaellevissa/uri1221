#include <stdio.h>

int main(void) {
 long long int casos, j, i, cont = 0;
 scanf("%lld", &casos);
 long long int vetor[casos];

 for(i = 0; i < casos; i++){
   scanf("%lld", &vetor[i]);
 }
 for(i = 0; i < casos; i++){
    cont = 0;
    for(j = 1; j <= vetor[i]; j++){
      if(vetor[i] % j == 0){
        cont++;
      }
    }
    if(cont == 2){
      printf("Prime\n");
    }else{
      printf("Not Prime\n");
    }
  }
}