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
	
	int j=0,sld=0;
	for(int i=0;i<n;i++) {
		if(ary[i]>0) {
			j++;
			if(j>sld) sld = j;
		}
		else j=0;
	}
	if(sld==0) printf("khong co so duong trong mang");
	else printf("sl cac so duong lien tiep nhieu nhat la: %d",sld);
}
