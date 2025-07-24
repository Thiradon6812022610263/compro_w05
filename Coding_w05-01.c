#include <stdio.h>

int main() {
    char name[30];
    int age;
    float weight;
    


 printf("Enter your name, age, and weight: ");
    scanf("%s %d %f", name, &age, &weight); 

   
   
  
    


    
    printf("Student %s is %d years old.\nHis Weight is %.2f kg.", name, age, weight);
    
    
    return 0;
}