#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int o = 0;
	char input[1000]{};
	char sum[1000]{};
	printf("Enter word or sentence : ");
	scanf("%s", input);
	printf("Word with just alphabet is : ");
	while (i < 100)
	{
		if (input[i] >= 'a' and input[i] <= 'z' or input[i] >= 'A' and input[i] <= 'Z')
		{
			o++;
			sum[o - 1] = input[i];
			printf("%c", input[i]);

		}
		i++;
	}
	printf("\n\n");
	int k = strlen(sum);
	for (int m = 0; m < strlen(sum); m++)
	{
		for (int j = 0; j < m; j++)
		{
			printf(" ");
		}
		for (int t = k; t > 0;)
		{
			printf("%c ", sum[m]);
			t--;
		}
		printf("     ");
		k--;
		for (int f = 0; f <= m; f++)
		{
			printf("%c ", sum[f]);
		}
		printf("\n");
	}
}