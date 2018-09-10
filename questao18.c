#include <stdio.h>

int main(void){
    int vet1[4],vet2[4],vet3[4],i;
    for(i=0;i<10;i++){ 
        printf("Entre com o %dº elemento do primeiro vetor: ",i+1);
        scanf("%d",&vet1[i]);
    }
    printf("\n");
    for(i=0;i<4;i++){
        printf("Entre com o %dº elemento do segundo vetor: ",i+1);
        scanf("%d",&vet2[i]);
    }
    printf("\n\nRESULTADO DA SOMA: ");
    for(i=0;i<4;i++){
        vet3[i]=vet1[i]+vet2[i];
        printf("%d ",vet3[i]);
    }
    printf("\n\n");
    return 0;
}
