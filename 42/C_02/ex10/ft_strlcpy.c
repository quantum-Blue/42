/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:25:53 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/05 13:25:53 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (src && dest)
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (i);
}
