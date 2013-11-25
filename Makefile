
INCLUDES = $(HOME)/bin/
FLAGS = -std=c++0x -O3 -Wall -I$(INCLUDES)

all: test

large.in: testgen
	./testgen > large.in

large.out: large.in oracle
	time ./oracle < large.in > large.out

oracle: oracle.cpp
	g++ oracle.cpp -o oracle $(FLAGS)

testgen: testgen.cpp
	g++ testgen.cpp -o testgen $(FLAGS)

small.out: oracle small.in
	./oracle < small.in > small.out

tests: large.in large.out small.in small.out

test: dist median tests
	./median < small.in | diff -y - small.out
	time ./dist < large.in | diff - large.out

dist: median.cpp
	g++ median.cpp $(FLAGS) -o dist

median: median.cpp
	g++ median.cpp -g $(FLAGS) -DNO_KATTIS -o median

clean:
	rm -f median dist oracle testgen
