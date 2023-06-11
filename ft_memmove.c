/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:36:52 by mnascime          #+#    #+#             */
/*   Updated: 2022/04/03 17:36:54 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	ptr = (char *)dest;
	ptr2 = (char *)src;
	if (src > dest)
	{
		while (n--)
		{
			ptr[i] = ptr2[i];
			i++;
		}
	}
	else if (src < dest)
	{
		while (i++ < n)
			ptr[n - i] = ptr2[n - i];
	}
	return (ptr);
}
