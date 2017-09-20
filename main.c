/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 23:13:28 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 20:00:27 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int argc, char **argv)
{
	int	mat[10][10];

	if (argc == 10)
	{
		if (check_arguments(argv) == 0 || (contor(mat, argv) < 17) ||
				(caracter(argv) == 0))
			return (eroare());
		else
		{
			inserare(mat, argv);
			if (check(mat))
			{
				if (solvesudoku(mat) == 1)
					afisare_matrice(mat);
				else
					return (eroare());
			}
			else
				return (eroare());
		}
	}
	else
		return (eroare());
	return (0);
}
