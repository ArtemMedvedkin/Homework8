#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int zd3();

int main() {
	setlocale(LC_CTYPE, ".UTF-8");

	zd3();

	return 0;
}

int zd3() {

	double y = 0;

	for (int i = 10; i <= 20; i++) {

		double start = i / 10.0;
		y += sin(start);
	}
	printf("%f", y);
	return 0;
}