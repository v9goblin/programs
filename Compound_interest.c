/*
  Name:James Githahu
  Reg no:CT101/G/26463/25
  Description:calculating compound intrest
  */
  #include <stdio.h>
  int main()
  {
  	float principle,rate,time,compounding_years,compound_intrest,final_amount;
  	printf("enter principle:");
  	scanf("%f" ,&principle);
  		
  	printf("enter rate:");
  	scanf("%f", &rate);
  	
  	printf("enter time:");
  	scanf("%f", &time);
  		
  	printf("enter compounding_years:");
  	scanf("%f", &compounding_years);
  	
  	final_amount = principle * pow((1+rate/100), time * compounding_years);
  	
  	compound_intrest =final_amount-principle;
  	
  	printf("your compound_intrest is ksh %.2f" ,compound_intrest);
  	
  	return 0;
  }
