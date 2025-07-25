#include <stdio.h> //เรียกใช้ไลบรารี

int main() { //เปิดจุดเริ่มต้นโปรแกรม  และ เปิดบล็อกคำสั่ง
    char name[30],subject,symbol; //ประกาศตัวแปร ชื่อ กับเกรด
    int age; //ประกาศตัวแปร อายุ แบบจำนวนเต็ม
    float height, grade; //ประกาศตัวแปร ส่วนสูง เกรดแบบตัวเลข 
    printf("=== รับข้อมูลนักเรียน ===\n");
    printf("ป้อนข้อมูลรูปแบบ: ชื่อเล่น อายุ ส่วนสูง วิชา เกรด ประสิทธิภาพ\n");
    printf("ตัวอย่าง: G 18 175.5 P 3.00  B\n");
    printf("ป้อนข้อมูลนักเรียน: ");
    scanf("%s %d %f %c %f %c", name, &age, &height, &subject, &grade, &symbol); //รับข้อ ชื่อเล่น อายุ ส่วนสูง วิชา เกรดแบบตัวเลข เกรด

   printf("%s is %d years old %.1f centimeters tall.\n In subject %c, %s got %.2f which is symbolized as '%c'\n",name,age,height,subject,name,grade,symbol); // แสดงผลขอความที่เอาตัวแปรทุกตัวมาใส่
    return 0; //ส่งค่ากลับว่าไม่มีข้อผิดพลาด

} //ปิดบล็อกคำสั่ง