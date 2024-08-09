/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:55:16 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/11 13:55:16 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{	
	int size = max - min;
	int *ptr = (int *)malloc(size + 1);
	int i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	ptr[i] = '\0';
	*range = ptr;
	return (size);
}

int main() {
int *ptr = NULL;
int a = ft_ultimate_range(&ptr,3,6);
	printf("size : %d ,%d,%d,%d",a,*ptr,*(ptr+1),*(ptr+2));

}
