#include <stdio.h> // Standart giriş çıkışlar için.
#include <locale.h> // Türkçe karakterler

int main(){
	setlocale(LC_ALL, "turkish"); // Türkçe Karakterleri Ekliyoruz
    char *locale;
	printf("ı\n");

	getch();
	return 0;
}
