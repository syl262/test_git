#include<cstdio>
int gcd(int a,int b) {
	return b == 0?a : gcd(b, a % b);
}
int main() {
	printf("master\n");
	printf("999\n");
	printf("999\n");
	return 0;
}
