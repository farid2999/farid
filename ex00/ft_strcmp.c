/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:27:33 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/08 16:37:25 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;;
	}
	return (s1[i] - s2[i]);
}
#include <string.h>
int main()
{
	char *s1 = "";
    char *s2 = "ki3";
    // char *s3 = "world";
	printf("1'%s' 2 '%s': %d\n", s1, s2, ft_strcmp(s1, s2));
    printf("1'%s' 2 '%s': %d\n", s1, s2, strcmp(s1, s2));
    // printf("1'%s' 2 '%s': %d\n", s3, s1, ft_strcmp(s3, s1));
    return 0;
}
