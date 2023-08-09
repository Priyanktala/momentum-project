#include<stdio.h>
int main()
{
	char month;
	
	printf("Enter m for monday\n"),
	printf("Enter t for tuesday\n"),
	printf("Enter w for wednesday\n"),
	printf("Enter T for thursday\n"),
	printf("Enter f for friday\n"),
	printf("Enter s for saturday\n"),	
	printf("Enter S for sunday\n\n\n\n"),
	
	printf("Enter week's first letter=");
	scanf("%c",&month);
	
	switch(month)
	{
		case 'm' :  
					printf("monday");
					break;
		case 't' :  
					printf("tuesday");
					break;
		case 'w' :  
					printf("wednesday");
					break;
		case 'T' :  
					printf("thursday");
					break;
		case 'f' :  
					printf("friday");
					break;
		case 's' :  
					printf("saturday");
					break;
		case 'S' :  
					printf("sunday");
					break;
		default : 
					printf("pls Enter valid letter of month");
	}
}