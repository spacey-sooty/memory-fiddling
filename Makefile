LINT_FLAGS = -w -pedantic -Wall

all: run

compile:
	mkdir -p build
	clang -o build/main.o -c src/main.c
	clang -o build/sll.o -c src/sll.c
	clang build/main.o build/sll.o -o build/main

run: compile
	chmod +x build/main
	./build/main

install:
	# only for debian based os
	sudo apt install clang-format clang-tools clang

format:
	clang-format -i src/main.c

lint:
	clang -o build/main.o -c src/main.c $(LINT_FLAGS)
	clang -o build/sll.o -c src/sll.c $(LINT_FLAGS)

clean:
	rm -rf build
