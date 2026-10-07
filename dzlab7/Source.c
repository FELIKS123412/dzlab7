#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int year, n, day;
	printf("¬ведите год XXI века: ");
	scanf("%d", &year);
	n = year - 2001;
	day = (1 + n + n / 4) % 7;
	switch (year)
	{
	case 2004:
	case 2008:
	case 2012:
	case 2016:
	case 2020:
	case 2024:
	case 2028:
	case 2032:
	case 2036:
	case 2040:
	case 2044:
	case 2048:
	case 2052:
	case 2056:
	case 2060:
	case 2064:
	case 2068:
	case 2072:
	case 2076:
	case 2080:
	case 2084:
	case 2088:
	case 2092:
	case 2096:
		day = (day + 6) % 7;
		break;
	default:
		day = (day + 5) % 7;
		break;
	}
	switch (day)
	{
	case 0:
		printf("1 сент€бр€ Ч воскресенье");
		break;
	case 1:
		printf("1 сент€бр€ Ч понедельник");
		break;
	case 2:
		printf("1 сент€бр€ Ч вторник");
		break;
	case 3:
		printf("1 сент€бр€ Ч среда");
		break;
	case 4:
		printf("1 сент€бр€ Ч четверг");
		break;
	case 5:
		printf("1 сент€бр€ Ч п€тница");
		break;
	case 6:
		printf("1 сент€бр€ Ч суббота");
		break;
	}
	return 0;
}
