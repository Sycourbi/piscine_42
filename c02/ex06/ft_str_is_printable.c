/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:34:32 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/20 16:46:07 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{	
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int		main()
{
	printf("%d", ft_str_is_printable("ggvfbe\n"));
}*/
