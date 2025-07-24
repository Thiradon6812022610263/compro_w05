#include <stdio.h>

int main() {
    char name[30],subject,symbol;
    int age;
    float height, grade;
    printf("=== รับข้อมูลนักเรียน ===\n");
    printf("ป้อนข้อมูลรูปแบบ: ชื่อเล่น อายุ ส่วนสูง วิชา เกรด ประสิทธิภาพ\n");
    printf("ตัวอย่าง: G 18 175.5 P 3.00  B\n");
    printf("ป้อนข้อมูลนักเรียน: ");
    scanf("%s %d %f %c %f %c", name, &age, &height, &subject, &grade, &symbol);

   printf("%s is %d years old %.1f centimeters tall.\n In subject %c, %s got %.2f which is symbolized as '%c'\n",name,age,height,subject,name,grade,symbol);
    return 0;

}