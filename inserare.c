/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inserare.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 23:51:32 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 20:01:41 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		contor(int mat[10][10], char **argv)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] > '0' && argv[i][j] <= '9')
			{
				mat[i][j + 1] = (argv[i][j] - '0');
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}

int		caracter(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if ((argv[i][j] < '1' && argv[i][j] != '.') ||
				(argv[i][j] > '9' && argv[i][j] != '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	inserare(int mat[10][10], char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
			{
				mat[i][j + 1] = 0;
			}
			j++;
		}
		i++;
	}
}
