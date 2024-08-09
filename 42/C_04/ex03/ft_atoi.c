/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:46:42 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 09:20:40 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	total;
	int	i;

	i = 0;
	total = 0;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t' )
	{
		i++;
	}
	while (str[i] >= 43 && str[i] <= 57)
	{
		total = (total * 10) + str[i] - 48;
		i++;
	}
	return (total * sign);
}
