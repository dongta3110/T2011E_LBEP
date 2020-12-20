#include<stdio.h>
int main() {
	int a,b;
	printf("nhap a = "); scanf("%d",&a);
	printf("nhap b = "); scanf("%d",&b);
	if(a>=b && b!=0) {
		printf("%f",(float)a/b);
	}
	else printf("%d",a*b);
}
