#include<stdio.h>
#include<stdlib.h>
float main()
{
	float a;
	printf("Enter Marks Obtained=");
	scanf("%f",&a);                     /* To take input of the marks*/
	if(a<=100 && a>=85)                 /* To apply the given conditions*/
    printf("Grade A");
    
    else if(a<=84 && a>=70)             /* To apply the given conditions*/
    printf("Grade B");
    
    else if(a<=69 && a>=55)             /* To apply the given conditions*/
    printf("Grade C");
    
    else if (a<=54 && a>=40)            /* To apply the given conditions*/
    printf("Grade D");
    
    else if( a>=0 &&   a<40)            /* To apply the given conditions*/
    printf("Grade F");
    
    else                                 /* For number entered other than marks*/
    printf("Invalid");
    
    
    return 0;

}
