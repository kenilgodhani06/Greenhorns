#include<stdio.h>

main(){
	int base,a, b, c, hra, da, ta, gross;
	
	printf("Enter base salary : ");
	scanf("%d",&base);
	
	printf("Enter HRA : ");
	scanf("%d",&a);
	
	printf("Enter DA : ");
	scanf("%d",&b);
	
	printf("Enter TA : ");
	scanf("%d",&c);
	
	hra = (a*100)/base;
	da = (b*100)/base;
	ta = (c*100)/base;
	
	gross = base+hra+da+ta;
	
	printf("\nTotal salary is %d",gross);
	
}
