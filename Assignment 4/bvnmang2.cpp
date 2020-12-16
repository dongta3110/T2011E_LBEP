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
	
	int sdnn = 0;
	for(int i=0;i<n;i++) 
		if(ary[i] > 0) {
			sdnn = ary[i];
			break;
		}
	if(sdnn != 0) {
		for(int i=0;i<n;i++) 
			if(ary[i] > 0 && ary[i] < sdnn) {
				sdnn = ary[i];
			}
		printf("so duong nho nhat trong mang la: %d", sdnn);
		}
	else printf("khong co so duong trong mang");
	}

