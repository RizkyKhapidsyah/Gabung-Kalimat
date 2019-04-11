/* 
	Copyright (c) 2019 by Rizky Khapidsyah
	Compiler : TDM-GCC 4.9.2 64-bit Release
	I.D.E    : Dev-Cpp
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int agrc, char *argv[])
{
	char Kalimat1[] = "Ini adalah sebuah";
	char Kalimat2[] = " penggabungan fungsi string!";
	char Kalimat3[50];

	strcpy(Kalimat3, Kalimat1);

	printf("Hasil penggabungan strcat   = %s\n", strcat(Kalimat3, Kalimat2));
	printf("Hasil penggabungan strncat  = %s\n", strncat(Kalimat1, Kalimat2, 14));

	_getch();
	return 0;
}
