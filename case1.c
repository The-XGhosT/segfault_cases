/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:51:02 by iqabbal           #+#    #+#             */
/*   Updated: 2023/06/19 03:53:37 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Dereferencing a null pointer: When you try to access or modify the value of a pointer
 that has not been initialized or has been explicitly set to NULL,
  a segfault will occur. For example :*/

  int main()
  {
    int *ptr = NULL;
    *ptr = 10;
  }