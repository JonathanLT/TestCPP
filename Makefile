CC = clang++
CFLAGS = -Iinclude -Wall -Wextra -std=c++17
SRC = src/main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = SearchMinimum

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean