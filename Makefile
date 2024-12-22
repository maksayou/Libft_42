# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 19:06:14 by mayoucha          #+#    #+#              #
#    Updated: 2024/11/29 17:00:54 by mayoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = .
INC_DIR = .

OBJS_1 = $(SRC_1:.c=.o)
OBJS_2 = $(SRC_2:.c=.o)

NAME = libft.a
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror
HEADER_FILE = $(INC_DIR)/libft.h

SRC_1 = $(addprefix $(SRC_DIR)/, \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
)

SRC_2	= $(addprefix $(SRC_DIR)/, \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
)

all: $(NAME)

$(NAME) : $(OBJS_1)
	$(AR) rcs $(NAME) $(OBJS_1)

%.o: %.c $(HEADER_FILE)
	$(CC) $(FLAGS) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -f $(OBJS_1)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS_1) $(OBJS_2)
		$(AR) -rcs $(NAME) $(OBJS_2)

.PHONY: all clean fclean re bonus
