SUB_DIRS := $(shell find -E .  -type dir -depth -regex "\./[[:digit:]]{2}_.*")

.PHONY: all
all:
	for dir in $(SUB_DIRS); do \
		$(MAKE) -C $$dir; \
	done

.PHONY: clean
clean:
	for dir in $(SUB_DIRS); do \
		$(MAKE) -C $$dir clean; \
	done
