/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:42:20 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/05 12:42:20 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (!str)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!('1' <= *str && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
