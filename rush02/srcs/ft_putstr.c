/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh-ngu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:55:02 by minh-ngu          #+#    #+#             */
/*   Updated: 2022/09/28 18:19:47 by minh-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(int fd, char *str)
{
	while (*str != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}