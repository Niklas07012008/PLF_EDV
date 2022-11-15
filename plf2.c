#include <stdio.h>
int main (void)
{
  char cj[60] = {0};
  char cj2[60] = {0};
  int a;

  printf("Your Number: ");
  scanf("%s",cj);

  cj2 [0] = cj[0];
  cj [0] = cj[4];
  cj [4] = cj2[0];

  cj[0] = cj[0] - 48;
  cj[1] = cj[1] - 48;
  cj[2] = cj[2] - 48;
  cj[3] = cj[3] - 48;
  cj[4] = cj[4] - 48;

  a = cj[0] * 10000 + cj[1] * 1000 + cj[2] * 100 + cj[3] * 10 + cj[4]; 

  printf("New Number: %d",a);

  printf("\nNew Number:%d ",a*2);


}