#include <stdio.h>

int main() {
    int x = 10;    // ประกาศตัวแปร x และกำหนดค่าเริ่มต้น
    int *ptr;      // ประกาศตัวชี้ (pointer)

    ptr = &x;      // ให้ ptr ชี้ไปที่ตัวแปร x

    printf("Before: x = %d\n", x);  // แสดงค่าของ x ก่อนเปลี่ยน

    *ptr = 20;     // ใช้ pointer เปลี่ยนค่าของ x ให้เป็น 20

    printf("After : x = %d\n", x);  // แสดงค่าของ x หลังเปลี่ยน

    return 0;
}