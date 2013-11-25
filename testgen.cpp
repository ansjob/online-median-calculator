#include<cstdio>
#include<cstdlib>

int main() {

	for (int i = 0; i < 50*1000; ++i) {
		printf("%d ", random() % 256);
	}

	return 0;

};
