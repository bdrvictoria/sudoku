/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:53:41 by cman              #+#    #+#             */
/*   Updated: 2017/08/20 19:53:45 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check(int m[10][10])
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			if (m[i][j] != 0 && (
				check_col(m, j, i, m[i][j]) == 0 ||
				check_lin(m, j, i, m[i][j]) == 0 ||
				check_3x3(m, ((i - 1) - (i - 1) % 3) * 10 +
					(j - 1) - (j - 1) % 3, m[i][j])))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check_col(int m[10][10], int col, int row, int num)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		if (num == m[i][col] && i != row && m[i][col] != 0)
			return (0);
		i++;
	}
	return (1);
}

int		check_lin(int m[10][10], int col, int row, int num)
{
	int j;

	j = 1;
	while (j <= 9)
	{
		if (num == m[row][j] && j != col && m[row][j] != 0)
			return (0);
		j++;
	}
	return (1);
}

int		check_3x3(int m[10][10], int coords, int num)
{
	int row;
	int col;
	int startrow;
	int startcol;

	startrow = coords / 10 % 10;
	startcol = coords % 10;
	row = 1;
	col = 1;
	while (row < 4)
	{
		col = 1;
		while (col < 4)
		{
			if (m[row + startrow][col + startcol] == num)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
