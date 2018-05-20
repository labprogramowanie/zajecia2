#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

#include <string.h>



int silnia(int n) {

	int i, s; s = 1;

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

			z = y; y = fibo;

			if (n == i) { return fibo; }

			i++;
		}
	}

	else if (n > 0 && n < 3) return 1;
	return 0;
}



void pierwiastki() {

	double a, b, c, delta, x1, x2, pier;

	printf("Podaj wspolcznynniki funkcji\n");

	scanf("%lf %lf %lf", &a, &b, &c);

	delta = b*b - 4 * a*c;

	if (delta >= 0) {

		pier = sqrt(delta); x1 = (-b + pier) / (2 * a);

		x2 = (-b - pier) / (2 * a);

		printf("Wspolczynniki: %lf, %lf\n", x1, x2);

	}
	else{
        printf("Delta jest mniejsza od 0, brak rozwiązań w zbiorze liczb rzeczywistych \n");
	}
}



double max(double* tab, int n) {

	double m = tab[0];

	for (int i = 0; i<n; i++) {

		printf("Element tab[%i] to %lf \n", i, tab[i]);

		if (tab[i] > m) {

			m = tab[i];


		};
		//if ((i + 1) == n) { return m; }

	};
	return m;

}



/* void echo(char s[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		printf("%c%c", s[i], s[i]);
	}
} */

void echo(char *s) {

	while(*s) {

		printf("%c%c", *s, *s);
		++s;

	}

}


int ZliczIle(char s[], char c) {

	int i = 0;

	int p = 0;

	int k = strlen(s);



	while (k != i) {

		if (s[i] == c) { p = p + 1; }

		i++;
	}

	return p;



}



/*
void odwroc(char* s){
int k=strlen(s);
int i=0;
char *litera;
char *odwrotnie[100];
printf("Liczba znakow: %i\n", k);
while(k>0){
odwrotnie[i]= &(s[k-1]);
k--;
i++;
if (k==1){printf("Odwrotnie to: %s\n", odwrotnie);}
}
}*/



void odwroc(char* s) {

	int k = strlen(s); //d³ugosc stringu

	while (k>0) {

		printf("%c", s[k - 1]);

		k--;

	}

}



void sortuj(double* tab, int n) {
 double t;

for(int j=0; j<n-1; j++){
    for(int i=0; i<n-1; i++){
             if(tab[i]>tab[i+1]){
                             t=tab[i];
                             tab[i]=tab[i+1];
                             tab[i+1]=t;
                             }
                      }
                      }

    printf("Posortowane:\n");
    for(int i=0; i<n; i++){
            printf("%lf\n", tab[i]);
    }


}

int fiboR(int n) {
	if (n < 3) return 1;
	return fiboR(n - 1) + fiboR(n - 2);

}


void ZamienLitery(char* s) {
    int i=0;

while(s[i]){

    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+('a'-'A');
    }
    else if(s[i]>='a' && s[i]<='z')
    {
        s[i]=s[i]+('A'-'a');
    }
    i++;
}

printf("Ciag po zamianie to: %s \n", s);
}

int main() {

	int a, b;

	int maxtab = 5;

	int i = 0;

	char c, d;

	double f;

	double tab[5];

	char znaki[10];

	while (5) {

		printf("1.Silnia\n2.Fibo\n3.Pierwiastki\n");
		printf("4.Max tablicy\n5.Podwojony ciag znakow\n6.Wyszukiwanie znaku\n");
		printf("7.Odwrotnie napis\n8.Sortowanie tablicy rosnaco\n9.Zmiana wielkosci liter\n");
		printf("Podaj numer operacji : \n");
		scanf("%s", &c);

		switch (c) {



		case '1':



			printf("Liczba do silni:");

			scanf("%i", &a);

			b = silnia(a);

			printf("Silnia(%d) = %d\n", a, b);

			break;



		case '2':

		/*	printf("Liczba do fibo:");
			scanf("%i", &a);
			b = fibon(a);
			printf("fibon(%d) = %d\n", a, b);
			break; */
			printf("Liczba do fibo:");
			scanf("%i", &a);
			b = fiboR(a);
			printf("fibon(%d) = %d\n", a, b);
			break;

		case '3':

			pierwiastki();

			break;



		case '4':

			printf("Podaj %i element tablicy\n", maxtab);

			while (i<maxtab) {

				scanf("%lf", &tab[i]);

				i++;

			}

			f = max(tab, maxtab);

			printf("max() = %lf\n", f);

			break;



		case '5':

			printf("Podaj 10 znakow do ciagu:\n");

			scanf("%s", znaki);

			printf("Podwojone znaki to:\n");

			echo(znaki);

			printf("\n");


			break;



		case '6':
            printf("Podaj szukany znak: \n");

			scanf("%s", &d);

			printf("Podaj ciag do przeszukania: \n");

			scanf("%s", &znaki);



			printf("Ilosc wystapien znaku %c to: %i \n", d, ZliczIle(znaki, d));

			break;



		case '7':

			printf("Podaj ciag znakow:\n");

			scanf("%s", &znaki);

			odwroc(znaki);

			break;



		case '8':


			while (i<maxtab) {
                printf("Podaj %i element tablicy: \n", i);

				scanf("%lf", &tab[i]);

                printf("tab[%i]: %lf \n", i, tab[i]);

				i++;

			}

			sortuj(tab, maxtab);

			break;

		case '9':

			printf("Podaj ciag znakow:\n");

			scanf("%s", &znaki);
			ZamienLitery(znaki);
			break;


		default:

			printf("Nieznana opcja, sprobuj ponownie:\n");

		}

	}



	return 0;

}
