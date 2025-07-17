#include <stdio.h>

int main() {
    char firstInitial = 'n';
    int age = 18;
    float weight = 80.0f;
    char gender = 'boy';

    printf("ตัวอักษรตัวแรกของชื่อ: %c\n", firstInitial);
    printf("อายุ: %d ปี\n", age);
    printf("น้ำหนัก: %.1f กก.\n", weight);
    printf("เพศ: %c\n", gender);

    return 0;
}