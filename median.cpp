#include<cstdio>
#include<queue>
#include<functional>
#include<vector>
#include "kattislib.h"

int main() {

	int x;

	std::priority_queue<int, std::vector<int>, std::greater<int> > greaters_q;
	std::priority_queue<int, std::vector<int>, std::less<int> > less_q;

	int median;
	if (scanf("%d", &median) != 1) return -1;;
	printf("%d\n", median);


	while(scanf("%d", &x) != EOF) {

		if (x < median) {
			less_q.push(x);
			if (less_q.size() > greaters_q.size()) {
				greaters_q.push(median);
				median = less_q.top();
				less_q.pop();
			}
		}
		else {
			greaters_q.push(x);
			if (greaters_q.size() > less_q.size() + 1) {
				less_q.push(median);
				median = greaters_q.top();
				greaters_q.pop();
			}
		}

		printf("%d\n", median);
	}

	return 0;

};
