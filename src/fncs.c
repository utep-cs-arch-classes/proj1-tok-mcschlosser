#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>

int space_char(char c){
  if((c == ' ' || c == '\t' || c == '\n') && c != '\0'){
    return 0;
  }
  return 1;
}

int non_space_char(char c){
  if((c != ' ' && c != '\t') && c != '\n' && c != '\0'){
    return 0;
  }
  return 1;
}

char *word_start(char *str){
  char *pointer = str;
  while(space_char(*pointer) != 1 && *pointer != '\0'){
    pointer++;
  }
  return pointer;
}

char *word_end(char *str){
  char *pointer = str;
  while(non_space_char(*pointer) != 1 && *pointer != '\0'){
    pointer++;
  }
  return pointer;
}

int count_words(char *str){
  int words = 0;
  char *pointer = str;
  while(*pointer){
    pointer = word_start(pointer);
    pointer = word_end(pointer);
    words++;
  }

  printf("%d \n", words);
  return words;
}


char *copy_str(char *inStr, short len){
  int i = 0;
  char *pointer = malloc(sizeof(char)*(len+1));
  while(*inStr != '\0'){
    pointer[i] = *inStr;
    i++;
    inStr++;
  }
  pointer[len] = '\0';
  return pointer;
}


char **tokenize(char *str){
  int words = count_words(str);
  char **tokens = malloc((words+1)* sizeof(char*));
  int i = 0;
  while(i < words){
    str = word_start(str);
    int len = word_end(str) - word_start(str);
    tokens[i] = copy_str(str, len);
    str = word_start(word_end(str));
  }
  tokens[words] = 0;
  return tokens;
}


void print_tokens(char **tokens){
  int k = 0;
  while(tokens[k] != 0){
    printf("Tokens[%d] = %s\n", k, tokens[k]);
    k++;
  }
}

void free_tokens(char **tokens){
  char **tmp = tokens;
  while(*tokens != 0){
    free(*tokens);
    tokens++;
  }
  free(tmp);
}



