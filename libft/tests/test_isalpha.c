/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:55:48 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/06 11:37:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "../includes/libft.h"

char random_char(int min, int max)
{
	return (rand() % max + min);
}

int main(int argc, char **argv)
{
	(void)argc;

	char c;
	int tests_amount = 15;
	
	srand(time(NULL));
	printf("\n\n=== %s ===\n\n", *argv);

	while (tests_amount-- > 0)
	{
		c = random_char(0, 127);

		printf("Testing char %d -> '%c': ", c, c);

		if (ft_isalpha(c) != isalpha(c))
		{
			printf("KO!\n");
			printf("\tExpected => %d\n", isalpha(c));
			printf("\tReturned => %d\n\n", ft_isalpha(c));

			return (0);
		}

		printf("OK!\n");
		printf("\tExpected => %d\n", isalpha(c));
		printf("\tReturned => %d\n\n", ft_isalpha(c));
	}

	printf("\nAll tests passed. Good job.\n");
	return (0);
}
