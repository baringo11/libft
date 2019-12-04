# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 17:18:12 by jbaringo          #+#    #+#              #
#    Updated: 2019/11/26 16:32:08 by jbaringo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Werror -Wall -Wextra

LFLAGS = -c

FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = ${FILES:.c=.o}

BOBJ = ${BONUS:.c=.o}

all : $(NAME)

$(NAME): $(FILES)
	gcc $(CFLAGS) $(LFLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)

bonus: $(FILES) $(BONUS)
	gcc $(CFLAGS) $(LFLAGS) $(FILES) $(BONUS)
	ar rc $(NAME) $(OBJ) $(BOBJ)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
