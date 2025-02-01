CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp  
EXEC = megaphone

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)

re: clean all

check:
	$(CXX) $(CXXFLAGS) $(SRC)
	@echo "Code compiled successfully with -Wall -Wextra -Werror flags"
