/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:32:15 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/06 14:32:18 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char*)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}
