/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:38:01 by mnascime          #+#    #+#             */
/*   Updated: 2022/04/03 17:38:02 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	f;

	i = start;
	f = 0;
	if (!s)
		return (NULL);
	while (f < len && i++ < ft_strlen(s))
		f++;
	ptr = malloc(sizeof(char) * (f + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
