SUB_DIRS := $(shell find . -name "chp[0-9][0-9]_*" -type d)

.PHONY: clean
clean:
	for dir in $(SUB_DIRS); do \
		for subdir in $$(find $$dir -name '[0-9][0-9]_*' -type d); do \
			echo "\nCleaning $$subdir ...\n" \
			make -C $$subdir clean; \
		done \
	done
