#include "main.h"

/**
<<<<<<< HEAD
  *
  *
  *
  *
  *
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long long i, j, k, num1, num2, digit;

	/*finding the nunber of the first number*/
	num1 = 0;
	for (i = 0; n1[i] != '\0'; i++)
	{
		digit = n1[i] - '0';
		num1 = num1 * 10 + digit;
	}

	/*finding the second number*/
	num2 = 0;
	for (j = 0; n2[j] != '\0'; j++)
	{
		digit = n2[i] - '0';
		num2 = num2 * 10 + digit;
	}

	k = num1 + num2;
=======
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * ahhh! Crazy task! Expand your knowledge
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
/*Bwave */
>>>>>>> refs/remotes/origin/main
