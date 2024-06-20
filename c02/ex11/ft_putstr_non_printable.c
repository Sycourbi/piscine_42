/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:32:25 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/19 12:01:28 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >= 32)
		{	
			ft_putchar(str[i]);
			i++;
		}
		else
			ft_putchar();
	}
}
/*int	main()
{
	ft_putstr_non_printable("coucou tu vas bien");
	ft_putchar('\n');
	ft_putstr_non_printable("couou\n");
}*/
