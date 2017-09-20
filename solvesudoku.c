/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solveSudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 15:40:52 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 18:53:52 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		solvesudoku(int mat[10][10])
{
	int linie;
	int col;
	int num;

	linie = verifica_gol(mat, 0, 0) / 10 % 10;
	col = verifica_gol(mat, 0, 0) % 10;
	if (verifica_gol(mat, linie, col) == 0)
		return (1);
	num = 1;
	while (num <= 9)
	{
		if (eok(mat, linie, col, num))
		{
			mat[linie][col] = num;
			if (solvesudoku(mat))
				return (1);
			mat[linie][col] = 0;
		}
		num++;
	}
	return (0);
}
