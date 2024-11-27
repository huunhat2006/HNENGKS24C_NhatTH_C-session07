#include <stdio.h>

int main() {
    int n;
    int mang[n]; 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}

