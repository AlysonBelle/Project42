/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:27:55 by angonyam          #+#    #+#             */
/*   Updated: 2017/09/16 01:54:24 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_2d_array_len(char **array)
{
	int		i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}
