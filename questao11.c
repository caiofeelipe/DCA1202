#include <stdio.h>

int main(){
  char a[4];
  int b[4];
  float c[4];
  double d[4];

  //exemplo para o char
  
  printf("%d, %d, %d, %d \n", a, a+1, a+2, a+3);
  printf("\n");

  //O char ocupou um 1 byte
  
  
  //exemplo para o int
  printf("%d, %d, %d, %d \n", b, b+1, b+2, b+3);
  printf("\n");

  //O int ocupou 4 bytes
  
  //exemplo para o float
  printf("%d, %d, %d, %d \n", c, c+1, c+2, c+3);
  printf("\n");
  
  //O float ocopou 4 bytes

  //exemplo para o double
  printf("%d, %d, %d, %d \n", d, d+1, d+2, d+3);
  printf("\n");
  
  //O double ocupou 8 bytes

return 0;
}


