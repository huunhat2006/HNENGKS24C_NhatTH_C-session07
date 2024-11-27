#include <stdio.h>

int main()
{
	// khai bao ham 
	int num[5]={1,2,3,4,5};
	// xu ly yeu cau 
	printf("%d\n",num[0]);
	printf("%d\n",num[1]);
	printf("%d\n",num[2]);
	printf("%d\n",num[3]);
	printf("%d\n",num[4]);
	int long_num = sizeof(num) / sizeof(num[5]);
	printf("Mang co kich thuoc la:%d",long_num); 
	 
	return 0;

 }

