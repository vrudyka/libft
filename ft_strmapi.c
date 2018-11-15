/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:36:30 by vrudyka           #+#    #+#             */
/*   Updated: 2018/11/06 15:53:08 by vrudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*res;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	if (!(res = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	while (i < (len - 1))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
