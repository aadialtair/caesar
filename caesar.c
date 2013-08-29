/****************************************************************************
 * caesar.c.c
 *
 * Vijay Kumar G C
 * vjkmr5492@gmail.com
 *
 * This program encrypts the given string using the specified key. 
 *
 ***************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>
int main(int argc,char* argv[])
{
  char c[100];
  //Check for proper no of arguments
  if(argc!=2)
  {
    printf("Improper no of arguments\n");
    return 1;
  }
  
  int k=atoi(argv[1]);
  k=k%26;
  string p = GetString();
  // char* p=(char*)malloc(sizeof(char)*100);
  // char p[100];
  // scanf("%[^\n]s",&p);
  int i=0;
  
  //As long as we have not reached the end of string do the following
  while(p[i]!='\0')
  { 
    //If p[i] is a upper case letter.
    if(p[i]>=65&&p[i]<=90)
    {
      p[i]=p[i]-65;
      p[i]=(p[i]+k)%26;
      p[i]=p[i]+65;
      c[i]=p[i];
     }
    else
    {
     //If p[i] is lower case letter.
     if(p[i]>=97&&p[i]<=122)
     {
       p[i]=p[i]-97;
       p[i]=(p[i]+k)%26;
       p[i]=p[i]+97;
       c[i]=p[i];
     }
     else  //for any other character just copy as such.
     {
      c[i]=p[i];
     }
    }
     
    i++;
  }
  
  //print the encrypted data.
  for(i=0;i<strlen(p);i++)
  {
    printf("%c",c[i]);
  }  
  printf("\n"); 
  
  return 0;
}  
