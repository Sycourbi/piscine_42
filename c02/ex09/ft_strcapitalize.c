/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:48:47 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/19 11:55:31 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_minuscule(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	o;

	i = 0;
	o = 1;
	ft_minuscule(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			if (o == 1)
			{	
				str[i] = str[i] - 32;
				o = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			o = 0;
		else
			o = 1;
		i++;
	}
	return (str);
}
//int	main()
//{
//	char str[] = "salut, comment tu vas 42mots ? cinquante+et+un";
//	printf("%s", ft_strcapitalize(str));
//}
