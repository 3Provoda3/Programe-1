/*Дана програма призначена для
визначення периметра та площі трьох вершин трикутника*/
#include <stdio.h>
#include <math.h>


float distance(float x1, float y1, float x2, float y2) {
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;//Обчислюємо відстань між двома точками
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    float a, b, c, perimeter, area;//Оголошуємо змінні

    printf("Ведіть координати першої вершини: ");
    scanf("%f %f", &x1, &y1);
    printf("Введіть координати другої вершини: ");
    scanf("%f %f", &x2, &y2);
    printf("Введіть координати третьої вершини: ");//Введення змінних
    scanf("%f %f", &x3, &y3);

    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x1, y1);//Обчислюємо відстань між точками

    perimeter = a + b + c;
    printf("Perimeter = %.2f\n", perimeter);//Знаходимо периметр

    float s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %.2f\n", area);//Знаходимо площу

    return 0;//Кінець програми
}