/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:44:43 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/02 18:44:43 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t	i;
	char	*ptr1;

	i = 0;
	ptr1 = (char *)ptr;
	if (ptr1 == NULL)
		return (NULL);
	while (i < len)
	{
		ptr1[i] = c;
		i++;
	}
	return (ptr1);
}
