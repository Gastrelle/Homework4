#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int a, b;

    printf("������� ������� ������ ���� (A): ");
    scanf("%d", &a);

    printf("������� ������� ������ ���� (B): ");
    scanf("%d", &b);

    int cut_to_4 = (a % 2) != (b % 2);

    if (cut_to_4) {
        printf("������ ����� �� 4 �����\n");
    }
    else {
        printf("������ ����� �� 6 ������\n");
    }
    return 0;

}