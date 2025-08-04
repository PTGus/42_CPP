# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 10:58:56 by gumendes          #+#    #+#              #
#    Updated: 2025/08/04 15:40:38 by gumendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --no-print-directory

#==============================================================================#
#                                  COMPILER AND FLAGS                          #
#==============================================================================#

CC			=	c++
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

#==============================================================================#
#                                  PATHS       					               #
#==============================================================================#

BUILD_PATH	=   .build

#==============================================================================#
#                                  PROJECT NAME                                #
#==============================================================================#

NAME		=	thisBrain

#==============================================================================#
#                                  SOURCE AND OBJECT FILES                     #
#==============================================================================#

SRCS		=	main.cpp

OBJ			=	$(SRCS:%.cpp=$(BUILD_PATH)/%.o)

#==============================================================================#
#                                  RULES                                       #
#==============================================================================#

all: $(NAME)

# Build the program
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GRN)[PROJECT BUILT]$(END)"

# Rule to create object files in the .build folder
$(BUILD_PATH)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "$(CYA)Compiling $(notdir $<)...$(D)"
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@if [ -d "$(BUILD_PATH)" ]; \
		then echo "$(RED)[REMOVED OBJECT FILES]$(END)"; \
		else echo "$(YEL)[NO OBJECTS TO CLEAN]$(END)"; \
	fi
	@$(RM) $(BUILD_PATH)

# Full clean
fclean: clean
	@if [ -f "$(NAME)" ]; \
		then echo "$(RED)[REMOVED EXECUTABLE]$(END)"; \
		$(RM) $(NAME) ; \
		else echo "$(YEL)[EXECUTABLE ALREADY CLEANED]$(END)"; \
	fi

# Rebuild the project
re: fclean all

# Phony targets
.PHONY: all clean fclean re clear

#==============================================================================#
#                                  UTILS                                       #
#==============================================================================#

# Colors
#
# Run the following command to get list of available colors
# bash -c 'for c in {0..255}; do tput setaf $c; tput setaf $c | cat -v; echo =$c; done'
#
B		= $(shell tput bold)
BLA		= $(shell tput setaf 16)
RED		= $(shell tput setaf 1)
GRN		= $(shell tput setaf 46)
BRW		= $(shell tput setaf 3)
BLU		= $(shell tput setaf 27)
PRP		= $(shell tput setaf 57)
CYA		= $(shell tput setaf 51)
WHI		= $(shell tput setaf 15)
GREY	= $(shell tput setaf 8)
ORAN	= $(shell tput setaf 202)
YEL		= $(shell tput setaf 226)
D		= $(shell tput sgr0)
BEL		= $(shell tput bel)
CLR		= $(shell tput el 1)
