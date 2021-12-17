#include <stdio.h> // Standart giriş çıkışlar için.
#include <locale.h> // Türkçe karakterler
#include <windows.h> // Arkaplan ve yazı rengi
#include <conio.h>

int main(){
	setlocale(LC_ALL, "turkish"); // Türkçe Karakterleri Ekliyoruz
	system("color f9"); // Arkaplan ve yazı rengi

	printf("Artık türkçe karakterler kullanabiliriz.\n");

	getch();
	return 0;
}
