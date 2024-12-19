#include <stdio.h>
#include <string.h>
struct sinhvien{
	char name[100];
	int age;
	long long phonenumber;
};
typedef struct sinhvien sinhvien;
int main(){
	sinhvien sv;
	fgets(sv.name,100,stdin);
	scanf("%d", &sv.age);
	scanf("%lld", &sv.phonenumber);
	printf("\nten:%s", sv.name);
	printf("\ntuoi:%d", sv.age);
	printf("\nso dien thoai:%lld", sv.phonenumber);
	return 0;
}