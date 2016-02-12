// C program to find the length of the longest substring
// without repeating characters
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256

int min(int a, int b);

int longestUniqueSubsttr(char *str)
{
	int n = strlen(str);
	int cur_len = 1; // lenght of current substring
	int max_len = 1; // result
	int prev_index; // previous index
	int i;
	int *visited = (int *)malloc(sizeof(int)*NO_OF_CHARS);

	for (i = 0; i < NO_OF_CHARS; i++)
		visited[i] = -1;

	visited[str[0]] = 0;

	for (i = 1; i < n; i++)
	{
		prev_index = visited[str[i]];

		if (prev_index == -1 || i - cur_len > prev_index)
			cur_len++;

	
		else
		{
			if (cur_len > max_len)
				max_len = cur_len;

			cur_len = i - prev_index;
		}

		// update the index of current character
		visited[str[i]] = i;
	}

	// Compare the length of last NRCS with max_len and
	// update max_len if needed
	if (cur_len > max_len)
		max_len = cur_len;

	free(visited); // free memory allocated for visited
	return max_len;
}

/* A utility function to get the minimum of two integers */
int min(int a, int b)
{
	return (a>b)?b:a;
}

/* Driver program to test above function */
int main()
{
	char str[50];
	printf("The input string is %s \n", str);
	int len = longestUniqueSubsttr(str);
	printf("The length of the longest non-repeating "
		"character substring is %d", len);
	return 0;
}
