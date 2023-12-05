#include<stdio.h>

main(){
	int a, b, c;
	
	printf("Enter measure of angle A : ");
	scanf("%d",&a);
	
	printf("Enter measure of angle B : ");
	scanf("%d",&b);
	
	c = 180 - a - b;
	
	printf("\nMeasure of angle C is %d",c);
}
