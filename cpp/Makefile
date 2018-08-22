CC = g++
FLAGS = -std=c++11
TARGET = main
SOURCES = main.cpp sort.cpp
OBJS = $(SOURCES:%.cpp=%.o)
RM = rm

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) -c $< $(FLAGS)

clean:
	$(RM) $(TARGET) $(OBJS)
