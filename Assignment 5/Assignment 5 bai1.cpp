#include<stdio.h>
int main() {
	int m,n;
	printf("nhap so hang m= "); scanf("%d",&m);
	printf("nhap so cot n = "); scanf("%d",&n);
	int a[m][n];
	int b[m][n];
	int s[m][n];
	
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("a[i][j] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("b[i][j] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			s[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("tong 2 ma tran la:\n");
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("%5d",s[i][j]);
		}
	printf("\n");
	}
}
