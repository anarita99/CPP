# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/14 11:38:52 by adores            #+#    #+#              #
#    Updated: 2026/05/14 14:45:53 by adores           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp 
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all