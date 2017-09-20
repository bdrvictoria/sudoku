/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:47:42 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 18:40:25 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		box(int mat[10][10], int startlinie, int startcol, int num)
{
	int linie;
	int col;

	linie = 1;
	while (linie < 4)
	{
		col = 1;
		while (col < 4)
		{
			if (mat[linie + startlinie][col + startcol] == num)
				return (0);
			col++;
		}
		linie++;
	}
	return (1);
}
