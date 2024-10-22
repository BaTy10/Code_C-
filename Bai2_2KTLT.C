//Bai 2_2
#include<stdio.h>
#include<stdlib.h> // sinh so ngau nhien thi sai thu vien nay

#define FOR(i,a,b) for (i = a; i < b; i++)

void WriteF(char* s){ // cau a
	FILE* f = fopen(s, "w");
	if(f == NULL){
		printf("Khong mo duoc tap tin!\n");
	}
	else{
		int i,n,m;
		printf("Nhap vao so luong phan tu cua day so: ");
		scanf("%d",&n);
		fprintf(f,"%d\n",n); //ghi n vao file
		for(int i = 1; i <= n; i++){
			printf("Nhap vao phan tu thu %d: ",i);
			scanf("%d",&m);
			fprintf(f,"%d\t",m);
		}
		fclose(f);
	}
}
void Create_Matrix(){
	int i,j,n,m;
	char s[]="MaTran.inp";
	FILE* f = fopen(s, "w");
	if(f == NULL){
		printf("Error!");
	}
	else{
		do{
			printf("Nhap kich thuoc ma tran n: ");
			scanf("%d",&n);
		} while (n < 2 || n > 30);
		fprintf(f,"%d\n",n); //ghi n vao file
		
		FOR(i,0,n){
			FOR(j,0,n){
				m= rand()%1000;
				fprintf(f,"%d\t",m);
			}
			fprintf(f,"\n");
		}
		fclose(f);
	}
}
int main(){
	char* s="DaySo.inp"; //cau a
	WriteF(s);
	Create_Matrix();
	return 0;
}