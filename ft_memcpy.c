/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:37:07 by mnascime          #+#    #+#             */
/*   Updated: 2022/04/03 17:37:10 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

int	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst_ptr;
	const char	*src_ptr;
	int			i;

	if (!src && !dest)
		return (NULL);
	dst_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (n > 0)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
		n--;
	}
	return (dest);
}
