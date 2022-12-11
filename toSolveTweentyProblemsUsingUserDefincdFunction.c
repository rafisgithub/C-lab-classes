#include<stdio.h>
#include<string.h>
#include<math.h>
void displayTweentyProblems(){
	printf("Problem-01:C Program to calculate a simple interest\n");
	printf("Problem-02:C program to convert Total days to year, month and days\n");
	printf("Problem-03:C program to find Sum and Average of two numbers\n");
	printf("Problem-04:C Program to check whether number is EVEN or ODD\n");
	printf("Problem-05:C Program to find largest number among three numbers\n");
	printf("Problem-06:C Program to calculate the AREA of rectangle\n");
	printf("Problem-07:C program to calculate Gross Salary of an employee\n");
	printf("Problem-08:C program to convert temperature from Fahrenheit to Celsius and vice versa\n");
	printf("Problem-09:C Program to accept ten numbers and display sum of even and product of odd numbers\n");
	printf("Problem-10:C Program to check the occurence of digit in a given number\n");
	printf("Problem-11:C Program to find out the sum of first n numbers\n");
	printf("Problem-12:C Program to generate a table of a given input number\n");
	printf("Problem-13:C Program to check a triangle is a equilateral, isosceles or scalene\n");
	printf("Problem-14:C Program to check whether character is vowel or not\n");
	printf("Problem-15:C Program To find largest and smallest number and their positions\n");
	printf("Problem-16:C Program to find the gross and net salary\n");
	printf("Problem-17:C Program to find the roots of a quadratic equation\n");
	printf("Problem-18:C Program To calculate area and circumference of the circle\n");
	printf("Problem-19:C Program to Print integer value in Decimal, Octal, Hexadecimal\n");
	printf("Problem-20:C program to calculate x^n using pow function\n");

}


