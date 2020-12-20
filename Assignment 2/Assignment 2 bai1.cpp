#include<stdio.h>
int main() {
	int n;
	printf("nhap n = "); scanf("%d",&n);
	if(n>=2 && n<=7) {
		printf("day la thu 2-7");
	}
	else if(n==8) {
		printf("day la chu nhat");
	}
	else printf("khong phai ngay trong tuan");
}
