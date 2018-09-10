int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf("&vet[%d] = %X",i, &vet[i]);
    printf("(f + %d) = %X",i, f+i);
  }
  return0;
}

/* Foi Mostrado:
   contador/valor/valor/endereco/endereco
   i=0 vet[0]=1.1 *(f+0)=1.1  &vet[0]=59203B20 (f+0)=59203B20
   i=1 vet[1]=2.2 *(f+1)=2.2  &vet[1]=59203B24 (f+1)=59203B24
   i=2 vet[2]=3.3 *(f+2)=3.3  &vet[2]=59203B28 (f+2)=59203B28
   i=3 vet[3]=4.4 *(f+3)=4.4  &vet[3]=59203B2C (f+3)=59203B2C
   i=4 vet[4]=5.5 *(f+4)=5.5  &vet[4]=59203B30 (f+4)=59203B30
*/
//foi obtido o resultado esperado

