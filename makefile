CPP = g++
.SUFFIXES : .o .cpp
.cpp.o :
	$(CPP) -c $<
all : generate query
generate : generate.o
	$(CPP) -o generate generate.o
query : query.o
	$(CPP) -o query query.o
generate.o : generate.cpp data.h
query.o : query.cpp data.h

clean :
	rm -rf *.o generate
