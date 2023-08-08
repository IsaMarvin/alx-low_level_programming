#include <stdlib.h>
#include "main.h"

void mywstr(char **, char *);
void cmyword(char **, char *, int, int, int);

/**
 * strtow - a function that split a string to words.
 * @str: the string to work on it.
 * Return: a pointer of the splited words.
 */

char **strtow(char *str)
{
	int i, wxwrflag, wlen;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}


	i = wxwrflag = wlen = 0;

	while (str[i])

	{
		if (wxwrflag == 0 && str[i] != ' ')
			wxwrflag = 1;

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')

		{
			wxwrflag = 0;
			wlen++;
		}

		i++;
	}

	wlen += wxwrflag == 1 ? 1 : 0;

	if (wlen == 0)
	{
		return (NULL);
	}


	words = (char **)malloc(sizeof(char *) * (wlen + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	mywstr(words, str);
	words[wlen] = NULL;
	return (words);
}

/**
 * mywstr - function that converts words into strings.
 * @words: the words to work on it.
 * @str: the string to work on it.
 * Return: nothing.
 */

void mywstr(char **words, char *str)
{
	int i, j, wstart, wrflag;

	i = j = wrflag = 0;

	while (str[i])

	{
		if (wrflag == 0 && str[i] != ' ')

		{
			wstart = i;
			wrflag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')

		{
			cmyword(words, str, wstart, i, j);
			j++;
			wrflag = 0;
		}

		i++;
	}

	if (wrflag == 1)
	{
		cmyword(words, str, wstart, i, j);
	}

}

/**
 * cmyword - creates a word from a string.
 * @words: the words to insert to string.
 * @str: the string to work on it.
 * @start: the start position.
 * @end: the stop position.
 * @index: where to start inserting the new word.
 * Return: nothing.
 */

void cmyword(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}

	words[index][j] = '\0';
}
