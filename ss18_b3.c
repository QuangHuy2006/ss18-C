#include <stdio.h>
#include <string.h>
struct sinhvien{
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
		printf("sinh vien thu %d\n", i+1);
		printf("nhap ten sinh vien thu %d:", i+1);
			fflush(stdin);
	fgets(a[i].name,100,stdin);

	printf("nhap tuoi sinh vien thu %d:", i+1);
	scanf("%d", &a[i].age);
	printf("nhap so dien thoai sinh vien thu %d:", i+1);
	scanf("%lld", &a[i].phonenumber);
	}
	for(int i=0;i<n;i++){
		printf("\nten:%s", a[i].name);
		printf("\ntuoi:%d", a[i].age);
		printf("\nso dien thoai:%lld", a[i].phonenumber);
	}
	
	return 0;
}