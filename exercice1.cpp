#include <iostream>
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

   int main() 
{

     int a, b;
     char opera;
     printf("veuillez saiser un nombre a:\n");
     scanf("%d",&a);
     printf("veuillez saiser un nombre b:\n");
     scanf("%d",&b);
     printf("veuillez saiser un opertateur:\n");
     scanf(" %c", &opera);
     switch(opera){
	 case'+':printf("a+b=%d",a+b);
	    break;
     case'-':printf("a-b=%d",a-b);
           break;
     case'*':printf("a*b=%d",a*b);
            break;
     case'/':if(b!=0)
     printf("a/b=%d",a/b);
        else
     printf("la divition par 0 est i,possible\n");
          break;
     case 'q':printf("l'utilisateur a quitter le programme");
     }
     
     return 0;
     
	 }
     
	 
	 
	
	  

	  
 
   			


