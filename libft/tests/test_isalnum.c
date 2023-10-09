/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:55:48 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/10 00:40:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../includes/libft.h"

#define ORIGINAL_FUNCTION isalnum(c)
#define TEST_FUNCTION ft_isalnum(c)

char random_char(int min, int max)
{
	return (rand() % max + min);
}

int main(int argc, char **argv)
{
	char c;
	int verboose_mode = 0;
	int tests_amount = 15;

	if (argc > 1 && strcmp(argv[1], "verboose") == 0)
		verboose_mode = 1;

	srand(time(NULL));
	printf("\n=== %s ===\n\n", *argv);

	while (tests_amount-- > 0)
	{
		c = random_char(0, 127);

		if (
			(TEST_FUNCTION > 0 && ORIGINAL_FUNCTION == 0) ||
			(TEST_FUNCTION == 0 && ORIGINAL_FUNCTION > 0))
		{
			printf("Testing char %d -> '%c': ", c, c);

			printf("KO!\n");
			printf("\tExpected => %d\n", ORIGINAL_FUNCTION);
			printf("\tReturned => %d\n\n", TEST_FUNCTION);

			return (0);
		}

		if (verboose_mode)
		{
			printf("Testing char %d -> '%c': ", c, c);

			printf("OK!\n");
			printf("\tExpected => %d\n", ORIGINAL_FUNCTION);
			printf("\tReturned => %d\n\n", TEST_FUNCTION);
		}
	}

	printf("All tests passed. Good job.\n");
	return (0);
}
