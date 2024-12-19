#include <string.h>
#include <stdio.h>
struct sinhvien{
	int id;
	char name[100];
	int age;
	long long phonenumber;
};
typedef struct sinhvien sv;
void insert(sv *a){
	int x;
	printf("nhap id muon chen vao:");
	scanf("%d", &x);
	if(x<0 || x>5){
		printf("khong hop le");
	}else{
		for(int i=6;i>=x;i--){
			strcpy(a[i].name,a[i-1].name);
			a[i].age=a[i-1].age;
			a[i].phonenumber=a[i-1].phonenumber;
		}
			fflush(stdin);	
		printf("nhap ten sinh vien thu %d:", x);
		gets(a[x].name);
		printf("nhap tuoi sinh vien thu %d:", x);
		scanf("%d", &a[x].age);
		printf("nhap so dien thoai sinh vien thu %d:", x);
		scanf("%lld", &a[x].phonenumber);
	}
	for(int i=1;i<=6;i++){
	printf("\nSINH VIEN THU %d", i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ntuoi:%d", a[i].age);
		printf("\nso dien thoai:0%lld", a[i].phonenumber);
		printf("\n=================\n");
	}
}
typedef struct sinhvien sv;
int main(){
	sv a[50];
	strcpy(a[1].name,"Nguyen Van A");
	strcpy(a[2].name,"Nguyen Van B");
	strcpy(a[3].name,"Nguyen Van C");
	strcpy(a[4].name,"Nguyen Van D");
	strcpy(a[5].name,"Nguyen Van E");
	for(int i=1;i<=5;i++){	
	a[i].age=18;
		a[i].phonenumber=123456789;
	}
	for(int i=1;i<=5;i++){
		printf("\nSINH VIEN THU %d",  i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ntuoi:%d", a[i].age);
		printf("\nso dien thoai:0%lld", a[i].phonenumber);
		printf("\n=================\n");
	}
	insert(a);
	return 0;
}