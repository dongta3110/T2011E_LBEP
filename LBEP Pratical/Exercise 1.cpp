#include<stdio.h>
#include<math.h>
bool kiemtra(int a,int b,int c) {
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
		return true;
		return false;
}
int chuvi(int a,int b,int c) {
	int p = a+b+c;
	return p;
}

float dientich(int a ,int b,int c) {
	float p = (float)chuvi(a,b,c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
	int a,b,c;
	printf("nhap a= ");scanf("%d",&a);
	printf("\nnhap b= ");scanf("%d",&b);
	printf("\nnhap c= ");scanf("%d",&c);
	if(kiemtra(a,b,c)) {
		printf("co la 3 canh tam giac");
		printf("\nchu vi tam giac la: %d",chuvi(a,b,c));
		printf("\ndien tich tam giac la: %f",dientich(a,b,c));
	}else printf("khong la 3 canh tam giac");
	
}
