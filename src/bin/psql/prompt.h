/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright 2000 by PostgreSQL Global Development Team
 *
 * $Header$
 */
#ifndef PROMPT_H
#define PROMPT_H

#include <c.h>

typedef enum _promptStatus
{
	PROMPT_READY,
	PROMPT_CONTINUE,
	PROMPT_COMMENT,
	PROMPT_SINGLEQUOTE,
	PROMPT_DOUBLEQUOTE,
	PROMPT_COPY
}			promptStatus_t;

const char *get_prompt(promptStatus_t status);

#endif	 /* PROMPT_H */
