/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:24:11 by mnascime          #+#    #+#             */
/*   Updated: 2022/02/20 22:24:17 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*nome;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	nome = malloc(sizeof(char) * i + 1);
	if (nome == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		nome[i] = s1[i];
		i++;
	}
	nome[i] = '\0';
	return (nome);
}
