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
	strcpy(sv.name, "Ton Pham Quang Huy");
	sv.age = 18;
	sv.phonenumber = 987979098;
	printf("\nten:%s", sv.name);
	printf("\ntuoi:%d", sv.age);
	printf("\nso dien thoai:0%lld", sv.phonenumber);
	return 0;
}