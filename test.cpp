#include<cstdio>
int gcd(int a,int b) {
	return b == 0?a : gcd(b, a % b);
}
int main() {
	printf("666\n");
	return 0;
}
