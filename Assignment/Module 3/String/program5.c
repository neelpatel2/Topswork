//Write a program in C to compare two strings without using string library functions
#include <stdio.h>
#include<string.h>
int main (){
  char str[50],str2[50];
  printf("Enter String 1");
  gets(str);
  printf("Enter String 2");
  gets(str2);
  int len=strlen(str);
  int len2=strlen(str2);
  if (len<len2){
     printf("\n String1 is less than string2");
  }
     else if(len>len2){
      printf("\n String2 is less than string1");
     }
     else{
      printf("Both String are equal\n");
     }
 
  }
  
