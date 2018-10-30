#include<stdio.h>
#include<stdlib.h>

int LCM(int x, int y) {
	int RE = 0;
	for (int i = x; i <= x * y; i++)
	{
		if (i%x == 0 && i%y == 0) { RE = i; break; }
	}
	return RE;
}

int main() {
	int x, y;

	scanf_s("%d %d", &x, &y);

	printf("%d\n", LCM(x, y));

	system("pause");
	return 0;

}