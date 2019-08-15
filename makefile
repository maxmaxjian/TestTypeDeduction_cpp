prog = main
flags = -g -Wall -std=c++11
ld = /usr/local/Cellar//boost/1.70.0/include/

$(prog): $(prog).o
	c++ -I$(ld) $^ -o $@

$(prog).o: $(prog).cpp
	c++ $(flags) -c $^ -o $@

clean:
	rm -rf *.o $(prog)

