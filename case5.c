/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:51:15 by iqabbal           #+#    #+#             */
/*   Updated: 2023/06/19 04:06:37 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void printString(const char* str) {
    printf("%s\n", str);
}

int main()
{
    char* str = NULL;
    printString(str);
}