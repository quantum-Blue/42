/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:07:42 by mubal             #+#    #+#             */
/*   Updated: 2024/02/07 13:29:08 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	new[nb];
	unsigned int	i;

	i= 0;
	while (dest[i] != "\0")
	{
		new[i] += dest[i];
		i++;
	}
	while (src[i] != "\0")
	{
		new[i] += src[i];
		i++;
	}
	return new ;
}
