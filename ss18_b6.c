#include <string.h>
#include <stdio.h>
struct sinhvien{
	int id;
	char name[100];
	int age;
	long long phonenumber;
};
typedef struct sinhvien sv;
void insert(sv *a,int n){
	int x;
	printf("nhap vi tri ban muon them (id):");
	scanf("%d", &x);
	if(x< 0){
		printf("khong hop le!");
	}else{
		for(int i=x;i<=n;i++){
			strcpy(a[i].name,a[i-1].name);
			a[i].age=a[i-1].age;
			a[i].phonenumber=a[i-1].phonenumber;
		}
			fflush(stdin);	
		printf("nhap ten sinh vien thu %d:", x);
		fgets(a[x].name,100,stdin);
		printf("nhap tuoi sinh vien thu %d:", x);
		scanf("%d", &a[x].age);
		printf("nhap so dien thoai sinh vien thu %d:", x);
		scanf("%lld", &a[x].phonenumber);
		}
	for(int i=1;i<=n+1;i++){
	printf("\nSINH VIEN THU %d", i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("tuoi:%d", a[i].age);
		printf("\nso dien thoai:0%lld", a[i].phonenumber);
		printf("\n=================\n");
	}
}
typedef struct sinhvien sv;
int main(){
	int n;
	printf("nhap so luong sinh vien : ");
	scanf("%d", &n);
	sv a[n+2];
	for(int i=1;i<=n;i++){
		a[i].id=i;
	printf("nhap ten sinh vien thu %d:", i);
			fflush(stdin);
	fgets(a[i].name,100,stdin);
	printf("nhap tuoi sinh vien thu %d:", i);
	scanf("%d", &a[i].age);
	printf("nhap so dien thoai sinh vien thu %d:", i);
	scanf("%lld", &a[i].phonenumber);
	}
	for(int i=1;i<=n;i++){
		printf("\nSINH VIEN THU %d",  a[i].id);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("tuoi:%d", a[i].age);
		printf("\nso dien thoai:0%lld", a[i].phonenumber);
		printf("\n=================\n");
	}
	insert(a,n);
	return 0;
}