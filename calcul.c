#include <stdio.h>
#include <stdlib.h>

int main()

   int x , y ;
   char operteur;
    printf("entrez deux nombre:\n");
    scanf ("%d%d",&x,&y);
    printf ("veuillez entrer un operateur:\n");
    scanf (" %c",&operateur);
    switch(operateur);{
    case '+': printf("x+y=%d=",x+y);
             break;
    case  '-':printf("x-y=%d",x-y);
             break;
    case '*':printf("x*y=%d",x*y);
             break;
    case '/':if(y!=0)
              print("x/y=%d",x/y);
             else
              printf("la division par 0 est impossible\n");
              break;
 case 'q':printf("le programme sarrete");
          break;
    ("l'operateur est incorrect");
    //dzfault:printf("erreur");
              break
    return 0;