void displayPersonalInfo(){
	printf("###########################################\n");
	printf("\t\tPersonal Information.\n");
	printf("\t\tName: Rafi Ahmed\n");
	printf("\t\tID: CSE-2202026150\n");
	printf("\t\tID: 26A2\n");
	printf("\t\tID: +880 01646628341\n");
	printf("###########################################\n\n");
}
void calculateSimpleInterest(){
	        float principal,rate,time;
            float simpleInterest;
            printf("Enter the principal amount\n");
            scanf("%f",&principal);
            printf("\nEnter the rate of interest\n");
            scanf("%f",&rate);
            printf("\nEnter the time duration\n");
            scanf("%f",&time);
            simpleInterest=(principal*rate*time)/100;
            printf("\nThe simple interest is %f \n",simpleInterest);

}
void convertDaysIntoYearMonthDays(){
    int d,y,m,nd;
        printf("Enter number of days\n");
        scanf("%d",&d);
        y=d/365;
        d=d%365;
        m=d/30;
        nd=d%30;
        printf("\n%d years, %d months, %d days\n",y,m,nd);
}
void sumAndAvg(){
	     int a,b,sum;
        float avg;
    
        printf("Enter first number :\n");
        scanf("%d",&a);
        printf("\nEnter second number :\n");
        scanf("%d",&b);
        sum=a+b;
        avg= (float)(a+b)/2;
        printf("\nSum of %d and %d is = %d\n",a,b,sum);
        printf("\nAverage of %d and %d is = %f\n",a,b,avg);
}
void CheckEvenOrOdd(){
	  int num;
    printf("Enter an integer number :: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n%d is an EVEN number.",num);
    else
        printf("\n%d is an ODD number.",num);
}
void findLargestNum(){
	int a,b,c;
    int largest;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("\nEnter Second number\n");
    scanf("%d",&b);
    printf("\nEnter third number \n");
    scanf("%d",&c);
    if(a>b && a>c)
        largest=a;
    else if(b>a && b>c)
        largest=b;
    else
        largest=c;
    printf("\nLargest number is = %d \n",largest);

}
void areaOfRectangle(){
   int l,b;
  int area;
  printf("Enter the length of the rectangle\n");
  scanf("%d",&l);
  printf("\nEnter the breadth of the rectangle\n");
  scanf("%d",&b);
  area=l*b;
  printf("\nThe area of a rectangle is %d \n",area);
}
void grossSalaryOfAnEmplyee(){
	 
    char name[30];
    float basic, hra, da, pf, gross;
 
    printf("Enter name: ");
    gets(name);
 
    printf("Enter Basic Salary:\n");
    scanf("%f",&basic);
    printf("Enter HRA:\n");
    scanf("%f",&hra);
    printf("Enter D.A.:\n");
    scanf("%f",&da);

    pf= (basic*12)/100;
    gross=basic+da+hra+pf;
    printf("\nName: %s \nBASIC: %f \nHRA: %f \nDA: %f \nPF: %f \n***GROSS SALARY: %f ***",name,basic,hra,da,pf,gross);
}
void convertTemp(){
	
    float fh,cl;
    int choice;

    printf("\n1: Convert temperature from Fahrenheit to Celsius.\n");
    printf("\n2: Convert temperature from Celsius to Fahrenheit.\n");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&choice);

    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("\nTemperature in Celsius: %.2f",cl);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("\nTemperature in Fahrenheit: %.2f",fh);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
}
void sumOfEvenProductOfOdd(){
	int n,sum=0,mul=1,i;
  printf("Enter 10 numbers  \n");
  for(i=0;i<10;i++)
  {
      printf("\nEnter %d number \n ",i+1);
        scanf("%d",&n);
      if(n%2==0)
        sum=sum+n;
      else
        mul=mul*n;
  }
  printf("\nThe sum of evennumbers is : %d \n",sum);
  printf("\nThe multiplication of odd numbers is : %d\n",mul);
}
void checkOccurenceOfDigit(){
	int num,i,n,k,num1;
    printf("Enter any number \n");
    scanf("%d",&num);
    n=num;
    i=0;
    printf("\nEnter the digit \n");
    scanf("%d",&num1);

    while(n!=0)
    {
    k=n%10;
    n=n/10;
    if(k==num1)
    {
    i++;
    }
    }
    printf("\nThe occurrence of %d is %d times\n",num1,i);
}
void sunOfNnum(){
  int i=0,num,sum=0;
  printf("Enter a number\n");
  scanf("%d",&num);
  for(;i<num;i++)
  {
  sum=sum+i;
  }
  printf("\n The sum of numbers = %d",sum);
}
void GenarateATable(){
	int num,result,i=1;
  printf("Enter any number to generate the table : ");
  scanf("%d",&num);
  printf("\nThe table of %d is given below \n",num);
  while(i<=10)
  {
  result=num*i;
  printf(" %d * %d = %d\n",num,i,result);
  i++;
  }
}
void checkTriangle(){
	 int x,y,z;
  printf("Enter the sides of a triangle(x,y,z)\n");
  scanf("%d %d %d",&x,&y,&z);
  if((x==y) && (y==z))
  {
  printf("\nThe triangle is equilateral.");
  }
  else if((x==z) || (y==z) || (x==y))
  {
  printf("\nThe triangle is isoseles.");
  }
  else
  {
  printf("\nThe triangle is scalene.\n");
  }
}
void checkVowelOrCons(){
	 char ch;
  printf("Enter a character to check \n");
  scanf("%c",&ch);
  switch(ch)
  {
  case 'a':
         printf("\nThe entered character %c is a vowel\n",ch);
         break;
  case 'e':
         printf("\nThe entered character %c is a vowel\n",ch);
         break;
  case 'i':
         printf("\nThe entered character %c is a vowel\n",ch);
         break;
  case 'o':
         printf("\nThe entered character %c is a vowel\n",ch);
         break;
  case 'u':
         printf("\nThe entered character %c is a vowel\n",ch);
         break;
  default:
         printf("\nThe entered character %c is a consonant\n",ch);
  }
}
void findLandSN(){
	
    int A[25], max, min, maxpos, minpos, n, i;

    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("\nENTER %d ELEMENTS OF THE ARRAY \n",n);
    for(i=1; i<=n; i++)
    {
     printf("\nENTER %d ELEMENT OF THE ARRAY \n",i);
     scanf("%d", &A[i]);
    }
    max = A[1];
    maxpos = 1;
    for(i=1; i<=n; i++)
    {
    if(max<A[i])
    {
    max = A[i];
    maxpos = i;
    }
    }
    min = A[1];
    minpos = 1;
    for(i=1; i<=n; i++)
    {
    if(min>A[i])
    {
    min = A[i];
    minpos = i;
    }
    }
    printf("\nTHE LARGEST ELEMENT IS :: %d ", max);
    printf(" AND ITS POSITION IS : %d \n", maxpos);
    printf("\nTHE SMALlEST ELEMENT IS \n %d ", min);
    printf(" AND ITS POSITION IS :: %d \n", minpos);
}
void grossAndNetSalary(){
	float basic, da, hra, tax, pf, gross, net;
    char name[50];

    printf("ENTER YOUR NAME \n");
    scanf("%s", &name);
    printf("\nENTER THE BASIC SALARY \n");
    scanf("%f", &basic);
    pf = 0.08 * basic;
    if (basic < 5000)
    {
    da = 0.3 * basic;
    hra = 0.08 * basic;
    }
    else if ((basic >= 5000) && (basic < 10000))
    {
    da = 0.4 * basic;
    hra = 0.1 * basic;
    }
    else
    {
    da = 0.5 * basic;
    hra = 0.2 * basic;
    }
    gross = basic + da + hra;
    net = gross - tax + pf;
    printf("\n\nTHE GROSS SALARY IS :: %f\n", gross);
    printf("\n\nTHE NET SALARY IS :: %f\n", net);
}
void rootOfAQuadraticE(){
	
    int A, B, C;
    float disc, deno, x1, x2;
    printf("ENTER THE VALUE OF A \n");
    scanf("%d", &A);
    printf("\nENTER THE VALUE OF B\n");
    scanf("%d",&B);
    printf("\nENTER THE VALUE OF C\n");
    scanf("%d",&C);

    disc=(B*B)-(4*A*C);
    deno = 2 * A;
    if(disc > 0)
    {
    printf("\nTHE ROOTS ARE REAL ROOTS.");
    x1 = (-B/deno)+(sqrt(disc)/deno);
    x2 = (-B/deno)-(sqrt(disc)/deno);
    printf("\n\nTHE ROOTS ARE :: %f and %f\n", x1, x2);
    }
    else if(disc == 0)
    {
    printf("\nTHE ROOTS ARE REPEATED ROOTS.\n");
    x1 = -B/deno;
    printf("\n\nTHE ROOT IS :: %f\n", x1);
    }
    else
    printf("\nTHE ROOTS ARE IMAGINARY ROOTS.\n");

}
void areaAndCircumstanceOfCircle(){
	float area, radius, circum;

    printf("ENTER THE RADIUS OF THE CIRCLE :: ");
    scanf("%f", &radius);
    area = 3.142 * radius * radius;
    circum = 2 * 3.142 * radius;
    printf("\nTHE AREA OF THE CIRCLE IS :: %f", area);
    printf("\n\nTHE CIRCUMFERENCE OF THE CIRCLE IS :: %f\n", circum);
}
void printIntigerIntoDeciOdctalHexa(){
	 int value=3412;

    printf("Decimal value is: %d\n",value);
    printf("\nOctal value is: %o\n",value);
    printf("\nHexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("\nHexadecimal value is (Alphabet in capital letters): %X\n",value);
}
void powOfNnum(){
	
    int x,n;
    int result;

    printf("Enter the value of base: \n");
    scanf("%d",&x);

    printf("\nEnter the value of power:\n");
    scanf("%d",&n);

    result =pow((double)x,n);
    printf("\n%d to the power of %d is= %d\n", x,n, result);
}
int main(){
	displayPersonalInfo();
	displayTweentyProblems();
	while(1){
	int choice;
	printf("\nWhich problem solutin do you wanna see.Please choose an option.:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		    calculateSimpleInterest();
		    break;
		case 2:
			convertDaysIntoYearMonthDays();
			break;
		case 3:
			sumAndAvg();
			break;
		case 4:
			CheckEvenOrOdd();
			break;
		case 5:
			findLargestNum();
			break;
		case 6:
			areaOfRectangle();
			break;
		case 7:
			grossSalaryOfAnEmplyee();
			break;
		case 8:
			convertTemp();
			break;
		case 9:
			sumOfEvenProductOfOdd();
			break;
		case 10:
			checkOccurenceOfDigit();
			break;
		case 11:
			sunOfNnum();
			break;
		case 12:
			GenarateATable();
			break;
		case 13:
			checkTriangle();
			break;
		case 14:
			checkVowelOrCons();
			break;
		case 15:
			findLandSN();
			break;
		case 16:
			grossAndNetSalary();
			break;
		case 17:
			rootOfAQuadraticE();
			break;
		case 18:
			areaAndCircumstanceOfCircle();
			break;
		case 19:
			printIntigerIntoDeciOdctalHexa();
			break;
		case 20:
			powOfNnum();
			break;
	    default:
	    	printf("Are you blind?");
			
					
			
			
		
			}
	}
	
	
	return 0;
}
