#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a,b ;
   char op ;
    printf("veuillez saisir la valeur de a:");
    scanf (" %d",&a);
    printf ("veuillez saisir l'operateur:");
    scanf (" %c",&op);
    printf ("veuillez saisir la valeur de b:");
    scanf (" %d",&b);
    switch(op){
    case '+' :printf("a+b= %d",a+b);
             break;
    case '-' :printf("a-b= %d",a-b);
             break;
    case '*' :printf("a*b= %d",a*b);
             break;
    case '/' :if(b!=0){
              printf("a/b= %d",a/b);}
             else {
              printf("la division par 0 est impossible");}
             break;
    default :printf ("l'operateur est incorrect");
             break;

    }

     return 0;
}


