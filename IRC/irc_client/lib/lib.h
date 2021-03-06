/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 06:37:39 by angonyam          #+#    #+#             */
/*   Updated: 2018/08/30 06:37:40 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strstr(const char *big, const char *little);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strdup(const char *s1);
char	*strtrim(const char *str);
char	*normalize_string(char *str);
size_t	arraylen(char **array);
int		my_isspace(char c);
char	*itoa(int value);
char	*join(char *s1, char *s2);
char	*sub(char *str, size_t size, size_t len);
void	read_buffer(char buffer[], size_t size);
char	**split(char *str, char c);
void	free_and_null(char **str);
char	**arraypush(char **array, char *str);
char	*charpush(char *str, char c);
size_t	arraylen(char **array);
void	free2d(char **array);
int		count_args(char *str);
char	*charpush(char *str, char c);
char	*trim(char *str);

#endif
