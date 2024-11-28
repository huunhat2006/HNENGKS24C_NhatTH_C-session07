#include <stdio.h>

int main()
{
	// khai bao ham 
	int num[5]={4,4,4,4,4};

    // in va ket thuc
    for (int i = 0; i < 5; i++) {
	if(num[i]%2!=0 ){
	num[i]	+=2; 
	} 
	else{
	num[i] +=3; 
	}
	printf("%d ",num[i]);
    }	 
	return 0;

 }

