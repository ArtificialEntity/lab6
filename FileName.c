#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int year;

    printf("������� ���: ");

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d �������� ����������, ������������� � �� 366 ����", year);
    }
    else {
        printf("%d �������� ������������, ������������� � �� 365 ����", year);
    }

    return 0;
}