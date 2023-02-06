CXX=g++
all: main.cpp
	$(CXX) -g -Wall -o nyan -O2 main.cpp
clean:
	$(RM) nyan
install:
	$(CXX) -g -Wall -o nyan -O2 main.cpp
	sudo cp nyan /usr/local/bin/nyan
	rm nyan