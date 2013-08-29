#include<stdio.h>
int main()
{
  
  char* s[6];
  s[1]="one";
  s[2]="two";
  s[3]="three";
  s[4]="four";
  s[5]="five";
  for(int i=1;i<=5;i++)
  {     
     printf("\nThis old man, he played %s\n",s[i]);
     printf("He played knick-knack on my knee\n");
     printf("Knick-knack paddywhack, give your dog a bone\n");
     printf("This old man came rolling home\n\n\n");   
   }            
   return 0;
}   
