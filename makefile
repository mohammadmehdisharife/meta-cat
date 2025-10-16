CC = gcc
TARGET = meta-cat
SRC = meta-cat.c

all: $(TARGET)

$(TARGET): $(SRC)
$(CC) -o $(TARGET) $(SRC)

clean:
rm -f $(TARGET)
