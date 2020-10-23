#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct STUDENT {
	char name[50];
	int score[50];
	int Pr[50];//Percentile
};

int main() {
	struct STUDENT* students;
	int size;
	scanf("%d", &size);
	students = (struct STUDENT*)malloc (size * sizeof(struct STUDENT));
	for (int i = 0;i < size; i++) {
		scanf("%s", students[i].name);
	}
	for (int i = 0;i < size; i++) {
		scanf("%d", students[i].score);
	}
	printf("\n");
	for (int i = 0;i < size; i++) {
		printf("%d", students[i].score);
	}
	for (int i = 0;i < size; i++) {
		printf("%d", students[i].score);
	}
	return 0;
}