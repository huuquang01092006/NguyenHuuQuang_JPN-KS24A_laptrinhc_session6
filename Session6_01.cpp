#include <stdio.h>
int main (){
	int n1, n2, n3, n4 ,n5;
	printf("nhap so thu nhat: ");
	scanf("%d", &n1);
	printf("nhap so thu hai: ");
	scanf("%d", &n2);
	printf("nhap so thu ba: ");
	scanf("%d", &n3);
	printf("nhap so thu bon: ");
	scanf("%d", &n4);
	printf("nhap so thu nam: ");
	scanf("%d", &n5);
	if(n1 % 2 == 0){
		n1 = 0;
	} if(n2 % 2 == 0){
		n2 = 0;
	} if(n3 % 2 == 0){
		n3 = 0;
	} if(n4 % 2 == 0){
	    n4 = 0;
	} if(n5 % 2 == 0){
		n5 = 0;
	} if(n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0 || n5 < 0){
		printf("loi");
	} printf("tong cac so le la: %d", n1 + n2 + n3 + n4 + n5);
	return 0;
}
