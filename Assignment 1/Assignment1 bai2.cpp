#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c;
	printf("nhap a = "); scanf("%d",&a);
	printf("nhap b = "); scanf("%d",&b);
	printf("nhap c = "); scanf("%d",&c);
	
	if(a==0) {
		if(b==0) {
			if(c==0) {
				printf("phuong trinh vo so nghiem");
			}
			else {
				printf("phuong trinh vo nghiem");
			}
		}
		else {
			printf("x= %f",-c/(float)b);
		}
	}
	else {
		int d = b*b-4*a*c;
		if(d==0) {
			printf("x1=x2= %f",-(float)b/(2*a));
		}
		else {
			if(d<0) {
				printf("phuong trinh vo nghiem");
			}
			else {
				float x1 = (-b+sqrt(d))/(2*a);
				float x2 = (-b-sqrt(d))/(2*a);
				printf("x1 = %f\n",x1);
				printf("x2 = %f\n",x2);
			}
		}
	}
}
