#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,sq;
	clrscr();
	scanf("%d",&n);
	i=2;
	sq=sqrt(n);
		while(i <= sq){
		if(n % i ==0){
		printf("The smallest number is %d\n", i);
		break;
		}
	i++;
	}
	if(i > sq){
	printf("the smallest number is %d\n", n);
	}
	getch();
}