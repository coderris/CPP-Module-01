# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/21 19:09:12 by lanton-m          #+#    #+#              #
#    Updated: 2026/03/21 19:09:42 by lanton-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieAnnouncer
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp  Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re