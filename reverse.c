#include<stdio.h>
#include<string.h>

int main()
{
    char name1[40],name2[40];
    int len=0,i,j,k=0, cmp;

    printf("Enter the string:");
    gets(name1);

    //puts(name1);

  /*  i=0;
    while(name1[i++])
      len++;

   //printf("%d", len);

    for(j=len-1;j>=0 ;j--)
    {
        name2[k++]=name1[j];
    }
    name2[k]='\0';

    puts(name2);*/

    strcpy(name2, name1);

    strrev(name1);

    puts(name2);



    if(strcmp(name1,name2) == 0)
        printf("The entered string is Palindrome. \n");
    else
        printf("The entered string is not Palindrome. \n");


    return 0;
}
