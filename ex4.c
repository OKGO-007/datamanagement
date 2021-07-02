#include <stdlib.h>
#include <time.h>

int main(){
  int i,num,heads=0,tails=0,j=0;

  //name
  char str[15];
  printf("What's your name?");
  scanf("%s", str);
  printf("Hellow, %s\n", str);

  printf("Tossing a coin... \n");

  for(i = 0; i < 3;i++){
    num = rand();

    if(num%2 == 0){
      printf("Round %d: Head\n", i+1);
      heads++;
    }
    else{
      printf("Round %d: Tail\n",i+1);
      tails++;
    }
  }

  printf("Heads: %d, Tails: %d\n", heads, tails);

  //you win part
  printf("%s win!", str);

  return 0;
}
