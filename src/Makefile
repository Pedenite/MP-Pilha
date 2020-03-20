IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=../obj
#LDIR =../lib

#LIBS

_DEPS = pilha.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_PILHA = testa_pilha.o pilha.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_PILHA))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testa_pilha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
