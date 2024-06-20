/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:47:47 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/18 18:03:43 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	change;

	i = 0;
	while (i < (size / 2))
	{
		change = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = change;
		++i;
	}
}
//int	main(void)
//{
//	int tab[] = {5, 4, 3, 2, 1};
//	int size = 5;
//
//	ft_rev_int_tab(tab, size);
//	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
//}
