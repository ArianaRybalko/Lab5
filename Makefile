sqr_eq: main.o kvadrat.o
	gcc src/main.o src/kvadrat.o -lm -o sqr_eq

test: test_main.o test.o kvadrat.o thirdparty/ctest.h
	gcc test/main.o test/test.o src/kvadrat.o -lm -o test_main 
	./test_main





main.o: src/main.c
	gcc src/main.c -o src/main.o -c

kvadrat.o: src/kvadrat.c
	gcc src/kvadrat.c -o src/kvadrat.o -c


test_main.o: test/main.c
	gcc test/main.c -o test/main.o -c -I thirdparty

test.o: test/test.c
	gcc test/test.c -o test/test.o -c -I thirdparty

