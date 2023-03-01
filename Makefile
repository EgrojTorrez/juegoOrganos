COMPILADOR = g++

ARCHIVOS = $(wildcard *.cpp) $(wildcard src/*.cpp) $(wildcard ./*.*.cpp)
CABEZERAS = $(wildcard *.hpp) $(wildcard src/*.hpp) $(wildcard ./*.*.hpp)
# utf8
CFLAGS = -std=c++17 
CFLAGSDEBUG = -std=c++17 -g 

PROG = main.exe

$(PROG): $(ARCHIVOS) $(CABEZERAS)
	$(COMPILADOR) $(CFLAGS) $(ARCHIVOS) -o $(PROG)

debug: $(ARCHIVOS) $(CABEZERAS)
	$(COMPILADOR) $(CFLAGSDEBUG) $(ARCHIVOS) -o $(PROG)

correr:
	$(PROG)
