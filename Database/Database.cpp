#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct STUDENT {
	char name[50];
	int score;
	char tempName[50];
	int Pr;//Percentile
	int	pos;//Position
};

int main() {
	struct STUDENT* students;
	int n;
	int i, j,temp;
	printf("Percentile calculator!!\n");
	printf("How many people you want to calculate : ");
	scanf("%d", &n);
	students = (struct STUDENT*)malloc (n * sizeof(struct STUDENT));
	for (int i = 0;i < n; i++) {
		printf("Enter name  %d :",i+1);
		scanf("%s", students[i].name);
		printf("Enter score %d :",i+1);
		scanf("%d", &students[i].score);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (students[i].score > students[j].score)
			{
				temp = students[i].score;
				students[i].score = students[j].score;
				students[j].score = temp;
				strcpy(students[i].tempName, students[i].name);
				strcpy(students[i].name, students[j].name);
				strcpy(students[j].name, students[i].tempName);
			}
		}
	}
	for (int i = 0;i < n; i++) {
		students[i].pos = i;
	}
	printf("\n");
	for (int i = 0;i < n; i++) {
		students[i].Pr = students[i].pos * 100 / n;
		printf("\n%s has score %d, is in percentile %d", students[i].name, students[i].score, students[i].Pr);
	}
	return 0;
}
