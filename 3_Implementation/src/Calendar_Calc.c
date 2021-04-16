#include"inc\Calendar_Calc.h"

int NumberofDays(int mm,int yy){
	int dd;
	if(mm==4||mm==6||mm==9||mm==11)
	  {
	  	return dd=30;
	  }
	  
	else if(yy%4==0&&yy%100!=0||yy%400==0)
	  {
	  	if(mm==2)
	  	 {
	  	   return dd=29;	
	  	 }
	  }
	else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
	    return dd=31;
	    
	else
	  {
	  	if(mm==2)
	  	 {
	  	   return dd=28;	
	  	 }
	  }
	  
	 return 0;
}

long int LeapYears(int yy){
	int leapYears=(yy-1)/4-(yy-1)/100+(yy-1)/400;
	long int dp=(yy-1)*365l+leapYears;
	return dp;
}
