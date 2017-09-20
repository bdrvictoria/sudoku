/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eroare.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 23:16:06 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/20 18:38:17 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"

int		eroare(void)
{
	int		i;
	char	*a;

	i = 0;
	a = "Erreur";
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, &"\n", 1);
	return (0);
}
