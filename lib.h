/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:16:40 by cman              #+#    #+#             */
/*   Updated: 2017/08/20 19:17:36 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

int		check_arguments(char **argv);
int		eroare(void);
void	inserare(int mat[10][10], char **argv);
void	afisare_matrice(int mat[10][10]);
int		solvesudoku(int mat[10][10]);
int		linie(int mat[10][10], int lin, int num);
int		coloana(int mat[10][10], int col, int num);
int		box(int mat[10][10], int startlinie, int startcol, int num);
int		eok(int mat[10][10], int xlinie, int xcol, int xnum);
void	ft_putchar(char c);
int		verifica_gol(int mat[10][10], int linie, int col);
int		contor(int mat[10][10], char **argv);
int		caracter(char **argv);
int		check(int m[10][10]);
int		check_col(int m[10][10], int col, int row, int num);
int		check_lin(int m[10][10], int col, int row, int num);
int		check_3x3(int m[10][10], int coords, int num);

#endif
