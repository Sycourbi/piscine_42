/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:02:01 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/18 15:24:23 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_line(char first, char mid, char last, int x)
{
	ft_putchar(first);
	if (x > 1)
	{	
		while (x > 2)
		{
			ft_putchar(mid);
			x--;
		}
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	ft_middleline(char b, int x)
{
	ft_putchar(b);
	if (x > 1)
	{	
		while (x > 2)
		{
			write(1, " ", 1);
			x--;
		}
		ft_putchar(b);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	first;
	char	mid;
	char	last;

	if (x != '0' && y != '0')
	{
		ft_line('A', 'B', 'C', x);
		if (y > 1)
		{
			while (y > 2)
			{
				ft_middleline('B', x);
				y--;
			}
			ft_line('C', 'B', 'A', x);
		}
	}
}
