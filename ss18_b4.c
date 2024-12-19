#include <stdio.h>
#include <string.h>
struct sinhvien{
	int id[100];
	char name[100];
	int age;
	long long phonenumber;
};
typedef struct sinhvien sv;
int main(){
	int n;
	printf("nhap so luong sinh vien : ");
	scanf("%d", &n);
	sv a[n];
	for(int i=0;i<n;i++){
		printf("id[%d]\n", i+1);
		printf("nhap ten sinh vien thu %d:", i+1);
			fflush(stdin);
	fgets(a[i].name,100,stdin);

	printf("nhap tuoi sinh vien thu %d:", i+1);
	scanf("%d", &a[i].age);
	printf("nhap so dien thoai sinh vien thu %d:", i+1);
	scanf("%lld", &a[i].phonenumber);
	}
	for(int i=0;i<n;i++){
		printf("\nSINH VIEN THU %d",  i+1);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("tuoi:%d", a[i].age);
		printf("\nso dien thoai:%lld", a[i].phonenumber);
		printf("\n=================\n");
	}
	
	return 0;
}