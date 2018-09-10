static int compFloat(const void * a, const void * b)
{

    float * aa = (float *)a;
    float * bb = (float *)b;

    if (*aa > *bb)
        return 1;
    else
        if (*aa < *bb)
            return -1;
    else
        return 0;
}
chamada: qsort(v,N,sizeof(float),compFloat); // N é o tamanho de v
