# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 14:08:56 by bkaras-g          #+#    #+#              #
#    Updated: 2026/04/20 17:09:43 by michel_32        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = beautifulTemplates

SRC_FILES = 	main.cpp

HEADERS_FILES = mushrooms.hpp

OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

OBJ := $(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC))) 
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
HEADERS = $(addprefix $(INC_DIR)/, $(HEADERS_FILES))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(HEADERS) Makefile
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo  "Mandatory part compilation ok"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@$(CXX) $(CXXFLAGS) -I. -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo  "Clean done"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
