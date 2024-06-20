/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:38:00 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/21 19:30:15 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{	
	int	i;
	int	resultat;
	int	moins;

	moins = 1;
	resultat = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moins = moins * -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		resultat = resultat * 10;
		resultat = resultat + str[i] - '0';
		i++;
	}
	resultat = resultat * moins;
	return (resultat);
}

/*int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}*/
