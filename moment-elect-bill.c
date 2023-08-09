#include<stdio.h>

main()
{

	int unit,amt,sur_charge,total_amt;
	
	printf("Enter Your Total consumed Unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amt=unit*0.5;
	}
	else if(unit<=150)
	{
		amt=((unit-50)*0.75)+25;
	}
	else if(unit<=250)
	{
		amt=((unit-150)*1.20)+100;
	}
	else
	{
		amt=((unit-250)*1.50)+220;
	}
	
	sur_charge=amt*0.20;
	total_amt=amt+sur_charge;
	
	printf("Elctricity Bill=Rs. %d",total_amt);
}