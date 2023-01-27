/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:48:28 by eleon-go          #+#    #+#             */
/*   Updated: 2023/01/27 20:59:55 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	size_t	len_dest;
	size_t	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	leng_dest;

	if (!s1 || !s2)
		return (NULL);
	leng_dest = ft_strlen((const char *)s1) + ft_strlen((const char *)s2);
	dest = (char *)malloc(sizeof(char) * (leng_dest + 1));
	if (!dest)
		return (NULL);
	ft_strcpy((char *)dest, (char *)s1);
	ft_strcat((char *)dest, s2);
	return ((char *)dest);
}
