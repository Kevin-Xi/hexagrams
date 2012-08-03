CPP = g++
.SUFFIXES : .o .cpp
.cpp.o :
	$(CPP) -c $<
generate : generate.o
	$(CPP) -o generate generate.o
generate.o : generate.cpp data.h

clean :
	rm -rf *.o generate
