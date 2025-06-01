CC := g++-12
CCFLAG := -std=c++17 -Wall -Wextra -O2
TARGET := program

%:%.cpp
	$(CC) $(CCFLAG) $< -o $(TARGET)
	./$(TARGET)