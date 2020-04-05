#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a;
	printf("Enter Marks Obtained=");
	scanf("%f",&a);
	if(a<=100 && a>=85)
    printf("Grade A");
    
    else if(a<=84 && a>=70)
    printf("Grade B");
    
    else if(a<=69 && a>=55)
    printf("Grade C");
    
    else if (a<=54 && a>=40)
    printf("Grade D");
    
    else if( a>=0 &&   a<40)
    printf("Grade F");
    
    else
    printf("Invalid");
    
    
    return 0;

}
