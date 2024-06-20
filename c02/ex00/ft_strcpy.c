/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:59:02 by sycourbi          #+#    #+#             */
/*   Updated: 2022/09/19 10:14:28 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int		main()
{
	int i;
	char dest[] = "Epic fail";
	char src[] = "Success";
	ft_strcpy(dest, src);
	while(dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	//char dest1[] = "";
	//char src1[] = "";
	//ft_strcpy(dest1, src1);
}*/
