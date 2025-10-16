#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int year;

    printf("¬ведите год: ");

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d €вл€етс€ високосным, следовательно в нЄм 366 дней", year);
    }
    else {
        printf("%d €вл€етс€ невисокосным, следовательно в нЄм 365 дней", year);
    }

    return 0;
}