#include<stdio.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n; i++) {
	printf("\n Enter value: %d :", i+1);
	scanf("%d", &ary[i]);
	}
	
	int j=0,s=0;
	for(int i=0;i<n;i++) {
		if(ary[i]>0) {
			j += ary[i];
			if(j>s) s=j;
		}
		else j=0;
	}
	if(s==0) printf("khong co so duong trong mang");
	else printf("tong can tim la: %d",s);
}
