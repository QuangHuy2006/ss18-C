#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct dish{
	int id;
	char name[100];
	float price;
};
typedef struct dish ma;

void insert(ma *a){
	int x;
	printf("nhap vi tri mon muon chen vao:");
	scanf("%d", &x);
	if(x<0 || x>5){
		printf("khong hop le");
	}else{
		for(int i=6;i>=x;i--){
			strcpy(a[i].name,a[i-1].name);
			a[i].price=a[i-1].price;
		}
			fflush(stdin);	
		printf("nhap ten mon an:");
		gets(a[x].name);
		printf("nhap gia mon an:");
		scanf("%f",&a[x].price);
	}
	for(int i=1;i<=6;i++){
	printf("\nMon an thu %d", i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ngia:%.0f", a[i].price);
		printf("\n=================\n");
	}
}

void print(ma *a){
	for(int i=1;i<=5;i++){
		printf("\nMon an thu %d",  i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ngia:%.0f", a[i].price);
		printf("\n=================\n");
	}
}

void swap(ma *a, ma *b) {
    ma temp = *a;
    *a = *b;
    *b = temp;
}

void fix(ma *a){
	int x;
	printf("nhap ma sinh vien muon sua lai (id):");
	scanf("%d", &x);
	if(x< 0|| x>5){
		printf("khong hop le!");
	}else{
		for(int i=1;i<=5;i++){
			if(a[i].id==x){
			fflush(stdin);	
		printf("nhap ten mon an:");
		fgets(a[i].name,100,stdin);
		printf("nhap gia tien cua mon an:");
		scanf("%f", &a[i].price);
		break;
			}
		}
	}
	for(int i=1;i<=5;i++){
	printf("\nmon an thu %d",  i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ngia:%.0f", a[i].price);
		printf("\n=================\n");
	}
}

void increase(ma *a){
	for(int i=1;i<=5;i++){
		int minpos=i;
		for(int j=i+1;j<=5;j++){
			if(a[minpos].price>a[j].price){
				minpos=j;
			}
			swap(&a[i].price,&a[minpos].price);
		}
	}
	for(int i=1;i<=5;i++){
	printf("\nmon an thu %d", i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ngia:%.0f", a[i].price);
		printf("\n=================\n");
	}
}

void decrease(ma *a){
	for(int i=1;i<=5;i++){
		int minpos=i;
		for(int j=i+1;j<=5;j++){
			if(a[minpos].price<a[j].price){
				minpos=j;
			}
			swap(&a[i].price,&a[minpos].price);
		}
	}
	for(int i=1;i<=5;i++){
	printf("\nmon an thu %d",  i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ngia:%.0f", a[i].price);
		printf("\n=================\n");
	}
}

void deleted(ma *a){
	int x;
	printf("nhap id ban muon xoa:");
	scanf("%d", &x);
	if(x< 0 || x>5){
		printf("khong hop le!");
	}else{
		for(int i=x;i<=5;i++){
			strcpy(a[i].name,a[i+1].name);
			a[i].price=a[i+1].price;
		}
	}
	for(int i=1;i<=5-1;i++){
	printf("\nMon an thu %d", i);
		printf("\n=================");
		printf("\nten:%s", a[i].name);
		printf("\ngia:%.0f", a[i].price);
		printf("\n=================\n");
	}
}

void find(ma *a){
	int xpos;
	int cnt=0;
	char x[50];
	fflush(stdin);
	printf("nhap mon an ban muon tim kiem:");
	gets(x);
	for(int i=1;i<=5;i++){
		if(strcmp(a[i].name,x)==0){
			++cnt;
		}
	}
	if(cnt){
		printf("FOUND!");
	}else{
		printf("NOT FOUND!");
	}
}

void find2(ma *a){
	int L=1;
	int R=5;
	int m;
	float xvalue;
	char x[50];
	fflush(stdin);
	printf("nhap mon an ban muon tim kiem:");
	gets(x);
	for(int i=1;i<=5;i++){
		if(strcmp(a[i].name,x)==0){
			xvalue=a[i].price;
		}
	}
	while(L<=R){
		m=(L+R)/2;
		if(a[m].price>xvalue){
			R=m-1;
		}else if(a[m].price<xvalue){
			L=m+1;
		}else{
			printf("tim thay mon an %s o vi tri %d", x,m+1);
			break;
		}
	}
}
int main(){
	ma a[50];
	int choice;
	strcpy(a[1].name,"xoi");
	strcpy(a[2].name,"com");
	strcpy(a[3].name,"chao");
	strcpy(a[4].name,"mi");
	strcpy(a[5].name,"pho");
	a[1].price=3000;
	a[2].price=8000;
	a[3].price=5000;
	a[4].price=10000;
	a[5].price=30000;	
	do{
	printf("\n1:in ra cac mon co trong menu");
	printf("\n2:them mot mon an vao vi tri ngau nhien");
	printf("\n3:sua mot mon an");
	printf("\n4:xoa mot mon an");
	printf("\n5:sap xep cac mon an");
	printf("\n6:tim kiem mon an");
	printf("\n7:thoat");
	printf("\nnhap lua chon cua ban:");
	scanf("%d", &choice);
	if(choice==1){
		print(a);
	}
	if(choice==2){
		insert(a);
	}
	if(choice==3){
		fix(a);
	}
	if(choice==4){
		deleted(a);
	}
	if(choice==5){
		int choice2;
		printf("\n1:tang dan");
		printf("\n2:giam dan");
		printf("\nnhap lua chon cua ban:");
		scanf("%d", &choice2);
		if(choice2==1){
			increase(a);
		}
		if(choice2==2){
			decrease(a);
		}
	}
	if(choice==6){
	int choice2;
		printf("\n1:tuyen tinh");
		printf("\n2:nhi phan");
		printf("\nnhap lua chon cua ban:");
		scanf("%d", &choice2);
		if(choice2==1){
			find(a);
		}
		if(choice2==2){
			find2(a);
		}	
	}
	if(choice==7){
		printf("thoat chuong trinh!!");
	}
	}while(choice!=7);
	exit(0);
	return 0;
}