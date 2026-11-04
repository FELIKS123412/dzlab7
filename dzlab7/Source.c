#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void) {
    int m, d, month, day;
    setlocale(LC_ALL, "RUS");
    printf("Введите количество месяцев: ");
    scanf("%d", &m);
    printf("Введите количество дней: ");
    scanf("%d", &d);
    day = d + 1;
    month = (m % 12) + 1;

    switch (month) {
    case 1:
        printf("%d января\n", day);
        break;
    case 2:
        printf("%d февраля\n", day);
        break;
    case 3: 
        printf("%d марта\n", day);
        break;
    case 4:
        printf("%d апреля\n", day);
        break;
    case 5:
        printf("%d мая\n", day);
        break;
    case 6: 
        printf("%d июня\n", day);
        break;
    case 7:
        printf("%d июля\n", day);
        break;
    case 8: 
        printf("%d августа\n", day);
        break;
    case 9: 
        printf("%d сентября\n", day);
        break;
    case 10:
        printf("%d октября\n", day);
        break;
    case 11:
        printf("%d ноября\n", day);
        break;
    case 12:
        printf("%d декабря\n", day);
        break;
    }
    getchar();
    
    


}