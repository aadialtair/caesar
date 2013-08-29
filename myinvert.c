#include<stdio.h>
char to_upper(char );
int main()
{
  char s[200];
  printf("Enter the string in lower case\n");
  scanf("%[^\n]s",s);
  printf("your string : %s\n",s);
  int i=0;
  int j=0;
  while(s[j]!='\0')
  {
    if((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122))
    {
     if(s[j]>=65&&s[j]<=90)
     {
       if(i%2==0)
       {   s[j]=to_lower(s[j]);
          i++;
       }
       else
       {
          s[j]=to_upper(s[j]);
          i++;
       }
      }
     }
    
    j++;
    
  }  
  printf("your string : %s\n",s);
  return 0;
} 
char to_upper(char a)
{
   a= a-32;
   return a;
} 
char to_lower(char a)
{
   a= a+32;
   return a;
} 
   

