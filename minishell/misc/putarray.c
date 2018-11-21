/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 06:32:28 by angonyam          #+#    #+#             */
/*   Updated: 2017/09/16 01:52:20 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void		ft_putarray(char **array)
{
	int		i;

	i = 0;
	while (array[i])
	{
		ft_putendl(array[i]);
		i++;
	}
}
