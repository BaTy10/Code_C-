#include<stdio.h>
#define MAX 50
void NhapSoNguyen(int a[], int &n){ //cau a
	do{
		printf("Nhap vao so nguyen gom n phan tu(3<n<50): ");
		scanf("%d",&n);
	}while (n <= 3 || n >= 50);
	for(int i = 0; i < n; i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
int Dem(int a[], int n, int x){ //cau b
	int linhcanh=9999999;
	a[MAX]=linhcanh;
	int i = 0, dem = 0;
	while(a[i]!=linhcanh){
		if(a[i]==x)
			dem++;
		i++;
		
	}
	return dem;
}
bool KTGiam(int a[],int n){ //cau c
	bool flag=true; //gia su day so giam dan
	int i;
	for(i=0;i<n-1;i++)
		if(a[i+1]>a[i]){
			flag=false;
			break;
		}
	return flag;
}
int main(){ // cau d
	int a[MAX],n,x;
	NhapSoNguyen(a,n);
	printf("Dem so luong phan tu x: %d\n",Dem(a,n,2));
	if(KTGiam(a,n))	
		printf("Day so theo thu tu giam dan.\n");
	else
		printf("Day so khong theo thu tu giam dan\n");
}