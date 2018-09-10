//Questão 5

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

//O comando acima altera o conteúdo da constante "valor" por meio do ponteiro p1

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

//O comando acima altera o conteúdo da constante "temp" por meio do ponteiro p2


  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

//o ponteiro p3 ira receber o endereço da primeira posição de nome[]
//variavel aux ira receber o conteudo do endereço de p3
//O conteudo de aux será exibido

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

//o ponteiro p3 ira receber o endereço da posição 5 de nome[]
//variavel aux ira receber o conteudo do endereço de p3
//O conteudo de aux será exibido

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);

//será exibido a primeira posição de nome[]

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);

//será exibido a quinta posição de nome[]

  /* (g) */
  p3--;
  printf("%c \n", *p3);

//será exibido a quarta posição de nome[]

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

//será exibido a primeira posição de vetor[]

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

//será exibido a segunda posição de vetor[]

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

//será exibido a terceira posição de vetor[]


  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

//será exibido a primeira posição de vetor[]


  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

//será exibido a segunda posição de vetor[]


  /* (n) */
  p5++;
  printf("%d \n", *p5);

//será exibido a terceira posição de vetor[]

  return(0);

}
// Todas as respostas obtidas foram esperadas
