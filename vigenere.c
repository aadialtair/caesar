/***************************************************************************
 * vigenere.c
 *
 * Vijay Kumar G C
 * vjkmr5492@gmail.com
 *
 * This program encrypts the given string using the specified key. 
 * The key is a string here.
 *
 ***************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>
char convert(char a,int k);
int compute_key(char temp);
int main(int argc,char* argv[])
{
    char c[100];
    char k[50];
    int i;
    //Check for proper no of arguments
    if(argc!=2)
    {
        printf("Improper no of arguments\n");
        return 1;
    }
    
    //copy the key string to array k[].
    for(i=0;i<strlen(argv[1]);i++)
    {
        k[i]=argv[1][i];
        if(!((k[i]>=65&&k[i]<=90)||(k[i]>=97&&k[i]<=122)))
        {
         printf("Improper key\n");
         return 1;
        }    
    }
      
    string p = GetString();
    i=0;
    int key;
    int j=0;
    
    
    while(p[i]!='\0')
    {   
        j=j%strlen(argv[1]);
        key=compute_key(k[j]);
        if((p[i]>=65&&p[i]<=90)||(p[i]>=97&&p[i]<=122)) 
        {
            c[i]=convert(p[i],key);
            j++;
        }
        else
        {
            c[i]=p[i];
        }        
        i++;
    }
    for(i=0;i<strlen(p);i++)
    {
        printf("%c",c[i]);  
    }  
    printf("\n"); 
  
    return 0;
} 


//Function to compute the key(integer) for a given character of the 
//input key string
int compute_key(char temp)
{
    if(temp>=65&&temp<=90)
        return temp-65;
    else
        return temp-97;
}    

//A function to encrypt a given character for a specied key(integer here). 
char convert(char a,int k)
{  
    char temp;
    if(a>=65&&a<=90)
    {
        a=a-65;
        a=(a+k)%26;
        a=a+65;
        temp=a;
    }
    else
    {
        if(a>=97&&a<=122)
        {
            a=a-97;
            a=(a+k)%26;
            a=a+97;
            temp=a;
        }
        else
        { 
            temp=a;
        }
    }
    return temp;
}    
  
