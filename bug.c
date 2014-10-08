#include <stdio.h>
#include <stdlib.h>
/* This code contains some errors, use GDB to find them. */
void count(FILE *fp, int *size);
main()
{
int *size;
FILE *fp=fopen("test.txt","r");
if (fp == NULL) {
fprintf(stderr, "file does not exist\n");
return 0;
}
count(fp, size);
printf("The # of elements in the file is %d\n", *(size));
}
void count(FILE *fp, int *size)
{
*size=0;
int c;
while( fscanf(fp, "%d", &c)!=EOF ) {
*(size)++;
}
}
