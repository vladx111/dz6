#include <stdio.h>

int zadanie3() {
    int N;
    int a, b, c;
    int p;

    printf("Введите число N (N < 1000): ");
    if (scanf_s("%d", &N) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    if (N <= 0 || N >= 1000) {
        printf("N должно быть положительным и меньше 1000.\n");
    }
    else {
        a = N / 100;
        b = (N / 10) % 10;
        c = N % 10;

        p = a * b * c;

        printf("Произведение цифр числа %d равно %d\n", N, p);

        if (p >= 100 && p <= 999) {
            printf("Произведение является трёхзначным числом.\n");
        }
        else {
            printf("Произведение не является трёхзначным числом.\n");
        }
    }
    return 0;
}
