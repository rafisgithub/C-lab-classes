//Check Leap year if not then calculate the nearest leap year.
#include<stdio.h>
int leapYear1(int year){
	int x;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}else{
		x=year-1;
		leapYear1(x);
	}
}
int leapYear2(int year){
	int x;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}else{
		x=year+1;
		leapYear2(x);
	}
}
int main(){
	int year,q,w,dis1,dis2;
	printf("Enter any year to check:\n");
	scanf("%d",&year);
	if(year%400==0 || (year%100!=0 && year%4==0)){
		printf("%d is a leap year.\n",year);
	}else{
		q=leapYear1(year);
		w=leapYear2(year);
		dis1=year-q;
		dis2=w-year;
		if(dis1<dis2){
			printf("%d is not a leap year.\n",year);
			printf("The nearest leap year is %d",q);
		}else{
			printf("%d is not a leap year.\n",year);
			printf("The nearest leap year is %d",w);
		}
	}
	return 0;
}
