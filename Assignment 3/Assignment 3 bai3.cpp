#include<stdio.h>

int main() {
	int a,b;
	printf("nhap 2 so: ");
	scanf("%d%d",&a,&b);
	if(a==b) {
		printf("UCLL la: %d",a);
	}
	while(a!=b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    printf("UCLL la: %d",a);
}
