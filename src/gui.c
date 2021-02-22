#include <stdio.h>
#define LIMIT 100
int main(){
  char arr[LIMIT];
  int i = 0;
  printf("> ");
  for(char input; (input = getchar())!= '\n' && i < LIMIT; i++){
    arr[i] = input;
    putchar(input);
  }
  printf("\n");

}

