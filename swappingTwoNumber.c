#include<stdio.h>
int main(){
	int x;
	int y;
//	int temp;
//	printf("Enter two integers:\n");
//	scanf("%d%d",&x,&y);
//	temp=x;
//	x=y;
//	y=temp;
//	printf("%d %d\n",x,y);

//without third variable
    printf("Enter two integers:\n");
	scanf("%d%d",&x,&y);
//   x=x+y;
//   y=x-y;
//   x=x-y;
//OR
     x=x*y;
     y=x/y;
     x=x/y;
   printf("%d %d\n",x,y);
	
	return 0;
}
