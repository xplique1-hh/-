#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	float g = 6;
	float v = 4;
	float s = 50;
	float t;
	t = s / (g + v);
	printf("галя бежит на встречу к вале со скоростью %.0f\n", g);
	printf("валя бежит на встречу к гале со скоростью %.0f\n", v);
	printf("расстояние между ними %.0f\n", s);
	printf("время до встречи: %.2f часа", t);
}