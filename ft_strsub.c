/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:52:47 by vrudyka           #+#    #+#             */
/*   Updated: 2018/11/06 15:54:28 by vrudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!(res = (char*)malloc(sizeof(char) * (len + 1))) || s == NULL)
		return (NULL);
	ft_strncpy(res, &s[start], len);
	res[len] = '\0';
	return (res);
}
