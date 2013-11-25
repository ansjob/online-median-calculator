#include<cstdio>
#include<vector>
#include<algorithm>

int main() {
	int c;
	std::vector<int> v;
	while(scanf("%d", &c) != EOF) {
		v.push_back(c);
		std::sort(v.begin(), v.end());
		size_t len = v.size();
		printf("%d\n", v[(len -1)/2]);
	}


	return 0;
};
