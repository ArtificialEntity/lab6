#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int year;

    printf("Введите год: ");

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d является високосным, следовательно в нём 366 дней", year);
    }
    else {
        printf("%d является невисокосным, следовательно в нём 365 дней", year);
    }

    return 0;
}