# thx: https://www.gnu.org/software/make/manual/html_node/Substitution-Refs.html#Substitution-Refs
# A substitution reference is actually an abbreviation for use of the patsubst expansion function 

SRC := a.c b.c

all:
	@echo $(SRC)
	@echo $(SRC:.c=.o)
