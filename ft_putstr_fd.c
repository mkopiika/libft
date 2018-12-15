/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 10:19:19 by mkopiika          #+#    #+#             */
/*   Updated: 2018/12/12 10:19:20 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putstr_fd(char const *s, int fd)
{
	if (s && fd != -1)
	{
		while (*s != '\0')
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}
