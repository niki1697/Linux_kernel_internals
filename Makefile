TARGET  := prcs_ctx
WARN    := -W -Wall -Wstrict-prototypes -Wmissing-prototypes
INCLUDE := -isystem /lib/modules/`uname -r`/build/include
CFLAGS  := -DMODULE -D__KERNEL__ ${WARN} ${INCLUDE}
CC      := gcc-3.0
	
${TARGET}.o: ${TARGET}.c

clean:
    rm -rf ${TARGET}.o
