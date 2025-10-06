#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int a, b;

    printf("¬ведите уровень голода ¬ани (A): ");
    scanf("%d", &a);

    printf("¬ведите уровень голода ѕети (B): ");
    scanf("%d", &b);

    int cut_to_4 = (a % 2) != (b % 2);

    if (cut_to_4) {
        printf("–езать пиццу на 4 части\n");
    }
    else {
        printf("–езать пиццу на 6 частей\n");
    }
    return 0;

}