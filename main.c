#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 1000
#define MAX_WORDS 100
int main() {
	char str[SIZE];
	printf("Enter a string: ");
	fgets(str, SIZE, stdin);
	printf("You entered: %s", str);
	printf("Enter a number: ");
	int number;
	scanf("%d", &number);
	char str_copy[SIZE];
	strcpy(str_copy, str);
	char* words[MAX_WORDS];
	char* p = strtok(str_copy, " ");
	int i = 0;
	while (p != NULL && i < MAX_WORDS) {
		words[i++] = p;
		p = strtok(NULL, " ");
	}
	if (i < number) {
		printf("string have %d words: ", i);
	}
	else {
		for (int j = number-1;j < i-1;j++) {
			words[j] = words[j + 1];
		}
		i--;
	}
	for(int j = 0;j < i;j++) {
		printf("%s ", words[j]);
	}
	/*char result[SIZE] = "";
    for (int j = 0; j < i; j++) {
        strcat(result, words[j]);
        if (j < i - 1) strcat(result, " "); // додаємо пробіл між словами
    }

    printf("Result: %s\n", result);*/
	return 0;
}