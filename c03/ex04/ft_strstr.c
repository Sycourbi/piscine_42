/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:56:32 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/25 16:09:48 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	o;
	int	tt;

	i = 0;
	o = 0;
	tt = ft_strlen(to_find);
	if (*to_find == 0)
		return (str);
	while (str[i] != '\0' && i > tt)
	{
		while (str[i + o] == to_find[o] && to_find[o] != '\0')
		{
			o++;
		}
		if (to_find[o] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
int	main(void)
{
	char str[] = "";
	char to_find[] = "";

	printf("%s:%s\n", ft_strstr(str, to_find), strstr(str, to_find));
}
