#include <stdlib.h> //para system ( "pause" )
#include <stdio.h>
#include <ctype.h> //libreria para toupper

char letra;

 int main ()
 {
            printf ("\n DIGITE UNA LETRA: ");
            scanf ("%c",&letra);

            
 
      
             switch( letraMayuscula )
             {
                      case 'A':
                           printf ("\t La letra %c es una vocal",letra);
                           break;

                      case 'E':
                          printf ("\t La letra %c es una vocal",letra);
                           break;

                      case 'I':
					                           printf ("\t La letra %c es una vocal",letra);
                          break;                         

                     case 'O':
                          printf ("\t La letra %c es una vocal",letra);
                          break;                         

                      case 'U':                           printf ("\t La letra %c es una vocal",letra);
                           break;
                          
                      default:
                      printf ("\t La letra %c es una consonante",letra);
             }
            
             printf("\n\n\n\t\t");
             system ( "pause" );
             return 0;
         }
