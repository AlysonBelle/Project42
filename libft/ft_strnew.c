/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 12:41:34 by angonyam          #+#    #+#             */
/*   Updated: 2017/06/09 08:16:17 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (str)
	{
		ft_bzero(str, (size + 1));
		return (str);
	}
	return (NULL);
}
