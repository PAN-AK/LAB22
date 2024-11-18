#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

double Y(double a) {
	if (a > 1) {
		double res = log(fabs(sqrt(pow(a, 3))));
		return res;
	}
	else
		printf("x <= 1(ошибка)");
	return NAN;

}

double V(double b) {
	double res;
	if (b > 1) {
		res = sqrt(tan(pow(b, 2) - 1));
	}
	else if (b > 0 && b <= 1){
			res = (-2) * b;
	}
	else {
		res = exp(cos(b));
	}
	return res;


	

}

double S(double c) {
	double res = ((c - 1) / (c + 1) + 1 / 3 * pow((c - 1) / (c + 1), 3) + 1 / 5 * pow((c - 1) / (c + 1), 5) + 1 / 7 * pow((c - 1) / (c + 1), 7));
	return res;

}
void main() {
	setlocale(LC_ALL, "RUS");
	double x;
	char choice;
	printf("Введите х:\n");
	scanf(" %lf", &x);
	printf("Выберите функцию Y, V или S: ");
	scanf(" %c", &choice);
	switch (choice) {
	case 'Y':
		printf("%lf", Y(x));
		break;
	case 'V':
		printf("%lf", V(x));
		break;
	case 'S':
		printf("%lf", S(x));
		break;

	default:
		printf("Неизвестный символ!!!!!");
		break;


	}

}