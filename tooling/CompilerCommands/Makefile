DEBUG_FLAGS = -O0 -g3 # Optimierungsstufe 0 und maximale Debugg Informationen
RELEASE_FLAGS = -O3 # Beim Release keine Debug Information herausgeben aber maximal optimierten code

FLAGS = $(RELEASE_FLAGS)

preprocess:
	g++ $(FLAGS) -E Functions2.cc > Temp.cc

assemble:
	g++ $(FLAGS) -S Functions2.cc

compile:
	g++ $(FLAGS) -c Functions2.cc -o Functions2.o

build:
	g++ $(FLAGS) Functions2.o -o Functions2
