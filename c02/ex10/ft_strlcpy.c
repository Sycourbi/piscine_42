/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:27:19 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/21 11:13:28 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	z;

	z = 0;
	i = 0;
	while (src[z] != '\0')
	{
		z++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (z);
}
/*int	main()
{	
	char src[] = "Bonjour 1";
	char dest[] = "salut";

	printf("%d | %s", ft_strlcpy (dest, src, 10), dest);
}*/
