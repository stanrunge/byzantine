CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g
SOURCES = $(wildcard src/**/*.c)
OBJECTS = $(SOURCES:.c=.o)
TARGET = bin/byzantine_system

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p bin
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf src/**/*.o bin/

.PHONY: all clean
