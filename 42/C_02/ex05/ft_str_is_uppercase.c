/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:43:46 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/05 12:43:46 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (!str)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!('A' <= *str && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
