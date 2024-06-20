/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:22:21 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/28 15:17:30 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	long	i;
	long	ts;

	ts = ft_strlen(src);
	i = 0;
	dest = ((char *)malloc(sizeof(char) * ts));
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s\n", ft_strdup("Hello world!"));
}*/
