#include <stdio.h>
int main(){
	int password = 12345, user;
	printf("nhap mat khau: ");
	scanf("%d", &user);
	if(password - user == 0){
		printf("mat khau dung");
	} else{
		printf("mat khau sai");
	}
	return 0;
}
