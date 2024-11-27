#include <stdio.h>

int main()
{
	// khai bao ham 
	int num[5]={1,5,2,7,3};
	int i; 

    // in va ket thuc
    for (int i = 0; i < 5; i++) {
	if(num[i]%2!=0 ){
	num[i]	+=2; 
	} 
	else{
		for (int i = 0; i < 5; i++) {
			if(num[i]%2==0){
			num[i] +=3; 
			}
    }
	} 
	printf("%d ",num[i]);
}
	return 0;

 }

