
SOURCES=$(wildcard *.c)

SVG_TARGETS=$(SOURCES:%.c=%.svg)
EXE_TARGETS=$(SOURCES:%.c=bin/%)

TARGETS=$(SVG_TARGETS) $(EXE_TARGETS)

SKETCH_PATH=../../sketch
CC=gcc -I$(SKETCH_PATH) -L $(SKETCH_PATH)

.PHONY: default

default: $(TARGETS)

%.svg: bin/%
	./$< && mv lesson2.svg $@

bin/%: %.c
	@mkdir -p bin
	$(CC) $<  -lm -l sketch -o $@

clean:
	-rm -f $(TARGETS)

cleanx:
	-rm -f $(EXE_TARGETS)
