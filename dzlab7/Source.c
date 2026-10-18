#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void) {
    int m, d, month, day;
    setlocale(LC_CTYPE, "RUS");
    printf("¬ведите количество мес€цев: ");
    scanf("%d", &m);
    printf("¬ведите количество дней: ");
    scanf("%d", &d);
    month = (m % 12) + 1;
    day = d + 1;

    switch (month) {
    case 1:
        printf("%d €нвар€\n", day);
        break;
    case 2:
        printf("%d феврал€\n", day);
        break;
    case 3: 
        printf("%d марта\n", day);
        break;
    case 4:
        printf("%d апрел€\n", day);
        break;
    case 5:
        printf("%d ма€\n", day);
        break;
    case 6: 
        printf("%d июн€\n", day);
        break;
    case 7:
        printf("%d июл€\n", day);
        break;
    case 8: 
        printf("%d августа\n", day);
        break;
    case 9: 
        printf("%d сент€бр€\n", day);
        break;
    case 10:
        printf("%d окт€бр€\n", day);
        break;
    case 11:
        printf("%d но€бр€\n", day);
        break;
    case 12:
        printf("%d декабр€\n", day);
        break;
    }

    
    


}