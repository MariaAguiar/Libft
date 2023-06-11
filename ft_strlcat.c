/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:35:23 by mnascime          #+#    #+#             */
/*   Updated: 2022/02/21 20:35:25 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	f;

	i = ft_strlen(dst);
	f = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < i)
		return (dstsize + ft_strlen(src));
	while (src[f] != '\0' && i < (dstsize - 1))
		dst[i++] = src[f++];
	dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst) - f);
}
