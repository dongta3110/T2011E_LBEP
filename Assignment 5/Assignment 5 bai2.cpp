#include<stdio.h>
int main() {
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int tmp[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("tmp[i][j] = ");
			scanf("%d",&tmp[i][j]);
		}
	}
	int tongc = 0,tongp = 0;
//	float tbcc,tbcp;
	for(int i=0;i<n;i++) {
		tongc += tmp[i][i];
	}
//	tbcc = tongc/n;
//	printf("tbc duong cheo chinh la: %f",tbcc);
	
	for(int i=0;i<n;i++) {
		tongp += tmp[i][n-i-1];
	}
//	tbcp = tongp/n;
//	printf("tbc duong cheo phu la: %f",tbcp);

	printf("tongc: %d",tongc);
	printf("\n tongp: %d",tongp);
}
