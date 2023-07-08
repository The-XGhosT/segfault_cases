/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:51:12 by iqabbal           #+#    #+#             */
/*   Updated: 2023/06/19 04:05:32 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Accessing an array out of bounds: If you try to access 
an element of an array beyond its defined size, it can 
lead to a segfault. This often occurs when iterating over 
an array using a loop and mistakenly 
exceed the array boundaries. For example: */

int main()
{
    int arr[5];
    for (int i = 0; i <= 5; i++) {
        arr[i] = i;
        printf("i is : %d\n",arr[i]);
    }
}