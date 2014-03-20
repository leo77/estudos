#include <stdio.h>
#include <stdlib.h>
#include <sys/io.h>
#define   DATA 0x378
#define STATUS DATA+1
#define CONTROL DATA+2
int main(int argc, char *argv[])
{
int i;
int portstatus=0;
int vByte;
unsigned char dados;
vByte = atoi(argv[1]); dados = (unsigned char)vByte;
printf("\nValor a ser enviado Byte:%d",dados,"\n");
portstatus = ioperm(DATA,3,1);printf ("\nestado da porta:%d",portstatus,"\n");
printf("\n");if (ioperm(DATA,3,1)==1) {printf("Erro de E/S");exit(1);}
outb(dados,DATA);
return 0;
}
