#include<stdio.h>
int main()
{
  
  char* s;
  for(int i=1;i<=10;i++)
  {
    switch(i)
    {
    case 1 : s="one";
            break;
    case 2 : s="two";
            break; 
    case 3 : s="three";
            break;   
    case 4 : s="four";
            break;       
    case 5 : s="five";
            break;
    case 6 : s="six";
            break;           
    case 7 : s="seven";
            break;           
    case 8 : s="eight";
            break;           
    case 9 : s="nine";
            break;  
    case 10 : s="ten";
            break;                    
     }       
     printf("\nThis old man, he played %s\n",s);
     printf("He played knick-knack on my knee\n");
     printf("Knick-knack paddywhack, give your dog a bone\n");
     printf("This old man came rolling home\n\n\n");   
   }            
   return 0;
}   
