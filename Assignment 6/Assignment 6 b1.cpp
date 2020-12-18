#include<stdi.h>
void nhapMang(int arr[], int n) {
	for(int i=0;i<n;i++) {
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void inMang(int arr[], int n) {
	for(int i=0;i<n;i++) {
		printf("%5d",ar[i]);
	}
}

void timkiem(int arr[], int n) {
	printf("nhap x = ");
	scanf("%d",&x);
	int kt = 0;
	for(i=0;i<n;i++) {
		if(arr[i] == x) {
			kt = 1;
			break;
		}
	}
	if(kt==1) return true;
	else return false;
}

int main() {
	
}
