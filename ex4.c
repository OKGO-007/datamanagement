##include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,num,heads=0,tails=0,j=0,total=0;

  //name
  char str[15];
  printf("What's your name?");
  scanf("%s", str);
  printf("Hellow, %s\n", str);

  printf("Rolling the dice... \n");

  srand((unsigned int)time(NULL));

  for(i = 0; i < 2;i++){
    num = 1 + rand() % 6;

    if(num%2 == 0){
      printf("Die 1 %d:\n", i+1);
      total = total + num;
    }
    else{
      printf("Die 2 %d:\n",i+1);
      total = total + num;
    }
  }

  printf("Total value: %d\n", total);

  //you win part
  printf("%s win!", str);

  return 0;
}
