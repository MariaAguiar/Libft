/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:36:32 by mnascime          #+#    #+#             */
/*   Updated: 2022/04/03 17:36:33 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	char			*ptr;
	unsigned int	total;

	i = 0;
	total = nelem * elsize;
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	while (total > 0)
	{
		ptr[i] = 0;
		i++;
		total--;
	}
	return ((void *)ptr);
}
