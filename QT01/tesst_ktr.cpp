#include <stdio.h>
#include <stdlib.h>
void P(int *x)
{
x=(int*)malloc(3*sizeof(int));
x[0]=10; x[1]=11; x[2]=12;
}
int main(int argc, char* argv[])
{
int M[3]={100, 110,120} ;
P(M);
printf("%d, %d, %d\n",M[0], M[1], M[2]);
return 0;
}
