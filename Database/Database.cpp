#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct STUDENT {
	char name[50];
	int score;
	char tempName[50];
	//int Pr[50];//Percentile
};

int main() {
	struct STUDENT* students;
	int size;
	int i, j,temp;
	
	scanf("%d", &size);
	students = (struct STUDENT*)malloc (size * sizeof(struct STUDENT));
	for (int i = 0;i < size; i++) {
		printf("Enter name :");
		scanf("%s", students[i].name);
		printf("Enter tempName :");
		scanf("%s", students[i].tempName);
		
	}
	for (int i = 0;i < size; i++) {
		printf("Enter score :");
		scanf("%d", &students[i].score);
	}

	for (i = 0; i < size; ++i)
	{
		for (j = i + 1; j < size; ++j)
		{
			if (students[i].score > students[j].score)
			{
				temp = students[i].score;
				students[i].score = students[j].score;
				students[j].score = temp;
				students[i].tempName = students[i].name;
				students[i].name = students[j].name;
				students[j].name = students[i].tempName;
			}

		}
	}
	printf("\n");
	for (int i = 0;i < size; i++) {
		
		//printf("name %d:", i + 1);
		//printf(" %s ", students[i].name);
		printf("score %d:",i+1);
		printf(" %d \n", students[i].score);
		
	}



	return 0;
}