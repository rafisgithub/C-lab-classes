#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,discriminant,x1,x2,realPart,imaginaryPart;
	printf("Enter the coefficient of a,b and c:\n");
	scanf("%f %f %f",&a,&b,&c);
	discriminant=(b*b)-(4*a*c);
	if(discriminant>0){
		printf("Roots are real and different\n");
		x1=(-b+sqrt(discriminant))/(2*a);
		x2=(-b-sqrt(discriminant))/(2*a);
		printf("x1=%.2f and x2=%.2f",x1,x2);
	}else if(discriminant==0){
		printf("Roots are real and same.\n");
		x1=x2-b/(2*a);
		printf("x1 and x2=%.2f",x1);
	}else{
		realPart=-b/(2*a);
		imaginaryPart=sqrt(-discriminant)/(2*a);
		printf("x1=%.2f+%.2fi\n",realPart,imaginaryPart);
		printf("x2=%.2f-%.2fi\n",realPart,imaginaryPart);
	
		
	}
	return 0;
}
