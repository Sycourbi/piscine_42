/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:49:27 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/15 11:53:56 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar (a % 10 + '0');
			write (1, " ", 1);
			ft_putchar (b / 10 + '0');
			ft_putchar (b % 10 + '0');
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
//int	main()
//{
//	ft_print_comb2();
//}
