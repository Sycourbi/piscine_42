/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:58:06 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/24 15:11:02 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	td;
	unsigned int	ts;

	td = ft_strlen(dest);
	ts = ft_strlen(src);
	i = 0;
	if (size == 0 || size < td)
		return (ts + size);
	while (src[i] != '\0' && i < size - td)
	{
		dest[td + i] = src[i];
		i++;
	}
	dest[td + i] = '\0';
	return (td + ts);
}
/*int	main(void)
{
	char dest[10] = "Test1";
	char src[] = "OK";

	printf("%d", ft_strlcat(dest, src, 0));
}*/
