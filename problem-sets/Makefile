
SOURCES=$(wildcard src/*.c)

SVG_TARGETS=$(SOURCES:src/%.c=img/%.svg)
EXE_TARGETS=$(SOURCES:src/%.c=bin/%)

TARGETS=$(SVG_TARGETS) $(EXE_TARGETS)

SKETCH_PATH=../sketch
CC=gcc -I$(SKETCH_PATH) -L $(SKETCH_PATH)

.PHONY: default

default: $(TARGETS)

img/%.svg: bin/%
	@mkdir -p img
	./$< && cp output.svg $@

bin/%: src/%.c
	@mkdir -p bin
	$(CC) $<  -lm -l sketch -o $@

clean:
	-rm -f $(TARGETS)

cleanx:
	-rm -f $(EXE_TARGETS)
