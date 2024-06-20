/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:11:37 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/16 10:24:47 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	o;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			o = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = o;
			i = 0 - 1;
		}
		i++;
	}
}
//int	main(void)
//{
//	int tab[] = { 4, 3, 5, 1, 2};
//	int size = 5;
//
//	ft_sort_int_tab(tab, size);
//	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
//}
