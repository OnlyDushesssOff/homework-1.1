#include <stdio.h>
#include <locale.h>


 int main(){
   setlocale(LC_ALL, "Russian");

   float a = 80, b = 6;
   printf("Первое число = %d\n", (int)a);
   printf("Второе число = %d\n", (int)b);
   printf("Сумма = %f\n", a + b);
   printf("Разность = %f\n", a - b);
   printf("Произведение = %f\n", a * b);
   printf("Частное = %f\n", a / b);

    return 0;
 }