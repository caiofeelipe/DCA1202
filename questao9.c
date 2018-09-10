#include <stdio.h>

int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%d ",*(vet+i));
    }
  }
// O programa acima em c exibe o conteudo de cada posicao do vetor vet[]

#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}

// O programa acima em c exibe o endereco de cada posicao do vetor vet[]

