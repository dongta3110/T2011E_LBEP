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
	
	int slcc = 0;
//	for(int i=0;i<n;i++) {
//		if(ary[i] %2 != 0) {
//			slcc = ary[i];
//		}
//	}
	for(int i=n-1;i>=0;i--) {
		if(ary[i]%2!=0) {
			slcc = ary[i];
			break;
		}
	}

	if(slcc==0) {
		printf("mang ko co so le");
	}
	else printf("so le cuoi cung la: %d",slcc);

	
}
