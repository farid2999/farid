/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:31:22 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/08 16:51:26 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return 0;

}
#include <stdio.h>
int main()
{
	int h = 1;
	char *s1 = "bbb";
    char *s2 = "aaa";
    char *s3 = "s";
	printf("1'%s' 2 '%s': %d\n", s1, s2, ft_strncmp(s1, s2, h));
    printf("1'%s' 2 '%s': %d\n", s1, s3, ft_strncmp(s1, s3, h));
    printf("1'%s' 2 '%s': %d\n", s3, s1, ft_strncmp(s3, s1, h));
    return 0;
}
