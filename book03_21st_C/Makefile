SUB_DIRS := $(shell find . -name "chp[0-9][0-9]_*" -type d)

.PHONY: clean
clean:
	for dir in $(SUB_DIRS); do \
		$(MAKE) -C $$dir clean; \
	done
