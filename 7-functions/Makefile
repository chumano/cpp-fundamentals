OUTPUT = main
CFLAGS = -g -c -Wall
# -g for debug
# -c This flag tells the compiler to compile the source code files (.cpp) into object files (.o) only. It doesn't link them together to create an executable file. Object files are intermediate files containing machine code for each translated source file.

pointerandref.o:
	g++ $(CFLAGS) -o pointerandref.o pointerandref.cpp

.PHONY:
build: clean pointerandref.o
	g++ -g -o $(OUTPUT)  pointerandref.o main.cpp

.PHONY:
build2: clean libmylib.a mylib.h
	g++ -o $(OUTPUT)2 main2.cpp  -L. -lmylib 

# make a static lib
libmylib.a: pointerandref.o
	ar rcs libmylib.a pointerandref.o

mylib.h: pointerandref.h
	cp pointerandref.h mylib.h

.PHONY:
clean:
	rm -f $(OUTPUT)
	rm -f $(OUTPUT)2
	rm -f pointerandref.o
	rm -f libmylib.a

.PHONY:
run: build
	./$(OUTPUT)

.PHONY:
run2: build2
	./$(OUTPUT)2
	