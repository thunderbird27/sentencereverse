#include <stdio.h>
#include <stdlib.h>

void reverseWords(char *arr, char *out) 
{
    // your code goes here
  int len = strlen(arr);
  int outindex = 0;
  char data[len];
  for (int i = strlen(arr); i > 0; i --){
    if (arr[i] == ' ') {      
      for (int j = i+1; j <  len; j++)
      {
        data[outindex] = arr[j];
        outindex++;
      }
      data[outindex] = ' ';
      outindex++;
      len = i;    
    }
         
  }
  for (int j = 0; j <  len; j++)
      {
        data[outindex] = arr[j];
        outindex++;
      }
  strcpy(out,data);
  
}

int main() {
  char arr[] = { 'p', 'e', 'r', 'f', 'e', 'c', 't', '  ', 'm', 'a', 'k', 'e', 's', '  ', 'p', 'r', 'a', 'c', 't', 'i', 'c', 'e' };
  char out[strlen(arr)];
  reverseWords(arr, out);
  printf("%s",out);
  return 0;
}