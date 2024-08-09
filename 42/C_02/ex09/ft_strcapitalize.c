/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:52:14 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/05 12:52:14 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				i++;
			}
			while (str[i] != ' ' && str[i] != '\0')
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += 32;
				}
				i++;
			}
			i++;
		}
	}
	return (str);
}
