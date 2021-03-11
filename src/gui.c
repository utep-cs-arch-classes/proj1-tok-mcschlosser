
#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#define LIMIT 100
void input(int userInput, char arr[]);

void main(){
  char arr[LIMIT];
  int userInput;
  char **t;
  printf("Enter a sentence: ");
  input(userInput, arr);
  count_words(arr);
  t = tokenize(arr);
  print_tokens(t);
  free_tokens(t);
}
void input(int userInput, char arr[]){
  int i = 0;
  while((userInput = getchar()) != '\n'){ 
    arr[i] = userInput;
    //putchar(userInput);
    i++;
  }
  arr[i] = '\0';
}



