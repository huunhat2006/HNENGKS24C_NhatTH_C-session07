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

    // In các ph?n t? c?a m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ",num[i]);
    }
	return 0;

 }
