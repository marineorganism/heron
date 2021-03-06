#ifndef PARSE_H
#define PARSE_H

#include "LinkedList.h"


/** takes in a full command entry including a script file, and slits it into the sections that are
 * executed in one go
 * @param line is the null terminated command entry to get split up
 * @return a list with each section seperated */
struct LinkedList *parse_sectionise(char *line);

/** uses whitespace to split a section into seperate tokens. Newlines are just treated as another
 * form of whitespace. A section should not start with any white space, but the whitespace between
 * tokens can be arbitrary and the whitespace at the end of the section can be arbitrary.
 * @line is the null terminated line of text
 * @return a linked list where each item is one string0 with a single token in it and no
  * whitespace */
struct LinkedList *parse_tokenise(char *line);

#endif
