/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:35:40 by mnascime          #+#    #+#             */
/*   Updated: 2022/04/03 17:35:42 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
		n--;
	}
	return (NULL);
}
