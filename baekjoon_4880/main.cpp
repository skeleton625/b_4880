#include <cstdio>

int a, b, c;
int main() {
	while (scanf_s("%d %d %d",&a,&b,&c) && (a||b||c)) {
		if (b*2==a+c) printf("AP %d\n", (b-a)+c);
		else printf("GP %d\n", c*b/a);
	}
	return 0;
}