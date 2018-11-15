/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:53:13 by vrudyka           #+#    #+#             */
/*   Updated: 2018/11/06 14:21:01 by vrudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*res;

	i = 0;
	if (!(res = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(res, (int)'\0', size + 1);
	return (res);
}
