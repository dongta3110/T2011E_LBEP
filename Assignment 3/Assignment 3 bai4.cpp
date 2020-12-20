#include<stdio.h>

int main() {
	int a,b;
	printf("nhap 2 so: ");
	scanf("%d%d",&a,&b);
	int bcnn;
	int c,d;
	c=a;
	d=b;
	if(a==b) {
		printf("BCNN la: %d",a);
	}
	while(a!=b){
		if(a>b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	bcnn=(c*d)/a;
	printf("BCNN la: %d",bcnn);
}
