#include <stdio.h> //เรียกใช้ไลบรารี

int main() { //เปิดจุดเริ่มต้นโปรแกรม และ เปิดบล็อกคำสั่ง
    char name[30]; //ประการตัวแปรชื่อ
    int age;  //ประการคัวแปรอายุ แบบจำนวนเต็ม
    float weight;//ประการตัวแปรน้ำหนักแบบทศนิยม
    


 printf("Enter your name, age, and weight: ");
    scanf("%s %d %f", name, &age, &weight);  //รับข้อมูลชื่อ อายุ น้ำหนัก

   
   
  
    


    
    printf("Student %s is %d years old.\nHis Weight is %.2f kg.", name, age, weight); //แสดงผลในรูปแบบประโยค ที่มี ข้อมูลชื่อ อายุ น้ำหนัก
    
    
    return 0; //ส่งค่ากลับว่าไม่มีข้อผิดพลาด
} //ปิดบล็อกคำสั่ง