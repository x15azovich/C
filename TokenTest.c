
#include <stdio.h>
#include <string.h>
#include "my.tokens.h"
int main( )
{
   myToken token;

   strcpy( token.name, "C Programming");
   strcpy( token.creater, "Anthony Zovich");
   token.id = 15;

   printf( "Token Name : %s\n", token.name);
 printf( "Token Creater : %s\n", token.creater);
   printf( "Token ID : %d\n", token.id);

   return 0;
}
