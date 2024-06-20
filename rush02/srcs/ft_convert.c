/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh-ngu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:30:01 by minh-ngu          #+#    #+#             */
/*   Updated: 2022/10/02 16:47:52 by auferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include<stdlib.h>

void	prefix(char **a_s, char *nbr, char *s, int n)
{
	if (n == 1)
		s = level1(a_s, nbr, s);
	if (n == 2)
		s = level2(a_s, nbr, s);
	if (n == 3)
		s = level3(a_s, nbr, s);
}

void	get_number(char **a_s, char *nbr, char *s)
{
	int	n;
	int	n0;

	n = ft_strlen(nbr);
	n0 = n % 3;
	if (n % 3 == 0)
		n0 = 3;
	prefix(a_s, nbr, s, n0);
	if (n >= 4)
	{
		s = triple0(a_s, &nbr[n0], s);
		s = level(a_s, &nbr[n0], s);
	}
}

void	ft_convert(char **a_s, char *nbr)
{
	char	*s;

	s = malloc(sizeof(char) * 10000);
	if (!s)
		return ;
	while (*nbr == '0')
		nbr++;
	if (!*nbr)
	{
		ft_putstr(1, "0");
		return ;
	}
	get_number(a_s, nbr, s);
	ft_putstr(1, s);
	ft_putstr(1, "\n");
	free(s);
}
