#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max;

	printf("문자열의 최대 길이를 입력하세요: ");
	scanf("%d", &max);
	getchar();
	int i = max;
	int start = 0;
	int cnt = 0;

	

	char* arr1 = (char*)malloc(sizeof(char) * max);
	char* arr2 = (char*)malloc(sizeof(char) * max);
	gets(arr1);

	for (i=strlen(arr1) - 1; i >= 0; i--) {
		if (arr1[i] == ' ') {
			for (int j=i+1; j<=i+cnt; j++) {
				arr2[start++]=arr1[j];
			}
			arr2[start++] = ' ';
			cnt = 0;
		}
		else {
			cnt++;
		}
		if (i == 0) {
			for (int j = i ; j <= i + cnt; j++) {
				arr2[start++] = arr1[j];
			}
		}
	}
	arr2[start] = 0;
	for (int y = 0; y < start; y++) {
		printf("%c", arr2[y]);
	}

}