/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:53:56 by mubal             #+#    #+#             */
/*   Updated: 2024/02/07 17:10:23 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	my_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = my_strlen(src);
	if (size <= dest_len)
	{
		if (size == 0)
			return (src_len);
		return (size + src_len);
	}
	i = dest_len;
	while (i < size - 1 && src[i - dest_len] != '\0')
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
