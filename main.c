#include <stdio.h>

int main()
{
	char line[100];
	char word[100];
	char words[100][100];
	int n = 0, m = 0, k = 0, i = 0, q = 0, z = 0, p = 0;
	printf("Enter the line:");
	fgets(line, 100, stdin);
	for (i = 0; line[i] != 0; i++)
		if (line[i] == '\n')
			line[i] = 0;
	printf("Enter the word:");
	fgets(word, 100, stdin);
	for (k = 0; word[k] != 0; k++)
		if (word[k] == '\n')
			word[k] = 0;
	k--;
	i = 0;
	while (line[i] != 0)
	{
		if (line[i] >= 'A' && line[i] <= 'Z' || line[i] >= 'a' && line[i] <= 'z')
		{
			words[n][m] = line[i];
		}
		else
		{
			words[n][m] = 0;
			n++;
			m = -1;
		}
		i++;
		m++;
	}
	words[n][m] = 0;
	p = n;
	n = 0;
	for (i = 0; i <= p; i++)
	{
		m = 0;
		while(words[n][m] != 0)
		{
			z++;
			m++;
		}
		if (z == k)
		{
			q++;
		}
		n++;
		z = 0;
	}
	printf("Words of the same length in a line: %d", q);
	return 0;
}