src_dir = src
inc_dir = include
obj_dir = obj
src_ext = cpp
inc_ext = h

CC = g++
CFLAGS = -fopenmp -I $(inc_dir)/ $(shell root-config --cflags)
LIBS   = $(shell root-config --libs)
GLIBS  = $(shell root-config --glibs)

SRCS = $(wildcard $(src_dir)/*.$(src_ext))
DEPS = $(wildcard $(inc_dir)/*.$(inc_ext))
OBJ = $(patsubst $(src_dir)/%.$(src_ext),$(obj_dir)/%.o,$(SRCS))

main: $(OBJ) main.cpp
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS) $(GLIBS)

$(obj_dir)/%.o : $(src_dir)/%.$(src_ext) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 

.PHONY: clean

clean:
	rm -f $(obj_dir)/*.o main
