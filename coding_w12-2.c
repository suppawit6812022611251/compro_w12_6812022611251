#include <stdio.h>

// ฟังก์ชันสำหรับสลับค่าด้วย pointer
void swap(int *a, int *b) {
    int temp = *a;  // เก็บค่าของ a ไว้ใน temp
    *a = *b;        // เปลี่ยนค่าของ a ให้เป็นค่าของ b
    *b = temp;      // เปลี่ยนค่าของ b ให้เป็นค่าของ temp (ค่าของ a เดิม)
}

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);  // เรียกใช้ฟังก์ชัน โดยส่ง address ของ a และ b
    printf("After  swap: a = %d, b = %d\n", a, b);

    return 0;
}