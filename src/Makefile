IDIR=../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=../obj

_DEPS = pilha.hpp 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

TESTA_PILHA = testa_pilha.o pilha.o 
OBJ = $(patsubst %,$(ODIR)/%,$(TESTA_PILHA))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testa_pilha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
