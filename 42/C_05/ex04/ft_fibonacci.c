/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:07:58 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 14:47:07 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int total;

	total = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0 || index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		total = ft_fibonacci(total -1) + ft_fibonacci(total -2);
	}
	return (total);
}
