#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

int main() {
	int n[10];
	for (int i = 0; i < 10; i++) {
		n[i] = 0;
	}
	srand(time(NULL));
	int num[4] = { 0, 0, 0, 0 };
	for (int i = 0; i < 4; i++) {
		while (1) {
     		int o = 0;
			num[i] = rand() % 10;
			for (int j = 0; j < i; j++) {
				if (num[i] == num[j]) {
					o = 1;
				}
			}
			if (o == 0) {
				n[num[i]] = 1;
				break;
			}
		}
	}

	int try = 1;
	int b = 0;
	int s = 0;
	while (1) {
		b = 0;
		s = 0;
		int pnum[4] = { 0, 0, 0, 0 };
		for (int i = 0; i < 4; i++) {
			scanf("%d", &pnum[i]);
			if (n[pnum[i]] == 1) {
				if (num[i] == pnum[i]) {
					s++;
				}
				else {
					b++;
				}
			}
		}
		if (s == 4) {
			break;
		}
		else {
			printf("%d// %d ball   %d strike\n\n", try, b, s);
			try++;
			
		}
		
	}
	printf("%d %d %d %d\n", num[0], num[1], num[2], num[3]);

	

}