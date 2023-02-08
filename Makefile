# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 13:03:13 by mriant            #+#    #+#              #
#    Updated: 2023/02/08 16:01:29 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_FT = ft_containers
NAME_STD = std_containers

SRCS = ${addprefix srcs/, \
		 main.cpp}

OBJS_FT = ${SRCS:srcs/%.cpp=build/ft_%.o}
OBJS_STD = ${SRCS:srcs/%.cpp=build/std_%.o}
DEPS_FT = ${SRCS:srcs/%.cpp=build/ft_%.d}
DEPS_STD = ${SRCS:srcs/%.cpp=build/std_%.d}

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
FT_FLAG = -D FT
IFLAGS = -I./includes -MMD
LFLAGS = 

.PHONY: all
all: ${NAME_FT} ${NAME_STD}

${NAME_FT}: ${OBJS_FT}
	${CXX} ${CXXFLAGS} ${OBJS_FT} -o ${NAME_FT} ${LFLAGS}

${NAME_STD}: ${OBJS_STD}
	${CXX} ${CXXFLAGS} ${OBJS_STD} -o ${NAME_STD} ${LFLAGS}

build/ft_%.o: srcs/%.cpp
	mkdir -p build
	${CXX} ${CXXFLAGS} -c $< -o $@ ${FT_FLAG} ${IFLAGS}

build/std_%.o: srcs/%.cpp
	mkdir -p build
	${CXX} ${CXXFLAGS} -c $< -o $@ ${IFLAGS}

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf ${NAME_FT} ${NAME_STD}

.PHONY: re
re: fclean
	make -C .

-include ${DEPS_FT}
-include ${DEPS_STD}
