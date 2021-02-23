#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
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
int space_char(char c){
  if(c == ' ' || c == '\t' || c == '\n' && c != '\0'){
    return 0;
  }
  return 1;
}

int non_space_char(char c){
  if(c != ' ' || c != '\t' || c == '\n' && c != '\0'){
    return 0;
  }
  return 1;
}
/*
char *word_start(char *str){
  
}

char *word_end(char *str){

}
int count_words(char *str){

}
*/
int count_char(char *arr){
  int count = 0;
  for(int i = 0; *(arr + i) != '\0'; i++){
    count++;
  }
  return count;
}


