/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:48:37 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/08 09:53:04 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != 0)
		{
			j++;
		}
		if (ft_strlen(to_find) == j)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char p[] = "Ronaldo is widely regarded as one of the greatest football players of all time";
	char l[] = "wl";
	printf("%s", ft_strstr(p, l));
}