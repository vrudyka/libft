/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:16:59 by vrudyka           #+#    #+#             */
/*   Updated: 2018/11/06 15:55:12 by vrudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*res;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(res = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	return (res);
}
