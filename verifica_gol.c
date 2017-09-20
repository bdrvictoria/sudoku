/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificare_gol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:55:49 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 18:39:36 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		verifica_gol(int mat[10][10], int linie, int col)
{
	linie = 1;
	while (linie <= 9)
	{
		col = 1;
		while (col <= 9)
		{
			if (mat[linie][col] == 0)
				return (linie * 10 + col);
			col++;
		}
		linie++;
	}
	return (0);
}
