/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:29:30 by hhamdaou          #+#    #+#             */
/*   Updated: 2018/10/20 17:38:00 by hhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c1;
	char			*ptr;

	c1 = c;
	ptr = b;
	while (len > 0)
	{
		*ptr = c1;
		ptr++;
		len--;
	}
	return (b);
}
