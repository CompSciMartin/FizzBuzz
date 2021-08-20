#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
  int n=0,f,b;

  char c[9] = "";
  char fizz[] = "Fizz";
  char buzz[] = "Buzz";


  printf("Which number would you like to count to?\n");
  scanf("%d", &n);

  printf("Which number would you like to 'fizz'? \n");
  scanf("%d", &f);

  printf("Which number would you like to 'buzz'? \n");
  scanf("%d", &b);
  printf("\n");

  clock_t start = clock(), diff;
  for (int i = 1; i <= n; i++) {
    c[0] = '\0';

    if(i%f==0){strcat(c, fizz);}
    if(i%b==0){strcat(c, buzz);}

    printf("%s", c);
    if ((i%f!=0)&&(i%b!=0)){
      printf("%d", i);
    }
    printf("\n");
  }

  diff = clock() - start;
  int msec = diff * 1000 / CLOCKS_PER_SEC;

  printf("Time taken %d seconds %d milliseconds", msec/1000, msec%1000);
   return 0;
}
