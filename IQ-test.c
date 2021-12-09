#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
  char a[5][5];
  for (int i = 0; i<4; i++){
    scanf("%s", a[i]);
  }
  printf("%c", a[3][3]);
}