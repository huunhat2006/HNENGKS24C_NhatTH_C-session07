#include <stdio.h>

int main() {
    int num[5] = {20,5,31,10,66};
    int max = num[0];
    int min = num[0];

    for (int i = 1; i < 5; i++) {
        if (num[i] > max) {
            max = num[i]; 
        }
        if (num[i] < min) {
            min = num[i]; 
        }
    }

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    return 0;
}

