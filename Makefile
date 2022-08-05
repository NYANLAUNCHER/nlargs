targets = src/*.c
output = nlargs
include_path = /usr/include/nlargs.h
bin_path = /usr/bin/$(output)
man_path = /usr/share/man
.SILENT: run help

build:
	gcc $(targets) -o $(output)

install:
	cp src/nlargs.h $(include_path)
	cp $(output) $(bin_path)
	cp man/nlargs.1 $(man_path)/man1
	cp man/nlargs.3 $(man_path)/man3

uninstall:
	rm $(include_path)
	rm $(bin_path)
	rm $(man_path)/man1/nlargs.1
	rm $(man_path)/man3/nlargs.3

run: build
	./$(output)

help:
	echo -e "Opts:\n\
		\"\"|\"help\" = Display this help text.\n\
		\"build\" = Build nlargs.\n\
		\"run\" = Run nlargs.\n\
		\"install\" = Install nlargs bin & header files."

