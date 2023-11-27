# Makefile for SudokuSolver
# Written by Jeff Purdy

# Compiler
CXX = g++

# Compiler flags 
CXXFLAGS = -std=c++20 -Wall -I./include

# Source Files 
SRCS =  src/cell.cpp main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executeable name
TARGET = SudokuSolver

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

