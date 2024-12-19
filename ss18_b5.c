#include <string.h>
#include <stdio.h>
struct sinhvien{
	int id;
	char name[100];
	int age;
	long long phonenumber;
};
typedef struct sinhvien sv;
void fix(sv *a,int n){
	int x;
	printf("nhap ma sinh vien muon sua lai (id):");
	scanf("%d", &x);
	if(x< 0|| x>n){
		printf("khong hop le!");
	}else{
		for(int i=1;i<=n;i++){
			if(a[i].id==x){
			fflush(stdin);	
		printf("nhap ten sinh vien thu %d:", i);
		fgets(a[i].name,100,stdin);
		printf("nhap tuoi sinh vien thu %d:", i);
		scanf("%d", &a[i].age);
		printf("nhap so dien thoai sinh vien thu %d:", i);
		scanf("%lld", &a[i].phonenumber);
		break;
			}
		}
	}
	for(int i=1;i<=n;i++){
	printf("\nSINH VIEN THU %d sau khi sua la",  a[i].id);
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
	sv a[n+1];
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
	fix(a,n);
	return 0;
}