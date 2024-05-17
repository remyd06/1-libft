/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:37:33 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/14 11:28:08 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	target;

	i = 0;
	ret = (unsigned char *)str;
	target = (unsigned char)c;
	while (i < size)
	{
		if (ret[i] == target)
		{
			return (ret + i);
		}
		i++;
	}
	return (NULL);
}
