#include <stdlib.h> 
#include <stdio.h>
#include <ctype.h> 

char letra, letraMayuscula;

 int main ()
 {
            printf ("\n DIGITE UNA LETRA: ");
            scanf ("%c",letra);

            
 
      
             switch( letraMayuscula )
             {
                      case 'A':
                           printf ("\t La letra  es una vocal mayuscula",letra);
                           break;

                      case 'E':
                           printf ("\t La letra %c es una vocal mayuscula",letra);
                           break;

                      case 'I':
					         printf ("\t La letra %c es una vocal mayuscula",letra);
                          break;                         

                     case 'O':
                          printf ("\t La letra %c es una vocal mayuscula",letra);
                          break;                         

                      case 'U':     
					   printf ("\t La letra %c es una vocal mayuscula",letra);
                           break;
                    	case 'a':     
					   printf ("\t La letra %c es una vocal minuscula",letra);
                           break;
                           case 'e':     
					   printf ("\t La letra %c es una vocal minuscula",letra);
                           break;
                            case 'i':     
					   printf ("\t La letra %c es una vocal minuscula",letra);
                           break;
                            case 'o':     
					   printf ("\t La letra %c es una vocal minuscula",letra);
                           break;
                            case 'u':     
					   printf ("\t La letra %c es una vocal minuscula",letra);
                           break;
                           
                          
                      
             }
            
             
             return 0;
         }

