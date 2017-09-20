/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eOk.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 15:56:03 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 18:37:06 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		eok(int mat[10][10], int xlinie, int xcol, int xnum)
{
	if ((linie(mat, xlinie, xnum) && coloana(mat, xcol, xnum) &&
		box(mat, (xlinie - 1) - (xlinie - 1) % 3,
		(xcol - 1) - (xcol - 1) % 3, xnum)))
		return (1);
	return (0);
}
