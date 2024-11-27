#include <stdio.h>

int main()
{
	// khai bao ham 
	int num[5];
	int i; 
	// yeu cau nguoi dung nhap so vao mang
	for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // in va ket thuc
	if(num[0]%2!=0 && num[1]%2!=0 && num[2]%2!=0 && num[3]%2!=0 && num[4]%2!=0){
		printf("Mang khong chua so chan\n");
	} 
	else{
		for (int i = 0; i < 5; i++) {
			if(num[i]%2==0){
				printf("So chan la:%d\n",num[i]);
			}
    }
	} 
   
	return 0;

 }

