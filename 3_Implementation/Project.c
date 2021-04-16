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
	printf("--->%ld",dp);
	return dp;
}

int main()
{
	int yy,dd,mm;
	int leapYears,count,scount;
	int i=1;
	long int dp;

	printf("\nEnter the year: ");
	scanf("%d",&yy);
	if(yy>=1900 && yy<=2900)
	{		
	do
	{
		printf("\nEnter the month: ");
		scanf("%d",&mm);
		if(mm<1 || mm>12){
			printf("\nInvalid Month\n");
		}
	}
	while(mm<1||mm>12);	
	  	  
	dd= NumberofDays(mm,yy);
 
	dp= LeapYears(yy);
	
	switch(mm)
	   {
	   	case 12:dp+=30;
		case 11:dp+=31;
		case 10:dp+=30;
		case  9:dp+=31;
		case  8:dp+=31;
		case  7:dp+=30;
		case  6:dp+=31;
		case  5:dp+=30;
		case  4:dp+=31;
		case  3:dp+=28;
		case  2:dp+=31;
		case  1:dp+=1;   
	   }
	   
	printf("\nMon Tue Wed Thu Fri Sat Sun");
	    switch(dp%7)
	    {
	    	case 1: count=0;
	    	        break;
	    	case 2: count=4;
	    	        break;
	    	case 3: count=8;
	    	        break;
	    	case 4: count=12;
	    	        break;
	    	case 5: count=16;
	    	        break;
	    	case 6: count=20;
	    	        break;
	    	default : count=24;
	    }
	    printf("\n");
	    scount=count;
	   while(scount>0)
	   {
	   	printf(" ");
	   	--scount;
	   }
	   while(dd>=i)
	   {
	    if(count%28==0)
	      printf("\n");
	   	printf("%3d ",i);
	   	i++;
	   	count+=4;
	   } 
	}
	else {
		printf("Invalid Year.");
	}
	   
	  return 0;
}
