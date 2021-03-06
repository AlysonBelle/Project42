/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsferopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:46:12 by gsferopo          #+#    #+#             */
/*   Updated: 2017/06/07 11:18:35 by gsferopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = -1;
	if (s != NULL)
	{
		while (s[++i] != '\0')
			ft_putchar_fd(s[i], fd);
		write(fd, "\n", 1);
	}
}
