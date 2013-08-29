#include<stdio.h>
#include<cs50.h>
char to_upper(char );
int main()
{
  char* s;
  char* n;
  
  printf("Enter the string in lower case\n");
  s=GetString();
  n=s;
  int i=0;
  while(*s!='\0')
  {
    if(*s!=' ')
    {
    if(i%2==0)
     *s=to_upper(*s);
    i++;
    }
    s++;
  }  
  printf("your string : %s\n",n);
  return 0;
} 
char to_upper(char a)
{
   a= a-32;
   return a;
}     

