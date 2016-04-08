main1: src/main.c test/test.c thirdparty/ctest.h
	gcc src/main.c   test/test.c   -o main1  -lm -Ithirdparty
