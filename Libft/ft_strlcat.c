/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:27:24 by niko              #+#    #+#             */
/*   Updated: 2021/11/15 11:42:11 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	k;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		len_src += size;
	else
		len_src += len_dest;
	k = 0;
	while (src[k] != '\0' && (len_dest + k) < size - 1)
	{
		dest[len_dest + k] = src[k];
		k++;
	}
	dest[len_dest + k] = '\0';
	return (len_src);
}
