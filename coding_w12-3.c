#include <stdio.h>

// ฟังก์ชันคูณค่าใน array ด้วย 2
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {  // arr[i] คือ *(arr + i)
        arr[i] = arr[i] * 2;   
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5}; // array
    int size = 5;

    printf("Before: ");
    for (int i = 0; i < size; i++) {  // แสดงค่าก่อนเปลี่ยน
        printf("%d ", a[i]);
    }

    doubleArray(a, size);  // ส่ง array เข้าไปในฟังก์ชัน (ส่ง pointer จริง ๆ)

    printf("\nAfter : ");
    for (int i = 0; i < size; i++) {  // แสดงค่าหลังเปลี่ยน
        printf("%d ", a[i]);
    }

    return 0;
}