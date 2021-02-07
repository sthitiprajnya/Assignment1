#include <stdio.h>
int main()
{
 float a,b,c;
			  int k;
			  printf("enter the value of a \n");
			  scanf("%f", &a);
			  printf("enter the value of b \n");
			  scanf("%f", &b);
			  printf("now enter the operation you want: \n 1- add \n 2-subtract \n 3-multiply \n 4-divide \n");
			  scanf("%d",&k);
						 switch(k)
						  {
						  case 1: c=a+b;
						 		 printf("%f + %f = %f",a,b,c);
								  break;  
			              
						  case 2: c=a-b;
						 		 printf("%f - %f = %f",a,b,c);
								  break;
								    
			              case 3: c=a*b;
						 		 printf("%f * %f = %f",a,b,c);
								  break;  
			              case 4: c=a/b;
						 		 printf("%f / %f = %f",a,b,c);
								  break; 
								   
					      default: printf("invalid choice");
			                        
				           }
 return 0;           
                   }	 
