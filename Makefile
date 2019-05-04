CXX = g++
CXXFLAGS = -Wall -g

cerebral: main.o
	$(CXX) $(CXXFLAGS) -o cerebral main.o

main.o: main.cpp Cerebral.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f cerebral
	rm -f *.o
	rm -f *.gch


