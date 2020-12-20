#include<stdio.h>
int main() {
	int a,b,c;
	printf("nhap a = "); scanf("%d",&a);
	printf("nhap b = "); scanf("%d",&b);
	printf("nhap c = "); scanf("%d",&c);
	
	if(a>b) {
		if(b>c) {
			printf("so nho nhat la: &d",c);
		}
		else printf("so nho nhat la: &d",b);
		}
	else {
		if(a>c) {
		printf("so nho nhat la: %d",c);
		}
		else printf("so nho nhat la: %d",a);
	}
}
