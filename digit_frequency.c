#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_len 1000
void main()
{
  int count=0,i,n;
  char s[max_len];
  char *p;
  scanf("%s",&s[max_len]);
  p=&s[0];
  n=strlen(s);
  for(i=0;i<n;i++)
 {   if(s[i]==1)
     { count++;
       }
    printf("%d\n",count);
   
}
  }
