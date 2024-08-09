/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:43:31 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/05 13:43:31 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	c;

	if (str)
	{
		while (*str != '\0')
		{
			if (!(*str >= ' ' && *str <= '~'))
			{
				c = 92;
				write(1, &c, 1);
				c = '0';
				write(1, &c, 1);
			}
			else
			{
				write(1, str, 1);
			}
			str++;
		}
	}
}
