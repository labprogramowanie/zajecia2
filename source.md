#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int silnia(int n) {
	int i, s;
	s = 1;
	for (i = 2; i <= n; i++)
		s = s*i;
		return s;
}

int fibon(int n) {
	int z = 1;
	int y = 1;
	int fibo;
	int i = 3;
	if (n > 2) {
		while (i <= n) {
			fibo = z + y;
			z = y;
			y = fibo;
				if (n == i) { return fibo; }
				i++;
		}
				}
	else if (n > 0 && n < 3)
		return 1;
}

void pierwiastki() {
	double a, b, c, delta, x1, x2, pier;
	printf("Podaj wspolcznynniki funkcji\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = b*b - 4 * a*c;
	if (delta >= 0) {
		pier = sqrt(delta);
		x1 = (-b + pier) / (2 * a);
		x2 = (-b - pier) / (2 * a);
		printf("Wspolczynniki: %lf, %lf\n", x1, x2);
	}
}

double max(double* tab, int n) {
	double m = tab[0];
	for(int i=0;i<n;i++)
	{
		if (tab[i] > m) { m = tab[i]; }
		return m;
	}
	return 1;
}

int main() {
	int a, b;
	char c;
	double f, g;
	double tab[20] = { 1,2,3,45,5 };


	while (1) {
		printf("1. Silnia\n2.Fibo\n3.Pierwiastki\n4.Max tablicy\nPodaj numer operacji: \n");
			scanf("%c", &c);
		switch (c) {
		case 'q': return 0;
		case '1':
			printf("Liczba do silni:");
			scanf("%i", &a);
			b = silnia(a);
			printf("Silnia(%d) = %d\n", a, b);
			break;
		case '2':
			printf("Liczba do fibo:");
			scanf("%i", &a);
			b = fibon(a);
			printf("fibon(%d) = %d\n", a, b);
			break;
		case '3':
			pierwiastki();
			break;
		case '4':
			//printf("Podaj ilosc elementow tablicy\n");
			//scanf("%d", &a);
			//double tab[0];
			//tab[0]
			//for (int i = 0; i < n; i++) {
			//	scanf("%lf", &tab[i]);
			//	printf("%lf", tab[i]);
			f = max(tab, 4);
			printf("max() = %lf\n", f);
			break;
		}
	}

	return 0;
}
