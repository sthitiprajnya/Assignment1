#include <stdio.h>
int main ()
{
 int n;	
 printf("enter the question no. whose solution you want to view\n");
 printf("1. Write a C program to enter two numbers and perform all arithmetic operations.\n2. Write a C program to enter temperature in Celsius and convert it into Fahrenheit and vice versa.\n3. Write a C program to enter the radius of a circle and find its diameter,circumference and area.");
 printf("\n4. Write a C program to input marks of five subjects Physics, Chemistry, Biology,Mathematics and Computer. \nCalculate percentage and grade according tofollowing:\nPercentage >= 90% : Grade A\nPercentage >= 80% : Grade B\nPercentage >= 70% : Grade C\nPercentage >= 60% : Grade D\nPercentage >= 40% : Grade E\nPercentage < 40% : Grade F\n5. Write a C program to check whether an alphabet is vowel or consonant using switch case.\n"); 
 scanf("%d",n);
 switch(n)
 {
 	case 1:
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
			                        
				           }	}	      
			 
 	break;
 	
 	case 2:
 		      {
			   float  a,b,centigrade, fahrenheit;
				 int x;
				 printf("choose you option\n");
				 printf("1. For Fahrenheit To Celsius\n");
				 printf("2. For Celsius To Fahrenheit\n");
				 printf("\n\nEnter Your Choice\n");
				 scanf("%d",&x);
				 switch(x)
				 {
				 case 1:
				  printf("\nEnter The Value of Fahrenheit Temperature: ");
				  scanf("%f",&a);
				  centigrade=5*(a-32)/9;
				  printf("\n\nCelsius Temperature: %f ",centigrade);
				  break;
				  
				 case 2:
				  printf("\nEnter The Value of Celsius Temperature: ");
				  scanf("%f",&b);
				  fahrenheit=((9*b)/5)+32;
				  printf("\n\nFahrenheit Temperature: %f ",fahrenheit);
				  break;
				  
				 default:
				 printf("\n\nWrong Choice.....Try Again!!!\n");
				 
				 }
			}
	break;
	
	case 3:			 
			{
				float radius, diameter, circumference, area;
			    printf("Enter radius of circle: ");
			    scanf("%f", &radius);
			    diameter = 2 * radius;
			    circumference = 2 * 3.14 * radius;
			    area = 3.14 * (radius * radius);
			    printf("Diameter of circle = %f units \n", diameter);
			    printf("Circumference of circle = %f units \n", circumference);
			    printf("Area of circle = %f sq. units ", area);
			}
	break;
	
	case 4:
			 {
			   int phy, chem, bio, math, comp; 
			    float per; 
			    printf("Enter five subjects marks: ");
			    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);
			    per = (phy + chem + bio + math + comp) / 5.0;
			    printf("Percentage = %f\n", per);
			    if(per >= 90)
			    {
			        printf("Grade A");
			    }
			    else if(per >= 80)
			    {
			        printf("Grade B");
			    }
			    else if(per >= 70)
			    {
			        printf("Grade C");
			    }
			    else if(per >= 60)
			    {
			        printf("Grade D");
			    }
			    else if(per >= 40)
			    {
			        printf("Grade E");
			    }
			    else
			    {
			        printf("Grade F");
			    }
			}
	break;
	
	case 5:				
	        {
			    char ch;
			    printf("Enter any alphabet: ");
			    scanf("%c", &ch);
			    switch(ch)
			    {
				        case 'A':
			            case 'E':
			            case 'I':
			            case 'O':
			            case 'U':
			            case 'a':
			            case 'e':
			            case 'i':
			            case 'o':
			            case 'u':
			                printf("%c is a VOWEL.\n",ch);
			                break;
			                
			            default:
			                printf("%c is a CONSONANT.\n",ch); 
			                
				    }	}  
	break;			  
				    			    
							 															
 }
 
return 0;
}
