
/*  A Bison parser, made from preproc.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	SQL_AT	258
#define	SQL_BOOL	259
#define	SQL_BREAK	260
#define	SQL_CALL	261
#define	SQL_CONNECT	262
#define	SQL_CONNECTION	263
#define	SQL_CONTINUE	264
#define	SQL_DEALLOCATE	265
#define	SQL_DISCONNECT	266
#define	SQL_ENUM	267
#define	SQL_FOUND	268
#define	SQL_FREE	269
#define	SQL_GO	270
#define	SQL_GOTO	271
#define	SQL_IDENTIFIED	272
#define	SQL_IMMEDIATE	273
#define	SQL_INDICATOR	274
#define	SQL_INT	275
#define	SQL_LONG	276
#define	SQL_OPEN	277
#define	SQL_PREPARE	278
#define	SQL_RELEASE	279
#define	SQL_REFERENCE	280
#define	SQL_SECTION	281
#define	SQL_SHORT	282
#define	SQL_SIGNED	283
#define	SQL_SQLERROR	284
#define	SQL_SQLPRINT	285
#define	SQL_SQLWARNING	286
#define	SQL_START	287
#define	SQL_STOP	288
#define	SQL_STRUCT	289
#define	SQL_UNSIGNED	290
#define	SQL_VAR	291
#define	SQL_WHENEVER	292
#define	S_ANYTHING	293
#define	S_AUTO	294
#define	S_BOOL	295
#define	S_CHAR	296
#define	S_CONST	297
#define	S_DOUBLE	298
#define	S_ENUM	299
#define	S_EXTERN	300
#define	S_FLOAT	301
#define	S_INT	302
#define	S	303
#define	S_LONG	304
#define	S_REGISTER	305
#define	S_SHORT	306
#define	S_SIGNED	307
#define	S_STATIC	308
#define	S_STRUCT	309
#define	S_UNION	310
#define	S_UNSIGNED	311
#define	S_VARCHAR	312
#define	TYPECAST	313
#define	ABSOLUTE	314
#define	ACTION	315
#define	ADD	316
#define	ALL	317
#define	ALTER	318
#define	AND	319
#define	ANY	320
#define	AS	321
#define	ASC	322
#define	BEGIN_TRANS	323
#define	BETWEEN	324
#define	BOTH	325
#define	BY	326
#define	CASCADE	327
#define	CASE	328
#define	CAST	329
#define	CHAR	330
#define	CHARACTER	331
#define	CHECK	332
#define	CLOSE	333
#define	COALESCE	334
#define	COLLATE	335
#define	COLUMN	336
#define	COMMIT	337
#define	CONSTRAINT	338
#define	CREATE	339
#define	CROSS	340
#define	CURRENT	341
#define	CURRENT_DATE	342
#define	CURRENT_TIME	343
#define	CURRENT_TIMESTAMP	344
#define	CURRENT_USER	345
#define	CURSOR	346
#define	DAY_P	347
#define	DECIMAL	348
#define	DECLARE	349
#define	DEFAULT	350
#define	DELETE	351
#define	DESC	352
#define	DISTINCT	353
#define	DOUBLE	354
#define	DROP	355
#define	ELSE	356
#define	END_TRANS	357
#define	EXCEPT	358
#define	EXECUTE	359
#define	EXISTS	360
#define	EXTRACT	361
#define	FALSE_P	362
#define	FETCH	363
#define	FLOAT	364
#define	FOR	365
#define	FOREIGN	366
#define	FROM	367
#define	FULL	368
#define	GRANT	369
#define	GROUP	370
#define	HAVING	371
#define	HOUR_P	372
#define	IN	373
#define	INNER_P	374
#define	INSENSITIVE	375
#define	INSERT	376
#define	INTERSECT	377
#define	INTERVAL	378
#define	INTO	379
#define	IS	380
#define	ISOLATION	381
#define	JOIN	382
#define	KEY	383
#define	LANGUAGE	384
#define	LEADING	385
#define	LEFT	386
#define	LEVEL	387
#define	LIKE	388
#define	LOCAL	389
#define	MATCH	390
#define	MINUTE_P	391
#define	MONTH_P	392
#define	NAMES	393
#define	NATIONAL	394
#define	NATURAL	395
#define	NCHAR	396
#define	NEXT	397
#define	NO	398
#define	NOT	399
#define	NULLIF	400
#define	NULL_P	401
#define	NUMERIC	402
#define	OF	403
#define	ON	404
#define	ONLY	405
#define	OPTION	406
#define	OR	407
#define	ORDER	408
#define	OUTER_P	409
#define	PARTIAL	410
#define	POSITION	411
#define	PRECISION	412
#define	PRIMARY	413
#define	PRIOR	414
#define	PRIVILEGES	415
#define	PROCEDURE	416
#define	PUBLIC	417
#define	READ	418
#define	REFERENCES	419
#define	RELATIVE	420
#define	REVOKE	421
#define	RIGHT	422
#define	ROLLBACK	423
#define	SCROLL	424
#define	SECOND_P	425
#define	SELECT	426
#define	SET	427
#define	SUBSTRING	428
#define	TABLE	429
#define	TEMP	430
#define	THEN	431
#define	TIME	432
#define	TIMESTAMP	433
#define	TIMEZONE_HOUR	434
#define	TIMEZONE_MINUTE	435
#define	TO	436
#define	TRAILING	437
#define	TRANSACTION	438
#define	TRIM	439
#define	TRUE_P	440
#define	UNION	441
#define	UNIQUE	442
#define	UPDATE	443
#define	USER	444
#define	USING	445
#define	VALUES	446
#define	VARCHAR	447
#define	VARYING	448
#define	VIEW	449
#define	WHEN	450
#define	WHERE	451
#define	WITH	452
#define	WORK	453
#define	YEAR_P	454
#define	ZONE	455
#define	TRIGGER	456
#define	TYPE_P	457
#define	ABORT_TRANS	458
#define	AFTER	459
#define	AGGREGATE	460
#define	ANALYZE	461
#define	BACKWARD	462
#define	BEFORE	463
#define	BINARY	464
#define	CACHE	465
#define	CLUSTER	466
#define	COPY	467
#define	CREATEDB	468
#define	CREATEUSER	469
#define	CYCLE	470
#define	DATABASE	471
#define	DELIMITERS	472
#define	DO	473
#define	EACH	474
#define	ENCODING	475
#define	EXPLAIN	476
#define	EXTEND	477
#define	FORWARD	478
#define	FUNCTION	479
#define	HANDLER	480
#define	INCREMENT	481
#define	INDEX	482
#define	INHERITS	483
#define	INSTEAD	484
#define	ISNULL	485
#define	LANCOMPILER	486
#define	LIMIT	487
#define	LISTEN	488
#define	UNLISTEN	489
#define	LOAD	490
#define	LOCATION	491
#define	LOCK_P	492
#define	MAXVALUE	493
#define	MINVALUE	494
#define	MOVE	495
#define	NEW	496
#define	NOCREATEDB	497
#define	NOCREATEUSER	498
#define	NONE	499
#define	NOTHING	500
#define	NOTIFY	501
#define	NOTNULL	502
#define	OFFSET	503
#define	OIDS	504
#define	OPERATOR	505
#define	PASSWORD	506
#define	PROCEDURAL	507
#define	RENAME	508
#define	RESET	509
#define	RETURNS	510
#define	ROW	511
#define	RULE	512
#define	SERIAL	513
#define	SEQUENCE	514
#define	SETOF	515
#define	SHOW	516
#define	START	517
#define	STATEMENT	518
#define	STDIN	519
#define	STDOUT	520
#define	TRUSTED	521
#define	UNTIL	522
#define	VACUUM	523
#define	VALID	524
#define	VERBOSE	525
#define	VERSION	526
#define	IDENT	527
#define	SCONST	528
#define	Op	529
#define	CSTRING	530
#define	CVARIABLE	531
#define	CPP_LINE	532
#define	ICONST	533
#define	PARAM	534
#define	FCONST	535
#define	OP	536
#define	UMINUS	537

#line 2 "preproc.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "catalog/catname.h"
#include "utils/numeric.h"

#include "extern.h"

#ifdef MULTIBYTE
#include "mb/pg_wchar.h"
#endif

#define STRUCT_DEPTH 128

/*
 * Variables containing simple states.
 */
int	struct_level = 0;
char	errortext[128];
static char	*connection = NULL;
static int      QueryIsRule = 0, ForUpdateNotAllowed = 0;
static struct this_type actual_type[STRUCT_DEPTH];
static char     *actual_storage[STRUCT_DEPTH];

/* temporarily store struct members while creating the data structure */
struct ECPGstruct_member *struct_member_list[STRUCT_DEPTH] = { NULL };

struct ECPGtype ecpg_no_indicator = {ECPGt_NO_INDICATOR, 0L, {NULL}};
struct variable no_indicator = {"no_indicator", &ecpg_no_indicator, 0, NULL};

struct ECPGtype ecpg_query = {ECPGt_char_variable, 0L, {NULL}};

/*
 * Handle the filename and line numbering.
 */
char * input_filename = NULL;

void
output_line_number()
{
    if (input_filename)
       fprintf(yyout, "\n#line %d \"%s\"\n", yylineno + 1, input_filename);
}

static void
output_simple_statement(char *cmd)
{
	fputs(cmd, yyout);
	output_line_number();
        free(cmd);
}

/*
 * store the whenever action here
 */
static struct when when_error, when_nf, when_warn;

static void
print_action(struct when *w)
{
	switch (w->code)
	{
		case W_SQLPRINT: fprintf(yyout, "sqlprint();");
                                 break;
		case W_GOTO:	 fprintf(yyout, "goto %s;", w->command);
				 break;
		case W_DO:	 fprintf(yyout, "%s;", w->command);
				 break;
		case W_STOP:	 fprintf(yyout, "exit (1);");
				 break;
		case W_BREAK:	 fprintf(yyout, "break;");
				 break;
		default:	 fprintf(yyout, "{/* %d not implemented yet */}", w->code);
				 break;
	}
}

static void
whenever_action(int mode)
{
	if (mode == 1 && when_nf.code != W_NOTHING)
	{
		output_line_number();
		fprintf(yyout, "\nif (sqlca.sqlcode == ECPG_NOT_FOUND) ");
		print_action(&when_nf);
	}
	if (when_warn.code != W_NOTHING)
        {
		output_line_number();
                fprintf(yyout, "\nif (sqlca.sqlwarn[0] == 'W') ");
		print_action(&when_warn);
        }
	if (when_error.code != W_NOTHING)
        {
		output_line_number();
                fprintf(yyout, "\nif (sqlca.sqlcode < 0) ");
		print_action(&when_error);
        }
	output_line_number();
}

/*
 * Handling of variables.
 */

/*
 * brace level counter
 */
int braces_open;

static struct variable * allvariables = NULL;

static struct variable *
new_variable(const char * name, struct ECPGtype * type)
{
    struct variable * p = (struct variable*) mm_alloc(sizeof(struct variable));

    p->name = mm_strdup(name);
    p->type = type;
    p->brace_level = braces_open;

    p->next = allvariables;
    allvariables = p;

    return(p);
}

static struct variable * find_variable(char * name);

static struct variable *
find_struct_member(char *name, char *str, struct ECPGstruct_member *members)
{
    char *next = strchr(++str, '.'), c = '\0';

    if (next != NULL)
    {
	c = *next;
	*next = '\0';
    }

    for (; members; members = members->next)
    {
        if (strcmp(members->name, str) == 0)
	{
		if (c == '\0')
		{
			/* found the end */
			switch (members->typ->typ)
			{
			   case ECPGt_array:
				return(new_variable(name, ECPGmake_array_type(members->typ->u.element, members->typ->size)));
			   case ECPGt_struct:
			   case ECPGt_union:
				return(new_variable(name, ECPGmake_struct_type(members->typ->u.members, members->typ->typ)));
			   default:
				return(new_variable(name, ECPGmake_simple_type(members->typ->typ, members->typ->size)));
			}
		}
		else
		{
			*next = c;
			if (c == '-')
			{
				next++;
				return(find_struct_member(name, next, members->typ->u.element->u.members));
			}
			else return(find_struct_member(name, next, members->typ->u.members));
		}
	}
    }

    return(NULL);
}

static struct variable *
find_struct(char * name, char *next)
{
    struct variable * p;
    char c = *next;

    /* first get the mother structure entry */
    *next = '\0';
    p = find_variable(name);

    if (c == '-')
    {
	if (p->type->typ != ECPGt_struct && p->type->typ != ECPGt_union)
        {
                sprintf(errortext, "variable %s is not a pointer", name);
                yyerror (errortext);
        }

	if (p->type->u.element->typ  != ECPGt_struct && p->type->u.element->typ != ECPGt_union)
        {
                sprintf(errortext, "variable %s is not a pointer to a structure or a union", name);
                yyerror (errortext);
        }

	/* restore the name, we will need it later on */
	*next = c;
	next++;

	return find_struct_member(name, next, p->type->u.element->u.members);
    }
    else
    {
	if (p->type->typ != ECPGt_struct && p->type->typ != ECPGt_union)
	{
		sprintf(errortext, "variable %s is neither a structure nor a union", name);
		yyerror (errortext);
	}

	/* restore the name, we will need it later on */
	*next = c;

	return find_struct_member(name, next, p->type->u.members);
    }
}

static struct variable *
find_simple(char * name)
{
    struct variable * p;

    for (p = allvariables; p; p = p->next)
    {
        if (strcmp(p->name, name) == 0)
	    return p;
    }

    return(NULL);
}

/* Note that this function will end the program in case of an unknown */
/* variable */
static struct variable *
find_variable(char * name)
{
    char * next;
    struct variable * p;

    if ((next = strchr(name, '.')) != NULL)
	p = find_struct(name, next);
    else if ((next = strstr(name, "->")) != NULL)
	p = find_struct(name, next);
    else
	p = find_simple(name);

    if (p == NULL)
    {
	sprintf(errortext, "The variable %s is not declared", name);
	yyerror(errortext);
    }

    return(p);
}

static void
remove_variables(int brace_level)
{
    struct variable * p, *prev;

    for (p = prev = allvariables; p; p = p ? p->next : NULL)
    {
	if (p->brace_level >= brace_level)
	{
	    /* remove it */
	    if (p == allvariables)
		prev = allvariables = p->next;
	    else
		prev->next = p->next;

	    ECPGfree_type(p->type);
	    free(p->name);
	    free(p);
	    p = prev;
	}
	else
	    prev = p;
    }
}


/*
 * Here are the variables that need to be handled on every request.
 * These are of two kinds: input and output.
 * I will make two lists for them.
 */

struct arguments * argsinsert = NULL;
struct arguments * argsresult = NULL;

static void
reset_variables(void)
{
    argsinsert = NULL;
    argsresult = NULL;
}


/* Add a variable to a request. */
static void
add_variable(struct arguments ** list, struct variable * var, struct variable * ind)
{
    struct arguments * p = (struct arguments *)mm_alloc(sizeof(struct arguments));
    p->variable = var;
    p->indicator = ind;
    p->next = *list;
    *list = p;
}


/* Dump out a list of all the variable on this list.
   This is a recursive function that works from the end of the list and
   deletes the list as we go on.
 */
static void
dump_variables(struct arguments * list, int mode)
{
    if (list == NULL)
    {
        return;
    }

    /* The list is build up from the beginning so lets first dump the
       end of the list:
     */

    dump_variables(list->next, mode);

    /* Then the current element and its indicator */
    ECPGdump_a_type(yyout, list->variable->name, list->variable->type,
	(list->indicator->type->typ != ECPGt_NO_INDICATOR) ? list->indicator->name : NULL,
	(list->indicator->type->typ != ECPGt_NO_INDICATOR) ? list->indicator->type : NULL, NULL, NULL);

    /* Then release the list element. */
    if (mode != 0)
    	free(list);
}

static void
check_indicator(struct ECPGtype *var)
{
	/* make sure this is a valid indicator variable */
	switch (var->typ)
	{
		struct ECPGstruct_member *p;

		case ECPGt_short:
		case ECPGt_int:
		case ECPGt_long:
		case ECPGt_unsigned_short:
		case ECPGt_unsigned_int:
		case ECPGt_unsigned_long:
			break;

		case ECPGt_struct:
		case ECPGt_union:
			for (p = var->u.members; p; p = p->next)
				check_indicator(p->typ);
			break;

		case ECPGt_array:
			check_indicator(var->u.element);
			break;
		default: 
			yyerror ("indicator variable must be integer type");
			break;
	}
}

static char *
make1_str(const char *str)
{
        char * res_str = (char *)mm_alloc(strlen(str) + 1);

	strcpy(res_str, str);
	return res_str;
}

static char *
make2_str(char *str1, char *str2)
{ 
	char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + 1);

	strcpy(res_str, str1);
	strcat(res_str, str2);
	free(str1);
	free(str2);
	return(res_str);
}

static char *
cat2_str(char *str1, char *str2)
{ 
	char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + 2);

	strcpy(res_str, str1);
	strcat(res_str, " ");
	strcat(res_str, str2);
	free(str1);
	free(str2);
	return(res_str);
}

static char *
make3_str(char *str1, char *str2, char * str3)
{    
        char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + strlen(str3) + 1);
     
        strcpy(res_str, str1);
        strcat(res_str, str2);
	strcat(res_str, str3);
	free(str1);
	free(str2);
	free(str3);
        return(res_str);
}    

static char *
cat3_str(char *str1, char *str2, char * str3)
{    
        char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + strlen(str3) + 3);
     
        strcpy(res_str, str1);
	strcat(res_str, " ");
        strcat(res_str, str2);
	strcat(res_str, " ");
	strcat(res_str, str3);
	free(str1);
	free(str2);
	free(str3);
        return(res_str);
}    

static char *
make4_str(char *str1, char *str2, char *str3, char *str4)
{    
        char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4) + 1);
     
        strcpy(res_str, str1);
        strcat(res_str, str2);
	strcat(res_str, str3);
	strcat(res_str, str4);
	free(str1);
	free(str2);
	free(str3);
	free(str4);
        return(res_str);
}

static char *
cat4_str(char *str1, char *str2, char *str3, char *str4)
{    
        char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4) + 4);
     
        strcpy(res_str, str1);
	strcat(res_str, " ");
        strcat(res_str, str2);
	strcat(res_str, " ");
	strcat(res_str, str3);
	strcat(res_str, " ");
	strcat(res_str, str4);
	free(str1);
	free(str2);
	free(str3);
	free(str4);
        return(res_str);
}

static char *
make5_str(char *str1, char *str2, char *str3, char *str4, char *str5)
{    
        char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4) + strlen(str5) + 1);
     
        strcpy(res_str, str1);
        strcat(res_str, str2);
	strcat(res_str, str3);
	strcat(res_str, str4);
	strcat(res_str, str5);
	free(str1);
	free(str2);
	free(str3);
	free(str4);
	free(str5);
        return(res_str);
}    

static char *
cat5_str(char *str1, char *str2, char *str3, char *str4, char *str5)
{    
        char * res_str  = (char *)mm_alloc(strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4) + strlen(str5) + 5);
     
        strcpy(res_str, str1);
	strcat(res_str, " ");
        strcat(res_str, str2);
	strcat(res_str, " ");
	strcat(res_str, str3);
	strcat(res_str, " ");
	strcat(res_str, str4);
	strcat(res_str, " ");
	strcat(res_str, str5);
	free(str1);
	free(str2);
	free(str3);
	free(str4);
	free(str5);
        return(res_str);
}    

static char *
make_name(void)
{
	char * name = (char *)mm_alloc(yyleng + 1);

	strncpy(name, yytext, yyleng);
	name[yyleng] = '\0';
	return(name);
}

static void
output_statement(char * stmt, int mode)
{
	int i, j=strlen(stmt);

	fprintf(yyout, "ECPGdo(__LINE__, %s, \"", connection ? connection : "NULL");

	/* do this char by char as we have to filter '\"' */
	for (i = 0;i < j; i++)
		if (stmt[i] != '\"')
			fputc(stmt[i], yyout);
	fputs("\", ", yyout);

	/* dump variables to C file*/
	dump_variables(argsinsert, 1);
	fputs("ECPGt_EOIT, ", yyout);
	dump_variables(argsresult, 1);
	fputs("ECPGt_EORT);", yyout);
	whenever_action(mode);
	free(stmt);
	if (connection != NULL)
		free(connection);
}

static struct typedefs *
get_typedef(char *name)
{
	struct typedefs *this;

	for (this = types; this && strcmp(this->name, name); this = this->next);
	if (!this)
	{
		sprintf(errortext, "invalid datatype '%s'", name);
		yyerror(errortext);
	}

	return(this);
}

static void
adjust_array(enum ECPGttype type_enum, int *dimension, int *length, int type_dimension, int type_index, bool pointer)
{
	if (type_index >= 0) 
	{
		if (*length >= 0)
                      	yyerror("No multi-dimensional array support");

		*length = type_index;
	}
		       
	if (type_dimension >= 0)
	{
		if (*dimension >= 0 && *length >= 0)
			yyerror("No multi-dimensional array support");

		if (*dimension >= 0)
			*length = *dimension;

		*dimension = type_dimension;
	}

	if (*length >= 0 && *dimension >= 0 && pointer)
		yyerror("No multi-dimensional array support");

	switch (type_enum)
	{
	   case ECPGt_struct:
	   case ECPGt_union:
	        /* pointer has to get dimension 0 */
                if (pointer)
	        {
		    *length = *dimension;
                    *dimension = 0;
	        }

                if (*length >= 0)
                   yyerror("No multi-dimensional array support for structures");

                break;
           case ECPGt_varchar:
	        /* pointer has to get dimension 0 */
                if (pointer)
                    *dimension = 0;

                /* one index is the string length */
                if (*length < 0)
                {
                   *length = *dimension;
                   *dimension = -1;
                }

                break;
           case ECPGt_char:
           case ECPGt_unsigned_char:
	        /* pointer has to get length 0 */
                if (pointer)
                    *length=0;

                /* one index is the string length */
                if (*length < 0)
                {
                   *length = (*dimension < 0) ? 1 : *dimension;
                   *dimension = -1;
                }

                break;
           default:
 	        /* a pointer has dimension = 0 */
                if (pointer) {
                    *length = *dimension;
		    *dimension = 0;
	        }

                if (*length >= 0)
                   yyerror("No multi-dimensional array support for simple data types");

                break;
	}
}


#line 645 "preproc.y"
typedef union {
	double                  dval;
        int                     ival;
	char *                  str;
	struct when             action;
	struct index		index;
	int			tagname;
	struct this_type	type;
	enum ECPGttype		type_enum;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		2453
#define	YYFLAG		-32768
#define	YYNTBASE	302

#define YYTRANSLATE(x) ((unsigned)(x) <= 537 ? yytranslate[x] : 665)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,   289,     2,     2,   298,
   299,   287,   285,   297,   286,   294,   288,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,   291,   292,   283,
   282,   284,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   295,     2,   296,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   300,   290,   301,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
   196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
   206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
   216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
   226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
   236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
   246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
   256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
   266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
   276,   277,   278,   279,   280,   281,   293
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     3,     6,    11,    15,    17,    19,    21,    23,
    25,    28,    30,    32,    34,    36,    38,    40,    42,    44,
    46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
    66,    68,    70,    72,    74,    76,    78,    80,    82,    84,
    86,    88,    90,    92,    94,    96,    98,   100,   102,   104,
   106,   108,   110,   112,   114,   116,   118,   120,   122,   124,
   126,   128,   130,   132,   134,   136,   138,   140,   149,   158,
   162,   166,   167,   169,   171,   172,   174,   176,   177,   181,
   183,   187,   188,   192,   193,   198,   203,   208,   215,   221,
   225,   227,   229,   231,   233,   235,   238,   242,   247,   250,
   254,   259,   265,   269,   274,   278,   285,   291,   294,   297,
   305,   307,   309,   311,   313,   315,   317,   318,   321,   322,
   326,   327,   336,   338,   339,   343,   345,   346,   348,   350,
   354,   358,   360,   361,   364,   366,   369,   370,   374,   376,
   381,   384,   387,   390,   392,   395,   401,   405,   407,   409,
   412,   416,   420,   424,   428,   432,   436,   440,   444,   447,
   450,   454,   461,   465,   469,   474,   478,   481,   484,   486,
   488,   493,   495,   500,   502,   504,   508,   510,   515,   520,
   526,   537,   541,   543,   545,   547,   549,   552,   556,   560,
   564,   568,   572,   576,   580,   584,   587,   590,   594,   601,
   605,   609,   614,   618,   622,   627,   631,   635,   638,   641,
   644,   647,   651,   654,   659,   663,   667,   672,   677,   683,
   690,   696,   703,   707,   709,   711,   714,   717,   718,   721,
   723,   724,   728,   732,   735,   737,   740,   743,   748,   749,
   757,   761,   762,   766,   768,   770,   775,   778,   779,   782,
   784,   787,   790,   793,   796,   798,   800,   802,   805,   807,
   810,   820,   822,   823,   828,   843,   845,   847,   849,   853,
   859,   861,   863,   865,   869,   871,   872,   874,   876,   878,
   882,   883,   885,   887,   889,   891,   897,   901,   904,   906,
   908,   910,   912,   914,   916,   918,   920,   924,   926,   930,
   934,   936,   940,   942,   944,   946,   948,   951,   955,   959,
   966,   971,   973,   975,   977,   979,   980,   982,   985,   987,
   989,   991,   992,   995,   998,   999,  1007,  1010,  1012,  1014,
  1016,  1020,  1022,  1024,  1026,  1028,  1030,  1032,  1035,  1037,
  1041,  1042,  1049,  1061,  1063,  1064,  1067,  1068,  1070,  1072,
  1076,  1078,  1085,  1089,  1092,  1095,  1096,  1098,  1101,  1102,
  1107,  1119,  1122,  1123,  1127,  1130,  1132,  1136,  1139,  1141,
  1142,  1146,  1148,  1150,  1152,  1154,  1159,  1161,  1163,  1168,
  1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,
  1195,  1197,  1201,  1205,  1209,  1219,  1221,  1222,  1224,  1225,
  1226,  1240,  1242,  1244,  1246,  1250,  1254,  1256,  1258,  1261,
  1265,  1268,  1270,  1272,  1274,  1276,  1280,  1282,  1284,  1286,
  1288,  1290,  1292,  1293,  1296,  1299,  1302,  1305,  1308,  1311,
  1314,  1317,  1320,  1322,  1324,  1325,  1331,  1334,  1341,  1345,
  1349,  1350,  1354,  1355,  1357,  1359,  1360,  1362,  1364,  1365,
  1369,  1374,  1378,  1384,  1386,  1387,  1389,  1390,  1394,  1395,
  1397,  1401,  1405,  1407,  1409,  1411,  1413,  1415,  1417,  1422,
  1427,  1430,  1432,  1440,  1445,  1449,  1450,  1454,  1456,  1459,
  1464,  1468,  1477,  1485,  1492,  1494,  1495,  1502,  1510,  1512,
  1514,  1516,  1519,  1520,  1523,  1524,  1527,  1530,  1533,  1538,
  1542,  1544,  1548,  1553,  1558,  1567,  1572,  1575,  1576,  1578,
  1579,  1581,  1582,  1584,  1588,  1590,  1591,  1595,  1596,  1598,
  1602,  1605,  1608,  1611,  1614,  1616,  1618,  1619,  1624,  1629,
  1632,  1637,  1640,  1641,  1643,  1645,  1647,  1649,  1651,  1653,
  1654,  1656,  1658,  1662,  1666,  1667,  1670,  1671,  1675,  1676,
  1679,  1680,  1683,  1684,  1688,  1690,  1692,  1696,  1698,  1702,
  1705,  1707,  1709,  1714,  1717,  1720,  1722,  1727,  1732,  1736,
  1739,  1742,  1745,  1747,  1749,  1750,  1752,  1753,  1758,  1761,
  1765,  1767,  1769,  1772,  1773,  1775,  1778,  1782,  1787,  1788,
  1792,  1797,  1798,  1801,  1803,  1806,  1808,  1810,  1812,  1814,
  1816,  1818,  1820,  1822,  1824,  1826,  1828,  1830,  1832,  1834,
  1836,  1838,  1840,  1842,  1844,  1846,  1848,  1850,  1852,  1854,
  1856,  1858,  1860,  1862,  1864,  1866,  1868,  1870,  1872,  1874,
  1876,  1878,  1880,  1883,  1886,  1889,  1892,  1894,  1897,  1899,
  1901,  1905,  1906,  1912,  1916,  1917,  1923,  1927,  1928,  1933,
  1935,  1940,  1943,  1945,  1949,  1952,  1954,  1955,  1959,  1960,
  1963,  1964,  1966,  1969,  1971,  1974,  1976,  1978,  1980,  1982,
  1984,  1986,  1990,  1991,  1993,  1997,  2001,  2005,  2009,  2013,
  2017,  2021,  2022,  2024,  2026,  2034,  2043,  2052,  2060,  2068,
  2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,  2088,  2090,
  2092,  2094,  2098,  2100,  2103,  2105,  2107,  2109,  2112,  2115,
  2118,  2122,  2126,  2130,  2134,  2138,  2142,  2146,  2150,  2154,
  2158,  2161,  2164,  2168,  2175,  2179,  2183,  2187,  2192,  2195,
  2198,  2203,  2207,  2212,  2214,  2216,  2221,  2223,  2228,  2230,
  2232,  2237,  2242,  2247,  2252,  2258,  2264,  2270,  2275,  2278,
  2282,  2285,  2290,  2294,  2299,  2303,  2308,  2314,  2321,  2327,
  2334,  2340,  2346,  2352,  2358,  2364,  2370,  2376,  2382,  2388,
  2395,  2402,  2409,  2416,  2423,  2430,  2437,  2444,  2451,  2458,
  2465,  2472,  2479,  2486,  2493,  2500,  2507,  2514,  2518,  2522,
  2525,  2527,  2529,  2532,  2534,  2536,  2539,  2542,  2545,  2549,
  2553,  2557,  2561,  2565,  2568,  2571,  2575,  2582,  2586,  2590,
  2593,  2596,  2600,  2605,  2607,  2609,  2614,  2616,  2621,  2623,
  2625,  2630,  2635,  2641,  2647,  2653,  2658,  2660,  2665,  2672,
  2673,  2675,  2679,  2683,  2687,  2688,  2690,  2692,  2694,  2696,
  2700,  2701,  2704,  2706,  2709,  2713,  2717,  2721,  2725,  2729,
  2732,  2736,  2743,  2747,  2751,  2754,  2757,  2759,  2763,  2768,
  2773,  2778,  2784,  2790,  2796,  2801,  2805,  2806,  2809,  2810,
  2813,  2814,  2818,  2821,  2823,  2825,  2827,  2829,  2833,  2835,
  2837,  2839,  2843,  2849,  2856,  2861,  2864,  2866,  2871,  2874,
  2875,  2878,  2880,  2881,  2885,  2889,  2891,  2895,  2899,  2903,
  2905,  2907,  2912,  2915,  2919,  2923,  2925,  2929,  2931,  2935,
  2937,  2939,  2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,
  2956,  2958,  2960,  2962,  2964,  2966,  2969,  2971,  2973,  2975,
  2978,  2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,
  2998,  3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,
  3018,  3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,
  3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,
  3058,  3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,
  3078,  3080,  3082,  3084,  3086,  3088,  3090,  3092,  3094,  3096,
  3098,  3100,  3102,  3104,  3106,  3108,  3110,  3112,  3114,  3116,
  3118,  3120,  3122,  3124,  3126,  3128,  3130,  3132,  3134,  3136,
  3138,  3140,  3142,  3144,  3146,  3148,  3150,  3152,  3154,  3156,
  3158,  3160,  3162,  3164,  3166,  3168,  3170,  3172,  3174,  3176,
  3178,  3180,  3182,  3184,  3186,  3188,  3190,  3192,  3194,  3196,
  3198,  3200,  3202,  3204,  3206,  3208,  3210,  3212,  3214,  3216,
  3218,  3220,  3222,  3224,  3226,  3228,  3230,  3232,  3234,  3236,
  3238,  3240,  3242,  3244,  3246,  3248,  3250,  3252,  3254,  3256,
  3258,  3260,  3262,  3264,  3266,  3268,  3270,  3272,  3274,  3280,
  3284,  3287,  3291,  3298,  3300,  3302,  3305,  3308,  3310,  3311,
  3313,  3317,  3320,  3321,  3324,  3325,  3328,  3329,  3331,  3335,
  3340,  3344,  3346,  3348,  3350,  3352,  3355,  3356,  3364,  3368,
  3369,  3374,  3380,  3386,  3387,  3390,  3391,  3392,  3399,  3401,
  3403,  3405,  3407,  3409,  3411,  3412,  3414,  3416,  3418,  3420,
  3422,  3424,  3429,  3432,  3437,  3442,  3445,  3448,  3449,  3451,
  3453,  3456,  3458,  3461,  3463,  3466,  3468,  3470,  3472,  3474,
  3477,  3479,  3481,  3485,  3490,  3491,  3494,  3495,  3497,  3501,
  3504,  3506,  3508,  3510,  3511,  3513,  3515,  3519,  3520,  3525,
  3527,  3529,  3532,  3536,  3537,  3540,  3542,  3546,  3551,  3554,
  3558,  3565,  3569,  3573,  3578,  3583,  3584,  3588,  3592,  3597,
  3602,  3603,  3605,  3606,  3608,  3610,  3612,  3614,  3617,  3619,
  3622,  3625,  3627,  3630,  3633,  3636,  3637,  3643,  3644,  3650,
  3652,  3654,  3655,  3656,  3659,  3660,  3665,  3667,  3671,  3675,
  3682,  3686,  3691,  3695,  3697,  3699,  3701,  3704,  3708,  3714,
  3717,  3723,  3726,  3728,  3730,  3732,  3735,  3738,  3741,  3745,
  3749,  3753,  3757,  3761,  3765,  3769,  3773,  3777,  3781,  3784,
  3787,  3791,  3798,  3802,  3806,  3810,  3815,  3818,  3821,  3826,
  3830,  3835,  3837,  3839,  3844,  3846,  3851,  3853,  3855,  3860,
  3865,  3870,  3875,  3881,  3887,  3893,  3898,  3901,  3905,  3908,
  3913,  3917,  3922,  3926,  3931,  3937,  3944,  3950,  3957,  3963,
  3969,  3975,  3981,  3987,  3993,  3999,  4005,  4011,  4018,  4025,
  4032,  4039,  4046,  4053,  4060,  4067,  4074,  4081,  4088,  4095,
  4102,  4109,  4116,  4123,  4130,  4137,  4141,  4145,  4148,  4150,
  4152,  4154,  4158,  4160,  4161,  4164,  4166,  4169,  4172,  4175,
  4177,  4179,  4180,  4182,  4185,  4188,  4190,  4192,  4194,  4196,
  4198,  4201,  4203,  4205,  4207,  4209,  4211,  4213,  4215,  4217,
  4219,  4221,  4223,  4225,  4227,  4229,  4231,  4233,  4235,  4237,
  4239,  4241,  4243,  4245,  4247,  4249,  4251,  4253,  4255,  4257,
  4259,  4261,  4263,  4265,  4267,  4269,  4271,  4273,  4275,  4277,
  4279,  4281,  4283,  4287,  4289
};

static const short yyrhs[] = {   303,
     0,     0,   303,   304,     0,   647,   305,   306,   292,     0,
   647,   306,   292,     0,   592,     0,   659,     0,   657,     0,
   663,     0,   664,     0,     3,   578,     0,   321,     0,   308,
     0,   323,     0,   324,     0,   330,     0,   353,     0,   357,
     0,   363,     0,   366,     0,   307,     0,   446,     0,   376,
     0,   384,     0,   365,     0,   375,     0,   309,     0,   405,
     0,   452,     0,   385,     0,   389,     0,   396,     0,   434,
     0,   435,     0,   460,     0,   406,     0,   414,     0,   417,
     0,   416,     0,   412,     0,   421,     0,   395,     0,   453,
     0,   424,     0,   436,     0,   438,     0,   439,     0,   440,
     0,   445,     0,   447,     0,   316,     0,   319,     0,   320,
     0,   577,     0,   590,     0,   591,     0,   615,     0,   616,
     0,   619,     0,   622,     0,   623,     0,   626,     0,   627,
     0,   628,     0,   629,     0,   642,     0,   643,     0,    84,
   189,   572,   310,   311,   312,   314,   315,     0,    63,   189,
   572,   310,   311,   312,   314,   315,     0,   100,   189,   572,
     0,   197,   251,   572,     0,     0,   213,     0,   242,     0,
     0,   214,     0,   243,     0,     0,   313,   297,   572,     0,
   572,     0,   118,   115,   313,     0,     0,   269,   267,   571,
     0,     0,   172,   574,   181,   317,     0,   172,   574,   282,
   317,     0,   172,   177,   200,   318,     0,   172,   183,   126,
   132,   163,   574,     0,   172,   183,   126,   132,   574,     0,
   172,   138,   444,     0,   571,     0,    95,     0,   571,     0,
    95,     0,   134,     0,   261,   574,     0,   261,   177,   200,
     0,   261,   183,   126,   132,     0,   254,   574,     0,   254,
   177,   200,     0,   254,   183,   126,   132,     0,    63,   174,
   558,   482,   322,     0,    61,   423,   334,     0,    61,   298,
   332,   299,     0,   100,   423,   574,     0,    63,   423,   574,
   172,    95,   341,     0,    63,   423,   574,   100,    95,     0,
    61,   343,     0,    78,   557,     0,   212,   327,   558,   328,
   325,   326,   329,     0,   181,     0,   112,     0,   571,     0,
   264,     0,   265,     0,   209,     0,     0,   197,   249,     0,
     0,   190,   217,   571,     0,     0,    84,   331,   174,   558,
   298,   332,   299,   352,     0,   175,     0,     0,   332,   297,
   333,     0,   333,     0,     0,   334,     0,   342,     0,   574,
   506,   335,     0,   574,   258,   337,     0,   336,     0,     0,
   336,   338,     0,   338,     0,   158,   128,     0,     0,    83,
   564,   339,     0,   339,     0,    77,   298,   345,   299,     0,
    95,   146,     0,    95,   341,     0,   144,   146,     0,   187,
     0,   158,   128,     0,   164,   574,   456,   348,   349,     0,
   340,   297,   341,     0,   341,     0,   567,     0,   286,   341,
     0,   341,   285,   341,     0,   341,   286,   341,     0,   341,
   288,   341,     0,   341,   289,   341,     0,   341,   287,   341,
     0,   341,   282,   341,     0,   341,   283,   341,     0,   341,
   284,   341,     0,   292,   341,     0,   290,   341,     0,   341,
    58,   506,     0,    74,   298,   341,    66,   506,   299,     0,
   298,   341,   299,     0,   565,   298,   299,     0,   565,   298,
   340,   299,     0,   341,   274,   341,     0,   274,   341,     0,
   341,   274,     0,    87,     0,    88,     0,    88,   298,   569,
   299,     0,    89,     0,    89,   298,   569,   299,     0,    90,
     0,   189,     0,    83,   564,   343,     0,   343,     0,    77,
   298,   345,   299,     0,   187,   298,   457,   299,     0,   158,
   128,   298,   457,   299,     0,   111,   128,   298,   457,   299,
   164,   574,   456,   348,   349,     0,   344,   297,   345,     0,
   345,     0,   567,     0,   146,     0,   574,     0,   286,   345,
     0,   345,   285,   345,     0,   345,   286,   345,     0,   345,
   288,   345,     0,   345,   289,   345,     0,   345,   287,   345,
     0,   345,   282,   345,     0,   345,   283,   345,     0,   345,
   284,   345,     0,   292,   345,     0,   290,   345,     0,   345,
    58,   506,     0,    74,   298,   345,    66,   506,   299,     0,
   298,   345,   299,     0,   565,   298,   299,     0,   565,   298,
   344,   299,     0,   345,   274,   345,     0,   345,   133,   345,
     0,   345,   144,   133,   345,     0,   345,    64,   345,     0,
   345,   152,   345,     0,   144,   345,     0,   274,   345,     0,
   345,   274,     0,   345,   230,     0,   345,   125,   146,     0,
   345,   247,     0,   345,   125,   144,   146,     0,   345,   125,
   185,     0,   345,   125,   107,     0,   345,   125,   144,   185,
     0,   345,   125,   144,   107,     0,   345,   118,   298,   346,
   299,     0,   345,   144,   118,   298,   346,   299,     0,   345,
    69,   347,    64,   347,     0,   345,   144,    69,   347,    64,
   347,     0,   346,   297,   347,     0,   347,     0,   567,     0,
   135,   113,     0,   135,   155,     0,     0,   350,   350,     0,
   350,     0,     0,   149,    96,   351,     0,   149,   188,   351,
     0,   143,    60,     0,    72,     0,   172,    95,     0,   172,
   146,     0,   228,   298,   483,   299,     0,     0,    84,   331,
   174,   558,   354,    66,   470,     0,   298,   355,   299,     0,
     0,   355,   297,   356,     0,   356,     0,   574,     0,    84,
   259,   558,   358,     0,   358,   359,     0,     0,   210,   362,
     0,   215,     0,   226,   362,     0,   238,   362,     0,   239,
   362,     0,   262,   362,     0,   361,     0,   362,     0,   570,
     0,   286,   570,     0,   569,     0,   286,   569,     0,    84,
   364,   252,   129,   571,   225,   379,   231,   571,     0,   266,
     0,     0,   100,   252,   129,   571,     0,    84,   201,   564,
   367,   368,   149,   558,   370,   104,   161,   564,   298,   373,
   299,     0,   208,     0,   204,     0,   369,     0,   369,   152,
   369,     0,   369,   152,   369,   152,   369,     0,   121,     0,
    96,     0,   188,     0,   110,   371,   372,     0,   219,     0,
     0,   256,     0,   263,     0,   374,     0,   373,   297,   374,
     0,     0,   569,     0,   570,     0,   571,     0,   655,     0,
   100,   201,   564,   149,   558,     0,    84,   378,   377,     0,
   379,   380,     0,   250,     0,   202,     0,   205,     0,   161,
     0,   127,     0,   574,     0,   419,     0,   274,     0,   298,
   381,   299,     0,   382,     0,   381,   297,   382,     0,   379,
   282,   383,     0,   379,     0,    95,   282,   383,     0,   574,
     0,   418,     0,   360,     0,   571,     0,   260,   574,     0,
   100,   174,   483,     0,   100,   259,   483,     0,   108,   386,
   387,   388,   124,   646,     0,   240,   386,   387,   388,     0,
   223,     0,   207,     0,   165,     0,    59,     0,     0,   569,
     0,   286,   569,     0,    62,     0,   142,     0,   159,     0,
     0,   118,   564,     0,   112,   564,     0,     0,   114,   390,
   149,   483,   181,   393,   394,     0,    62,   160,     0,    62,
     0,   391,     0,   392,     0,   391,   297,   392,     0,   171,
     0,   121,     0,   188,     0,    96,     0,   257,     0,   162,
     0,   115,   574,     0,   574,     0,   197,   114,   151,     0,
     0,   166,   390,   149,   483,   112,   393,     0,    84,   397,
   227,   563,   149,   558,   398,   298,   399,   299,   407,     0,
   187,     0,     0,   190,   560,     0,     0,   400,     0,   401,
     0,   400,   297,   402,     0,   402,     0,   565,   298,   484,
   299,   403,   404,     0,   561,   403,   404,     0,   291,   506,
     0,   110,   506,     0,     0,   562,     0,   190,   562,     0,
     0,   222,   227,   563,   502,     0,    84,   224,   565,   408,
   255,   410,   407,    66,   571,   129,   571,     0,   197,   380,
     0,     0,   298,   409,   299,     0,   298,   299,     0,   573,
     0,   409,   297,   573,     0,   411,   573,     0,   260,     0,
     0,   100,   413,   564,     0,   202,     0,   227,     0,   257,
     0,   194,     0,   100,   205,   564,   415,     0,   564,     0,
   287,     0,   100,   224,   565,   408,     0,   100,   250,   418,
   298,   420,   299,     0,   274,     0,   419,     0,   285,     0,
   286,     0,   287,     0,   289,     0,   288,     0,   283,     0,
   284,     0,   282,     0,   564,     0,   564,   297,   564,     0,
   244,   297,   564,     0,   564,   297,   244,     0,    63,   174,
   558,   482,   253,   423,   422,   181,   564,     0,   564,     0,
     0,    81,     0,     0,     0,    84,   257,   564,    66,   425,
   149,   431,   181,   430,   502,   218,   432,   426,     0,   245,
     0,   468,     0,   429,     0,   295,   427,   296,     0,   298,
   427,   299,     0,   428,     0,   429,     0,   428,   429,     0,
   428,   429,   292,     0,   429,   292,     0,   454,     0,   462,
     0,   459,     0,   433,     0,   558,   294,   561,     0,   558,
     0,   171,     0,   188,     0,    96,     0,   121,     0,   229,
     0,     0,   246,   558,     0,   233,   558,     0,   234,   558,
     0,   234,   287,     0,   203,   437,     0,    68,   437,     0,
    82,   437,     0,   102,   437,     0,   168,   437,     0,   198,
     0,   183,     0,     0,    84,   194,   564,    66,   468,     0,
   235,   566,     0,    84,   216,   559,   197,   441,   442,     0,
    84,   216,   559,     0,   236,   282,   443,     0,     0,   220,
   282,   444,     0,     0,   571,     0,    95,     0,     0,   571,
     0,    95,     0,     0,   100,   216,   559,     0,   211,   563,
   149,   558,     0,   268,   448,   449,     0,   268,   448,   449,
   558,   450,     0,   270,     0,     0,   206,     0,     0,   298,
   451,   299,     0,     0,   564,     0,   451,   297,   564,     0,
   221,   448,   453,     0,   468,     0,   463,     0,   462,     0,
   454,     0,   433,     0,   459,     0,   121,   124,   558,   455,
     0,   191,   298,   555,   299,     0,    95,   191,     0,   468,
     0,   298,   457,   299,   191,   298,   555,   299,     0,   298,
   457,   299,   468,     0,   298,   457,   299,     0,     0,   457,
   297,   458,     0,   458,     0,   574,   532,     0,    96,   112,
   558,   502,     0,   237,   472,   558,     0,   237,   472,   558,
   118,   461,   256,   272,   272,     0,   237,   472,   558,   118,
   272,   272,   272,     0,   237,   472,   558,   118,   272,   272,
     0,   272,     0,     0,   188,   558,   172,   553,   489,   502,
     0,    94,   564,   464,    91,   110,   468,   465,     0,   209,
     0,   120,     0,   169,     0,   120,   169,     0,     0,   110,
   466,     0,     0,   163,   150,     0,   188,   467,     0,   148,
   457,     0,   469,   475,   487,   479,     0,   298,   469,   299,
     0,   470,     0,   469,   103,   469,     0,   469,   186,   473,
   469,     0,   469,   122,   473,   469,     0,   171,   474,   555,
   471,   489,   502,   485,   486,     0,   124,   331,   472,   558,
     0,   124,   646,     0,     0,   174,     0,     0,    62,     0,
     0,    98,     0,    98,   149,   574,     0,    62,     0,     0,
   153,    71,   476,     0,     0,   477,     0,   476,   297,   477,
     0,   530,   478,     0,   190,   274,     0,   190,   283,     0,
   190,   284,     0,    67,     0,    97,     0,     0,   232,   480,
   297,   481,     0,   232,   480,   248,   481,     0,   232,   480,
     0,   248,   481,   232,   480,     0,   248,   481,     0,     0,
   569,     0,    62,     0,   279,     0,   569,     0,   279,     0,
   287,     0,     0,   484,     0,   564,     0,   484,   297,   564,
     0,   115,    71,   533,     0,     0,   116,   530,     0,     0,
   110,   188,   488,     0,     0,   148,   451,     0,     0,   112,
   490,     0,     0,   298,   493,   299,     0,   494,     0,   491,
     0,   491,   297,   492,     0,   492,     0,   503,    66,   575,
     0,   503,   574,     0,   503,     0,   494,     0,   492,   186,
   127,   492,     0,   492,   495,     0,   495,   496,     0,   496,
     0,   497,   127,   492,   499,     0,   140,   497,   127,   492,
     0,    85,   127,   492,     0,   113,   498,     0,   131,   498,
     0,   167,   498,     0,   154,     0,   119,     0,     0,   154,
     0,     0,   190,   298,   500,   299,     0,   149,   530,     0,
   500,   297,   501,     0,   501,     0,   574,     0,   196,   530,
     0,     0,   558,     0,   558,   287,     0,   295,   296,   505,
     0,   295,   569,   296,   505,     0,     0,   295,   296,   505,
     0,   295,   569,   296,   505,     0,     0,   507,   504,     0,
   515,     0,   260,   507,     0,   508,     0,   520,     0,   510,
     0,   509,     0,   655,     0,   202,     0,     3,     0,     4,
     0,     5,     0,     6,     0,     7,     0,     8,     0,     9,
     0,    10,     0,    11,     0,    13,     0,    15,     0,    16,
     0,    17,     0,    18,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    26,     0,    27,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    33,
     0,    34,     0,    35,     0,    36,     0,    37,     0,   109,
   512,     0,    99,   157,     0,    93,   514,     0,   147,   513,
     0,   109,     0,    99,   157,     0,    93,     0,   147,     0,
   298,   569,   299,     0,     0,   298,   569,   297,   569,   299,
     0,   298,   569,   299,     0,     0,   298,   569,   297,   569,
   299,     0,   298,   569,   299,     0,     0,   516,   298,   569,
   299,     0,   516,     0,    76,   517,   518,   519,     0,    75,
   517,     0,   192,     0,   139,    76,   517,     0,   141,   517,
     0,   193,     0,     0,    76,   172,   574,     0,     0,    80,
   574,     0,     0,   521,     0,   178,   522,     0,   177,     0,
   123,   523,     0,   199,     0,   137,     0,    92,     0,   117,
     0,   136,     0,   170,     0,   197,   177,   200,     0,     0,
   521,     0,   199,   181,   137,     0,    92,   181,   117,     0,
    92,   181,   136,     0,    92,   181,   170,     0,   117,   181,
   136,     0,   136,   181,   170,     0,   117,   181,   170,     0,
     0,   530,     0,   146,     0,   298,   526,   299,   118,   298,
   470,   299,     0,   298,   526,   299,   144,   118,   298,   470,
   299,     0,   298,   526,   299,   527,   528,   298,   470,   299,
     0,   298,   526,   299,   527,   298,   470,   299,     0,   298,
   526,   299,   527,   298,   526,   299,     0,   529,   297,   530,
     0,   274,     0,   283,     0,   282,     0,   284,     0,   285,
     0,   286,     0,   287,     0,   289,     0,   288,     0,    65,
     0,    62,     0,   529,   297,   530,     0,   530,     0,   551,
   532,     0,   525,     0,   567,     0,   574,     0,   286,   530,
     0,   289,   530,     0,   530,   289,     0,   530,   285,   530,
     0,   530,   286,   530,     0,   530,   288,   530,     0,   530,
   289,   530,     0,   530,   287,   530,     0,   530,   283,   530,
     0,   530,   284,   530,     0,   530,   282,   146,     0,   146,
   282,   530,     0,   530,   282,   530,     0,   292,   530,     0,
   290,   530,     0,   530,    58,   506,     0,    74,   298,   530,
    66,   506,   299,     0,   298,   524,   299,     0,   530,   274,
   530,     0,   530,   133,   530,     0,   530,   144,   133,   530,
     0,   274,   530,     0,   530,   274,     0,   565,   298,   287,
   299,     0,   565,   298,   299,     0,   565,   298,   533,   299,
     0,    87,     0,    88,     0,    88,   298,   569,   299,     0,
    89,     0,    89,   298,   569,   299,     0,    90,     0,   189,
     0,   105,   298,   470,   299,     0,   106,   298,   534,   299,
     0,   156,   298,   536,   299,     0,   173,   298,   538,   299,
     0,   184,   298,    70,   541,   299,     0,   184,   298,   130,
   541,   299,     0,   184,   298,   182,   541,   299,     0,   184,
   298,   541,   299,     0,   530,   230,     0,   530,   125,   146,
     0,   530,   247,     0,   530,   125,   144,   146,     0,   530,
   125,   185,     0,   530,   125,   144,   107,     0,   530,   125,
   107,     0,   530,   125,   144,   185,     0,   530,    69,   531,
    64,   531,     0,   530,   144,    69,   531,    64,   531,     0,
   530,   118,   298,   542,   299,     0,   530,   144,   118,   298,
   544,   299,     0,   530,   274,   298,   470,   299,     0,   530,
   285,   298,   470,   299,     0,   530,   286,   298,   470,   299,
     0,   530,   288,   298,   470,   299,     0,   530,   289,   298,
   470,   299,     0,   530,   287,   298,   470,   299,     0,   530,
   283,   298,   470,   299,     0,   530,   284,   298,   470,   299,
     0,   530,   282,   298,   470,   299,     0,   530,   274,    65,
   298,   470,   299,     0,   530,   285,    65,   298,   470,   299,
     0,   530,   286,    65,   298,   470,   299,     0,   530,   288,
    65,   298,   470,   299,     0,   530,   289,    65,   298,   470,
   299,     0,   530,   287,    65,   298,   470,   299,     0,   530,
   283,    65,   298,   470,   299,     0,   530,   284,    65,   298,
   470,   299,     0,   530,   282,    65,   298,   470,   299,     0,
   530,   274,    62,   298,   470,   299,     0,   530,   285,    62,
   298,   470,   299,     0,   530,   286,    62,   298,   470,   299,
     0,   530,   288,    62,   298,   470,   299,     0,   530,   289,
    62,   298,   470,   299,     0,   530,   287,    62,   298,   470,
   299,     0,   530,   283,    62,   298,   470,   299,     0,   530,
   284,    62,   298,   470,   299,     0,   530,   282,    62,   298,
   470,   299,     0,   530,    64,   530,     0,   530,   152,   530,
     0,   144,   530,     0,   546,     0,   651,     0,   551,   532,
     0,   567,     0,   574,     0,   286,   531,     0,   289,   531,
     0,   531,   289,     0,   531,   285,   531,     0,   531,   286,
   531,     0,   531,   288,   531,     0,   531,   289,   531,     0,
   531,   287,   531,     0,   292,   531,     0,   290,   531,     0,
   531,    58,   506,     0,    74,   298,   531,    66,   506,   299,
     0,   298,   530,   299,     0,   531,   274,   531,     0,   274,
   531,     0,   531,   274,     0,   565,   298,   299,     0,   565,
   298,   533,   299,     0,    87,     0,    88,     0,    88,   298,
   569,   299,     0,    89,     0,    89,   298,   569,   299,     0,
    90,     0,   189,     0,   156,   298,   536,   299,     0,   173,
   298,   538,   299,     0,   184,   298,    70,   541,   299,     0,
   184,   298,   130,   541,   299,     0,   184,   298,   182,   541,
   299,     0,   184,   298,   541,   299,     0,   652,     0,   295,
   645,   296,   532,     0,   295,   645,   291,   645,   296,   532,
     0,     0,   524,     0,   533,   297,   524,     0,   533,   190,
   530,     0,   535,   112,   530,     0,     0,   651,     0,   521,
     0,   179,     0,   180,     0,   537,   118,   537,     0,     0,
   551,   532,     0,   567,     0,   286,   537,     0,   537,   285,
   537,     0,   537,   286,   537,     0,   537,   288,   537,     0,
   537,   289,   537,     0,   537,   287,   537,     0,   290,   537,
     0,   537,    58,   506,     0,    74,   298,   537,    66,   506,
   299,     0,   298,   537,   299,     0,   537,   274,   537,     0,
   274,   537,     0,   537,   274,     0,   574,     0,   565,   298,
   299,     0,   565,   298,   533,   299,     0,   156,   298,   536,
   299,     0,   173,   298,   538,   299,     0,   184,   298,    70,
   541,   299,     0,   184,   298,   130,   541,   299,     0,   184,
   298,   182,   541,   299,     0,   184,   298,   541,   299,     0,
   533,   539,   540,     0,     0,   112,   533,     0,     0,   110,
   533,     0,     0,   530,   112,   533,     0,   112,   533,     0,
   533,     0,   470,     0,   543,     0,   567,     0,   543,   297,
   567,     0,   470,     0,   545,     0,   567,     0,   545,   297,
   567,     0,    73,   550,   547,   549,   102,     0,   145,   298,
   530,   297,   530,   299,     0,    79,   298,   533,   299,     0,
   547,   548,     0,   548,     0,   195,   530,   176,   524,     0,
   101,   524,     0,     0,   551,   532,     0,   574,     0,     0,
   558,   294,   552,     0,   568,   294,   552,     0,   561,     0,
   552,   294,   561,     0,   552,   294,   287,     0,   553,   297,
   554,     0,   554,     0,   287,     0,   574,   532,   282,   524,
     0,   551,   532,     0,   558,   294,   287,     0,   555,   297,
   556,     0,   556,     0,   524,    66,   575,     0,   524,     0,
   558,   294,   287,     0,   287,     0,   574,     0,     0,   576,
     0,   574,     0,   574,     0,   655,     0,   574,     0,   655,
     0,   574,     0,   574,     0,   574,     0,   571,     0,   569,
     0,   570,     0,   571,     0,   506,   571,     0,   568,     0,
   185,     0,   107,     0,   279,   532,     0,   278,     0,   280,
     0,   273,     0,   655,     0,   574,     0,   511,     0,   516,
     0,   655,     0,   521,     0,    59,     0,    60,     0,   204,
     0,   205,     0,   207,     0,   208,     0,   210,     0,   213,
     0,   214,     0,   215,     0,   216,     0,   217,     0,    99,
     0,   219,     0,   220,     0,   223,     0,   224,     0,   225,
     0,   226,     0,   227,     0,   228,     0,   120,     0,   229,
     0,   230,     0,   128,     0,   129,     0,   231,     0,   236,
     0,   135,     0,   238,     0,   239,     0,   142,     0,   242,
     0,   243,     0,   245,     0,   247,     0,   148,     0,   249,
     0,   150,     0,   250,     0,   151,     0,   251,     0,   159,
     0,   160,     0,   252,     0,   163,     0,   165,     0,   253,
     0,   255,     0,   256,     0,   257,     0,   169,     0,   259,
     0,   258,     0,   262,     0,   263,     0,   264,     0,   265,
     0,   177,     0,   178,     0,   179,     0,   180,     0,   201,
     0,   266,     0,   202,     0,   269,     0,   271,     0,   200,
     0,     3,     0,     4,     0,     5,     0,     6,     0,     7,
     0,     8,     0,     9,     0,    10,     0,    11,     0,    13,
     0,    15,     0,    16,     0,    17,     0,    18,     0,    19,
     0,    20,     0,    21,     0,    22,     0,    23,     0,    24,
     0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
     0,    31,     0,    33,     0,    34,     0,    35,     0,    36,
     0,    37,     0,   574,     0,   203,     0,   206,     0,   209,
     0,    73,     0,   211,     0,    79,     0,    83,     0,   212,
     0,    86,     0,   218,     0,   101,     0,   102,     0,   221,
     0,   222,     0,   107,     0,   111,     0,   115,     0,   233,
     0,   235,     0,   237,     0,   240,     0,   241,     0,   244,
     0,   145,     0,   153,     0,   156,     0,   157,     0,   254,
     0,   260,     0,   261,     0,   174,     0,   176,     0,   183,
     0,   185,     0,   268,     0,   270,     0,   195,     0,    86,
     0,   241,     0,     7,   181,   578,   584,   585,     0,     7,
   181,    95,     0,     7,   586,     0,   559,   581,   583,     0,
   579,   580,   583,   288,   559,   589,     0,   588,     0,   571,
     0,   655,   653,     0,   274,   582,     0,   580,     0,     0,
   574,     0,   574,   294,   582,     0,   291,   569,     0,     0,
    66,   578,     0,     0,   189,   586,     0,     0,   587,     0,
   587,   288,   587,     0,   587,    17,    71,   587,     0,   587,
   190,   587,     0,   572,     0,   588,     0,   273,     0,   653,
     0,   274,   574,     0,     0,    94,   564,   464,    91,   110,
   655,   465,     0,    10,    23,   655,     0,     0,   594,   593,
   596,   595,     0,   647,    68,    94,    26,   292,     0,   647,
   102,    94,    26,   292,     0,     0,   597,   596,     0,     0,
     0,   600,   598,   601,   599,   611,   292,     0,    45,     0,
    53,     0,    52,     0,    42,     0,    50,     0,    39,     0,
     0,   609,     0,   610,     0,   604,     0,   605,     0,   602,
     0,   656,     0,   603,   300,   658,   301,     0,    44,   608,
     0,   606,   300,   596,   301,     0,   607,   300,   596,   301,
     0,    54,   608,     0,    55,   608,     0,     0,   656,     0,
    51,     0,    56,    51,     0,    47,     0,    56,    47,     0,
    49,     0,    56,    49,     0,    46,     0,    43,     0,    40,
     0,    41,     0,    56,    41,     0,    57,     0,   612,     0,
   611,   297,   612,     0,   614,   656,   504,   613,     0,     0,
   282,   649,     0,     0,   287,     0,    94,   263,   655,     0,
    11,   617,     0,   618,     0,    86,     0,    62,     0,     0,
   578,     0,    95,     0,   104,    18,   621,     0,     0,   104,
   655,   620,   624,     0,   588,     0,   275,     0,    14,   655,
     0,    22,   564,   624,     0,     0,   190,   625,     0,   651,
     0,   651,   297,   625,     0,    23,   655,   112,   588,     0,
   436,    24,     0,   172,     8,   618,     0,   202,   656,   125,
   633,   630,   632,     0,   295,   296,   631,     0,   298,   299,
   631,     0,   295,   569,   296,   631,     0,   298,   569,   299,
   631,     0,     0,   295,   296,   631,     0,   298,   299,   631,
     0,   295,   569,   296,   631,     0,   298,   569,   299,   631,
     0,     0,    25,     0,     0,    75,     0,   192,     0,   109,
     0,    99,     0,   636,    20,     0,    12,     0,   636,    27,
     0,   636,    21,     0,     4,     0,    35,    20,     0,    35,
    27,     0,    35,    21,     0,     0,    34,   634,   300,   637,
   301,     0,     0,   186,   635,   300,   637,   301,     0,   656,
     0,    28,     0,     0,     0,   638,   637,     0,     0,   633,
   639,   640,   292,     0,   641,     0,   640,   297,   641,     0,
   614,   656,   504,     0,    36,   656,   125,   633,   630,   632,
     0,    37,    29,   644,     0,    37,   144,    13,   644,     0,
    37,    31,   644,     0,     9,     0,    30,     0,    33,     0,
    16,   564,     0,    15,   181,   564,     0,   218,   564,   298,
   648,   299,     0,   218,     5,     0,     6,   564,   298,   648,
   299,     0,   551,   532,     0,   525,     0,   567,     0,   574,
     0,   286,   645,     0,   289,   645,     0,   530,   289,     0,
   530,   285,   645,     0,   530,   286,   645,     0,   530,   288,
   645,     0,   530,   289,   645,     0,   530,   287,   645,     0,
   530,   283,   645,     0,   530,   284,   645,     0,   530,   282,
   146,     0,   146,   282,   530,     0,   530,   282,   645,     0,
   292,   645,     0,   290,   645,     0,   530,    58,   506,     0,
    74,   298,   530,    66,   506,   299,     0,   298,   524,   299,
     0,   530,   274,   645,     0,   530,   133,   645,     0,   530,
   144,   133,   645,     0,   274,   645,     0,   530,   274,     0,
   565,   298,   287,   299,     0,   565,   298,   299,     0,   565,
   298,   533,   299,     0,    87,     0,    88,     0,    88,   298,
   569,   299,     0,    89,     0,    89,   298,   569,   299,     0,
    90,     0,   189,     0,   105,   298,   470,   299,     0,   106,
   298,   534,   299,     0,   156,   298,   536,   299,     0,   173,
   298,   538,   299,     0,   184,   298,    70,   541,   299,     0,
   184,   298,   130,   541,   299,     0,   184,   298,   182,   541,
   299,     0,   184,   298,   541,   299,     0,   530,   230,     0,
   530,   125,   146,     0,   530,   247,     0,   530,   125,   144,
   146,     0,   530,   125,   185,     0,   530,   125,   144,   107,
     0,   530,   125,   107,     0,   530,   125,   144,   185,     0,
   530,    69,   531,    64,   531,     0,   530,   144,    69,   531,
    64,   531,     0,   530,   118,   298,   542,   299,     0,   530,
   144,   118,   298,   544,   299,     0,   530,   274,   298,   470,
   299,     0,   530,   285,   298,   470,   299,     0,   530,   286,
   298,   470,   299,     0,   530,   288,   298,   470,   299,     0,
   530,   289,   298,   470,   299,     0,   530,   287,   298,   470,
   299,     0,   530,   283,   298,   470,   299,     0,   530,   284,
   298,   470,   299,     0,   530,   282,   298,   470,   299,     0,
   530,   274,    65,   298,   470,   299,     0,   530,   285,    65,
   298,   470,   299,     0,   530,   286,    65,   298,   470,   299,
     0,   530,   288,    65,   298,   470,   299,     0,   530,   289,
    65,   298,   470,   299,     0,   530,   287,    65,   298,   470,
   299,     0,   530,   283,    65,   298,   470,   299,     0,   530,
   284,    65,   298,   470,   299,     0,   530,   282,    65,   298,
   470,   299,     0,   530,   274,    62,   298,   470,   299,     0,
   530,   285,    62,   298,   470,   299,     0,   530,   286,    62,
   298,   470,   299,     0,   530,   288,    62,   298,   470,   299,
     0,   530,   289,    62,   298,   470,   299,     0,   530,   287,
    62,   298,   470,   299,     0,   530,   283,    62,   298,   470,
   299,     0,   530,   284,    62,   298,   470,   299,     0,   530,
   282,    62,   298,   470,   299,     0,   530,    64,   645,     0,
   530,   152,   645,     0,   144,   645,     0,   546,     0,   652,
     0,   650,     0,   646,   297,   650,     0,    32,     0,     0,
   648,   661,     0,   662,     0,   649,   662,     0,   653,   654,
     0,   653,   654,     0,   653,     0,   276,     0,     0,   653,
     0,    19,   653,     0,    19,   564,     0,   272,     0,   275,
     0,   272,     0,   277,     0,   660,     0,   658,   660,     0,
   660,     0,   292,     0,   272,     0,   275,     0,   569,     0,
   570,     0,   287,     0,    39,     0,    40,     0,    41,     0,
    42,     0,    43,     0,    44,     0,    45,     0,    46,     0,
    47,     0,    49,     0,    50,     0,    51,     0,    52,     0,
    53,     0,    54,     0,    55,     0,    56,     0,    57,     0,
    38,     0,   295,     0,   296,     0,   298,     0,   299,     0,
   282,     0,   297,     0,   272,     0,   275,     0,   569,     0,
   570,     0,   297,     0,   272,     0,   275,     0,   569,     0,
   570,     0,   300,   658,   301,     0,   300,     0,   301,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   846,   848,   849,   851,   852,   853,   854,   855,   856,   857,
   859,   861,   862,   863,   864,   865,   866,   867,   868,   869,
   870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
   880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
   890,   891,   892,   898,   899,   904,   905,   906,   907,   908,
   909,   910,   911,   912,   920,   923,   931,   934,   942,   945,
   950,   975,   983,   984,   992,   998,  1004,  1024,  1038,  1052,
  1058,  1059,  1062,  1066,  1070,  1073,  1077,  1081,  1084,  1088,
  1094,  1095,  1098,  1099,  1111,  1115,  1119,  1123,  1133,  1143,
  1153,  1154,  1157,  1158,  1159,  1162,  1166,  1170,  1176,  1180,
  1184,  1198,  1204,  1208,  1212,  1214,  1216,  1218,  1229,  1244,
  1250,  1252,  1261,  1262,  1263,  1266,  1267,  1270,  1271,  1277,
  1278,  1290,  1297,  1298,  1301,  1305,  1309,  1312,  1313,  1316,
  1320,  1326,  1327,  1330,  1331,  1334,  1338,  1344,  1349,  1363,
  1367,  1371,  1375,  1379,  1383,  1387,  1394,  1398,  1412,  1414,
  1416,  1418,  1420,  1422,  1424,  1426,  1428,  1430,  1436,  1438,
  1440,  1442,  1446,  1448,  1450,  1452,  1458,  1460,  1463,  1465,
  1467,  1473,  1475,  1481,  1483,  1491,  1495,  1499,  1503,  1507,
  1511,  1518,  1522,  1528,  1530,  1532,  1536,  1538,  1540,  1542,
  1544,  1546,  1548,  1550,  1552,  1558,  1560,  1562,  1566,  1570,
  1572,  1576,  1580,  1582,  1584,  1586,  1588,  1590,  1592,  1594,
  1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,  1612,  1614,
  1616,  1618,  1621,  1625,  1630,  1635,  1636,  1637,  1640,  1641,
  1642,  1645,  1646,  1649,  1650,  1651,  1652,  1655,  1656,  1659,
  1665,  1666,  1669,  1670,  1673,  1683,  1689,  1691,  1694,  1698,
  1702,  1706,  1710,  1714,  1720,  1721,  1723,  1727,  1734,  1738,
  1752,  1759,  1760,  1762,  1776,  1784,  1785,  1788,  1792,  1796,
  1802,  1803,  1804,  1807,  1813,  1814,  1817,  1818,  1821,  1823,
  1825,  1829,  1833,  1837,  1838,  1841,  1854,  1860,  1866,  1867,
  1868,  1871,  1872,  1873,  1874,  1875,  1878,  1881,  1882,  1885,
  1888,  1892,  1898,  1899,  1900,  1901,  1902,  1915,  1919,  1936,
  1943,  1949,  1950,  1951,  1952,  1957,  1960,  1961,  1962,  1963,
  1964,  1965,  1968,  1969,  1971,  1982,  1988,  1992,  1996,  2002,
  2006,  2012,  2016,  2020,  2024,  2028,  2034,  2038,  2042,  2048,
  2052,  2063,  2081,  2090,  2091,  2094,  2095,  2098,  2099,  2102,
  2103,  2106,  2112,  2118,  2119,  2120,  2129,  2130,  2131,  2141,
  2177,  2183,  2184,  2187,  2188,  2191,  2192,  2196,  2202,  2203,
  2224,  2230,  2231,  2232,  2233,  2237,  2243,  2244,  2248,  2255,
  2261,  2261,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
  2273,  2277,  2279,  2281,  2294,  2301,  2302,  2305,  2306,  2319,
  2321,  2328,  2329,  2330,  2331,  2332,  2335,  2336,  2339,  2341,
  2343,  2347,  2348,  2349,  2350,  2353,  2357,  2364,  2365,  2366,
  2367,  2370,  2371,  2383,  2389,  2395,  2399,  2417,  2418,  2419,
  2420,  2421,  2423,  2424,  2425,  2435,  2449,  2463,  2473,  2479,
  2480,  2483,  2484,  2487,  2488,  2489,  2492,  2493,  2494,  2504,
  2518,  2532,  2536,  2544,  2545,  2548,  2549,  2552,  2553,  2556,
  2558,  2570,  2588,  2589,  2590,  2591,  2592,  2593,  2610,  2616,
  2620,  2624,  2628,  2632,  2638,  2639,  2642,  2645,  2649,  2663,
  2670,  2674,  2705,  2725,  2742,  2743,  2756,  2772,  2803,  2804,
  2805,  2806,  2807,  2810,  2811,  2815,  2816,  2822,  2838,  2855,
  2859,  2863,  2868,  2873,  2881,  2891,  2892,  2893,  2896,  2897,
  2900,  2901,  2904,  2905,  2906,  2907,  2910,  2911,  2914,  2915,
  2918,  2924,  2925,  2926,  2927,  2928,  2929,  2932,  2934,  2936,
  2938,  2940,  2942,  2946,  2947,  2948,  2951,  2952,  2962,  2963,
  2966,  2968,  2970,  2974,  2975,  2978,  2982,  2985,  2989,  2994,
  2998,  3012,  3016,  3022,  3024,  3026,  3030,  3032,  3036,  3040,
  3044,  3054,  3056,  3060,  3066,  3070,  3083,  3087,  3091,  3096,
  3101,  3106,  3111,  3116,  3120,  3126,  3127,  3138,  3139,  3142,
  3143,  3146,  3152,  3153,  3156,  3161,  3167,  3173,  3179,  3187,
  3193,  3199,  3217,  3221,  3222,  3228,  3229,  3230,  3233,  3239,
  3240,  3241,  3242,  3243,  3244,  3245,  3246,  3247,  3248,  3249,
  3250,  3251,  3252,  3253,  3254,  3255,  3256,  3257,  3258,  3259,
  3260,  3261,  3262,  3263,  3264,  3265,  3266,  3267,  3268,  3269,
  3270,  3271,  3279,  3283,  3287,  3291,  3297,  3299,  3301,  3303,
  3307,  3315,  3321,  3333,  3341,  3347,  3359,  3367,  3380,  3400,
  3406,  3413,  3414,  3415,  3416,  3419,  3420,  3423,  3424,  3427,
  3428,  3431,  3435,  3439,  3443,  3449,  3450,  3451,  3452,  3453,
  3454,  3457,  3458,  3461,  3462,  3463,  3464,  3465,  3466,  3467,
  3468,  3469,  3479,  3481,  3496,  3500,  3504,  3508,  3512,  3518,
  3524,  3525,  3526,  3527,  3528,  3529,  3530,  3531,  3532,  3535,
  3536,  3540,  3544,  3559,  3563,  3565,  3567,  3571,  3573,  3575,
  3577,  3579,  3581,  3583,  3585,  3587,  3589,  3591,  3593,  3595,
  3600,  3602,  3604,  3608,  3612,  3614,  3616,  3618,  3620,  3622,
  3624,  3628,  3632,  3636,  3640,  3644,  3650,  3654,  3660,  3664,
  3668,  3672,  3676,  3680,  3685,  3689,  3693,  3697,  3701,  3703,
  3705,  3707,  3714,  3718,  3722,  3726,  3730,  3734,  3738,  3742,
  3746,  3750,  3754,  3758,  3762,  3766,  3770,  3774,  3778,  3782,
  3786,  3790,  3794,  3798,  3802,  3806,  3810,  3814,  3818,  3822,
  3826,  3830,  3834,  3838,  3842,  3846,  3850,  3854,  3856,  3858,
  3860,  3862,  3871,  3875,  3877,  3881,  3883,  3885,  3887,  3889,
  3891,  3893,  3895,  3900,  3902,  3904,  3908,  3912,  3914,  3916,
  3918,  3920,  3924,  3928,  3932,  3936,  3942,  3946,  3952,  3956,
  3960,  3964,  3969,  3973,  3977,  3981,  3985,  3989,  3993,  3997,
  4001,  4003,  4005,  4009,  4013,  4015,  4019,  4020,  4021,  4024,
  4026,  4030,  4034,  4036,  4038,  4040,  4042,  4044,  4046,  4048,
  4050,  4054,  4058,  4060,  4062,  4064,  4066,  4070,  4074,  4078,
  4082,  4087,  4091,  4095,  4099,  4105,  4109,  4113,  4115,  4121,
  4123,  4127,  4129,  4131,  4135,  4139,  4143,  4145,  4149,  4153,
  4157,  4159,  4178,  4180,  4186,  4192,  4194,  4198,  4204,  4205,
  4208,  4212,  4216,  4220,  4224,  4230,  4232,  4234,  4245,  4247,
  4249,  4252,  4256,  4260,  4271,  4273,  4278,  4282,  4286,  4290,
  4296,  4297,  4300,  4304,  4317,  4318,  4319,  4320,  4321,  4327,
  4328,  4330,  4336,  4340,  4344,  4348,  4352,  4354,  4358,  4364,
  4370,  4371,  4372,  4380,  4387,  4389,  4391,  4402,  4403,  4404,
  4405,  4406,  4407,  4408,  4409,  4410,  4411,  4412,  4413,  4414,
  4415,  4416,  4417,  4418,  4419,  4420,  4421,  4422,  4423,  4424,
  4425,  4426,  4427,  4428,  4429,  4430,  4431,  4432,  4433,  4434,
  4435,  4436,  4437,  4438,  4439,  4440,  4441,  4442,  4443,  4444,
  4445,  4446,  4447,  4448,  4449,  4451,  4452,  4453,  4454,  4455,
  4456,  4457,  4458,  4459,  4460,  4461,  4462,  4463,  4464,  4465,
  4466,  4467,  4468,  4469,  4470,  4471,  4472,  4473,  4474,  4475,
  4476,  4477,  4478,  4479,  4480,  4481,  4482,  4483,  4484,  4485,
  4486,  4487,  4488,  4489,  4490,  4491,  4492,  4493,  4494,  4495,
  4496,  4497,  4498,  4499,  4500,  4501,  4502,  4503,  4515,  4516,
  4517,  4518,  4519,  4520,  4521,  4522,  4523,  4524,  4525,  4526,
  4527,  4528,  4529,  4530,  4531,  4532,  4533,  4534,  4535,  4536,
  4537,  4538,  4539,  4540,  4541,  4542,  4543,  4544,  4545,  4546,
  4547,  4548,  4549,  4550,  4551,  4552,  4555,  4562,  4578,  4582,
  4587,  4592,  4603,  4626,  4630,  4638,  4655,  4666,  4667,  4669,
  4670,  4672,  4673,  4675,  4676,  4678,  4679,  4681,  4685,  4689,
  4693,  4698,  4703,  4704,  4706,  4730,  4743,  4749,  4792,  4797,
  4802,  4809,  4811,  4813,  4817,  4822,  4827,  4832,  4837,  4838,
  4839,  4840,  4841,  4842,  4843,  4845,  4852,  4859,  4866,  4873,
  4881,  4893,  4898,  4900,  4907,  4914,  4922,  4930,  4931,  4933,
  4934,  4935,  4936,  4937,  4938,  4939,  4940,  4941,  4942,  4943,
  4945,  4947,  4951,  4956,  5031,  5032,  5034,  5035,  5041,  5049,
  5051,  5052,  5053,  5054,  5056,  5057,  5062,  5075,  5087,  5091,
  5091,  5098,  5103,  5107,  5108,  5113,  5113,  5119,  5129,  5145,
  5153,  5195,  5201,  5207,  5213,  5219,  5227,  5233,  5239,  5245,
  5251,  5258,  5259,  5261,  5268,  5275,  5282,  5289,  5296,  5303,
  5310,  5317,  5324,  5331,  5338,  5345,  5350,  5358,  5363,  5371,
  5382,  5382,  5384,  5388,  5394,  5400,  5405,  5409,  5414,  5485,
  5540,  5545,  5550,  5556,  5561,  5566,  5571,  5576,  5581,  5586,
  5591,  5598,  5602,  5604,  5606,  5610,  5612,  5614,  5616,  5618,
  5620,  5622,  5624,  5626,  5628,  5630,  5632,  5634,  5638,  5640,
  5642,  5646,  5650,  5652,  5654,  5656,  5658,  5660,  5662,  5666,
  5670,  5674,  5678,  5682,  5688,  5692,  5698,  5702,  5706,  5710,
  5714,  5718,  5723,  5727,  5731,  5735,  5739,  5741,  5743,  5745,
  5752,  5756,  5760,  5764,  5768,  5772,  5776,  5780,  5784,  5788,
  5792,  5796,  5800,  5804,  5808,  5812,  5816,  5820,  5824,  5828,
  5832,  5836,  5840,  5844,  5848,  5852,  5856,  5860,  5864,  5868,
  5872,  5876,  5880,  5884,  5888,  5892,  5894,  5896,  5898,  5900,
  5904,  5904,  5906,  5908,  5909,  5911,  5912,  5914,  5918,  5922,
  5927,  5929,  5930,  5931,  5932,  5934,  5935,  5940,  5942,  5944,
  5945,  5950,  5950,  5952,  5953,  5954,  5955,  5956,  5957,  5958,
  5959,  5960,  5961,  5962,  5963,  5964,  5965,  5966,  5967,  5968,
  5969,  5970,  5971,  5972,  5973,  5974,  5975,  5976,  5977,  5978,
  5979,  5980,  5981,  5983,  5984,  5985,  5986,  5987,  5989,  5990,
  5991,  5992,  5993,  5995,  6000
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","SQL_AT",
"SQL_BOOL","SQL_BREAK","SQL_CALL","SQL_CONNECT","SQL_CONNECTION","SQL_CONTINUE",
"SQL_DEALLOCATE","SQL_DISCONNECT","SQL_ENUM","SQL_FOUND","SQL_FREE","SQL_GO",
"SQL_GOTO","SQL_IDENTIFIED","SQL_IMMEDIATE","SQL_INDICATOR","SQL_INT","SQL_LONG",
"SQL_OPEN","SQL_PREPARE","SQL_RELEASE","SQL_REFERENCE","SQL_SECTION","SQL_SHORT",
"SQL_SIGNED","SQL_SQLERROR","SQL_SQLPRINT","SQL_SQLWARNING","SQL_START","SQL_STOP",
"SQL_STRUCT","SQL_UNSIGNED","SQL_VAR","SQL_WHENEVER","S_ANYTHING","S_AUTO","S_BOOL",
"S_CHAR","S_CONST","S_DOUBLE","S_ENUM","S_EXTERN","S_FLOAT","S_INT","S","S_LONG",
"S_REGISTER","S_SHORT","S_SIGNED","S_STATIC","S_STRUCT","S_UNION","S_UNSIGNED",
"S_VARCHAR","TYPECAST","ABSOLUTE","ACTION","ADD","ALL","ALTER","AND","ANY","AS",
"ASC","BEGIN_TRANS","BETWEEN","BOTH","BY","CASCADE","CASE","CAST","CHAR","CHARACTER",
"CHECK","CLOSE","COALESCE","COLLATE","COLUMN","COMMIT","CONSTRAINT","CREATE",
"CROSS","CURRENT","CURRENT_DATE","CURRENT_TIME","CURRENT_TIMESTAMP","CURRENT_USER",
"CURSOR","DAY_P","DECIMAL","DECLARE","DEFAULT","DELETE","DESC","DISTINCT","DOUBLE",
"DROP","ELSE","END_TRANS","EXCEPT","EXECUTE","EXISTS","EXTRACT","FALSE_P","FETCH",
"FLOAT","FOR","FOREIGN","FROM","FULL","GRANT","GROUP","HAVING","HOUR_P","IN",
"INNER_P","INSENSITIVE","INSERT","INTERSECT","INTERVAL","INTO","IS","ISOLATION",
"JOIN","KEY","LANGUAGE","LEADING","LEFT","LEVEL","LIKE","LOCAL","MATCH","MINUTE_P",
"MONTH_P","NAMES","NATIONAL","NATURAL","NCHAR","NEXT","NO","NOT","NULLIF","NULL_P",
"NUMERIC","OF","ON","ONLY","OPTION","OR","ORDER","OUTER_P","PARTIAL","POSITION",
"PRECISION","PRIMARY","PRIOR","PRIVILEGES","PROCEDURE","PUBLIC","READ","REFERENCES",
"RELATIVE","REVOKE","RIGHT","ROLLBACK","SCROLL","SECOND_P","SELECT","SET","SUBSTRING",
"TABLE","TEMP","THEN","TIME","TIMESTAMP","TIMEZONE_HOUR","TIMEZONE_MINUTE","TO",
"TRAILING","TRANSACTION","TRIM","TRUE_P","UNION","UNIQUE","UPDATE","USER","USING",
"VALUES","VARCHAR","VARYING","VIEW","WHEN","WHERE","WITH","WORK","YEAR_P","ZONE",
"TRIGGER","TYPE_P","ABORT_TRANS","AFTER","AGGREGATE","ANALYZE","BACKWARD","BEFORE",
"BINARY","CACHE","CLUSTER","COPY","CREATEDB","CREATEUSER","CYCLE","DATABASE",
"DELIMITERS","DO","EACH","ENCODING","EXPLAIN","EXTEND","FORWARD","FUNCTION",
"HANDLER","INCREMENT","INDEX","INHERITS","INSTEAD","ISNULL","LANCOMPILER","LIMIT",
"LISTEN","UNLISTEN","LOAD","LOCATION","LOCK_P","MAXVALUE","MINVALUE","MOVE",
"NEW","NOCREATEDB","NOCREATEUSER","NONE","NOTHING","NOTIFY","NOTNULL","OFFSET",
"OIDS","OPERATOR","PASSWORD","PROCEDURAL","RENAME","RESET","RETURNS","ROW","RULE",
"SERIAL","SEQUENCE","SETOF","SHOW","START","STATEMENT","STDIN","STDOUT","TRUSTED",
"UNTIL","VACUUM","VALID","VERBOSE","VERSION","IDENT","SCONST","Op","CSTRING",
"CVARIABLE","CPP_LINE","ICONST","PARAM","FCONST","OP","'='","'<'","'>'","'+'",
"'-'","'*'","'/'","'%'","'|'","':'","';'","UMINUS","'.'","'['","']'","','","'('",
"')'","'{'","'}'","prog","statements","statement","opt_at","stmt","CreateUserStmt",
"AlterUserStmt","DropUserStmt","user_passwd_clause","user_createdb_clause","user_createuser_clause",
"user_group_list","user_group_clause","user_valid_clause","VariableSetStmt",
"var_value","zone_value","VariableShowStmt","VariableResetStmt","AddAttrStmt",
"alter_clause","ClosePortalStmt","CopyStmt","copy_dirn","copy_file_name","opt_binary",
"opt_with_copy","copy_delimiter","CreateStmt","OptTemp","OptTableElementList",
"OptTableElement","columnDef","ColQualifier","ColQualList","ColPrimaryKey","ColConstraint",
"ColConstraintElem","default_list","default_expr","TableConstraint","ConstraintElem",
"constraint_list","constraint_expr","c_list","c_expr","key_match","key_actions",
"key_action","key_reference","OptInherit","CreateAsStmt","OptCreateAs","CreateAsList",
"CreateAsElement","CreateSeqStmt","OptSeqList","OptSeqElem","NumericOnly","FloatOnly",
"IntegerOnly","CreatePLangStmt","PLangTrusted","DropPLangStmt","CreateTrigStmt",
"TriggerActionTime","TriggerEvents","TriggerOneEvent","TriggerForSpec","TriggerForOpt",
"TriggerForType","TriggerFuncArgs","TriggerFuncArg","DropTrigStmt","DefineStmt",
"def_rest","def_type","def_name","definition","def_list","def_elem","def_arg",
"DestroyStmt","FetchStmt","opt_direction","fetch_how_many","opt_portal_name",
"GrantStmt","privileges","operation_commalist","operation","grantee","opt_with_grant",
"RevokeStmt","IndexStmt","index_opt_unique","access_method_clause","index_params",
"index_list","func_index","index_elem","opt_type","opt_class","ExtendStmt","ProcedureStmt",
"opt_with","func_args","func_args_list","func_return","set_opt","RemoveStmt",
"remove_type","RemoveAggrStmt","aggr_argtype","RemoveFuncStmt","RemoveOperStmt",
"all_Op","MathOp","oper_argtypes","RenameStmt","opt_name","opt_column","RuleStmt",
"@1","RuleActionList","RuleActionBlock","RuleActionMulti","RuleActionStmt","event_object",
"event","opt_instead","NotifyStmt","ListenStmt","UnlistenStmt","TransactionStmt",
"opt_trans","ViewStmt","LoadStmt","CreatedbStmt","opt_database1","opt_database2",
"location","encoding","DestroydbStmt","ClusterStmt","VacuumStmt","opt_verbose",
"opt_analyze","opt_va_list","va_list","ExplainStmt","OptimizableStmt","InsertStmt",
"insert_rest","opt_column_list","columnList","columnElem","DeleteStmt","LockStmt",
"opt_lmode","UpdateStmt","CursorStmt","opt_cursor","cursor_clause","opt_readonly",
"opt_of","SelectStmt","select_clause","SubSelect","result","opt_table","opt_union",
"opt_unique","sort_clause","sortby_list","sortby","OptUseOp","opt_select_limit",
"select_limit_value","select_offset_value","opt_inh_star","relation_name_list",
"name_list","group_clause","having_clause","for_update_clause","update_list",
"from_clause","from_expr","table_list","table_expr","join_clause_with_union",
"join_clause","join_list","join_expr","join_type","join_outer","join_qual","using_list",
"using_expr","where_clause","relation_expr","opt_array_bounds","nest_array_bounds",
"Typename","Array","Generic","generic","Numeric","numeric","opt_float","opt_numeric",
"opt_decimal","Character","character","opt_varying","opt_charset","opt_collate",
"Datetime","datetime","opt_timezone","opt_interval","a_expr_or_null","row_expr",
"row_descriptor","row_op","sub_type","row_list","a_expr","b_expr","opt_indirection",
"expr_list","extract_list","extract_arg","position_list","position_expr","substr_list",
"substr_from","substr_for","trim_list","in_expr","in_expr_nodes","not_in_expr",
"not_in_expr_nodes","case_expr","when_clause_list","when_clause","case_default",
"case_arg","attr","attrs","res_target_list","res_target_el","res_target_list2",
"res_target_el2","opt_id","relation_name","database_name","access_method","attr_name",
"class","index_name","name","func_name","file_name","AexprConst","ParamNo","Iconst",
"Fconst","Sconst","UserId","TypeId","ColId","ColLabel","SpecialRuleRelation",
"ECPGConnect","connection_target","db_prefix","server","opt_server","server_name",
"opt_port","opt_connection_name","opt_user","ora_user","user_name","char_variable",
"opt_options","ECPGCursorStmt","ECPGDeallocate","ECPGDeclaration","@2","sql_startdeclare",
"sql_enddeclare","variable_declarations","declaration","@3","@4","storage_clause",
"type","enum_type","s_enum","struct_type","union_type","s_struct","s_union",
"opt_symbol","simple_type","varchar_type","variable_list","variable","opt_initializer",
"opt_pointer","ECPGDeclare","ECPGDisconnect","dis_name","connection_object",
"ECPGExecute","@5","execstring","ECPGFree","ECPGOpen","opt_using","variablelist",
"ECPGPrepare","ECPGRelease","ECPGSetConnection","ECPGTypedef","opt_type_array_bounds",
"nest_type_array_bounds","opt_reference","ctype","@6","@7","opt_signed","sql_variable_declarations",
"sql_declaration","@8","sql_variable_list","sql_variable","ECPGVar","ECPGWhenever",
"action","ecpg_expr","into_list","ecpgstart","dotext","vartext","coutputvariable",
"cinputvariable","civariableonly","cvariable","indicator","ident","symbol","cpp_line",
"c_line","c_thing","c_anything","do_anything","var_anything","blockstart","blockend", NULL
};
#endif

static const short yyr1[] = {     0,
   302,   303,   303,   304,   304,   304,   304,   304,   304,   304,
   305,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   307,   308,   309,
   310,   310,   311,   311,   311,   312,   312,   312,   313,   313,
   314,   314,   315,   315,   316,   316,   316,   316,   316,   316,
   317,   317,   318,   318,   318,   319,   319,   319,   320,   320,
   320,   321,   322,   322,   322,   322,   322,   322,   323,   324,
   325,   325,   326,   326,   326,   327,   327,   328,   328,   329,
   329,   330,   331,   331,   332,   332,   332,   333,   333,   334,
   334,   335,   335,   336,   336,   337,   337,   338,   338,   339,
   339,   339,   339,   339,   339,   339,   340,   340,   341,   341,
   341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
   341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
   341,   341,   341,   341,   341,   342,   342,   343,   343,   343,
   343,   344,   344,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   346,   346,   347,   348,   348,   348,   349,   349,
   349,   350,   350,   351,   351,   351,   351,   352,   352,   353,
   354,   354,   355,   355,   356,   357,   358,   358,   359,   359,
   359,   359,   359,   359,   360,   360,   361,   361,   362,   362,
   363,   364,   364,   365,   366,   367,   367,   368,   368,   368,
   369,   369,   369,   370,   371,   371,   372,   372,   373,   373,
   373,   374,   374,   374,   374,   375,   376,   377,   378,   378,
   378,   379,   379,   379,   379,   379,   380,   381,   381,   382,
   382,   382,   383,   383,   383,   383,   383,   384,   384,   385,
   385,   386,   386,   386,   386,   386,   387,   387,   387,   387,
   387,   387,   388,   388,   388,   389,   390,   390,   390,   391,
   391,   392,   392,   392,   392,   392,   393,   393,   393,   394,
   394,   395,   396,   397,   397,   398,   398,   399,   399,   400,
   400,   401,   402,   403,   403,   403,   404,   404,   404,   405,
   406,   407,   407,   408,   408,   409,   409,   410,   411,   411,
   412,   413,   413,   413,   413,   414,   415,   415,   416,   417,
   418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
   420,   420,   420,   420,   421,   422,   422,   423,   423,   425,
   424,   426,   426,   426,   426,   426,   427,   427,   428,   428,
   428,   429,   429,   429,   429,   430,   430,   431,   431,   431,
   431,   432,   432,   433,   434,   435,   435,   436,   436,   436,
   436,   436,   437,   437,   437,   438,   439,   440,   440,   441,
   441,   442,   442,   443,   443,   443,   444,   444,   444,   445,
   446,   447,   447,   448,   448,   449,   449,   450,   450,   451,
   451,   452,   453,   453,   453,   453,   453,   453,   454,   455,
   455,   455,   455,   455,   456,   456,   457,   457,   458,   459,
   460,   460,   460,   460,   461,   461,   462,   463,   464,   464,
   464,   464,   464,   465,   465,   466,   466,   467,   468,   469,
   469,   469,   469,   469,   470,   471,   471,   471,   472,   472,
   473,   473,   474,   474,   474,   474,   475,   475,   476,   476,
   477,   478,   478,   478,   478,   478,   478,   479,   479,   479,
   479,   479,   479,   480,   480,   480,   481,   481,   482,   482,
   483,   484,   484,   485,   485,   486,   486,   487,   487,   488,
   488,   489,   489,   490,   490,   490,   491,   491,   492,   492,
   492,   493,   493,   494,   495,   495,   496,   496,   496,   497,
   497,   497,   497,   497,   497,   498,   498,   499,   499,   500,
   500,   501,   502,   502,   503,   503,   504,   504,   504,   505,
   505,   505,   506,   506,   506,   507,   507,   507,   508,   509,
   509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
   509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
   509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
   509,   509,   510,   510,   510,   510,   511,   511,   511,   511,
   512,   512,   513,   513,   513,   514,   514,   514,   515,   515,
   516,   516,   516,   516,   516,   517,   517,   518,   518,   519,
   519,   520,   520,   520,   520,   521,   521,   521,   521,   521,
   521,   522,   522,   523,   523,   523,   523,   523,   523,   523,
   523,   523,   524,   524,   525,   525,   525,   525,   525,   526,
   527,   527,   527,   527,   527,   527,   527,   527,   527,   528,
   528,   529,   529,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
   530,   530,   531,   531,   531,   531,   531,   531,   531,   531,
   531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
   531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
   531,   531,   531,   531,   531,   531,   531,   532,   532,   532,
   533,   533,   533,   534,   534,   534,   535,   535,   535,   536,
   536,   537,   537,   537,   537,   537,   537,   537,   537,   537,
   537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
   537,   537,   537,   537,   537,   538,   538,   539,   539,   540,
   540,   541,   541,   541,   542,   542,   543,   543,   544,   544,
   545,   545,   546,   546,   546,   547,   547,   548,   549,   549,
   550,   550,   550,   551,   551,   552,   552,   552,   553,   553,
   553,   554,   554,   554,   555,   555,   556,   556,   556,   556,
   557,   557,   558,   558,   559,   560,   561,   562,   563,   564,
   565,   566,   567,   567,   567,   567,   567,   567,   567,   568,
   569,   570,   571,   572,   573,   573,   573,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,   574,   574,   575,   575,
   575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
   575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
   575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
   575,   575,   575,   575,   575,   575,   576,   576,   577,   577,
   577,   578,   578,   578,   578,   579,   580,   581,   581,   582,
   582,   583,   583,   584,   584,   585,   585,   586,   586,   586,
   586,   587,   587,   587,   588,   589,   589,   590,   591,   593,
   592,   594,   595,   596,   596,   598,   599,   597,   600,   600,
   600,   600,   600,   600,   600,   601,   601,   601,   601,   601,
   601,   602,   603,   604,   605,   606,   607,   608,   608,   609,
   609,   609,   609,   609,   609,   609,   609,   609,   609,   609,
   610,   611,   611,   612,   613,   613,   614,   614,   615,   616,
   617,   617,   617,   617,   618,   618,   619,   620,   619,   621,
   621,   622,   623,   624,   624,   625,   625,   626,   627,   628,
   629,   630,   630,   630,   630,   630,   631,   631,   631,   631,
   631,   632,   632,   633,   633,   633,   633,   633,   633,   633,
   633,   633,   633,   633,   633,   634,   633,   635,   633,   633,
   636,   636,   637,   637,   639,   638,   640,   640,   641,   642,
   643,   643,   643,   644,   644,   644,   644,   644,   644,   644,
   644,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
   646,   646,   647,   648,   648,   649,   649,   650,   651,   652,
   653,   654,   654,   654,   654,   655,   655,   656,   657,   658,
   658,   659,   659,   660,   660,   660,   660,   660,   660,   660,
   660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
   660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
   660,   660,   660,   661,   661,   661,   661,   661,   662,   662,
   662,   662,   662,   663,   664
};

static const short yyr2[] = {     0,
     1,     0,     2,     4,     3,     1,     1,     1,     1,     1,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     8,     8,     3,
     3,     0,     1,     1,     0,     1,     1,     0,     3,     1,
     3,     0,     3,     0,     4,     4,     4,     6,     5,     3,
     1,     1,     1,     1,     1,     2,     3,     4,     2,     3,
     4,     5,     3,     4,     3,     6,     5,     2,     2,     7,
     1,     1,     1,     1,     1,     1,     0,     2,     0,     3,
     0,     8,     1,     0,     3,     1,     0,     1,     1,     3,
     3,     1,     0,     2,     1,     2,     0,     3,     1,     4,
     2,     2,     2,     1,     2,     5,     3,     1,     1,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     3,     6,     3,     3,     4,     3,     2,     2,     1,     1,
     4,     1,     4,     1,     1,     3,     1,     4,     4,     5,
    10,     3,     1,     1,     1,     1,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     2,     2,     3,     6,     3,
     3,     4,     3,     3,     4,     3,     3,     2,     2,     2,
     2,     3,     2,     4,     3,     3,     4,     4,     5,     6,
     5,     6,     3,     1,     1,     2,     2,     0,     2,     1,
     0,     3,     3,     2,     1,     2,     2,     4,     0,     7,
     3,     0,     3,     1,     1,     4,     2,     0,     2,     1,
     2,     2,     2,     2,     1,     1,     1,     2,     1,     2,
     9,     1,     0,     4,    14,     1,     1,     1,     3,     5,
     1,     1,     1,     3,     1,     0,     1,     1,     1,     3,
     0,     1,     1,     1,     1,     5,     3,     2,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
     1,     3,     1,     1,     1,     1,     2,     3,     3,     6,
     4,     1,     1,     1,     1,     0,     1,     2,     1,     1,
     1,     0,     2,     2,     0,     7,     2,     1,     1,     1,
     3,     1,     1,     1,     1,     1,     1,     2,     1,     3,
     0,     6,    11,     1,     0,     2,     0,     1,     1,     3,
     1,     6,     3,     2,     2,     0,     1,     2,     0,     4,
    11,     2,     0,     3,     2,     1,     3,     2,     1,     0,
     3,     1,     1,     1,     1,     4,     1,     1,     4,     6,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     3,     3,     9,     1,     0,     1,     0,     0,
    13,     1,     1,     1,     3,     3,     1,     1,     2,     3,
     2,     1,     1,     1,     1,     3,     1,     1,     1,     1,
     1,     1,     0,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     1,     1,     0,     5,     2,     6,     3,     3,
     0,     3,     0,     1,     1,     0,     1,     1,     0,     3,
     4,     3,     5,     1,     0,     1,     0,     3,     0,     1,
     3,     3,     1,     1,     1,     1,     1,     1,     4,     4,
     2,     1,     7,     4,     3,     0,     3,     1,     2,     4,
     3,     8,     7,     6,     1,     0,     6,     7,     1,     1,
     1,     2,     0,     2,     0,     2,     2,     2,     4,     3,
     1,     3,     4,     4,     8,     4,     2,     0,     1,     0,
     1,     0,     1,     3,     1,     0,     3,     0,     1,     3,
     2,     2,     2,     2,     1,     1,     0,     4,     4,     2,
     4,     2,     0,     1,     1,     1,     1,     1,     1,     0,
     1,     1,     3,     3,     0,     2,     0,     3,     0,     2,
     0,     2,     0,     3,     1,     1,     3,     1,     3,     2,
     1,     1,     4,     2,     2,     1,     4,     4,     3,     2,
     2,     2,     1,     1,     0,     1,     0,     4,     2,     3,
     1,     1,     2,     0,     1,     2,     3,     4,     0,     3,
     4,     0,     2,     1,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     2,     2,     2,     2,     1,     2,     1,     1,
     3,     0,     5,     3,     0,     5,     3,     0,     4,     1,
     4,     2,     1,     3,     2,     1,     0,     3,     0,     2,
     0,     1,     2,     1,     2,     1,     1,     1,     1,     1,
     1,     3,     0,     1,     3,     3,     3,     3,     3,     3,
     3,     0,     1,     1,     7,     8,     8,     7,     7,     3,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     1,     2,     1,     1,     1,     2,     2,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     2,     2,     3,     6,     3,     3,     3,     4,     2,     2,
     4,     3,     4,     1,     1,     4,     1,     4,     1,     1,
     4,     4,     4,     4,     5,     5,     5,     4,     2,     3,
     2,     4,     3,     4,     3,     4,     5,     6,     5,     6,
     5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     3,     3,     2,
     1,     1,     2,     1,     1,     2,     2,     2,     3,     3,
     3,     3,     3,     2,     2,     3,     6,     3,     3,     2,
     2,     3,     4,     1,     1,     4,     1,     4,     1,     1,
     4,     4,     5,     5,     5,     4,     1,     4,     6,     0,
     1,     3,     3,     3,     0,     1,     1,     1,     1,     3,
     0,     2,     1,     2,     3,     3,     3,     3,     3,     2,
     3,     6,     3,     3,     2,     2,     1,     3,     4,     4,
     4,     5,     5,     5,     4,     3,     0,     2,     0,     2,
     0,     3,     2,     1,     1,     1,     1,     3,     1,     1,
     1,     3,     5,     6,     4,     2,     1,     4,     2,     0,
     2,     1,     0,     3,     3,     1,     3,     3,     3,     1,
     1,     4,     2,     3,     3,     1,     3,     1,     3,     1,
     1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     2,     1,     1,     1,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
     2,     3,     6,     1,     1,     2,     2,     1,     0,     1,
     3,     2,     0,     2,     0,     2,     0,     1,     3,     4,
     3,     1,     1,     1,     1,     2,     0,     7,     3,     0,
     4,     5,     5,     0,     2,     0,     0,     6,     1,     1,
     1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
     1,     4,     2,     4,     4,     2,     2,     0,     1,     1,
     2,     1,     2,     1,     2,     1,     1,     1,     1,     2,
     1,     1,     3,     4,     0,     2,     0,     1,     3,     2,
     1,     1,     1,     0,     1,     1,     3,     0,     4,     1,
     1,     2,     3,     0,     2,     1,     3,     4,     2,     3,
     6,     3,     3,     4,     4,     0,     3,     3,     4,     4,
     0,     1,     0,     1,     1,     1,     1,     2,     1,     2,
     2,     1,     2,     2,     2,     0,     5,     0,     5,     1,
     1,     0,     0,     2,     0,     4,     1,     3,     3,     6,
     3,     4,     3,     1,     1,     1,     2,     3,     5,     2,
     5,     2,     1,     1,     1,     2,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     3,     6,     3,     3,     3,     4,     2,     2,     4,     3,
     4,     1,     1,     4,     1,     4,     1,     1,     4,     4,
     4,     4,     5,     5,     5,     4,     2,     3,     2,     4,
     3,     4,     3,     4,     5,     6,     5,     6,     5,     5,
     5,     5,     5,     5,     5,     5,     5,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     3,     3,     2,     1,     1,
     1,     3,     1,     0,     2,     1,     2,     2,     2,     1,
     1,     0,     1,     2,     2,     1,     1,     1,     1,     1,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     1,     1
};

static const short yydefact[] = {     2,
     1,  1323,  1367,  1349,  1350,  1351,  1352,  1353,  1354,  1355,
  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,
  1366,  1344,  1345,  1339,   931,   932,  1372,  1348,  1343,  1368,
  1369,  1373,  1370,  1371,  1384,  1385,     3,  1346,  1347,     6,
  1110,     0,     8,     7,  1342,     9,    10,  1125,     0,     0,
     0,  1164,     0,     0,     0,     0,     0,     0,   435,   912,
   435,   124,     0,     0,     0,   435,     0,   316,     0,     0,
     0,   435,   516,     0,     0,     0,   435,     0,   117,   455,
     0,     0,     0,     0,   510,   316,     0,     0,     0,   455,
     0,     0,     0,    21,    13,    27,    51,    52,    53,    12,
    14,    15,    16,    17,    18,    19,    25,    20,    26,    23,
    24,    30,    31,    42,    32,    28,    36,    40,    37,    39,
    38,    41,    44,   467,    33,    34,    45,    46,    47,    48,
    49,    22,    50,    29,    43,   466,   468,    35,   465,   464,
   463,   518,   501,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,  1124,  1122,  1119,
  1123,  1121,  1120,     0,  1125,  1116,  1008,  1009,  1010,  1011,
  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
  1032,  1033,  1034,  1035,  1036,  1037,  1038,   940,   941,   668,
   952,   669,   961,   964,   965,   968,   670,   667,   971,   976,
   978,   980,   982,   983,   985,   986,   991,   671,   998,   999,
  1000,  1001,   666,  1007,  1002,  1004,   942,   943,   944,   945,
   946,   947,   948,   949,   950,   951,   953,   954,   955,   956,
   957,   958,   959,   960,   962,   963,   966,   967,   969,   970,
   972,   973,   974,   975,   977,   979,   981,   984,   987,   988,
   989,   990,   993,   992,   994,   995,   996,   997,  1003,  1005,
  1006,  1336,   933,  1337,  1331,   939,  1089,  1085,   915,    11,
     0,  1084,  1105,   938,     0,  1104,  1102,  1081,  1098,  1103,
   934,     0,  1163,  1162,  1166,  1165,  1160,  1161,  1172,  1174,
   920,   938,     0,  1338,     0,     0,     0,     0,     0,     0,
     0,   434,   433,   429,   109,   911,   430,   123,   344,     0,
     0,     0,   290,   291,     0,     0,   289,     0,     0,   262,
     0,     0,     0,     0,   995,   493,     0,     0,     0,   375,
     0,   372,     0,     0,     0,   373,     0,     0,   374,     0,
     0,   431,     0,  1168,   315,   314,   313,   312,   322,   328,
   335,   333,   332,   334,   336,     0,   329,   330,     0,     0,
   432,   515,   513,     0,  1013,   449,   998,     0,     0,  1077,
  1078,     0,   914,   913,     0,   428,     0,   919,   116,     0,
   454,     0,     0,   425,   427,   426,   437,   922,   509,     0,
   322,   424,   998,     0,    99,   998,     0,    96,   457,     0,
   435,     0,     5,  1179,     0,   512,     0,   512,   549,  1111,
     0,  1115,     0,     0,  1088,  1093,  1093,  1086,  1080,  1095,
     0,     0,     0,  1109,     0,  1173,     0,  1212,     0,  1224,
     0,     0,  1225,  1226,     0,  1221,  1223,     0,   540,    72,
     0,    72,     0,     0,   439,     0,   921,     0,   248,     0,
     0,   293,   292,   296,   390,   388,   389,   383,   384,   385,
   387,   386,   287,     0,   295,   294,     0,  1159,   490,   491,
   489,     0,   584,   308,   541,   542,    70,     0,     0,   450,
     0,   381,     0,   382,     0,   309,   371,  1171,  1170,  1167,
  1174,   319,   320,   321,     0,   325,   317,   327,     0,     0,
     0,     0,     0,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
  1035,  1036,  1037,  1038,   893,     0,   657,   657,     0,   734,
   735,   737,   739,   648,   952,     0,     0,   929,   642,   682,
     0,   657,     0,     0,   684,   645,     0,     0,   998,   999,
     0,   928,   740,   653,  1004,     0,     0,   830,     0,   910,
     0,     0,     0,     0,     0,   589,   596,   599,   598,   594,
   650,   597,   939,   908,   705,   683,   791,   830,   508,   906,
     0,     0,   706,   927,   923,   924,   925,   707,   792,  1332,
   938,  1180,   448,    90,   447,     0,     0,     0,     0,     0,
  1212,     0,   119,     0,   462,   584,   481,   325,   100,     0,
    97,     0,   456,   452,   500,     4,   502,   511,     0,     0,
     0,     0,   533,     0,  1148,  1149,  1147,  1138,  1146,  1142,
  1144,  1140,  1138,  1138,     0,  1151,  1117,  1130,     0,  1128,
  1129,     0,     0,  1126,  1127,  1131,  1090,  1087,     0,  1082,
     0,     0,  1097,     0,  1101,  1099,  1175,  1176,  1178,  1202,
  1199,  1211,  1206,     0,  1194,  1197,  1196,  1208,  1195,  1186,
     0,  1210,     0,     0,  1227,  1010,     0,  1222,   539,     0,
     0,    75,  1112,    75,     0,   267,   266,     0,   441,     0,
     0,   400,   246,   242,     0,     0,   288,     0,   492,     0,
     0,   480,     0,     0,   378,   376,   377,   379,     0,   264,
  1169,   318,     0,     0,     0,     0,   331,     0,     0,     0,
   469,   472,     0,   514,     0,   830,     0,     0,   892,     0,
   656,   652,   659,     0,     0,     0,     0,   635,   634,     0,
   835,     0,   633,   668,   669,   670,   666,   674,   665,   657,
   655,     0,   790,     0,     0,     0,   636,   841,   867,     0,
   663,     0,   602,   603,   604,   605,   606,   607,   608,   609,
   610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
   620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
   630,   631,   632,     0,   664,   673,   601,   595,   662,   600,
   729,     0,   930,   708,   709,   722,   721,     0,     0,     0,
   683,   926,     0,   593,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   749,   751,   730,     0,     0,     0,
     0,     0,     0,     0,   710,   704,   124,     0,   553,     0,
     0,     0,     0,  1333,  1329,    94,    95,    87,    93,     0,
    92,    85,    91,    86,   901,   830,   553,   900,     0,   830,
  1186,   451,     0,     0,   493,   360,   486,   311,   101,    98,
   459,   504,   517,   519,   527,   503,   551,     0,     0,   499,
     0,  1133,  1139,  1136,  1137,  1150,  1143,  1145,  1141,  1157,
     0,  1125,  1125,     0,  1092,     0,  1094,     0,  1079,  1100,
     0,     0,  1203,  1205,  1204,     0,     0,     0,  1193,  1198,
  1201,  1200,  1324,  1228,  1324,   399,   399,   399,   399,   102,
     0,    73,    74,    78,    78,   436,   272,   271,   273,     0,
   268,     0,   443,   639,   952,   637,   640,   365,     0,   936,
   937,   366,   935,   370,     0,     0,   250,     0,     0,     0,
     0,   247,   127,     0,     0,     0,   301,     0,   298,     0,
     0,   583,   543,   286,     0,     0,   391,   324,   323,     0,
     0,   471,     0,     0,   478,   830,     0,     0,   890,   887,
   891,     0,     0,     0,   661,   831,     0,     0,     0,     0,
     0,   838,   839,   837,     0,     0,   836,     0,     0,     0,
     0,     0,   654,     0,   719,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   830,     0,   843,   857,
   869,     0,     0,     0,     0,     0,     0,   683,   874,     0,
     0,   734,   735,   737,   739,     0,     0,     0,     0,     0,
     0,     0,   740,     0,     0,     0,     0,     0,     0,   705,
     0,   791,   830,     0,   706,   707,     0,  1320,  1332,   725,
     0,     0,   592,     0,     0,  1043,  1045,  1046,  1048,  1050,
  1051,  1054,  1055,  1056,  1063,  1064,  1065,  1066,  1070,  1071,
  1072,  1073,  1076,  1040,  1041,  1042,  1044,  1047,  1049,  1052,
  1053,  1057,  1058,  1059,  1060,  1061,  1062,  1067,  1068,  1069,
  1074,  1075,  1039,   907,   723,   788,     0,   814,   815,   817,
   819,     0,     0,     0,   820,     0,     0,     0,     0,     0,
     0,     0,   830,     0,   794,   795,   827,  1330,     0,   755,
     0,   750,   753,   727,     0,     0,     0,   789,     0,     0,
     0,   726,     0,     0,   718,     0,   720,     0,     0,     0,
   716,     0,     0,     0,   717,     0,     0,     0,   711,     0,
     0,     0,   712,     0,     0,     0,   715,     0,     0,     0,
   713,     0,     0,     0,   714,   510,   507,  1321,  1332,   905,
     0,   584,   909,   894,   896,   917,     0,   732,     0,   895,
  1335,  1334,   985,    89,   903,     0,   584,     0,     0,  1193,
   118,   112,   111,     0,     0,   485,     0,     0,   453,     0,
   525,   526,     0,   521,     0,   548,   535,   536,   530,   534,
   538,   532,   537,     0,  1158,     0,  1152,     0,     0,  1340,
     0,     0,  1091,  1107,  1096,  1177,  1212,  1212,  1191,     0,
  1191,     0,  1192,  1220,     0,     0,     0,   398,     0,     0,
     0,   127,   108,     0,     0,     0,   397,    71,    76,    77,
    82,    82,     0,     0,   446,     0,   438,   638,     0,   364,
   369,   363,     0,     0,     0,   249,   259,   251,   252,   253,
   254,     0,     0,   126,   128,   129,   177,     0,   244,   245,
     0,     0,     0,     0,     0,   297,   347,   495,   495,     0,
   380,     0,   310,     0,   337,   341,   339,     0,     0,     0,
   479,   342,     0,     0,   886,     0,     0,     0,     0,   651,
     0,     0,   885,   736,   738,     0,   647,   741,   742,     0,
   641,   676,   677,   678,   679,   681,   680,   675,     0,     0,
   644,     0,   841,   867,     0,   855,   844,   850,     0,   743,
     0,     0,   856,     0,     0,     0,     0,     0,   842,     0,
     0,   871,   744,   672,     0,   873,     0,     0,     0,   748,
     0,     0,     0,     0,   835,   790,  1318,     0,   841,   867,
     0,   729,  1257,   708,  1236,   709,  1237,   722,  1250,   721,
  1249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   749,   751,   730,     0,     0,     0,     0,     0,     0,     0,
   710,   704,     0,     0,   830,     0,     0,   691,   693,   692,
   694,   695,   696,   697,   699,   698,     0,   690,     0,   587,
   592,   649,     0,     0,     0,   841,   867,     0,   810,   796,
   797,   805,   804,     0,     0,     0,   811,     0,     0,     0,
     0,   798,   793,     0,   875,     0,   876,   877,   927,   754,
   752,   756,     0,     0,   728,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1328,     0,   552,   556,   558,   555,
   561,   585,   545,     0,   731,   733,    88,   899,   487,   904,
     0,  1181,   114,   115,   121,   113,     0,   484,     0,     0,
   460,   520,   522,   523,   524,   550,     0,     0,     0,  1113,
  1118,  1157,   589,  1132,  1341,  1134,  1135,     0,  1083,  1215,
     0,  1212,     0,     0,     0,  1182,  1191,  1183,  1191,  1374,
  1375,  1378,  1231,  1376,  1377,  1325,  1229,     0,     0,     0,
     0,     0,     0,   103,     0,   105,     0,   396,     0,    84,
    84,     0,   269,   445,   440,   444,   449,   367,     0,     0,
   368,   420,   421,   418,   419,     0,   260,     0,     0,   239,
     0,   241,   137,   133,   240,     0,     0,   384,   305,   255,
   256,   302,   304,   257,   306,   303,   300,   299,     0,     0,
     0,   488,  1108,   393,   394,   392,   338,     0,   326,   470,
   477,     0,   474,     0,   889,   883,     0,   658,   660,   833,
   832,     0,   834,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   853,   851,   840,   854,   845,   846,   849,   847,
   848,   858,     0,   868,     0,   866,   745,   746,   747,   872,
     0,     0,     0,     0,     0,   719,     0,     0,     0,     0,
     0,     0,   725,   723,   788,  1316,     0,     0,   755,     0,
   750,   753,   727,  1255,     0,     0,     0,   789,  1317,     0,
     0,     0,   726,  1254,     0,     0,   718,     0,   720,  1248,
     0,     0,     0,   716,  1244,     0,     0,     0,   717,  1245,
     0,     0,     0,   711,  1239,     0,     0,     0,   712,  1240,
     0,     0,     0,   715,  1243,     0,     0,     0,   713,  1241,
     0,     0,     0,   714,  1242,     0,   732,     0,     0,   828,
     0,     0,   701,   700,     0,     0,   592,     0,   588,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   808,   806,
   757,   809,   799,   800,   803,   801,   802,   812,     0,   759,
     0,     0,   879,     0,   880,   881,     0,     0,   761,     0,
     0,   769,     0,     0,   767,     0,     0,   768,     0,     0,
   762,     0,     0,   763,     0,     0,   766,     0,     0,   764,
     0,     0,   765,   506,  1322,   575,     0,   562,     0,     0,
   577,   574,   577,   575,   573,   577,   564,   566,     0,     0,
   560,   586,     0,   547,   898,   897,   902,     0,   110,     0,
   483,     0,     0,   458,   529,   528,   531,  1153,  1155,  1106,
  1157,  1207,  1214,  1209,  1191,     0,  1191,     0,  1184,  1185,
     0,     0,   185,     0,     0,     0,     0,     0,     0,     0,
   184,   186,     0,     0,     0,   104,     0,     0,     0,     0,
     0,    69,    68,   276,     0,     0,   442,   362,     0,     0,
   176,   125,     0,   122,   243,   245,     0,   131,     0,     0,
     0,     0,     0,     0,   144,   130,   132,   135,   139,     0,
   307,   258,   346,   916,     0,     0,     0,   494,     0,     0,
   888,   724,   646,   884,   643,     0,   860,   861,     0,     0,
     0,   865,   859,   870,     0,   736,   738,   741,   742,   743,
   744,     0,     0,     0,   748,     0,     0,   754,   752,   756,
     0,     0,   728,  1256,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   731,   733,   830,     0,     0,     0,     0,   703,     0,
   590,   592,     0,   816,   818,   821,   822,     0,     0,     0,
   826,   813,   878,   758,   760,     0,   779,   770,   787,   778,
   785,   776,   786,   777,   780,   771,   781,   772,   784,   775,
   782,   773,   783,   774,     0,   554,   557,     0,   576,   570,
   571,     0,   572,   565,     0,   559,     0,     0,   505,     0,
   482,   461,     0,  1154,     0,     0,  1217,  1187,  1191,  1188,
  1191,     0,   208,   209,   187,   197,   196,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   211,   213,   210,     0,
     0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
     0,   179,   107,     0,   395,    81,    80,     0,   275,     0,
     0,   270,     0,   584,   417,     0,   136,     0,     0,     0,
   169,   170,   172,   174,   141,   175,     0,     0,     0,     0,
     0,   142,     0,   149,   143,   145,   476,   134,   261,     0,
   348,   349,   351,   356,     0,   917,   496,     0,   497,   340,
     0,     0,   862,   863,   864,     0,   745,   746,   747,   757,
   759,     0,     0,     0,     0,   761,     0,     0,   769,     0,
     0,   767,     0,     0,   768,     0,     0,   762,     0,     0,
   763,     0,     0,   766,     0,     0,   764,     0,     0,   765,
   829,   685,     0,   688,   689,     0,   591,     0,   823,   824,
   825,   882,     0,   569,     0,     0,   544,   546,   120,  1379,
  1380,     0,  1381,  1382,  1156,  1326,   589,  1216,  1157,  1189,
  1190,     0,   200,   198,   206,     0,   225,     0,   216,     0,
   212,   215,   204,     0,     0,     0,   207,   203,   193,   194,
   195,   188,   189,   192,   190,   191,   201,     0,   183,     0,
   180,   106,     0,    83,   277,   278,   274,     0,     0,     0,
     0,     0,     0,   138,     0,     0,     0,   167,   150,   160,
   159,     0,     0,   168,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   363,     0,     0,     0,   359,
     0,   498,   473,   852,   724,   758,   760,   779,   770,   787,
   778,   785,   776,   786,   777,   780,   771,   781,   772,   784,
   775,   782,   773,   783,   774,   686,   687,   807,   563,   568,
     0,     0,   567,     0,  1327,  1219,  1218,     0,     0,     0,
   224,   218,   214,   217,     0,     0,   205,     0,   202,     0,
    79,     0,   361,   423,   416,   238,   140,     0,     0,     0,
   163,   161,   166,   156,   157,   158,   151,   152,   155,   153,
   154,   164,     0,   148,     0,     0,   231,   343,   350,   355,
   354,     0,   353,   357,   918,     0,   579,     0,  1383,     0,
   221,     0,   219,     0,     0,   182,   476,   281,   422,     0,
     0,   171,   173,     0,   165,   475,   226,   227,     0,   146,
   230,   358,   356,     0,   581,   582,   199,   223,   222,   220,
   228,     0,   279,   282,   283,   284,   285,   402,     0,     0,
   401,   404,   415,   412,   414,   413,   403,     0,   147,     0,
     0,   229,   359,     0,   578,   231,     0,   265,     0,   407,
   408,     0,   162,   235,     0,     0,   232,   233,   352,   580,
   181,   280,   405,   409,   411,   406,   234,   236,   237,   410,
     0,     0,     0
};

static const short yydefgoto[] = {  2451,
     1,    37,    92,    93,    94,    95,    96,   702,   944,  1281,
  2096,  1590,  1892,    97,   872,   868,    98,    99,   100,   940,
   101,   102,  1224,  1535,   390,   884,  1849,   103,   331,  1303,
  1304,  1305,  1916,  1917,  1908,  1918,  1919,  2353,  2122,  1306,
  1307,  2238,  1879,  2320,  2321,  2357,  2390,  2391,  2437,  1904,
   104,   974,  1308,  1309,   105,   713,   972,  1619,  1620,  1621,
   106,   332,   107,   108,   708,   950,   951,  1895,  2100,  2247,
  2402,  2403,   109,   110,   473,   333,   977,   717,   978,   979,
  1622,   111,   112,   359,   506,   735,   113,   366,   367,   368,
  1326,  1639,   114,   115,   334,  1630,  2130,  2131,  2132,  2133,
  2280,  2363,   116,   117,  1600,   711,   959,  1292,  1293,   118,
   351,   119,   726,   120,   121,  1623,   475,   986,   122,  1587,
  1274,   123,   965,  2411,  2429,  2430,  2431,  2104,  1606,  2380,
  2413,   125,   126,   127,   314,   128,   129,   130,   953,  1287,
  1595,   614,   131,   132,   133,   392,   634,  1229,  1540,   134,
   135,  2414,   741,  2275,   994,   995,  2415,   138,  1227,  2416,
   140,   482,  1632,  1928,  2139,   141,   142,   143,   859,   400,
   639,   374,   419,   893,   894,  1234,   900,  1239,  1242,   700,
   484,   485,  1844,  2049,   643,  1236,  1202,  1517,  1518,  1519,
  1827,  1520,  1837,  1838,  1839,  2040,  2313,  2394,  2395,   722,
  1521,   834,  1450,   585,   586,   587,   588,   589,   960,   763,
   777,   758,   590,   591,   752,  1005,  1340,   592,   593,   781,
   769,  1006,   595,   829,  1447,  1766,   830,   596,  1142,   823,
  1049,  1015,  1016,  1035,  1036,  1042,  1382,  1676,  1050,  1476,
  1477,  1794,  1795,   597,   999,  1000,  1336,   745,   598,  1204,
   877,   878,   599,   600,   315,   747,   277,  1923,  1205,  2364,
   387,   486,   602,   397,   603,   604,   605,   606,   607,   287,
   962,   608,  1124,   384,   144,   296,   281,   425,   426,   668,
   670,   673,   919,   288,   289,   282,  1559,   145,   146,    40,
    48,    41,   420,   164,   165,   423,   910,   166,   657,   658,
   659,   660,   661,   662,   663,   902,   664,   665,  1246,  1247,
  2054,  1248,   147,   148,   297,   298,   149,   501,   500,   150,
   151,   436,   677,   152,   153,   154,   155,   929,  1566,  1264,
  1560,   922,   926,   691,  1561,  1562,  1861,  2056,  2057,   156,
   157,   446,  1077,  1197,    42,  1265,  2205,  1198,   609,  1078,
   610,   865,   611,   692,    43,  1249,    44,  1250,  1576,  2206,
    46,    47
};

static const short yypact[] = {-32768,
  2098,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2671,-32768,-32768,-32768,-32768,-32768,  1563, 25167,   394,
   106, 24345,   564, 28718,   564,  -113,   129,   -17,   330, 28718,
   459,  1780, 28991,   184,  2486,   459,    37,    35,    23,    99,
    23,   459,   172, 26534, 26807,  -113,   459, 28718,   139,     5,
   148, 26807, 22703,   146,   312,    35, 26807, 27353, 27626,     5,
   -76,  3648,   214,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   519,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   543,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   542,    81,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   320,-32768,-32768,-32768,
   320,-32768,-32768,   363, 24619,-32768,-32768,-32768,    26,-32768,
-32768,   564,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   461,
-32768,-32768,   547,-32768,   549,  1181,  1181,   693, 26807,   564,
   717,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   564,
 28718, 28718,-32768,-32768, 28718, 28718,-32768, 28718, 26807,-32768,
   577,   505, 22131,   537,   564,   225, 26807, 28718,   564,-32768,
 28718,-32768, 28718, 28718, 28718,-32768,  1426,   681,-32768, 28718,
 28718,-32768,   412,-32768,-32768,-32768,-32768,-32768,    19,   643,
-32768,-32768,-32768,-32768,-32768,   669,   530,-32768, 26807,   688,
-32768,-32768,   699, 15091, 24893,   -26,   704,   858,   -85,-32768,
-32768,   848,-32768,-32768,   885,-32768,   884,-32768,-32768, 26807,
-32768,   895, 28718,-32768,-32768,-32768,-32768,-32768,-32768, 26807,
    19,-32768,   835,   923,-32768,   862,   950,-32768,   886,   -32,
   459,   809,-32768,-32768,   -76,  1043,  1075,  1043,  1019,-32768,
  1106,-32768,   163, 28718,-32768,   880,   880,-32768,-32768,  1149,
  1152,   902,   902,-32768,   363,-32768,   363,   649, 28718,-32768,
  1065, 28718,-32768,-32768, 29264,-32768,-32768,  1181,   962,  1063,
   976,  1063,  1233,   491,  1105,  1059,-32768,  1274,-32768, 26807,
  1247,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1091,-32768,-32768, 28718,-32768,  1210,-32768,
-32768,  1305,  1201,-32768,  1112,-32768,-32768,  1273, 22976,-32768,
  1059,-32768,  1132,-32768,   146,-32768,-32768,-32768,-32768,-32768,
   461,-32768,-32768,-32768,  1159,   198,-32768,-32768, 28718,   956,
   101, 28718, 28718,   206,   267,   317,   398,   424,   425,   450,
   521,   524,   606,   613,   614,   618,   641,   701,   708,   712,
   719,   735,   792,   821,   830,   845,   863,   869,   887,   903,
   906,   912,   939,   946, 24068,  1168,  1254,  1254,  1169,-32768,
  1190,  1216,-32768,  1226,  1373,  1260,  1281,-32768,  1284,  1126,
  1432,  1254, 16275,  1302,  1245,  1309,  1312,  1316,   947,   288,
  1320,-32768,-32768,-32768,   949,  1719, 16275,  1257, 16275,-32768,
 16275, 16275, 16275, 16571,   146,  1327,-32768,-32768,-32768,-32768,
  1336,-32768,   952,  1503,-32768,  5565,-32768,  1257,   -35,-32768,
  1342,  1346,-32768,  1363,-32768,-32768,-32768,   469,-32768,    28,
   963,-32768,-32768,-32768,-32768,   -12,  1526,    21,    21, 22418,
   649, 26807,  1466, 28718,-32768,  1201,  1549,   198,-32768,  1541,
-32768,  1544,-32768, 26807,-32768,-32768,-32768,-32768,   -76, 16275,
   -76,  1501,   393,  1598,-32768,-32768,-32768,  -113,-32768,-32768,
-32768,-32768,  -113,  -113,  1301,-32768,-32768,-32768,  1404,-32768,
-32768,  1419,  1431,-32768,-32768,-32768,  1457,-32768,  1159,-32768,
  1488, 25167,  1577,   902,-32768,-32768,-32768,  1481,-32768,-32768,
-32768,-32768,-32768,   732,-32768,-32768,-32768,-32768,-32768,   680,
   879,-32768,  1482, 28718,-32768,  1487,  1483,-32768,-32768,    64,
  1531,   217,-32768,   217,   -76,-32768,-32768,    -3,  1547,  9193,
  1529,-32768,   876,  1489,   146, 21844,-32768,  1636,-32768,  1678,
 16275,-32768, 28718, 26807,-32768,-32768,-32768,-32768, 27899,-32768,
-32768,-32768, 28718, 28718,  1666,  1610,-32768,  1601,  1496, 21284,
-32768,-32768,  1684,-32768,  1602,  1257,  1504,  1363,  1505, 16275,
-32768,-32768,  1725, 16571,  1159,  1159,  1159,-32768,-32768,  1631,
  1118,  1159,-32768,  1623,  1624,  1625,  1628,-32768,-32768,  1254,
-32768,  1245,  2305, 16275, 16275,  1159,-32768, 19531, 16571,  1633,
-32768,  9467,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1373,-32768,  1616,-32768,-32768,-32768,-32768,
   768, 16867,-32768,  1756,  1756,  1756,  1756,  1516,  1518,  1522,
  2830,-32768,  -164,-32768,  1159, 25715,  6235, 16275, 18051,  1523,
   628, 16275,   463, 16275,-32768,-32768, 17163, 10651, 10947, 11243,
 11539, 11835, 12131, 12427, 17755,-32768,   -47, 15091,  1708, 23249,
  7411, 28718, 25441,-32768,-32768,-32768,-32768,-32768,-32768, 29537,
-32768,-32768,-32768,-32768,-32768,  1257,   -38,-32768,  1532,   625,
   680,-32768,  1574,    55,   225,-32768,  1553,-32768,-32768,-32768,
  1533,-32768,  1530,-32768,  4725,-32768,  1681,     4,   961,-32768,
  1806,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1546,
  3040,    20,    20, 28718,-32768, 28718,-32768,   902,-32768,-32768,
   363,  1534,-32768,-32768,-32768,  1535,   111,  -126,  1812,-32768,
-32768,-32768,-32768,-32768,-32768,    34,  1757,  1757,  1757,-32768,
   564,-32768,-32768,   315,   315,-32768,-32768,-32768,-32768,  1691,
  1689,  1562,  1626,-32768,  1690,-32768,-32768,-32768,   319,-32768,
-32768,-32768,-32768,  1588,  1700,   302,-32768,   302,   302,   302,
   302,-32768, 26261,  1786,  1629,  1571,  1575,   419,-32768, 26807,
    97,  5565,-32768,-32768,  1564,  1561,  1565,-32768,-32768,   363,
 27080,-32768, 15091,   563,-32768,  1257, 27080, 16275,    49,-32768,
-32768, 28718,  4776,  1692,  1783,-32768,  -108,  1566,  1568,   796,
  1569,-32768,-32768,-32768,  1570,  1758,-32768,  1573,   372,   145,
  1703,  1738,-32768,  3924,  2355,   829,  1578,  1580,  1583,  1585,
 19531, 19531, 19531, 19531,  1587,   416,  1257,  1586,-32768,   469,
   -54,  1589,  1694, 15387, 16571, 15387, 15387,  4844,   -99,  1591,
  1593,   480,   988,  1076,   599,  1594,  1597, 16867,  1618,  1600,
  1603,  1604,   691, 16867, 16867, 16867, 16867, 16867, 16571,   703,
  5654,   755,  1257,  1605,   767,   364,   793,-32768,    27,-32768,
  1367, 16275,  1609,  1611,  1612,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  2305,  1614,-32768,  1615,  1617,
-32768,  1621,  1622,  1632,-32768, 18051, 18051, 18051, 18051, 18051,
 16275,   229,  1257,  1634,-32768,   469,-32768,-32768,  3224,-32768,
   334,-32768,-32768,   942, 18051,  1637, 16275,  3317,  1638,  1641,
 15683,   768,  1642,  1644,-32768, 15683,  2355,  1645,  1646, 15683,
  1099,  1649,  1650, 15683,  1099,  1652,  1653, 15683,   -10,  1655,
  1656, 15683,   -10,  1668,  1670, 15683,  1756,  1672,  1677, 15683,
  1756,  1682,  1685, 15683,  1756,   312,  1613,-32768,    28,-32768,
 21011,  1201,-32768,  1630,-32768,-32768,  1635,-32768,   123,  1630,
-32768,-32768, 28718,-32768,-32768, 24068,  1201, 23522,  1627,  1812,
-32768,-32768,-32768,   638,  1825,  1657,  1671, 28718,-32768, 16275,
-32768,-32768,   168,-32768, 28718,-32768,-32768,-32768,   164,-32768,
-32768,  1741,-32768,  1687,-32768,   640,-32768,  -113,  2246,-32768,
  1683,  1686,-32768,  1702,-32768,-32768,   272,   272,   724,  1693,
   724,  1696,-32768,-32768,  1180,  1243,  1688,-32768,  1862,  1864,
  1695, 26261,-32768, 28718, 28718, 28718, 28718,-32768,-32768,-32768,
  1879,  1879, 26807,    -3,    51,  1717,-32768,-32768, 25988,-32768,
-32768,  1803, 25988,   523,  1159,-32768,-32768,-32768,-32768,-32768,
-32768, 28718,   838,-32768,-32768,-32768,-32768,   960,-32768,  4484,
  1631, 22131, 21557, 21557, 21844,-32768,  1811,  1893,  1893, 28718,
-32768, 28172,  1613, 28718,-32768,  1817,-32768,   994, 28718,   257,
-32768,-32768,  5234, 16571,-32768,  1906,  6235, 28718, 28718,-32768,
 16275, 16571,-32768,-32768,-32768,  1159,-32768,-32768,-32768, 16275,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768, 16275,  1159,
-32768, 19531, 19531, 16571,  9763,   492,  1951,  1951,   116,-32768,
  6235, 19531, 20123, 19531, 19531, 19531, 19531, 19531,-32768,  8005,
 16571,  1905,-32768,-32768,  1718,   -99,  1720,  1722, 16571,-32768,
 16275,  1159,  1159,  1631,  1118,  3421,-32768, 16275, 19531, 16571,
 10059,   834,-32768,  1958,-32768,  1958,-32768,  1958,-32768,  1958,
-32768,  1724,  6235, 16867, 18051,  1727,   661, 16867,   516, 16867,
   871,   874, 12723, 13019, 13315, 13611, 13907, 14203, 14499, 14795,
 17459,   892,  7708, 16867,  1257,  1728,  1900,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    -9,  4602,   286,-32768,
  1609,-32768, 18051,  1159,  1159, 19531, 16571, 10355,   596,  1969,
  1969,  1969,  1969,  1048,  6235, 18051, 18347, 18051, 18051, 18051,
 18051, 18643,-32768,  8302,-32768,  1730,  1737,-32768,-32768,-32768,
-32768,-32768,   499,  3224,   942,  1631,  1631,  1736,  1631,  1631,
  1742,  1631,  1631,  1743,  1631,  1631,  1745,  1631,  1631,  1746,
  1631,  1631,  1748,  1631,  1631,  1749,  1631,  1631,  1750,  1631,
  1631,  1752, 26807,   363,-32768, 26807,-32768,  1739,  1676,-32768,
 28445,  1753,  1938, 23795,-32768,-32768,-32768,-32768,-32768,-32768,
 16571,-32768,-32768,-32768,  1866,-32768,  1947,  1787,  1789,  1027,
-32768,-32768,-32768,-32768,-32768,  1765,   961,   961,     4,-32768,
-32768,  1546,  1327,-32768,-32768,-32768,-32768, 28718,-32768,-32768,
  1770,   272,  1771,   352,  -109,-32768,   724,-32768,   724,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768, 20419,  1775,  1776,
 28718,  1042,  4484,-32768,   174,-32768,  1894,-32768,  1961,  1808,
  1808,  1968,  1927,-32768,-32768,-32768,   -26,-32768,  1091,  2015,
-32768,-32768,-32768,-32768,-32768,  1901,-32768,   153, 26261,  1855,
 28718,-32768,  1926,   651,-32768,  1854, 28718,  1073,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   564,  1788,
   100,-32768,-32768,-32768,-32768,-32768,-32768,  1974,-32768,-32768,
-32768,  1791,-32768, 16571,-32768,-32768,  1793,-32768,-32768,  5565,
-32768,  1794,  5565,  1781,  1795,   321,  1804,  1807, 15387, 15387,
 15387,  1809,-32768,-32768,   237,   492,    40,    40,  1951,  1951,
  1951,-32768,   287,   -99, 16571,-32768,-32768,-32768,-32768,   -99,
  5297,  1810,  1814,  1815,  1816,  1887,  1819,  1820, 15387, 15387,
 15387,  1821,   965,   996,  3421,-32768,   738,  3224,  1047,   743,
  1058,  1079,  2656,-32768, 18051,  1792, 16867,  4055,-32768,  1818,
  1823, 15683,   834,-32768,  1824,  1826,  1115, 15683,  2892,-32768,
  1827,  1829, 15683,  1675,-32768,  1830,  1831, 15683,  1675,-32768,
  1833,  1834, 15683,    77,-32768,  1837,  1848, 15683,    77,-32768,
  1858,  1860, 15683,  1958,-32768,  1865,  1867, 15683,  1958,-32768,
  1868,  1869, 15683,  1958,-32768,  1861,  1124,   294,  1872,-32768,
  1631,  1881,-32768,-32768, 15979,  1882,  1609,  1885,-32768,   675,
  1863,  1878,  1883,  1886, 15387, 15387, 15387,  1888,-32768,-32768,
   822,   596,    89,    89,  1969,  1969,  1969,-32768,   341,-32768,
  6887, 18051,-32768,  1890,  1895,-32768,  1891,  1892,-32768,  1896,
  1897,-32768,  1898,  1899,-32768,  1903,  1908,-32768,  1912,  1913,
-32768,  1914,  1915,-32768,  1916,  1918,-32768,  1922,  1923,-32768,
  1924,  1925,-32768,-32768,-32768,  1508,  1928,-32768, 26807,  1978,
  1953,-32768,  1953,   864,-32768,  1953,  1676,-32768,  1983, 25715,
-32768,-32768,  2040,  2007,-32768,-32768,-32768,  1967,-32768,   -76,
-32768,  1921, 28718,-32768,-32768,-32768,-32768,-32768,  1917,-32768,
  1546,-32768,-32768,-32768,   724,  1904,   724,  1929,-32768,-32768,
  1931, 20419,-32768, 20419, 20419, 20419, 20419, 20419,  1813,  1934,
-32768,  1935, 28718, 28718,  1069,-32768,  2069,  2130, 28718,   564,
  1970,-32768,-32768,  2016,  2132,    -3,-32768,-32768,   146, 26807,
-32768,-32768,  1942,-32768,-32768,-32768,  2113,-32768,  1944, 28718,
 18939,  2101,  2120, 28718,-32768,-32768,   651,-32768,-32768,   146,
-32768,-32768,-32768,-32768, 28718,  2099,  2102,-32768,  2100, 15091,
-32768,-32768,-32768,-32768,-32768,  6235,-32768,-32768,  1954,  1955,
  1959,-32768,-32768,   -99,  6235,  1127,  1154,  1155,  1165,  1166,
  1172,  1960,  1962,  1963,  1173, 18051,  1964,  1187,  1191,  1207,
   785,  3224,  2656,-32768,  1631,  1631,  1965,  1631,  1631,  1966,
  1631,  1631,  1971,  1631,  1631,  1972,  1631,  1631,  1973,  1631,
  1631,  1975,  1631,  1631,  1976,  1631,  1631,  1977,  1631,  1631,
  1979,  1211,  1214,  1257,  1980,  1631,  1981,  1995,  5565,  1631,
-32768,  1609,  6235,-32768,-32768,-32768,-32768,  2005,  2006,  2008,
-32768,-32768,-32768,   822,-32768,  6887,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2125,-32768,-32768, 26807,-32768,-32768,
-32768,  2133,-32768,-32768, 26807,-32768, 16571, 16275,-32768,   146,
-32768,-32768,  1005,-32768,  -113,   674,-32768,-32768,   724,-32768,
   724, 20419,  4162,  1022,  2199,  2199,  2199,  2283,  6235, 20419,
  6887,  1984,   662, 20419,   789, 20419,-32768,-32768, 20715, 20419,
 20419, 20419, 20419, 20419, 20419, 20419, 20419,-32768,  8896,  1081,
  1096,-32768,-32768, 19235,-32768,  2011,-32768,   146,-32768,   -23,
  2105,-32768,  2138,  1201,  2017, 28718,-32768, 20419,    44,  2012,
-32768,  2019,  2020,-32768,-32768,-32768, 19235, 19235, 19235, 19235,
 19235,   656,  2021,-32768,-32768,-32768,  2023,-32768,-32768,  2010,
  2025,-32768,-32768,   -31,  2026,  1935,-32768, 28718,-32768,-32768,
  1108,  2024,-32768,-32768,-32768,  2027,  1221,  1229,  1235,   451,
  1253, 18051,  2028,  2029,  2030,  1263,  2031,  2033,  1265,  2034,
  2035,  1271,  2036,  2038,  1275,  2041,  2043,  1285,  2044,  2045,
  1287,  2046,  2047,  1307,  2049,  2050,  1315,  2051,  2054,  1329,
-32768,-32768,  2055,-32768,-32768,  2056,-32768,  2057,-32768,-32768,
-32768,-32768, 26807,-32768, 26807,   -37,   -99,  5565,-32768,-32768,
-32768,  3040,-32768,-32768,  1005,-32768,  1327,-32768,  1546,-32768,
-32768,  5481,-32768,-32768,  4162,  2204,-32768,  6887,-32768,   787,
-32768,-32768,  4959,  6887,  2059, 20419,  4523,  1022,  5201,  4916,
  4916,   157,   157,  2199,  2199,  2199,-32768,  1244,  6298,  2109,
-32768,   656,   564,-32768,-32768,-32768,-32768, 28718,   146,  2107,
 28718,  2060,  3861,-32768, 19235,  1159,  1159,   668,  2211,  2211,
  2211,   208,  6235, 19827, 19235, 19235, 19235, 19235, 19235, 19235,
 19235, 19235,  8599, 28718,  2142,  1803, 28718,  6235,  6235,   -93,
 28718,  2061,-32768,-32768,  1333,   568,  1337,  1339,  1341,  1347,
  1349,  1351,  1368,  1370,  1374,  1395,  1397,  1399,  1405,  1407,
  1411,  1425,  1467,  1468,  1469,-32768,-32768,-32768,-32768,-32768,
 16275,  2062,-32768,  2990,-32768,-32768,-32768,  6235,  6887,  1297,
-32768,-32768,-32768,-32768,  2297,  6887,  4959, 20419,-32768, 28718,
-32768,  2066,-32768,  2143,-32768,-32768,-32768,  1303,  2072,  2082,
-32768,-32768,   668,   656,   589,   589,   211,   211,  2211,  2211,
  2211,-32768,  1300,   656,  1421,    80,  2233,-32768,-32768,-32768,
-32768,   564,-32768,-32768,-32768,  1470,  5565, 28718,-32768,  2084,
-32768,  6887,-32768,  6887,  1471,  6298,  2023,  1141,-32768,  1328,
  6235,-32768,-32768, 19235,-32768,-32768,-32768,-32768,    53,-32768,
  2233,-32768,   -31,  1475,-32768,-32768,-32768,-32768,-32768,-32768,
  2142,  1478,-32768,-32768,-32768,-32768,-32768,-32768,   150,   992,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2085,   656,    52,
    52,-32768,   -93, 28718,-32768,  2233,  1141,-32768,  2090,   150,
  2096,  2092,-32768,-32768,  2329,    86,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  2108,-32768,-32768,-32768,-32768,-32768,-32768,
  2392,  2402,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,  2311,-32768,-32768,-32768,  1952,  1701,  1464,
-32768,  1128,   820,-32768,  1796,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1555,  1145,
   810,  1146,-32768,-32768,-32768,   504,   313,-32768, -2016,-32768,
  -908,-32768,  -402,   103, -2011,    24,     6,    42,    10,-32768,
-32768,-32768,-32768,   825,-32768,-32768,-32768,-32768,-32768,   465,
-32768,-32768,-32768,-32768,-32768,-32768, -1253,-32768,-32768,-32768,
-32768,    12,-32768,-32768,-32768,-32768,  -322,   841,-32768,  1122,
  1129,-32768,-32768,  2356,  2052,  1835,-32768,  2373,-32768,  1936,
  1448,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   170,
    58,    25,-32768,-32768,   176,  1985,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  2110,  -334,-32768,-32768,-32768,
   333,-32768,-32768,-32768,    45,-32768, -2250,-32768,-32768,-32768,
    -8,-32768,-32768,-32768,   857,-32768,-32768,-32768,-32768,-32768,
-32768,   861,-32768,-32768,-32768,  2364,-32768,-32768,  1224,-32768,
  2075,    -6,-32768,    84, -1524,  1135,    -4,-32768,-32768,     0,
-32768,  1590,  1151,-32768,-32768,  -506,   -90,  4971,-32768,  1272,
  2053,-32768,-32768,-32768,  1242,-32768,-32768,   925,  -220,-32768,
  -344,   202,-32768,-32768,-32768,-32768,  1619,-32768,-32768, -1486,
-32768,   970,-32768,   642,   653,  -786,-32768,-32768,    67,  -600,
-32768, -1534, -1410,  -750,  1919,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -665,  -485,-32768,-32768,-32768,  3462,-32768,
-32768,  -173,  -386,   725,-32768,-32768,-32768,  4972, -1116,  -590,
  -744,  1097,-32768, -1065,  -806,  -854,-32768,-32768,  -860,   800,
-32768,   540,-32768,  -275,-32768,  1506,-32768,-32768,    66,  1647,
-32768,  1288,  -978,  1658,-32768,    -7,  -293,-32768, -1507,   141,
  -294,    -2,  3796,-32768,  5140,   736,    -1,     1,   -40,  -306,
  -211,  2156,   670,-32768,-32768,   -20,-32768,  2227,-32768,  1606,
  2087,-32768,-32768,  1599,  -383,    17,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -147,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   293,-32768,-32768,-32768,   967,
-32768, -1824,-32768,-32768,-32768,  2147,-32768,-32768,-32768,-32768,
-32768,  2022,  1608,-32768,-32768,-32768,-32768,  1651, -1236,  1314,
  -384,-32768,-32768,-32768, -1218,-32768,-32768,-32768,   327,-32768,
-32768,  -243,  -958,  1548,  2375,  1620,-32768,  1023,  -419,  -601,
  4043,  1352,    88,   -49,-32768,   338,-32768,     2,-32768,   343,
-32768,-32768
};


#define	YYLAST		29812


static const short yytable[] = {    38,
   410,    39,    45,   450,   742,   496,   305,   856,   278,  1007,
   474,   278,   494,   452,  1328,   678,  1846,   422,  1859,  1459,
  1460,  1461,  1462,  1463,  1568,   886,   385,  1273,   280,  1826,
  1593,   455,   487,   124,  1041,   136,  2055,   137,  1483,  1563,
  1769,   139,   431,   398,   961,   863,   863,   837,   675,   676,
   490,   300,  1763,   690,   353,  1764,  1885,  1381,   158,  2216,
   336,   159,   753,   447,   160,  1237,   290,   382,   613,   161,
   415,   162,   163,  1201,   394,   396,   771,  2242,  2278,   402,
   502,  1341,   866,   124,   360,   136,  1125,   137,   857,   416,
  1341,   139,   947,   355,    73,   618,  2362,  1371,   626,  1397,
  2258,  2259,  2260,  2261,  2262,  1403,  1405,  1407,  1409,  1411,
  1267,  2311, -1114,    25,  1268,   871,  1209,   948,   361,   158,
  1909,   867,   159,  2434,   936,   160,   937,   318,   292,  2412,
   161,  1083,   162,   163,  1413,  1341,   284,   291,  1911,   284,
   299,   302,   303,   362,  1269,  1594,  1465,   302,  2420,  1334,
   302,    25,  2312,   418,   354,  1001,   309,   306,   304,   307,
   503,   302,   302,   938,   736,   302,  1222,   743,    25,   302,
   302,   310,  1261,  1371,   302,   302,   302,   504,   272,  2444,
  2448,   274,   718,  1385,   949,  1387,  1388,  1912,  1342,  1867,
  1343,  1270,  2387,   363,  2435,   738,   619,  1342,   946,   356,
   594,  1913,   645,   646,   698,   647,   648,  1914,   649,   650,
   364,   651,  2325,   652,  2069,   432,   653,   654,   655,   656,
  1271,    91,   369,  2436,  1366,  1367,  1368,  1369,   275,  1267,
  1915,  2449,  2245,   372,  2388,  1223,   881,  1147,  2338,  2246,
  2421,   357,  1342,   998,   278,    64,   273,  2343,  2344,  2345,
  2346,  2347,  2348,  2349,  2350,  2351,  2354,   358,  1216,  2279,
   273,   858,  1926,  1269,   430,  2263,   635,    73,  2263,   373,
    70,    73,   308,  1887,   391,   680,   853,   854,   855,   365,
  1355,    25,  1238,   681,  1023,  1215,  1465,  1927,  1765,  1219,
   920,   739,  1466,   273,  1371,   337,    25,  1657,  1697,   682,
  1386,   449,   275,   275,   505,   683,   684,  2371,   272,   733,
  1270,   274,  1341,   433,  1356,   734,   939, -1330,   453,   454,
 -1114,   459, -1330,   273,   637,   458,  1376,  1377,  1378,   483,
  1869,  1272,  1870,  1687,   278,   615,  1770,    75,   488,  1271,
   489,  1017,  2037,  1863,   479,  1888,   685,   389,   497,  1781,
  1782,  1783,  1784,  1785,  1786,  1787,  2001,   507,  2090,  2091,
  2398,   511,  2399,  1429,  1430,  1431,   601,  2419,   272,   499,
   686,   274,   284,   666,   393,  1470,  1471,  1472,  1371,   434,
   687, -1114,   623,   124,  2055,   136,  1936,   137,    25,  1373,
  1773,   139,   627,   480,    91,    87,   302,   291,   740,   507,
  1374,  1375,  1376,  1377,  1378,  1331,  1259,   291,   302,   302,
   828,  1547,   302,   302,  1663,   302,   302,  2134,   273,  1342,
   302,  1526,   478,   311,   302,   302,   291,    73,   302,   942,
   302,   302,   302,   481,   304,  1070,   693,   302,   302,   695,
  1480,  1543,   697,  2085,  2086,  2087,  1379,  1642,   290,   290,
  1544,  1545,   714,   679,   730,  1696,   302,   688,   943,  1704,
  1548,  1709,   284,   689,  1714,  1720,  1725,  1730,  1735,  1740,
  1745,  1750,  1755,  1371,  1318,  1759,  1341,   302,  -602,  1481,
   302,  2264,  1432,  1341,   780,   399,   727,   302,  1352,  2265,
  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2270,  2271,  2272,
  -602,   678,  1467,   732,  1662,   413,  2341,  1353,  1465,  1658,
  1373,   302,   312,  1468,  1469,  1470,  1471,  1472,  1482,   291,
   291,  1374,  1375,  1376,  1377,  1378,   302,   313,  1279,   302,
  1341,  1155,   302,  1372,  1147,  1147,  1147,  1147,  1147,  -603,
  1692,  1354,   414,   304,   832,  1688,  1072,   302,   892,  1371,
   896,  2194,  1473,  1147,    91,  1656,  1465,  1280,  2196,  1614,
  -673,  -603,  1792,    25,   302,  1665,  1666,  1667,  1668,  1669,
  1670,  1671, -1213,     2,   285,   869,   302,   873,   873,    25,
  1156,  1767,  -673,  1342,  1705,  1943,  1647,  1295,  1961,  -604,
  1342,  2187,  1993,   424,  1373,  1157,   302,  1778,   903,   302,
   302,  1523,  1774,   903,   903,  1374,  1375,  1376,  1377,  1378,
   746,  -604,   879,  2282,   882,  1289,  1529,  1290,  1602,  1041,
  1664,   885,  1254,   961,   898,  1465,   891,   961,  2058,    25,
  2060,   278,   302,  1706,  1278,  1673,  1674,  1342,   275,  2012,
   899,   312,  2102,  1603,  1680,   415,  2263,  1865,  1707,   410,
   435,   917,   680,  1465, -1235,  1041,   313,  -914,   437, -1235,
   681,  -921,  1694,   820,   416,   272,   286,   915,   274,   275,
  -605,  1070,  2316,   438,   975,  2014,   682,  1070,  1070,  1070,
  1070,  1070,   683,   684,   594,   876,   498,   275,  1758,  1373,
   290,   934,  -605,  1604,   706,   417,  -606,  -607,   707,  1901,
  1374,  1375,  1376,  1377,  1378,   448,  2309,   302,  2310,   302,
  1605,   302,  1041,  2263,  1780,  1315,   984,  1316,  -606,  -607,
   983,   302,  -608,   685,  1467,  2263,   987,  1909,   418,  1789,
   988,   989,  1465,  1910,  1150,  1468,  1469,  1470,  1471,  1472,
  2003, -1285,   451,  2335,  -608,  1911, -1285,   686,  1964,  2355,
   460,   923,   924,  1008,  1009,  1010,   461,   687,   925,   284,
  1018,   291,  -914,   477,  1251,  1252,  -921,  1699,  2219,  2134,
 -1262,  1151,  1467,  1152,  1026, -1262,  1374,  1375,  1376,  1377,
  1378,   302,  1072,  1468,  1469,  1470,  1471,  1472,  1072,  1072,
  1072,  1072,  1072,  -609,  1912,  1465,  -610,   302,  1939,  1940,
  1941,  1956,   508,   302,  1700,  2220,  1701,  2221,  1913,   495,
   302,   302,  1153,  1147,  1914,  -609,   302,   509,  -610,   594,
   302,   302,  2210,  1643,  2211,   837,   510,   302,  1952,  1953,
  1954,  1084,  1614,  1085,   688,   272,   512,  1915,   274,  2150,
   689,  1467,  1465,  1037,  1760,  1702,  2222,   513,  2152,  1958,
   601,  1147,  1468,  1469,  1470,  1471,  1472,  2224, -1286,  1329,
  1211,  1330,  2264, -1286,  1147,  1147,  1147,  1147,  1147,  1147,
  1147,-32768,-32768,  2268,  2269,  2270,  2271,  2272,  -611,  1465,
  1468,  1469,  1470,  1471,  1472,  -612,  -613,  1073,  1959, -1267,
  -614,  1413,   841,  2322, -1267,  1412,  1240,  1243,   930,   931,
  -611,  1533,  1534,   616,  1143,   932,  2225,  -612,  -613,    38,
   273,    39,  -614,  -615,  2008,  2009,  2010,   317,  -914,   822,
   304,  2226,   352,   302,   820,  1260,  1262,  1960,   371,  2264,
  1944,  1551,  2323,   386,   290,  -615,  1552,  2265,  2266,  2267,
  2268,  2269,  2270,  2271,  2272,   904,   905,   302,  1467,   302,
   302,  2141,  2268,  2269,  2270,  2271,  2272,   302,  1417,  1468,
  1469,  1470,  1471,  1472,  1297,  2208,  1297,  1297,  1297,  1297,
  2209,  2324,  1317,  -616,   927,  1017,  1831,   928,   494,   494,
  -617, -1268,  1832,   617,  -618,   601, -1268,   828,   624,  1616,
    64,  -619,   828, -1233,  1833,  -616,   828,   845, -1233,   837,
   828,   302,  -617,   302,   828,   291,  -618,  -620,   828,   621,
   839,  1467,   828,  -619,   846,    70,   828,  1835,  1564,   620,
   828,  1565,  1468,  1469,  1470,  1471,  1472,  1070,   291,  -620,
  1836,  1070,   622,  1070,   629,  2286,  1070,  1070,  1070,  1070,
  1070,  1070,  1070,  1070,  1070, -1319,  2041,  1070,   630,  2043,
 -1319,   361,   851,   852,   853,   854,   855, -1234,  1467,   840,
   302,   631, -1234,  1421,  -621,    73,   841,   302,  1319,  1468,
  1469,  1470,  1471,  1472,-32768,   632,   362,  1598,   302,  2069,
  1422,  1601,    75,  1434,   302,   966,  -621,    64,  1435,   302,
   967,   633,  1346,  -622,  1347,  1467,  1037,  1037,  1037,  1037,
   636,   968,  -623,  1147,   638,   837,  1468,  1469,  1470,  1471,
  1472,   838,    70,   969,   970,  -622,   839,  -624,  1427,  1428,
  1429,  1430,  1431,  1073,  -623,  1360,   363,  1361,   642,  1073,
  1073,  1073,  1073,  1073,  1609,  -625,  1610,   971,  1072,  -624,
    87,  -626,  1072,   364,  1072,   640,  2073,  1072,  1072,  1072,
  1072,  1072,  1072,  1072,  1072,  1072,   837,  -625,  1072,  -627,
  1645, -1277,    73,  -626, -1279,   840, -1277,   839,  1651, -1279,
   669,   845,   841,   272,   286,  -628,   274,   275,  -629,    75,
   842,  -627, -1232,  1536,  -630,  2142,   439, -1232,   846,   440,
  1147,   843,    91,  1522,  2146,   441,   442,  -628,  1553,   844,
  -629,  1143,  1143,  1143,  1143,  1143,  -630,   644,   879,   200,
   443,  -631,   365,   444,   672,   847,   840,   764,  -632,  -664,
  1143,  -601,   674,   841,  -662,  1541,   851,   852,   853,   854,
   855,   842,  1541,  -631,   202,  -600,   820,    87,    25,  1241,
  -632,  -664,   765,  -601,  1596,   694,  -662,    38,   699,    39,
  1555,  2077,  2188,   207,   208, -1253,  1611,  -600,  1612,   701,
 -1253,   766,   208,  1574,  1574,  1575,  1575,   703,  2078,  1275,
  1276,  1277,  1625,  1625,  1588,  1592,  2200,   845, -1263,  2201,
   748,   876,    25, -1263,    26,  1392, -1251,   218,   302,    91,
   858, -1251,  1640,  1607,   846,   218,  1012,  1013,   705,  1608,
   302,   709,  2197,   302,  2202,   302,  2083,  2084,  2085,  2086,
  2087,  1297,  1297,  1624,  1624,   302,   223,  1634,  2214,  1636,
  1070,   847,   302,  1853,   767,  1854,  1855,  1856,   845,   848,
   849,   850,   851,   852,   853,   854,   855, -1283,  1609,   712,
  1886,   906, -1283,  1318,  1652,   846,  1779,   907, -1278,   908,
    25,   909,    26, -1278,  1147,   748,   710,  1847,  1655,   302,
  2263,   302,   302,   302,   302,  1329, -1265,  2092,  2381, -1281,
   302, -1265,   847,  1393, -1281,   715,   302,  1329,   719,  2240,
   302,-32768,-32768,   851,   852,   853,   854,   855,   716,   302,
  1682,  1683,  1329,   275,  2241,   720,   721,   820,   445,   302,
   302,   302,   302,  2181,   858, -1246,  2283,   302,   723,   302,
 -1246,   302,   272,   273, -1260,   274,   302, -1264,    25, -1260,
    26,   724, -1264,    64,   820,   302,   302,  1037,  1037,   729,
  1296,  1072,  1298,  1299,  1300,  1301,    25,  1037,  1037,  1037,
  1037,  1037,  1037,  1037, -1266, -1269,   751,  1768,    70, -1266,
 -1269,  1570,  1771,  1772,  1571, -1270, -1271,    25,   820,    26,
 -1270, -1271, -1272, -1276,  1037,   750,   754, -1272, -1276,  2063,
  1931,  2064,  2065,  2066,  2067,  2068,  1572, -1282,  1573,  1073,
  1143, -1280, -1282,  1073,  1436,  1073, -1280,   755,  1073,  1073,
  1073,  1073,  1073,  1073,  1073,  1073,  1073, -1284,    73,  1073,
   820, -1259, -1284,  2250, -1261,  1824, -1259,   770,  1522, -1261,
  1437, -1273,  2342,   756,  1570,    75, -1273,  1571,  1143, -1274,
    25,  1037,    26,   757, -1274, -1275,   775,  2360,  2361,   759,
 -1275,  1143,  1143,  1143,  1143,  1143,  1143,  1143,  1412,  1572,
  2328,  1577,  2329, -1287,  1412,  1243,  1243,  1240, -1287,  1412,
  1147,   822,   820, -1289,  1412, -1297,   615,   760, -1289,  1412,
 -1297, -1295,  1866,  1868,  1412, -1296, -1295,  2370,   836,  1412,
 -1296,   820,  2408,    87,  1412, -1290,  2264, -1291,   761,  1412,
 -1290,   762, -1291,  2097,  2265,  2266,  2267,  2268,  2269,  2270,
  2271,  2272,  1830,  2372, -1114,  2373,  2384, -1294,  2385,   774,
   302,   158, -1294,   302,   159, -1292,   776,   160,   302,   778,
 -1292,   302,   161,   779,   162,   163,  1607,   782,  1922, -1293,
  1831,   833,  2409, -1252, -1293,  2410,  1832, -1288, -1252, -1307,
  2418, -1298, -1288,   835, -1307,   860, -1298, -1315,  1833, -1306,
  1438, -1313, -1315,   861, -1306,   302, -1313,  1834,  1439,  1440,
  1441,  1442,  1443,  1444,  1445,  1446,   862,   870, -1304,  2212,
 -1314,  1835,   883, -1304, -1305, -1314,   887,  2215,   302, -1305,
   820,  2223,   889,  2227,  1836,   890,  2228,  2229,  2230,  2231,
  2232,  2233,  2234,  2235,  2236, -1308,  2239, -1299,   897, -1309,
 -1308,   901, -1299,  2035, -1309, -1300,   302, -1312,   302,   492,
 -1300, -1303, -1312,   911,   302,  2253, -1303,   465,   466,   467,
   468,   469,   470,   471,   472, -1310,  1924,  1329,   912,  2386,
 -1310,   783,   784,   785,   786,   787,   788,   789,   790,   791,
   913,   792,  1413,   793,   794,   795,   796,   797,   798,   799,
   800,   801,   802,  1415,   803,   804,   805,   806,   807,   808,
   914,   809,   810,   811,   812,   813,   594, -1301, -1311, -1302,
  1830,  2252, -1301, -1311, -1302,   918,   723,  2372,  2393,  2400,
  1143,  2424,  1073,  2425,  2427,   916,  2428,   921, -1230,   933,
   935,   941,   952,   964,   980,   820,   973,   981,  1831,   990,
   991,   992,  1416,   993,  1832,   997,   998,  1002,  -914,  1417,
  1004,    73,  -575,  1019,  1020,  1021,  1833,  1418,  1022,  1043,
   200,   554,   780,   837,  1080,  1834,  1081,   814,  1082,  1201,
  1149,  1522,  1221,  2327,  1226,  1218,  1230,   559,  1235,  1835,
  1228,  1244,  1245,  1257,  1258,   202,  1263,  1268,   837,  1283,
  1284,   560,  1836,  1285,   838,  1286,  1288,  1291,  1294,   839,
  2052,  1311,  1313,  1312,   207,   208,  1314,  1143,  2103,  1321,
  1320,  1322,  1339,  1338,  1344,   566,  1345,  1348,  1349,  1350,
  2069,  1351,  1357,  2417,  1358,  1362,  2070,  1363,   820,  2129,
  1364,  2071,  1365,  1380,  1479,  1370,  2095,  1383,   218,  1390,
  1391,  1394,  2105,  1384,  1395,   815,   816,  1399,   840,  1398,
  1400,  1401,  1433,  1449,  1421,   841,  1451,  2109,  1531,  1514,
  1452,  1453,  1454,   842,  1455,  1537,   302,   223,  1456,  1457,
   817,  1422,   601,  1524,   843,  2376,  1539,   302,  1538,  1458,
  2072,  1474,   844,  1525,  1484,  1486,  2331,  2073,  1487,  1489,
   302,  1490,  1492,  1493,   837,  2074,  1495,  1496,  1423,  1498,
  1499,   748,  1501,  1502,   318,   839,  2075,-32768,-32768,  1427,
  1428,  1429,  1430,  1431,  2076,  1504,   319,  1505,   320,  1507,
   302,   302,  1549,   321,  1508,  1558,   302,   291,  1550,  1510,
   322,   323,  1511,  1556,   324,  1578,  1557,   302,  1567,  1579,
   272,  1580,  1581,   274,  1569,   325,  1589,   302,  1597,  1599,
  1629,   302,  1631,   326,   840,  2207,  -345,  1646,  1371,  2199,
   845,   841,   302,  1638,  1675,  1413,  1677,  1762,  1678,   842,
  1679,  1143,  1693,   820,  1698,  1761,  1465,   846,  1790,   327,
  1522,  -263,   820,  1791,  1799,  1829,   328,  1522,   329,  1842,
  1802,  1805,  2077,  1808,  1811,   330,  1814,  1817,  1820,   820,
  1823,  2203,  1843,  2204,   847,  1848,  1850,  2244,  1851,  2078,
  1852,  1853,   848,   849,   850,   851,   852,   853,   854,   855,
  1862,  1864,  1883,  1884,  1889,  1890,  1891,  1894,  1896,  1934,
  1899,  1900,  1903,  1907,  1920,  1925,  2079,  1929,  1930,  1962,
   820,  1932,  1933,  1935,  2080,  2081,  2082,  2083,  2084,  2085,
  2086,  2087,  1937,   820,  2038,  1938,  2039,  1942,  1946,  2045,
  2047,  2088,  1947,  1948,  1949,  1965,   845,  1950,  1951,  1955,
  1966,  1968,  2048,  1969,  1971,   302,  1972,  1974,  1975,     2,
  1977,  1978,   302,   846,  1980,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,  1981,    13,    14,    15,    16,
    17,    18,    19,    20,    21,  1983,   820,  1984,   820,  1992,
   847,  2004,  1986,  2093,  1987,  1989,  1990,  1994,   848,   849,
   850,   851,   852,   853,   854,   855,  2005, -1247,  1996,  2000,
  2002,  2006, -1247,  2050,  2007,  1522,  2011,  1522,  2015,  2017,
  2018,  2016,  2051,   302,  2019,  2020,  2021,  2022,  2053,  2059,
    38,  2023,    39,  2203,   279,  2204,  2024,   279,  2333,   301,
  2025,  2026,  2027,  2028,  2029,   316,  2030,  1143,   301,  1479,
  2031,  2032,  2033,  2034,  2094,   302,  2036,  2061,  2062,   379,
   383,  2089,  -921,   388,  2099,  2101,  2098,   383,   383,  2106,
  2107,  2108,   383,   405,   408,  2332,  2125,  2126,  2137,  2138,
  2140,  2193,  2143,  2144,  2339,  2340,  2069,  2145,  2147,  2195,
  2148,  2149,  2151,  2156,  2159,  2248,  2249,  2319,  2263,  2162,
  2165,  2168,  2330,  2171,  2174,  2177,  2356,  2180,  2182,  2184,
   302,  2218,   302,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,  2185,    13,    14,    15,    16,    17,    18,
    19,    20,    21,  2189,  2190,   820,  2191,  2243,  2276,  2255,
  2251,   820,    38,  1479,    39,  1555,  2256,  2257,  2273,   410,
  2274,  2277,  2284,  2281,  2334,  2285,  2287,  2288,  2289,  2290,
   291,  2291,  2292,  2293,  2294,   302,  2295,  2406,   302,  2296,
  2069,  2297,  2298,  2299,  2300,  2301,  2070,  2302,  2303,  2304,
   820,  2071,  2305,  2306,  2307,  2308,  2326,  1329,  2336,  2368,
  2374,   302,   837,  2378,   302,   820,   820,  2365,   302,    22,
  2382,  2379,    23,   839,    24,    25,  2404,    26,  2405,    27,
  2383,  2389,  2397,  2433,    28,  2443,  2406,  2445,  2447,    29,
  2446,  2452,    30,    31,    32,    33,    34,    35,    36,  2450,
  2072,  2453,   412,   704,   945,   820,   820,  2073,  1282,  1591,
  1893,  1196,   837,   820,   874,  2074,  1582,   302,  1902,  1584,
  2128,  2254,   840,   839,  2426,  2404,  2075,  2405,  2375,   841,
  2438,  2441,  2422,  1479,  2076,  1905,  1628,   842,  2442,  1898,
   279,   401,  1627,   370,  1332,   737,  2359,  2439,   843,  2365,
  2423,  2358,   628,   409,  2432,   302,   493,  1897,  1546,   820,
  2401,   820,   888,  1641,   383,  2407,   625,  1513,   820,  1633,
   641,  1542,   840,  1857,  1225,   728,   301,   301,  2044,   841,
   279,   457,  2366,   301,   383,  1828,  2042,   842,   476,  1998,
  2440,  1685,   383,   301,   818,  1217,   301,  1957,   301,   279,
   457,  2153,  2392,  1528,  1335,   301,   301,   427,  1210,  2046,
  2365,   302,  2077,   671,  2407,  1200,  1255,    22,  1858,  1253,
    23,   612,   731,    25,   383,    26,  1479,    27,  1256,  2078,
   279,  1220,    28,  1532,   845,  2317,  1825,  1323,   421,  2314,
    30,    31,    32,    33,    34,   383,  1554,  2315,   388,     0,
  1515,   846,     0,     0,  1266,   383,  2079,     0,     0,     0,
     0,     0,     0,     0,  2080,  2081,  2082,  2083,  2084,  2085,
  2086,  2087,     0,     0,     0,     0,     0,     0,   847,   667,
     0,  2213,     0,     0,   845,     0,   848,   849,   850,   851,
   852,   853,   854,   855,   301,     0,     0,   301,     0,     0,
   301,   846,     0,     0,     0,     0,     0,  1479,     0,  1479,
  1479,  1479,  1479,  1479,     0,   383,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   847,     0,
     0,     0,   388,     0,     0,     0,   848,   849,   850,   851,
   852,   853,   854,   855,   301,     0,  1479,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
     0,     0,     0,     0,   301,     0,     0,   301,   744,     0,
     0,     0,     0,    49,   339,     0,     0,    50,     0,   340,
    51,    52,     0,     0,    53,     0,   341,   342,     0,     0,
   343,     0,    54,    55,     0,     0,     0,  1479,     0,     0,
   749,   344,     0,     0,     0,     0,    56,    57,     0,   345,
     0,     0,   346,  1413,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1415,     0,     0,     0,     0,     0,
     0,     0,     0,    58,     0,   347,     0,   348,    59,     0,
     0,     0,   349,     0,   350,     0,     0,     0,    60,     0,
     0,  1479,    61,     0,    62,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    63,     0,    64,     0,     0,     0,
    65,     0,    66,  1416,    67,   880,     0,   383,    68,   301,
  1417,     0,     0,     0,    69,     0,     0,     0,-32768,   383,
     0,    70,     0,     0,     0,     0,     0,  1479,     0,     0,
     0,     0,     0,     0,     0,  1479,  1479,     0,     0,  1479,
     0,  1479,     0,     0,  1479,  1479,  1479,  1479,  1479,  1479,
  1479,  1479,  1479,     0,  1479,     0,     0,   279,     0,  1479,
     0,     0,     0,     0,     0,     0,    71,     0,    72,     0,
     0,    73,    74,  1479,     0,     0,     0,     0,     0,   301,
     0,     0,  1479,  1479,  1479,  1479,  1479,     0,    75,     0,
     0,     0,     0,     0,     0,   963,     0,     0,     0,     0,
     0,   476,    76,    77,     0,     0,     0,     0,   301,   383,
     0,    78,    79,     0,   301,  1421,     0,   837,   301,   301,
     0,    80,    81,   838,     0,   996,     0,     0,   839,     0,
     0,     0,  1422,    82,    83,    84,     0,    85,     0,     0,
    86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
     0,     0,     0,     0,    88,     0,     0,     0,     0,  1423,
     0,    89,     0,  1040,     0,     0,     0,     0,    90,     0,
  1427,  1428,  1429,  1430,  1431,     0,     0,   840,     0,  1413,
     0,     0,     0,  1479,   841,     0,     0,     0,     0,  1479,
  1415,  1479,   842,     0,     0,     0,     0,     0,    91,     0,
     0,     0,     0,   843,     0,     0,     0,  1076,     0,     0,
     0,   844,     0,     0,     0,     0,     0,     0,     0,     0,
  1479,  1123,     0,     0,  1146,     0,     0,     0,     0,  1479,
  1479,  1479,  1479,  1479,  1479,  1479,  1479,  1479,  1479,  1416,
     0,     0,     0,     0,     0,  1206,  1417,  1206,   301,     0,
     0,     0,     0,     0,  1418,  1214,     0,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
    15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
     0,     0,     0,     0,  1479,     0,     0,     0,     0,   845,
     0,  1479,     0,  1479,     0,     0,     0,     0,     0,   667,
     0,   279,     0,     0,     0,     0,   846,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
    15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
     0,     0,     0,   847,     0,     0,     0,  1479,     0,  1479,
     0,   848,   849,   850,   851,   852,   853,   854,   855,  1479,
     0,  1421,     0,     0,     0,     0,  -703,     0,  1310,     0,
     0,     0,     0,     0,     0,   383,     0,     0,  1422,     0,
     0,     0,     0,     0,     0,     0,  1327,     0,     0,     0,
     0,     0,  1327,     0,     0,     0,     0,  1206,     0,     0,
     0,     0,     0,     0,     0,  1423,     0,     0,     0,     0,
     0,     0,     0,  1424,  1425,  1426,  1427,  1428,  1429,  1430,
  1431,     0,     0,     0,     0,     0,  1040,  1040,  1040,  1040,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1076,     0,     0,     0,     0,     0,  1076,
  1076,  1076,  1076,  1076,     0,     0,   783,   784,   785,   786,
   787,   788,   789,   790,   791,     0,   792,     0,   793,   794,
   795,   796,   797,   798,   799,   800,   801,   802,     0,   803,
   804,   805,   806,   807,   808,     0,   809,   810,   811,   812,
   813,    22,     0,     0,    23,     0,     0,    25,     0,    26,
     0,    27,     0,     0,     0,     0,    28,     0,     0,     0,
     0,     0,     0,     0,    30,    31,    32,    33,    34,     0,
  2369,  1146,  1146,  1146,  1146,  1146,     0,     0,   547,   548,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1146,    22,     0,     0,    23,   200,   554,    25,     0,    26,
     0,    27,   814,     0,     0,     0,    28,     0,     0,     0,
   558,     0,   559,     0,    30,    31,    32,    33,    34,     0,
   202,     0,     0,     0,     0,     0,   560,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   383,     0,     0,   207,
   208,     0,   561,     0,   562,     0,     0,     0,  1527,     0,
   566,   880,     0,  1206,   837,     0,     0,     0,     0,     0,
   838,     0,     0,   301,     0,   839,     0,     0,     0,     0,
   301,     0,     0,   218,    73,     0,     0,     0,     0,     0,
   815,   816,     0,     0,     0,     0,     0,     0,   572,     0,
     0,     0,     0,     0,     0,   574,     0,     0,     0,     0,
     0,     0,   223,     0,     0,   817,     0,  1583,     0,  1583,
  1585,  1586,   301,     0,   840,     0,     0,     0,   383,     0,
     0,   841,     0,     0,   963,     0,     0,     0,   963,   842,
     0,     0,     0,     0,     0,     0,     0,   301,     0,     0,
   843,     0,     0,     0,     0,     0,     0,   476,  1626,  1626,
   476,     0,     0,     0,     0,   301,     0,   301,  1413,  1637,
     0,     0,     0,   576,   996,     0,     0,     0,     0,  1415,
     0,     0,     0,  1648,  1649,   272,   273,     0,   274,     0,
     0,    25,   578,    26,     0,     0,     0,     0,     0,     0,
   276,     0,     0,   276,     0,   276,     0,  1040,  1040,     0,
     0,   276,     0,     0,   276,     0,     0,  1040,  1040,  1040,
  1040,  1040,  1040,  1040,     0,   276,   276,     0,  1416,   276,
     0,     0,     0,   276,   276,  1417,   845,     0,   276,   276,
   276,     0,     0,  1418,  1040,     0,     0,     0,     0,     0,
     0,     0,     0,   846,  1419,     0,     0,     0,     0,  1076,
  1146,     0,     0,  1076,     0,  1076,     0,     0,  1076,  1076,
  1076,  1076,  1076,  1076,  1076,  1076,  1076,     0,     0,  1076,
   847,     0,     0,     0,     0,     0,     0,     0,   848,   849,
   850,   851,   852,   853,   854,   855,     0,     0,  1146,     0,
     0,  1040,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1146,  1146,  1146,  1146,  1146,  1146,  1146,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1421,     0,     0,     0,    50,     0,     0,    51,    52,     0,
     0,    53,     0,     0,     0,     0,     0,  1422,   383,    54,
    55,   383,     0,     0,     0,     0,  1841,     0,     0,  1206,
     0,     0,     0,    56,    57,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1423,     0,     0,     0,     0,     0,
     0,     0,  1424,  1425,  1426,  1427,  1428,  1429,  1430,  1431,
    58,     0,     0,  1860,     0,   411,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    60,     0,     0,     0,    61,
     0,    62,     0,  1882,     0,     0,   996,     0,     0,     0,
     0,    63,     0,    64,     0,     0,   276,    65,     0,    66,
     0,    67,     0,     0,     0,    68,     0,     0,     0,     0,
     0,    69,     0,     0,  1583,     0,  1906,     0,    70,     0,
   276,     0,  1921,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   276,   276,     0,     0,   276,   276,     0,   276,
   276,     0,     0,     0,   276,     0,     0,     0,   276,   276,
     0,     0,   276,     0,   276,   276,   276,     0,     0,     0,
     0,   276,   276,    71,     0,    72,     0,     0,    73,    74,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   276,     0,     0,     0,     0,    75,   276,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
    77,   276,     0,     0,   276,     0,     0,     0,    78,    79,
  1146,   276,  1076,     0,     0,     0,     0,     0,    80,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    82,    83,    84,     0,    85,   276,     0,    86,     0,     0,
     0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
   276,    88,     0,   276,     0,     0,   276,     0,    89,     0,
     0,     0,     0,     0,     0,    90,     0,     0,  2069,     0,
     0,   276,     0,     0,  2070,     0,     0,     0,     0,  2071,
     0,     0,     0,     0,     0,     0,     0,     0,   276,     0,
     0,     0,     0,     0,     0,    91,     0,  1146,     0,     0,
   276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   276,     0,     0,   276,   276,     0,     0,     0,  2072,     0,
     0,   837,     0,     0,   383,  2073,     0,   838,     0,     0,
     0,     0,   839,  2074,     0,  1123,     0,     0,     0,     0,
     0,     0,     0,     0,  2075,     0,   276,     0,   301,     0,
     0,     0,  2076,     0,     0,     0,     0,     0,     0,     0,
     0,   768,     0,     0,     0,     0,     0,  1882,     0,  1882,
  1882,  1882,  1882,  1882,     0,     0,     0,   819,   996,   996,
     0,   840,     0,     0,   301,     0,     0,     0,   841,     0,
     0,     0,     0,     0,     0,   383,   842,     0,     0,     0,
     0,     0,     0,     0,     0,   301,   457,   843,     0,  2127,
     0,     0,     0,     0,     0,   844,     0,     0,     0,     0,
  2136,   276,     0,   276,     0,   276,     0,     0,     0,     0,
  2077,   283,   283,     0,   283,   276,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2078,     0,     0,
     0,  1146,  1413,     0,     0,     0,     0,     0,  1414,     0,
     0,   456,     0,  1415,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   276,  2079,     0,     0,     0,     0,     0,
   491,     0,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,
     0,     0,     0,   845,     0,   276,     0,     0,     0,  2337,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   846,   276,  1416,     0,     0,     0,     0,   276,     0,  1417,
     0,     0,     0,     0,   276,   276,     0,  1418,     0,     0,
   276,     0,     0,   383,   276,   276,     0,   847,  1419,     0,
   383,   276,     0,     0,     0,   848,   849,   850,   851,   852,
   853,   854,   855,     0,     0,     0,     0,  1882,     0,  2069,
  1359,     0,  1014,     0,     0,  1882,     0,     0,     0,  1882,
  2071,  1882,     0,     0,  1882,  1882,  1882,  1882,  1882,  1882,
  1882,  1882,  1882,     0,  1882,     0,     0,     0,     0,   457,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   301,     0,  1882,     0,     0,     0,     0,     0,     0,
     0,     0,   457,   457,   457,   457,   457,     0,     0,  2072,
     0,     0,     0,     0,  1421,     0,  2073,     0,     0,     0,
     0,     0,     0,   996,  2074,     0,     0,   276,   819,     0,
     0,  1422,     0,     0,     0,  2075,     0,  1146,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   276,     0,   276,   276,     0,   428,   283,  1423,     0,
     0,   276,     0,     0,     0,     0,  1424,  1425,  1426,  1427,
  1428,  1429,  1430,  1431,     0,     0,     0,     0,   383,     0,
   383,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   276,     0,   276,     0,     0,
     0,  1882,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  2077,     0,     0,     0,   283,     0,     0,     0,     0,
     0,     0,     0,   301,     0,     0,  1206,     0,  2078,     0,
   457,     0,     0,     0,     0,     0,     0,   283,     0,   457,
   457,   457,   457,   457,   457,   457,   457,   457,   457,   996,
     0,     0,  1206,     0,   276,  2079,   301,     0,     0,     0,
     0,   276,     0,  2080,  2081,  2082,  2083,  2084,  2085,  2086,
  2087,     0,   276,     0,     0,     0,     0,     0,   276,     0,
     0,     0,     0,   276,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   283,   283,     0,     0,     0,   283,
     0,     0,     0,  1882,     0,  2377,   783,   784,   785,   786,
   787,   788,   789,   790,   791,     0,   792,     0,   793,   794,
   795,   796,   797,   798,   799,   800,   801,   802,     0,   803,
   804,   805,   806,   807,   808,     0,   809,   810,   811,   812,
   813,     0,     0,  2396,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   457,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   547,   548,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1038,     0,   200,   554,     0,     0,  2396,
  2069,     0,   814,     0,     0,     0,  2070,     0,     0,     0,
     0,  2071,   559,     0,     0,     0,     0,     0,     0,     0,
   202,     0,     0,     0,     0,     0,   560,     0,     0,     0,
   819,     0,     0,     0,     0,     0,     0,  1074,     0,   207,
   208,     0,   561,     0,   562,     0,     0,     0,     0,     0,
   566,     0,     0,     0,  1144,     0,     0,     0,     0,     0,
  2072,     0,     0,     0,     0,     0,     0,  2073,     0,     0,
     0,     0,   864,   218,     0,  2074,     0,     0,     0,   837,
   815,   816,   276,     0,     0,   838,  2075,     0,     0,     0,
   839,     0,     0,     0,   276,   574,     0,   276,     0,   276,
     0,     0,   223,     0,     0,   817,     0,     0,     0,   276,
     0,     0,     0,     0,     0,     0,   276,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   283,     0,   283,     0,     0,   840,
     0,     0,     0,     0,     0,     0,   841,     0,     0,     0,
     0,     0,     0,   276,   842,   276,   276,   276,   276,     0,
     0,  1613,     0,   576,   276,   843,     0,     0,     0,     0,
   276,     0,  2077,   844,   276,   272,     0,     0,   274,     0,
     0,     0,     0,   276,     0,     0,     0,     0,     0,  2078,
     0,   819,     0,   276,   276,   276,   276,     0,     0,     0,
     0,   276,   837,   276,     0,   276,     0,     0,   838,     0,
   276,  1231,     0,   839,     0,     0,  2079,     0,   819,   276,
   276,     0,     0,     0,  2080,  2081,  2082,  2083,  2084,  2085,
  2086,  2087,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1232,     0,     0,     0,     0,  1038,  1038,  1038,  1038,
     0,   845,   819,   837,     0,     0,     0,     0,     0,   838,
     0,  1337,   840,     0,   839,     0,     0,     0,   846,   841,
     0,     0,     0,  1074,     0,     0,  1014,   842,     0,  1074,
  1074,  1074,  1074,  1074,  1079,     0,     0,     0,   843,     0,
     0,     0,     0,     0,   819,   847,   844,     0,     0,     0,
     0,  1148,     0,   848,   849,   850,   851,   852,   853,   854,
   855,     0,     0,   840,     0,     0,     0,     0,  -702,  1199,
   841,   837,     0,     0,     0,  1212,     0,   838,   842,     0,
     0,     0,   839,     0,  1233,     0,     0,     0,     0,   843,
     0,     0,     0,     0,     0,     0,   819,   844,     0,     0,
     0,  1144,  1144,  1144,  1144,  1144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   819,     0,     0,     0,     0,
  1144,     0,     0,     0,   845,  1389,     0,     0,     0,     0,
   283,   840,     0,     0,     0,     0,     0,     0,   841,     0,
     0,   846,     0,  2069,   276,     0,   842,   276,     0,     0,
     0,     0,   276,     0,  2071,   276,     0,   843,     0,     0,
     0,     0,     0,     0,     0,   844,     0,     0,   847,     0,
     0,     0,     0,     0,     0,   845,   848,   849,   850,   851,
   852,   853,   854,   855,     0,     0,  2069,     0,     0,   276,
     0,     0,   846,     0,     0,     0,     0,  2071,     0,     0,
     0,     0,  1199,  2072,     0,     0,     0,     0,     0,     0,
  2073,     0,   276,     0,   819,     0,     0,     0,  2074,   847,
     0,     0,     0,     0,     0,     0,     0,   848,   849,   850,
   851,   852,   853,   854,   855,     0,     0,     0,     0,     0,
   276,     0,   276,   845,     0,     0,  2072,     0,   276,     0,
     0,     0,     0,  2073,     0,     0,     0,     0,     0,     0,
   846,-32768,     0,     0,     0,     0,     0,     0,     0,     0,
  1079,     0,     0,     0,     0,     0,  1079,  1079,  1079,  1079,
  1079,     0,     0,     0,     0,     0,     0,   847,     0,     0,
     0,   864,     0,     0,     0,   848,   849,   850,   851,   852,
   853,   854,   855,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2077,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1038,  1038,   819,
     0,     0,  2078,     0,     0,     0,     0,  1038,  1038,  1038,
  1038,  1038,  1038,  1038,     0,     0,     0,     0,  1148,  1148,
  1148,  1148,  1148,     0,     0,     0,     0,     0,  2077,  2079,
     0,     0,     0,     0,  1038,     0,     0,  1148,-32768,-32768,
  2083,  2084,  2085,  2086,  2087,  2078,     0,     0,     0,  1074,
  1144,     0,     0,  1074,     0,  1074,     0,     0,  1074,  1074,
  1074,  1074,  1074,  1074,  1074,  1074,  1074,     0,     0,  1074,
     0,     0,  2079,     0,     0,     0,     0,     0,     0,     0,
     0,   864,     0,  2083,  2084,  2085,  2086,  2087,  1144,     0,
     0,  1038,   819,     0,     0,     0,     0,     0,  2069,     0,
     0,  1144,  1144,  1144,  1144,  1144,  1144,  1144,     0,  2071,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   276,   837,     0,     0,     0,     0,     0,   838,     0,     0,
     0,   276,   839,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   276,     0,     0,     0,  2072,     0,
     0,     0,     0,     0,     0,  2073,     0,     0,     0,     0,
     0,     0,     0,  2074,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   276,   276,     0,     0,     0,     0,
   276,   840,     0,     0,   837,     0,     0,     0,   841,     0,
   838,   276,  1945,     0,     0,   839,   842,     0,     0,     0,
     0,   276,     0,  1880,     0,   276,     0,   843,     0,     0,
     0,     0,     0,     0,     0,   844,   276,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   819,     0,     0,
     0,     0,     0,     0,     0,     0,   819,     0,     0,  1644,
     0,     0,     0,     0,   840,     0,     0,     0,     0,     0,
     0,   841,     0,   819,     0,     0,     0,     0,     0,   842,
  2077,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   843,     0,     0,     0,     0,     0,     0,  2078,   844,     0,
     0,     0,     0,     0,     0,     0,  1079,  1148,     0,     0,
  1079,     0,  1079,   845,   819,  1079,  1079,  1079,  1079,  1079,
  1079,  1079,  1079,  1079,  2079,     0,  1079,   819,     0,     0,
   846,     0,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,
     0,     0,     0,     0,     0,  1148,     0,     0,     0,   276,
  1144,     0,  1074,     0,     0,     0,   276,   847,  1148,  1148,
  1148,  1148,  1148,  1148,  1148,   848,   849,   850,   851,   852,
   853,   854,   855,     0,     0,     0,   845,     0,     0,     0,
   819,     0,   819,     0,   773,     0,     0,     0,  2069,     0,
     0,     0,     0,   846,  2070,     0,  2318,     0,   821,  2071,
   824,     0,   825,   826,   827,   831,  1199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
   847,     0,     0,     0,     0,     0,     0,     0,   848,   849,
   850,   851,   852,   853,   854,   855,     0,  1144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2072,   276,
     0,     0,     0,     0,     0,  2073,     0,     0,     0,     0,
     0,   895,     0,  2074,     0,     0,     0,     0,     0,     0,
     0,     0,   837,     0,  2075,     0,     0,     0,   838,     0,
     0,     0,  2076,   839,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   276,     0,   276,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1880,     0,  1880,
  1880,  1880,  1880,  1880,     0,     0,     0,     0,     0,   819,
     0,     0,   840,     0,     0,   819,     0,     0,     0,   841,
     0,     0,   982,     0,     0,     0,     0,   842,     0,     0,
     0,     0,     0,     0,     0,     0,  2123,     0,   843,   276,
  2077,  1413,   276,     0,     0,     0,   844,  1414,     0,     0,
  2135,  1003,  1415,     0,   819,     0,     0,  2078,     0,     0,
  1011,     0,     0,     0,     0,   276,     0,     0,   276,   819,
   819,     0,   276,     0,     0,  1024,  1025,  1148,     0,  1079,
     0,  1144,     0,  1048,  2079,     0,     0,     0,     0,     0,
     0,     0,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,
     0,  1416,     0,     0,     0,     0,     0,     0,  1417,   819,
   819,     0,     0,     0,     0,     0,  1418,   819,     0,     0,
     0,   276,     0,  1071,   845,     0,     0,  1419,     0,     0,
     0,     0,     0,     0,     0,  1420,     0,     0,     0,  1126,
     0,   846,     0,  1154,     0,  1158,     0,     0,  1162,  1167,
  1171,  1175,  1179,  1183,  1187,  1191,  1195,     0,     0,   276,
     0,     0,     0,   819,  1148,   819,     0,     0,   847,     0,
     0,     0,   819,     0,     0,     0,   848,   849,   850,   851,
   852,   853,   854,   855,     0,     0,     0,  1880,     0,     0,
     0,     0,     0,     0,     0,  1880,     0,     0,     0,  1880,
     0,  1880,     0,     0,  1880,  1880,  1880,  1880,  1880,  1880,
  1880,  1880,  1880,  1421,  1880,   276,     0,     0,     0,  2123,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1422,     0,     0,  1880,     0,     0,     0,     0,     0,     0,
     0,     0,  2123,  2123,  2123,  2123,  2123,  1039,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1423,     0,     0,
     0,     0,     0,     0,     0,  1424,  1425,  1426,  1427,  1428,
  1429,  1430,  1431,     0,     0,     0,     0,  1144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1075,     0,     0,     0,     0,     0,     0,     0,  1333,
     0,     0,     0,     0,     0,     0,     0,     0,  1145,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1048,     0,  1048,  1048,     0,
     0,  1880,     0,     0,     0,     0,     0,     0,     0,  1396,
     0,     0,     0,     0,     0,  1402,  1404,  1406,  1408,  1410,
   831,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2123,     0,     0,  1448,     0,     0,     0,     0,     0,  2123,
  2123,  2123,  2123,  2123,  2123,  2123,  2123,  2123,  2123,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1464,     0,     0,     0,     0,     0,     0,  1475,
     0,     0,     0,  1880,     0,     0,     0,     0,  1485,     0,
     0,  1488,   831,     0,     0,     0,  1491,   831,     0,     0,
  1494,   831,     0,     0,  1497,   831,     0,     0,  1500,   831,
     0,     0,  1503,   831,     0,     0,  1506,   831,     0,     0,
  1509,   831,     0,     0,  1512,   831,     0,     0,     0,     0,
  1039,  1039,  1039,  1039,     0,     0,     0,     0,     0,  2123,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1148,     0,     0,  1075,     0,     0,
     0,   895,     0,  1075,  1075,  1075,  1075,  1075,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   783,   784,   785,
   786,   787,   788,   789,   790,   791,     0,   792,     0,   793,
   794,   795,   796,   797,   798,   799,   800,   801,   802,     0,
   803,   804,   805,   806,   807,   808,     0,   809,   810,   811,
   812,   813,     0,     0,     0,  1145,  1145,  1145,  1145,  1145,
     0,  1615,     0,     0,     0,     0,     0,     0,  1478,     0,
     0,     0,     0,     0,  1145,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   547,
   548,     0,  1650,     0,     0,     0,     0,     0,     0,     0,
     0,  1653,     0,     0,     0,     0,   200,   554,     0,     0,
  1654,     0,     0,   814,     0,     0,  1048,     0,     0,     0,
     0,     0,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,     0,  2069,     0,   560,     0,     0,
     0,  2070,  1681,     0,  1684,     0,  2071,     0,     0,  1686,
   207,   208,  1048,   561,     0,   562,     0,     0,     0,     0,
     0,   566,     0,     0,     0,  1695,     0,     0,     0,  1703,
     0,  1708,     0,     0,  1713,  1719,  1724,  1729,  1734,  1739,
  1744,  1749,  1754,     0,   218,  1071,     0,     0,     0,     0,
     0,   815,   816,     0,     0,  2072,     0,     0,     0,     0,
     0,     0,  2073,     0,     0,     0,   574,     0,     0,  1048,
  2074,     0,     0,   223,     0,     0,   817,     0,     0,     0,
     0,  2075,     0,     0,     0,     0,     0,     0,     0,  2076,
     0,     0,     0,     0,  1793,     0,  1797,  1798,     0,  1800,
  1801,     0,  1803,  1804,     0,  1806,  1807,     0,  1809,  1810,
     0,  1812,  1813,     0,  1815,  1816,     0,  1818,  1819,     0,
  1821,  1822,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   576,     0,     0,     0,     0,     0,
     0,  1039,  1039,     0,     0,     0,   272,     0,     0,   274,
     0,  1039,  1039,  1039,  1039,  1039,  1039,  1039,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2077,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1039,     0,
     0,     0,     0,     0,  2078,     0,     0,     0,     0,     0,
     0,     0,     0,  1075,  1145,     0,     0,  1075,     0,  1075,
     0,     0,  1075,  1075,  1075,  1075,  1075,  1075,  1075,  1075,
  1075,  2079,     0,  1075,     0,     0,     0,     0,     0,  2080,
  2081,  2082,  2083,  2084,  2085,  2086,  2087,     0,     0,     0,
     0,     0,  1145,     0,     0,  1039,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1145,  1145,  1145,  1145,  1145,
  1145,  1145,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1796,     0,     0,     0,     0,     0,     0,
  1048,  1048,  1048,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1048,  1048,  1048,     0,     0,     0,     0,     0,  1475,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1963,     0,
     0,     0,  1967,   831,     0,     0,     0,     0,  1970,   831,
     0,     0,     0,  1973,   831,     0,     0,     0,  1976,   831,
     0,     0,     0,  1979,   831,     0,     0,     0,  1982,   831,
     0,     0,     0,  1985,   831,     0,     0,  1881,  1988,   831,
     0,     0,     0,  1991,   831,     0,     0,     0,     0,     0,
     0,  1995,     0,     0,     0,  1997,  1999,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1048,  1048,  1048,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1478,     0,     0,
     0,     0,     0,     0,  1145,     0,  1075,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   783,
   784,   785,   786,   787,   788,   789,   790,   791,     0,   792,
     0,   793,   794,   795,   796,   797,   798,   799,   800,   801,
   802,     0,   803,   804,   805,   806,   807,   808,     0,   809,
   810,   811,   812,   813,     0,     0,     0,     0,     0,     0,
  2013,  1145,  1793,     0,     0,  2154,  2155,     0,  2157,  2158,
     0,  2160,  2161,     0,  2163,  2164,     0,  2166,  2167,     0,
  2169,  2170,     0,  2172,  2173,     0,  2175,  2176,     0,  2178,
  2179,   547,   548,     0,     0,     0,  2183,     0,     0,     0,
  2186,     0,     0,     0,     0,     0,     0,     0,   200,   554,
     0,     0,     0,     0,     0,   814,     0,     0,     0,     0,
     0,     0,     0,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,     0,     0,     0,   560,
     0,  1881,     0,  1881,  1881,  1881,  1881,  1881,     0,  2198,
     0,     0,   207,   208,     0,   561,     0,   562,     0,     0,
     0,     0,     0,   566,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2124,     0,     0,     0,     0,     0,   218,     0,     0,     0,
     0,     0,     0,   815,   816,     0,     0,     0,     0,     0,
     0,   572,     0,     0,     0,     0,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,     0,     0,   817,     0,
     0,     0,     0,     0,     0,  1145,     0,     0,     0,     0,
     0,  1796,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   576,     0,     0,     0,
     0,     0,     0,     0,     0,  2192,     0,     0,   272,   273,
     0,   274,     0,     0,    25,   578,    26,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1881,     0,     0,     0,     0,     0,     0,     0,  1881,
  2217,     0,     0,  1881,     0,  1881,     0,     0,  1881,  1881,
  1881,  1881,  1881,  1881,  1881,  1881,  1881,     0,  1881,     0,
     0,     0,     0,  2124,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1881,     0,     0,
     0,     0,     0,     0,     0,     0,  2124,  2124,  2124,  2124,
  2124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2367,     0,     0,     0,     0,     0,     0,     0,
     0,  1145,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2217,     0,     0,
     0,     0,     0,  2217,     0,  1881,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2124,     0,     0,     0,     0,     0,
     0,     0,     0,  2124,  2124,  2124,  2124,  2124,  2124,  2124,
  2124,  2124,  2124,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2217,     0,
     0,     0,     0,     0,     0,  2217,     0,  1881,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   545,   546,   547,   548,     0,     0,   549,
     0,     0,     0,     0,     0,     0,   380,   550,   551,   552,
   553,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,  2217,     0,  2217,     0,   556,   557,   558,     0,   559,
     0,     0,     0,  2124,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,   563,   564,   565,   566,   210,     0,
   211,   212,     0,     0,     0,     0,   567,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,   568,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,   571,   572,     0,     0,     0,   573,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,   577,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,   579,  1207,     0,   581,
   582,     0,   583,     0,     0,     0,     0,     0,   584,  1208,
   514,   515,   516,   517,   518,   519,   520,   521,   522,     0,
   523,     0,   524,   525,   526,   527,   528,   529,   530,   531,
   532,   533,     0,   534,   535,   536,   537,   538,   539,     0,
   540,   541,   542,   543,   544,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   198,   199,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   545,   546,   547,   548,     0,     0,   549,     0,     0,     0,
     0,     0,     0,   380,   550,   551,   552,   553,     0,   200,
   554,     0,     0,     0,     0,     0,   555,     0,     0,     0,
     0,     0,   556,   557,   558,     0,   559,     0,     0,     0,
     0,     0,     0,     0,   202,     0,     0,   203,     0,     0,
   560,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     0,     0,   206,   207,   208,     0,   561,     0,   562,   209,
     0,   563,   564,   565,   566,   210,     0,   211,   212,     0,
     0,     0,     0,   567,     0,     0,   213,   214,     0,     0,
   215,     0,   216,     0,     0,     0,   217,   218,     0,     0,
   568,     0,     0,     0,   569,   570,   221,   222,     0,     0,
     0,   571,   572,     0,     0,     0,   573,     0,     0,   574,
     0,     0,     0,     0,     0,     0,   223,   224,   225,   575,
     0,   227,   228,     0,   229,   230,     0,   231,     0,     0,
   232,   233,   234,   235,   236,     0,   237,   238,     0,     0,
   239,   240,   241,   242,   243,   244,   245,   246,   247,     0,
     0,     0,     0,   248,     0,   249,   250,     0,   381,   251,
   252,     0,   253,     0,   254,     0,   255,   256,   257,   258,
   259,     0,   260,   261,   262,   263,   264,   576,     0,   265,
   266,   267,   268,   269,     0,     0,   270,     0,   271,   272,
   273,   577,   274,   275,     0,    25,   578,    26,     0,     0,
     0,     0,     0,   579,  1756,     0,   581,   582,     0,   583,
     0,     0,     0,     0,     0,   584,  1757,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   545,   546,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,   550,   551,   552,   553,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,   556,
   557,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,   563,   564,
   565,   566,   210,     0,   211,   212,     0,     0,     0,     0,
   567,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,   568,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,   571,   572,
     0,     0,     0,   573,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,   577,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
   579,     0,     0,   581,   582,     0,   583,     0,     0,     0,
     0,     0,   584,  1672,   514,   515,   516,   517,   518,   519,
   520,   521,   522,     0,   523,     0,   524,   525,   526,   527,
   528,   529,   530,   531,   532,   533,     0,   534,   535,   536,
   537,   538,   539,     0,   540,   541,   542,   543,   544,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   545,   546,   547,   548,     0,     0,
   549,     0,     0,     0,     0,     0,     0,   380,   550,   551,
   552,   553,     0,   200,   554,     0,     0,     0,     0,     0,
   555,     0,     0,     0,     0,     0,   556,   557,   558,     0,
   559,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     0,   203,     0,     0,   560,     0,     0,     0,     0,   204,
   205,     0,     0,     0,     0,     0,   206,   207,   208,     0,
   561,     0,   562,   209,     0,   563,   564,   565,   566,   210,
     0,   211,   212,     0,     0,     0,     0,   567,     0,     0,
   213,   214,     0,     0,   215,     0,   216,     0,     0,     0,
   217,   218,     0,     0,   568,     0,     0,     0,   569,   570,
   221,   222,     0,     0,     0,   571,   572,     0,     0,     0,
   573,     0,     0,   574,     0,     0,     0,     0,     0,     0,
   223,   224,   225,   575,     0,   227,   228,     0,   229,   230,
     0,   231,     0,     0,   232,   233,   234,   235,   236,     0,
   237,   238,     0,     0,   239,   240,   241,   242,   243,   244,
   245,   246,   247,     0,     0,     0,     0,   248,     0,   249,
   250,     0,   381,   251,   252,     0,   253,     0,   254,     0,
   255,   256,   257,   258,   259,     0,   260,   261,   262,   263,
   264,   576,     0,   265,   266,   267,   268,   269,     0,     0,
   270,     0,   271,   272,   273,   577,   274,   275,     0,    25,
   578,    26,     0,     0,     0,     0,     0,   579,     0,     0,
   581,   582,     0,   583,     0,     0,     0,     0,     0,   584,
  1788,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2110,   547,   548,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2111,  2112,  2113,  2114,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,     0,     0,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,     0,     0,     0,   566,   210,     0,   211,   212,
     0,     0,     0,     0,     0,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,     0,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,     0,   572,     0,     0,     0,  2116,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,     0,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,  2117,   274,     0,     0,    25,   578,    26,     0,
     0,     0,     0,     0,  2118,     0,     0,     0,  2119,     0,
  2120,     0,     0,     0,     0,     0,  2121,  2352,   514,   515,
   516,   517,   518,   519,   520,   521,   522,     0,   523,     0,
   524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     0,   534,   535,   536,   537,   538,   539,     0,   540,   541,
   542,   543,   544,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   198,   199,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1871,
   547,   548,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   200,   554,     0,
     0,     0,     0,     0,   555,     0,     0,     0,     0,     0,
     0,     0,   558,     0,   559,     0,     0,     0,     0,     0,
     0,     0,   202,     0,     0,   203,     0,     0,   560,     0,
     0,     0,     0,   204,   205,     0,     0,     0,     0,     0,
   206,   207,   208,     0,   561,     0,   562,   209,     0,  1872,
     0,  1873,   566,   210,     0,   211,   212,     0,     0,     0,
     0,     0,     0,     0,   213,   214,     0,     0,   215,     0,
   216,     0,     0,     0,   217,   218,     0,     0,     0,     0,
     0,     0,   569,   570,   221,   222,     0,     0,     0,     0,
   572,     0,     0,     0,     0,     0,     0,   574,     0,     0,
     0,     0,     0,     0,   223,   224,   225,   575,     0,   227,
   228,     0,   229,   230,     0,   231,     0,     0,   232,   233,
   234,   235,   236,     0,   237,   238,     0,     0,   239,   240,
   241,   242,   243,   244,   245,   246,   247,     0,     0,     0,
     0,   248,     0,   249,   250,     0,     0,   251,   252,     0,
   253,     0,   254,     0,   255,   256,   257,   258,   259,     0,
   260,   261,   262,   263,   264,   576,     0,   265,   266,   267,
   268,   269,     0,     0,   270,     0,   271,   272,   273,  1874,
   274,     0,     0,    25,   578,    26,     0,     0,     0,     0,
     0,  1875,     0,     0,     0,  1876,     0,  1877,     0,     0,
     0,     0,     0,  1878,  2237,   167,   168,   169,   170,   171,
   172,   173,   174,   175,     0,   176,     0,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
   189,   190,   191,   192,     0,   193,   194,   195,   196,   197,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   547,   548,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   200,   954,     0,     0,     0,     0,
     0,   955,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   956,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,     0,     0,     0,   957,
   210,     0,   211,   212,     0,     0,     0,     0,     0,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,     0,     0,     0,     0,   219,
   220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   226,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,     0,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,     0,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,     0,     0,   274,     0,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,   958,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1044,     0,     0,   545,
   546,   547,   548,     0,     0,   549,     0,     0,     0,     0,
     0,     0,   380,   550,   551,   552,   553,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,   556,   557,   558,     0,   559,     0,     0,  1045,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,  1046,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
   563,   564,   565,   566,   210,     0,   211,   212,     0,     0,
     0,     0,   567,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,   568,
     0,     0,     0,   569,   570,   221,   222,     0,  1047,     0,
   571,   572,     0,     0,     0,   573,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
   577,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,   579,     0,     0,   581,   582,     0,   583,     0,
     0,     0,     0,     0,   584,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1659,     0,     0,   545,   546,   547,   548,     0,
     0,   549,     0,     0,     0,     0,     0,     0,   380,   550,
   551,   552,   553,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,   556,   557,   558,
     0,   559,     0,     0,  1045,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,  1660,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,   563,   564,   565,   566,
   210,     0,   211,   212,     0,     0,     0,     0,   567,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,   568,     0,     0,     0,   569,
   570,   221,   222,     0,  1661,     0,   571,   572,     0,     0,
     0,   573,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,   577,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,   579,     0,
     0,   581,   582,     0,   583,     0,     0,     0,     0,     0,
   584,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1689,     0,
     0,   545,   546,   547,   548,     0,     0,   549,     0,     0,
     0,     0,     0,     0,   380,   550,   551,   552,   553,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,   556,   557,   558,     0,   559,     0,     0,
  1045,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,  1690,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,   563,   564,   565,   566,   210,     0,   211,   212,
     0,     0,     0,     0,   567,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,   568,     0,     0,     0,   569,   570,   221,   222,     0,
  1691,     0,   571,   572,     0,     0,     0,   573,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,   381,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,   577,   274,   275,     0,    25,   578,    26,     0,
     0,     0,     0,     0,   579,     0,     0,   581,   582,     0,
   583,     0,     0,     0,     0,     0,   584,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1775,     0,     0,   545,   546,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,   550,   551,   552,   553,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,   556,
   557,   558,     0,   559,     0,     0,  1045,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,  1776,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,   563,   564,
   565,   566,   210,     0,   211,   212,     0,     0,     0,     0,
   567,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,   568,     0,     0,
     0,   569,   570,   221,   222,     0,  1777,     0,   571,   572,
     0,     0,     0,   573,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,   577,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
   579,     0,     0,   581,   582,     0,   583,     0,     0,     0,
     0,     0,   584,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,  1163,     0,     0,  1164,     0,     0,     0,     0,
     0,     0,     0,   545,   546,   547,   548,     0,     0,   549,
     0,     0,     0,     0,     0,     0,   380,   550,   551,   552,
   553,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,   556,   557,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,   563,   564,  1165,   566,   210,     0,
   211,   212,     0,     0,     0,     0,   567,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,   568,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,   571,   572,     0,     0,     0,   573,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,   577,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,   579,     0,     0,   581,
   582,     0,   583,     0,     0,     0,     0,     0,  1166,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,  1168,     0,
     0,  1169,     0,     0,     0,     0,     0,     0,     0,   545,
   546,   547,   548,     0,     0,   549,     0,     0,     0,     0,
     0,     0,   380,   550,   551,   552,   553,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,   556,   557,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
   563,   564,   772,   566,   210,     0,   211,   212,     0,     0,
     0,     0,   567,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,   568,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
   571,   572,     0,     0,     0,   573,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
   577,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,   579,     0,     0,   581,   582,     0,   583,     0,
     0,     0,     0,     0,  1170,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,  1172,     0,     0,  1173,     0,     0,
     0,     0,     0,     0,     0,   545,   546,   547,   548,     0,
     0,   549,     0,     0,     0,     0,     0,     0,   380,   550,
   551,   552,   553,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,   556,   557,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,   563,   564,   772,   566,
   210,     0,   211,   212,     0,     0,     0,     0,   567,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,   568,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,   571,   572,     0,     0,
     0,   573,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,   577,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,   579,     0,
     0,   581,   582,     0,   583,     0,     0,     0,     0,     0,
  1174,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
  1176,     0,     0,  1177,     0,     0,     0,     0,     0,     0,
     0,   545,   546,   547,   548,     0,     0,   549,     0,     0,
     0,     0,     0,     0,   380,   550,   551,   552,   553,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,   556,   557,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,   563,   564,   772,   566,   210,     0,   211,   212,
     0,     0,     0,     0,   567,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,   568,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,   571,   572,     0,     0,     0,   573,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,   381,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,   577,   274,   275,     0,    25,   578,    26,     0,
     0,     0,     0,     0,   579,     0,     0,   581,   582,     0,
   583,     0,     0,     0,     0,     0,  1178,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,  1180,     0,     0,  1181,
     0,     0,     0,     0,     0,     0,     0,   545,   546,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,   550,   551,   552,   553,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,   556,
   557,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,   563,   564,
   772,   566,   210,     0,   211,   212,     0,     0,     0,     0,
   567,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,   568,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,   571,   572,
     0,     0,     0,   573,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,   577,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
   579,     0,     0,   581,   582,     0,   583,     0,     0,     0,
     0,     0,  1182,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,  1184,     0,     0,  1185,     0,     0,     0,     0,
     0,     0,     0,   545,   546,   547,   548,     0,     0,   549,
     0,     0,     0,     0,     0,     0,   380,   550,   551,   552,
   553,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,   556,   557,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,   563,   564,   772,   566,   210,     0,
   211,   212,     0,     0,     0,     0,   567,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,   568,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,   571,   572,     0,     0,     0,   573,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,   577,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,   579,     0,     0,   581,
   582,     0,   583,     0,     0,     0,     0,     0,  1186,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,  1188,     0,
     0,  1189,     0,     0,     0,     0,     0,     0,     0,   545,
   546,   547,   548,     0,     0,   549,     0,     0,     0,     0,
     0,     0,   380,   550,   551,   552,   553,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,   556,   557,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
   563,   564,   772,   566,   210,     0,   211,   212,     0,     0,
     0,     0,   567,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,   568,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
   571,   572,     0,     0,     0,   573,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
   577,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,   579,     0,     0,   581,   582,     0,   583,     0,
     0,     0,     0,     0,  1190,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,  1710,     0,     0,  1711,     0,     0,
     0,     0,     0,     0,     0,   545,  1051,   547,   548,     0,
     0,   549,     0,     0,     0,     0,     0,     0,   380,  1052,
  1053,  1054,  1055,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,  1056,  1057,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,     0,   564,  1059,   566,
   210,     0,   211,   212,     0,     0,     0,     0,  1060,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,  1061,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,  1062,   572,     0,     0,
     0,  1063,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,     0,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,  1065,     0,
     0,  1066,  1067, -1258,  1068,     0,     0,     0, -1258,     0,
  1712,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
  1715,     0,     0,  1716,     0,     0,     0,     0,     0,     0,
     0,   545,  1051,   547,   548,     0,     0,   549,     0,     0,
     0,     0,     0,     0,   380,  1052,  1053,  1054,  1055,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,  1056,  1057,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,  1058,   564,  1717,   566,   210,     0,   211,   212,
     0,     0,     0,     0,  1060,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,  1061,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,  1062,   572,     0,     0,     0,  1063,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,   381,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,  1064,   274,   275,     0,    25,   578,    26,     0,
     0,     0,     0,     0,  1065,     0,     0,  1066,  1067,     0,
  1068,     0,     0,     0,     0,     0,  1718,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,  1721,     0,     0,  1722,
     0,     0,     0,     0,     0,     0,     0,   545,  1051,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,  1052,  1053,  1054,  1055,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,  1056,
  1057,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,  1058,   564,
  1059,   566,   210,     0,   211,   212,     0,     0,     0,     0,
  1060,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,  1061,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,  1062,   572,
     0,     0,     0,  1063,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,  1064,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
  1065,     0,     0,  1066,  1067,     0,  1068,     0,     0,     0,
     0,     0,  1723,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,  1726,     0,     0,  1727,     0,     0,     0,     0,
     0,     0,     0,   545,  1051,   547,   548,     0,     0,   549,
     0,     0,     0,     0,     0,     0,   380,  1052,  1053,  1054,
  1055,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,  1056,  1057,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,  1058,   564,  1059,   566,   210,     0,
   211,   212,     0,     0,     0,     0,  1060,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,  1061,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,  1062,   572,     0,     0,     0,  1063,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,  1064,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,  1065,     0,     0,  1066,
  1067,     0,  1068,     0,     0,     0,     0,     0,  1728,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,  1731,     0,
     0,  1732,     0,     0,     0,     0,     0,     0,     0,   545,
  1051,   547,   548,     0,     0,   549,     0,     0,     0,     0,
     0,     0,   380,  1052,  1053,  1054,  1055,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,  1056,  1057,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
  1058,   564,  1059,   566,   210,     0,   211,   212,     0,     0,
     0,     0,  1060,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,  1061,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
  1062,   572,     0,     0,     0,  1063,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
  1064,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,  1065,     0,     0,  1066,  1067,     0,  1068,     0,
     0,     0,     0,     0,  1733,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,  1736,     0,     0,  1737,     0,     0,
     0,     0,     0,     0,     0,   545,  1051,   547,   548,     0,
     0,   549,     0,     0,     0,     0,     0,     0,   380,  1052,
  1053,  1054,  1055,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,  1056,  1057,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,  1058,   564,  1059,   566,
   210,     0,   211,   212,     0,     0,     0,     0,  1060,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,  1061,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,  1062,   572,     0,     0,
     0,  1063,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,  1064,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,  1065,     0,
     0,  1066,  1067,     0,  1068,     0,     0,     0,     0,     0,
  1738,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
  1741,     0,     0,  1742,     0,     0,     0,     0,     0,     0,
     0,   545,  1051,   547,   548,     0,     0,   549,     0,     0,
     0,     0,     0,     0,   380,  1052,  1053,  1054,  1055,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,  1056,  1057,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,  1058,   564,  1059,   566,   210,     0,   211,   212,
     0,     0,     0,     0,  1060,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,  1061,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,  1062,   572,     0,     0,     0,  1063,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,   381,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,  1064,   274,   275,     0,    25,   578,    26,     0,
     0,     0,     0,     0,  1065,     0,     0,  1066,  1067,     0,
  1068,     0,     0,     0,     0,     0,  1743,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,  1746,     0,     0,  1747,
     0,     0,     0,     0,     0,     0,     0,   545,  1051,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,  1052,  1053,  1054,  1055,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,  1056,
  1057,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,  1058,   564,
  1059,   566,   210,     0,   211,   212,     0,     0,     0,     0,
  1060,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,  1061,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,  1062,   572,
     0,     0,     0,  1063,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,  1064,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
  1065,     0,     0,  1066,  1067,     0,  1068,     0,     0,     0,
     0,     0,  1748,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   545,   546,   547,   548,     0,     0,   549,
     0,     0,     0,     0,     0,     0,   380,   550,   551,   552,
   553,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,   556,   557,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,   563,   564,   565,   566,   210,     0,
   211,   212,     0,     0,     0,     0,   567,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,   568,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,   571,   572,     0,     0,     0,   573,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,   577,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,   579,   580,     0,   581,
   582,     0,   583,     0,     0,     0,     0,     0,   584,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   545,
   546,   547,   548,     0,     0,   549,     0,     0,     0,     0,
     0,     0,   380,   550,   551,   552,   553,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,   556,   557,   558,     0,   559,     0,     0,  1045,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
   563,   564,   565,   566,   210,     0,   211,   212,     0,     0,
     0,     0,   567,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,   568,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
   571,   572,     0,     0,     0,   573,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
   577,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,   579,     0,     0,   581,   582,     0,   583,     0,
     0,     0,     0,     0,   584,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   545,   546,   547,   548,     0,
     0,   549,     0,     0,     0,     0,     0,     0,   380,   550,
   551,   552,   553,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,   556,   557,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,   563,   564,   565,   566,
   210,     0,   211,   212,     0,     0,     0,     0,   567,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,    73,     0,   568,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,   571,   572,     0,     0,
     0,   573,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,   577,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,   579,     0,
     0,   581,   582,     0,   583,     0,     0,     0,     0,     0,
   584,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   545,   546,   547,   548,     0,     0,   549,     0,     0,
     0,     0,     0,     0,   380,   550,   551,   552,   553,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,   556,   557,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,   563,   564,   772,   566,   210,     0,   211,   212,
     0,     0,     0,     0,   567,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,    73,
     0,   568,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,   571,   572,     0,     0,     0,   573,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,   381,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,   577,   274,   275,     0,    25,   578,    26,     0,
     0,     0,     0,     0,   579,     0,     0,   581,   582,     0,
   583,     0,     0,     0,     0,     0,   584,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   545,   546,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,   550,   551,   552,   553,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,   556,
   557,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,   563,   564,
   772,   566,   210,     0,   211,   212,     0,     0,     0,     0,
   567,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,   568,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,   571,   572,
     0,     0,     0,   573,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,   577,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
   579,     0,     0,   581,   582,     0,   583,     0,     0,     0,
     0,     0,   584,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   545,   546,   547,   548,     0,     0,   549,
     0,     0,     0,     0,     0,     0,   380,   550,   551,   552,
   553,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,   556,   557,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,   563,   564,   565,   566,   210,     0,
   211,   212,     0,     0,     0,     0,   567,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,   568,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,   571,   572,     0,     0,     0,   573,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,   577,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,   579,     0,     0,   581,
   582,     0,   583,     0,     0,     0,     0,     0,   584,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   545,
  1051,   547,   548,     0,     0,   549,     0,     0,     0,     0,
     0,     0,   380,  1052,  1053,  1054,  1055,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,  1056,  1057,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
  1058,   564,  1059,   566,   210,     0,   211,   212,     0,     0,
     0,     0,  1060,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,  1061,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
  1062,   572,     0,     0,     0,  1063,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
  1064,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,  1065,     0,     0,  1066,  1067,     0,  1068,     0,
     0,     0,     0,     0,  1069,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,  1159,     0,     0,  1160,     0,     0,
     0,     0,     0,     0,     0,   545,   546,   547,   548,     0,
     0,   549,     0,     0,     0,     0,     0,     0,   380,   550,
   551,   552,   553,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,   556,   557,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,     0,   564,   772,   566,
   210,     0,   211,   212,     0,     0,     0,     0,   567,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,   568,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,   571,   572,     0,     0,
     0,   573,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,     0,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,   579,     0,
     0,   581,   582,     0,   583,     0,     0,     0,     0,     0,
  1161,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
  1751,     0,     0,  1752,     0,     0,     0,     0,     0,     0,
     0,   545,  1051,   547,   548,     0,     0,   549,     0,     0,
     0,     0,     0,     0,   380,  1052,  1053,  1054,  1055,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,  1056,  1057,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,     0,   564,  1059,   566,   210,     0,   211,   212,
     0,     0,     0,     0,  1060,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,  1061,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,  1062,   572,     0,     0,     0,  1063,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,     0,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,   381,
   251,   252,     0,   253,     0,     0,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,     0,   274,   275,     0,    25,   578,    26,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1067, -1238,
  1068,     0,     0,     0, -1238,     0,  1753,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,  1192,     0,     0,  1193,
     0,     0,     0,     0,     0,     0,     0,   545,   546,   547,
   548,     0,     0,   549,     0,     0,     0,     0,     0,     0,
   380,   550,   551,   552,   553,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,   556,
   557,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,     0,   564,
   772,   566,   210,     0,   211,   212,     0,     0,     0,     0,
   567,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,   568,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,   571,   572,
     0,     0,     0,   573,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,     0,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,   381,   251,   252,     0,   253,
     0,     0,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,     0,   274,
   275,     0,    25,   578,    26,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   582,     0,   583,     0,     0,     0,
     0,     0,  1194,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1127,   547,   548,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   380,  1128,  1129,  1130,
  1131,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,     0,     0,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,     0,     0,     0,   566,   210,     0,
   211,   212,     0,     0,     0,     0,  1132,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,  1133,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,  1134,   572,     0,     0,     0,  1135,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,  1136,   274,   275,     0,    25,   578,
    26,     0,     0,     0,     0,     0,  1137,     0,     0,  1138,
  1139,     0,  1140,     0,     0,     0,     0,     0,  1141,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1127,   547,   548,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   380,  1128,  1129,  1130,  1131,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,     0,     0,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
     0,     0,     0,   566,   210,     0,   211,   212,     0,     0,
     0,     0,  1132,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,  1133,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
  1134,   572,     0,     0,     0,  1135,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
     0,   274,   275,     0,    25,   578,    26,     0,     0,     0,
     0,     0,  1137,     0,     0,  1138,  1139,     0,  1140,     0,
     0,     0,     0,     0,  1141,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1127,   547,   548,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   380,  1128,
  1129,  1130,  1131,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,     0,     0,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,     0,     0,     0,   566,
   210,     0,   211,   212,     0,     0,     0,     0,  1132,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,  1133,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,  1134,   572,     0,     0,
     0,  1135,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,     0,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,     0,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,     0,   274,   275,     0,
    25,   578,    26,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1139,     0,  1140,     0,     0,     0,     0,     0,
  1141,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2110,   547,   548,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2111,  2112,  2113,  2114,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,     0,     0,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,     0,     0,  2115,   566,   210,     0,   211,   212,
     0,     0,     0,     0,     0,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,     0,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,     0,   572,     0,     0,     0,  2116,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,     0,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,  2117,   274,     0,     0,    25,   578,    26,     0,
     0,     0,     0,     0,  2118,     0,     0,     0,  2119,     0,
  2120,     0,     0,     0,     0,     0,  2121,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2110,   547,
   548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  2111,  2112,  2113,  2114,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,     0,
     0,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,     0,     0,
     0,   566,   210,     0,   211,   212,     0,     0,     0,     0,
     0,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,     0,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,     0,   572,
     0,     0,     0,  2116,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,     0,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,  2117,   274,
     0,     0,    25,   578,    26,     0,     0,     0,     0,     0,
  2118,     0,     0,     0,  2119,     0,  2120,     0,     0,     0,
     0,     0,  2121,   514,   515,   516,   517,   518,   519,   520,
   521,   522,     0,   523,     0,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,     0,   534,   535,   536,   537,
   538,   539,     0,   540,   541,   542,   543,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1027,   547,   548,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
     0,     0,   200,   554,     0,     0,     0,     0,     0,   555,
     0,     0,     0,     0,     0,     0,     0,   558,     0,   559,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,   560,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,   561,
     0,   562,   209,     0,     0,     0,     0,   566,   210,     0,
   211,   212,     0,     0,     0,     0,  1028,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,  1029,     0,     0,     0,   569,   570,   221,
   222,     0,     0,     0,  1030,   572,     0,     0,     0,     0,
     0,     0,   574,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   575,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
   576,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,   273,  1031,   274,     0,     0,    25,   578,
    26,     0,     0,     0,     0,     0,  1032,     0,     0,     0,
  1033,     0,     0,     0,     0,     0,     0,     0,  1034,   514,
   515,   516,   517,   518,   519,   520,   521,   522,     0,   523,
     0,   524,   525,   526,   527,   528,   529,   530,   531,   532,
   533,     0,   534,   535,   536,   537,   538,   539,     0,   540,
   541,   542,   543,   544,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2110,   547,   548,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2111,  2112,  2113,  2114,     0,   200,   554,
     0,     0,     0,     0,     0,   555,     0,     0,     0,     0,
     0,     0,     0,   558,     0,   559,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,   560,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,   561,     0,   562,   209,     0,
     0,     0,     0,   566,   210,     0,   211,   212,     0,     0,
     0,     0,     0,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,     0,
     0,     0,     0,   569,   570,   221,   222,     0,     0,     0,
     0,   572,     0,     0,     0,  2116,     0,     0,   574,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   575,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,     0,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,   576,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
     0,   274,     0,     0,    25,   578,    26,     0,     0,     0,
     0,     0,  2118,     0,     0,     0,  2119,     0,  2120,     0,
     0,     0,     0,     0,  2121,   514,   515,   516,   517,   518,
   519,   520,   521,   522,     0,   523,     0,   524,   525,   526,
   527,   528,   529,   530,   531,   532,   533,     0,   534,   535,
   536,   537,   538,   539,     0,   540,   541,   542,   543,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1027,   547,   548,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   380,     0,
     0,     0,     0,     0,   200,   554,     0,     0,     0,     0,
     0,   555,     0,     0,     0,     0,     0,     0,     0,   558,
     0,   559,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,   560,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,   561,     0,   562,   209,     0,     0,     0,     0,   566,
   210,     0,   211,   212,     0,     0,     0,     0,  1028,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,  1029,     0,     0,     0,   569,
   570,   221,   222,     0,     0,     0,  1030,   572,     0,     0,
     0,     0,     0,     0,   574,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   575,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,   576,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,     0,   274,     0,     0,
    25,   578,    26,     0,     0,     0,     0,     0,  1032,     0,
     0,     0,  1033,     0,     0,     0,     0,     0,     0,     0,
  1034,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     0,   523,     0,   524,   525,   526,   527,   528,   529,   530,
   531,   532,   533,     0,   534,   535,   536,   537,   538,   539,
     0,   540,   541,   542,   543,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1871,   547,   548,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   200,   554,     0,     0,     0,     0,     0,   555,     0,     0,
     0,     0,     0,     0,     0,   558,     0,   559,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,   560,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,   561,     0,   562,
   209,     0,  1872,     0,  1873,   566,   210,     0,   211,   212,
     0,     0,     0,     0,     0,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,     0,     0,     0,     0,   569,   570,   221,   222,     0,
     0,     0,     0,   572,     0,     0,     0,     0,     0,     0,
   574,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   575,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,     0,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,   576,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,  1874,   274,     0,     0,    25,   578,    26,     0,
     0,     0,     0,     0,  1875,     0,     0,     0,  1876,     0,
  1877,     0,     0,     0,     0,     0,  1878,   514,   515,   516,
   517,   518,   519,   520,   521,   522,     0,   523,     0,   524,
   525,   526,   527,   528,   529,   530,   531,   532,   533,     0,
   534,   535,   536,   537,   538,   539,     0,   540,   541,   542,
   543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1871,   547,
   548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   200,   554,     0,     0,
     0,     0,     0,   555,     0,     0,     0,     0,     0,     0,
     0,   558,     0,   559,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,   560,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,   561,     0,   562,   209,     0,     0,     0,
  1873,   566,   210,     0,   211,   212,     0,     0,     0,     0,
     0,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,     0,     0,     0,
     0,   569,   570,   221,   222,     0,     0,     0,     0,   572,
     0,     0,     0,     0,     0,     0,   574,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   575,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,     0,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,   576,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,     0,   274,
     0,     0,    25,   578,    26,     0,     0,     0,     0,     0,
  1875,     0,     0,     0,  1876,     0,  1877,     0,     0,     0,
     0,     0,  1878,   167,   168,   169,   170,   171,   172,   173,
   174,   175,     0,   176,     0,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
   191,   192,     0,   193,   194,   195,   196,   197,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
     0,     0,   200,     0,     0,     0,     0,     0,     0,   201,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,     0,
     0,     0,   209,     0,     0,     0,     0,     0,   210,     0,
   211,   212,     0,     0,     0,     0,     0,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,     0,     0,     0,     0,   219,   220,   221,
   222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   226,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,   381,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
     0,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,     0,     0,   274,   167,   168,   169,   170,
   171,   172,   173,   174,   175,     0,   176,     0,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,  1516,   187,
   188,   189,   190,   191,   192,     0,   193,   194,   195,   196,
   197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   198,   199,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
     0,     0,   201,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
     0,   204,   205,     0,     0,     0,     0,     0,   206,   207,
   208,     0,     0,     0,     0,   209,     0,     0,     0,     0,
     0,   210,     0,   211,   212,     0,     0,     0,     0,     0,
     0,     0,   213,   214,     0,     0,   215,     0,   216,     0,
     0,     0,   217,   218,    73,     0,     0,     0,     0,     0,
   219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   223,   224,   225,   226,     0,   227,   228,     0,
   229,   230,     0,   231,     0,     0,   232,   233,   234,   235,
   236,     0,   237,   238,     0,     0,   239,   240,   241,   242,
   243,   244,   245,   246,   247,     0,     0,     0,     0,   248,
     0,   249,   250,     0,     0,   251,   252,     0,   253,     0,
   254,     0,   255,   256,   257,   258,   259,     0,   260,   261,
   262,   263,   264,     0,     0,   265,   266,   267,   268,   269,
     0,     0,   270,     0,   271,   272,     0,     0,   274,   167,
   168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     0,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,    91,   187,   188,   189,   190,   191,   192,     0,   193,
   194,   195,   196,   197,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,     0,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,     0,     0,     0,   209,     0,
     0,     0,     0,     0,   210,     0,   211,   212,     0,     0,
     0,     0,     0,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,     0,
     0,     0,     0,   219,   220,   221,   222,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   226,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,     0,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,  1617,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
   492,   274,     0,     0,    25,     0,    26,     0,   465,   466,
   467,   468,  1618,   470,   471,   472,   167,   168,   169,   170,
   171,   172,   173,   174,   175,     0,   176,     0,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,     0,   187,
   188,   189,   190,   191,   192,     0,   193,   194,   195,   196,
   197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   198,   199,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   200,     0,     0,   976,     0,
     0,     0,   201,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
   462,   204,   205,     0,     0,     0,     0,     0,   206,   207,
   208,     0,     0,     0,     0,   209,     0,     0,     0,     0,
     0,   210,     0,   211,   212,     0,     0,     0,     0,     0,
     0,     0,   213,   214,   463,     0,   215,     0,   216,     0,
     0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
   219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   223,   224,   225,   226,     0,   227,   228,     0,
   229,   230,     0,   231,     0,     0,   232,   233,   234,   235,
   236,     0,   237,   238,     0,     0,   239,   240,   241,   242,
   243,   244,   245,   246,   247,     0,     0,     0,     0,   248,
     0,   249,   250,     0,     0,   251,   252,     0,   253,     0,
   254,     0,   255,   256,   257,   258,   259,     0,   260,   261,
   262,   263,   264,     0,     0,   265,   266,   267,   268,   269,
     0,     0,   270,     0,   271,   272,     0,   464,   274,     0,
     0,     0,     0,     0,     0,   465,   466,   467,   468,   469,
   470,   471,   472,   167,   168,   169,   170,   171,   172,   173,
   174,   175,     0,   176,     0,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
   191,   192,     0,   193,   194,   195,   196,   197,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   200,     0,     0,     0,     0,     0,     0,   201,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,     0,     0,     0,     0,   462,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,     0,
     0,     0,   209,     0,     0,     0,     0,     0,   210,     0,
   211,   212,     0,     0,     0,     0,     0,     0,     0,   213,
   214,   463,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,     0,     0,     0,     0,   219,   220,   221,
   222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   226,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,     0,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
     0,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,     0,   464,   274,     0,     0,     0,     0,
     0,     0,   465,   466,   467,   468,   469,   470,   471,   472,
   167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
   176,     0,   177,   178,   179,   180,   181,   182,   183,   184,
   185,   186,     0,   187,   188,   189,   190,   191,   192,     0,
   193,   194,   195,   196,   197,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   198,   199,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   380,     0,     0,     0,     0,     0,   200,
     0,     0,     0,     0,     0,     0,   201,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   202,     0,     0,   203,     0,     0,
     0,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     0,     0,   206,   207,   208,     0,     0,     0,     0,   209,
     0,     0,     0,     0,     0,   210,     0,   211,   212,     0,
     0,     0,     0,     0,     0,     0,   213,   214,     0,     0,
   215,     0,   216,     0,     0,     0,   217,   218,     0,     0,
     0,     0,     0,     0,   219,   220,   221,   222,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     0,   227,   228,     0,   229,   230,     0,   231,     0,     0,
   232,   233,   234,   235,   236,     0,   237,   238,     0,     0,
   239,   240,   241,   242,   243,   244,   245,   246,   247,     0,
     0,     0,     0,   248,     0,   249,   250,     0,   381,   251,
   252,     0,   253,     0,   254,     0,   255,   256,   257,   258,
   259,     0,   260,   261,   262,   263,   264,     0,     0,   265,
   266,   267,   268,   269,     0,     0,   270,     0,   271,   272,
     0,     0,   274,     0,     0,     0,   578,     0,     0,     0,
     0,     0,     0,     0,   875,   167,   168,   169,   170,   171,
   172,   173,   174,   175,     0,   176,     0,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
   189,   190,   191,   192,     0,   193,   194,   195,   196,   197,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   380,     0,
     0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
     0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
   210,     0,   211,   212,     0,     0,     0,     0,     0,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,     0,     0,     0,     0,   219,
   220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   226,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,   381,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,     0,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,     0,     0,   274,   167,   168,
   169,   170,   171,   172,   173,   174,   175,     0,   176,   395,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     0,   187,   188,   189,   190,   191,   192,     0,   193,   194,
   195,   196,   197,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   198,   199,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
     0,     0,     0,     0,   201,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   202,     0,     0,   203,     0,     0,     0,     0,
     0,     0,     0,   204,   205,     0,     0,     0,     0,     0,
   206,   207,   208,     0,     0,     0,     0,   209,     0,     0,
     0,     0,     0,   210,     0,   211,   212,     0,     0,     0,
     0,     0,     0,     0,   213,   214,     0,     0,   215,     0,
   216,     0,     0,     0,   217,   218,     0,     0,     0,     0,
     0,     0,   219,   220,   221,   222,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   223,   224,   225,   226,     0,   227,
   228,     0,   229,   230,     0,   231,     0,     0,   232,   233,
   234,   235,   236,     0,   237,   238,     0,     0,   239,   240,
   241,   242,   243,   244,   245,   246,   247,     0,     0,     0,
     0,   248,     0,   249,   250,     0,     0,   251,   252,     0,
   253,     0,   254,     0,   255,   256,   257,   258,   259,     0,
   260,   261,   262,   263,   264,     0,     0,   265,   266,   267,
   268,   269,     0,     0,   270,     0,   271,   272,     0,     0,
   274,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     0,   176,   725,   177,   178,   179,   180,   181,   182,   183,
   184,   185,   186,     0,   187,   188,   189,   190,   191,   192,
     0,   193,   194,   195,   196,   197,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   200,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,     0,     0,     0,
   209,     0,     0,     0,     0,     0,   210,     0,   211,   212,
     0,     0,     0,     0,     0,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,     0,     0,     0,     0,   219,   220,   221,   222,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   226,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,     0,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,     0,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,     0,     0,   274,   167,   168,   169,   170,   171,   172,
   173,   174,   175,     0,   176,  1203,   177,   178,   179,   180,
   181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
   190,   191,   192,     0,   193,   194,   195,   196,   197,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
   201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     0,   203,     0,     0,     0,     0,     0,     0,     0,   204,
   205,     0,     0,     0,     0,     0,   206,   207,   208,     0,
     0,     0,     0,   209,     0,     0,     0,     0,     0,   210,
     0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
   213,   214,     0,     0,   215,     0,   216,     0,     0,     0,
   217,   218,     0,     0,     0,     0,     0,     0,   219,   220,
   221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   223,   224,   225,   226,     0,   227,   228,     0,   229,   230,
     0,   231,     0,     0,   232,   233,   234,   235,   236,     0,
   237,   238,     0,     0,   239,   240,   241,   242,   243,   244,
   245,   246,   247,     0,     0,     0,     0,   248,     0,   249,
   250,     0,     0,   251,   252,     0,   253,     0,   254,     0,
   255,   256,   257,   258,   259,     0,   260,   261,   262,   263,
   264,     0,     0,   265,   266,   267,   268,   269,     0,     0,
   270,     0,   271,   272,     0,     0,   274,   167,   168,   169,
   170,   171,   172,   173,   174,   175,     0,   176,  1530,   177,
   178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
   187,   188,   189,   190,   191,   192,     0,   193,   194,   195,
   196,   197,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
     0,     0,     0,   201,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,     0,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,     0,     0,     0,   209,     0,     0,     0,
     0,     0,   210,     0,   211,   212,     0,     0,     0,     0,
     0,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,     0,     0,     0,
     0,   219,   220,   221,   222,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   226,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,     0,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,     0,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,     0,     0,   274,
   167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
   176,  1845,   177,   178,   179,   180,   181,   182,   183,   184,
   185,   186,     0,   187,   188,   189,   190,   191,   192,     0,
   193,   194,   195,   196,   197,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   198,   199,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   380,     0,     0,     0,     0,     0,   200,
     0,     0,     0,     0,     0,     0,   201,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   202,     0,     0,   203,     0,     0,
     0,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     0,     0,   206,   207,   208,     0,     0,     0,     0,   209,
     0,     0,     0,     0,     0,   210,     0,   211,   212,     0,
     0,     0,     0,     0,     0,     0,   213,   214,     0,     0,
   215,     0,   216,     0,     0,     0,   217,   218,     0,     0,
     0,     0,     0,     0,   219,   220,   221,   222,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     0,   227,   228,     0,   229,   230,     0,   231,     0,     0,
   232,   233,   234,   235,   236,     0,   237,   238,     0,     0,
   239,   240,   241,   242,   243,   244,   245,   246,   247,     0,
     0,     0,     0,   248,     0,   249,   250,     0,   381,   251,
   252,     0,   253,     0,   254,     0,   255,   256,   257,   258,
   259,     0,   260,   261,   262,   263,   264,     0,     0,   265,
   266,   267,   268,   269,     0,     0,   270,     0,   271,   272,
     0,     0,   274,     0,     0,     0,   578,   167,   168,   169,
   170,   171,   172,   173,   174,   175,     0,   176,     0,   177,
   178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
   187,   188,   189,   190,   191,   192,     0,   193,   194,   195,
   196,   197,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,   293,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   294,     0,     0,     0,     0,     0,   200,     0,     0,   295,
     0,     0,     0,   201,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,     0,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,     0,     0,     0,   209,     0,     0,     0,
     0,     0,   210,     0,   211,   212,     0,     0,     0,     0,
     0,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,     0,     0,     0,
     0,   219,   220,   221,   222,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   226,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,     0,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,     0,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,   273,     0,   274,
   275,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     0,   176,     0,   177,   178,   179,   180,   181,   182,   183,
   184,   185,   186,     0,   187,   188,   189,   190,   191,   192,
     0,   193,   194,   195,   196,   197,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   200,     0,     0,   429,     0,     0,     0,   201,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,     0,     0,     0,
   209,     0,     0,     0,     0,     0,   210,     0,   211,   212,
     0,     0,     0,     0,     0,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,     0,     0,     0,     0,   219,   220,   221,   222,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   226,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,     0,
   251,   252,     0,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,     0,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,   273,     0,   274,   275,   167,   168,   169,   170,   171,
   172,   173,   174,   175,     0,   176,     0,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
   189,   190,   191,   192,     0,   193,   194,   195,   196,   197,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   200,     0,     0,   295,     0,     0,
     0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
   210,     0,   211,   212,     0,     0,     0,     0,     0,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,     0,     0,     0,     0,   219,
   220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   226,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,     0,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,     0,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,   273,     0,   274,   275,   167,
   168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     0,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,     0,   187,   188,   189,   190,   191,   192,     0,   193,
   194,   195,   196,   197,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,     0,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,     0,     0,     0,   209,     0,
     0,     0,     0,     0,   210,     0,   211,   212,     0,     0,
     0,     0,     0,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,     0,
     0,     0,     0,   219,   220,   221,   222,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   226,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,     0,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,     0,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,   273,
     0,   274,   275,   167,   168,   169,   170,   171,   172,   173,
   174,   175,     0,   176,     0,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
   191,   192,     0,   193,   194,   195,   196,   197,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   200,     0,     0,     0,     0,     0,     0,   201,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,     0,
     0,     0,   209,     0,     0,     0,     0,     0,   210,     0,
   211,   212,     0,     0,     0,     0,     0,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,     0,     0,     0,     0,   219,   220,   221,
   222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   226,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,     0,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
     0,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,     0,     0,   274,   275,   167,   168,   169,
   170,   171,   172,   173,   174,   175,     0,   176,     0,   177,
   178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
   187,   188,   189,   190,   191,   192,     0,   193,   194,   195,
   196,   197,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1086,     0,     0,
     0,     0,     0,  1087,     0,     0,     0,  1088,     0,     0,
  1089,     0,     0,     0,     0,     0,   200,     0,     0,     0,
     0,     0,     0,   201,     0,  1090,  1091,     0,     0,     0,
     0,  1092,     0,     0,     0,  1093,     0,     0,     0,  1094,
     0,   202,     0,     0,   203,     0,     0,     0,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,     0,     0,     0,   209,     0,     0,  1095,
     0,     0,   210,     0,   211,   212,     0,  1096,     0,     0,
  1097,  1098,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,     0,  1099,     0,
  1100,   219,   220,   221,   222,     0,     0,  1101,     0,  1102,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1103,
     0,     0,     0,   223,   224,   225,   226,  1104,   227,   228,
  1105,   229,   230,  1106,   231,  1107,  1108,   232,   233,   234,
   235,   236,  1109,   237,   238,  1110,  1111,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,  1112,     0,  1113,
   248,  1114,   249,   250,  1115,  1116,   251,   252,  1117,   253,
     0,   254,     0,   255,   256,   257,   258,   259,  1118,   260,
   261,   262,   263,   264,  1119,  1120,   265,   266,   267,   268,
   269,     0,  1121,   270,  1122,   271,   272,     0,     0,   274,
   167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
   176,     0,   177,   178,   179,   180,   181,   182,   183,   184,
   185,   186,     0,   187,   188,   189,   190,   191,   192,     0,
   193,   194,   195,   196,   197,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   198,   199,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   547,   548,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
   954,     0,     0,     0,     0,     0,   955,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   956,     0,     0,     0,
     0,     0,     0,     0,   202,     0,     0,   203,     0,     0,
     0,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     0,     0,   206,   207,   208,     0,   561,     0,   562,   209,
     0,     0,     0,     0,   957,   210,     0,   211,   212,     0,
     0,     0,     0,     0,     0,     0,   213,   214,     0,     0,
   215,     0,   216,     0,     0,     0,   217,   218,     0,     0,
     0,     0,     0,     0,   219,   220,   221,   222,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   574,
     0,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     0,   227,   228,     0,   229,   230,     0,   231,     0,     0,
   232,   233,   234,   235,   236,     0,   237,   238,     0,     0,
   239,   240,   241,   242,   243,   244,   245,   246,   247,     0,
     0,     0,     0,   248,     0,   249,   250,     0,     0,   251,
   252,     0,   253,     0,   254,     0,   255,   256,   257,   258,
   259,     0,   260,   261,   262,   263,   264,     0,     0,   265,
   266,   267,   268,   269,     0,     0,   270,     0,   271,   272,
     0,     0,   274,   167,   168,   169,   170,   171,   172,   173,
   174,   175,     0,   176,     0,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
   191,   192,     0,   193,   194,   195,   196,   197,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1267,     0,     0,
     0,     0,     0,  1302,     0,     0,     0,     0,     0,     0,
     0,     0,   200,     0,     0,     0,     0,     0,     0,   201,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1269,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,     0,
     0,     0,   209,     0,     0,     0,     0,     0,   210,     0,
   211,   212,     0,     0,     0,     0,     0,     0,  1270,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,     0,     0,     0,     0,   219,   220,   221,
   222,     0,     0,     0,     0,     0,     0,  1271,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   226,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,     0,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
     0,     0,   265,   266,   267,   268,   269,     0,     0,   270,
     0,   271,   272,     0,     0,   274,   167,   168,   169,   170,
   171,   375,   173,   174,   175,     0,   176,     0,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,     0,   187,
   188,   189,   190,   191,   192,     0,   193,   194,   195,   196,
   197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   198,   199,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
     0,     0,   201,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
     0,   204,   205,     0,     0,     0,     0,     0,   206,   207,
   208,   376,     0,     0,     0,   209,     0,     0,     0,     0,
     0,   210,     0,   211,   212,     0,     0,     0,     0,     0,
     0,     0,   213,   214,     0,     0,   215,     0,   216,     0,
     0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
   377,   220,   221,   222,     0,     0,   378,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   223,   224,   225,   226,     0,   227,   228,     0,
   229,   230,     0,   231,     0,     0,   232,   233,   234,   235,
   236,     0,   237,   238,     0,     0,   239,   240,   241,   242,
   243,   244,   245,   246,   247,     0,     0,     0,     0,   248,
     0,   249,   250,     0,     0,   251,   252,     0,   253,     0,
   254,     0,   255,   256,   257,   258,   259,     0,   260,   261,
   262,   263,   264,     0,     0,   265,   266,   267,   268,   269,
     0,     0,   270,     0,   271,   272,     0,     0,   274,   167,
   168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     0,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,     0,   187,   188,   189,   190,   191,   192,     0,   193,
   194,   195,   196,   197,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   380,     0,     0,     0,     0,     0,   200,     0,
     0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,     0,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,     0,     0,     0,   209,     0,
     0,     0,     0,     0,   210,     0,   211,   212,     0,     0,
     0,     0,     0,     0,     0,   213,   214,     0,     0,   215,
     0,   216,     0,     0,     0,   217,   218,     0,     0,     0,
     0,     0,     0,   219,   220,   221,   222,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   226,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,   381,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,     0,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,     0,
     0,   274,   167,   168,   169,   170,   171,   172,   173,   174,
   175,     0,   176,     0,   177,   178,   179,   180,   181,   182,
   183,   184,   185,   186,     0,   187,   188,   189,   190,   191,
   192,     0,   193,   194,   195,   196,   197,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   198,   199,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   200,     0,     0,     0,     0,     0,     0,   201,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1324,     0,   202,     0,     0,   203,
     0,     0,     0,     0,     0,     0,     0,   204,   205,     0,
     0,     0,     0,     0,   206,   207,   208,     0,     0,     0,
     0,   209,     0,     0,     0,     0,     0,   210,     0,   211,
   212,     0,     0,     0,     0,     0,     0,     0,   213,   214,
     0,  1325,   215,     0,   216,     0,     0,     0,   217,   218,
     0,     0,     0,     0,     0,     0,   219,   220,   221,   222,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   223,   224,
   225,   226,     0,   227,   228,     0,   229,   230,     0,   231,
     0,     0,   232,   233,   234,   235,   236,     0,   237,   238,
     0,     0,   239,   240,   241,   242,   243,   244,   245,   246,
   247,     0,     0,     0,     0,   248,     0,   249,   250,     0,
     0,   251,   252,     0,   253,     0,   254,     0,   255,   256,
   257,   258,   259,     0,   260,   261,   262,   263,   264,     0,
     0,   265,   266,   267,   268,   269,     0,     0,   270,     0,
   271,   272,     0,     0,   274,   167,   168,   169,   170,   171,
   172,   173,   174,   175,     0,   176,     0,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
   189,   190,   191,   192,     0,   193,   194,   195,   196,   197,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
     0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   202,
     0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
   204,   205,     0,     0,     0,     0,     0,   206,   207,   208,
     0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
   210,     0,   211,   212,     0,     0,     0,     0,     0,     0,
     0,   213,   214,     0,     0,   215,     0,   216,     0,     0,
     0,   217,   218,     0,     0,     0,     0,     0,     0,   403,
   220,   221,   222,     0,     0,   404,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   223,   224,   225,   226,     0,   227,   228,     0,   229,
   230,     0,   231,     0,     0,   232,   233,   234,   235,   236,
     0,   237,   238,     0,     0,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,     0,     0,     0,   248,     0,
   249,   250,     0,     0,   251,   252,     0,   253,     0,   254,
     0,   255,   256,   257,   258,   259,     0,   260,   261,   262,
   263,   264,     0,     0,   265,   266,   267,   268,   269,     0,
     0,   270,     0,   271,   272,     0,     0,   274,   167,   168,
   169,   170,   171,   172,   173,   174,   175,     0,   176,     0,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     0,   187,   188,   189,   190,   191,   192,     0,   193,   194,
   195,   196,   197,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   198,   199,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
     0,     0,     0,     0,   201,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   202,     0,     0,   203,     0,     0,     0,     0,
     0,     0,     0,   204,   205,     0,     0,     0,     0,     0,
   206,   207,   208,     0,     0,     0,     0,   209,     0,     0,
     0,     0,     0,   210,     0,   211,   212,     0,     0,     0,
     0,     0,     0,     0,   213,   214,     0,     0,   215,     0,
   216,     0,     0,     0,   217,   218,     0,     0,     0,     0,
     0,     0,   406,   220,   221,   222,     0,     0,   407,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   223,   224,   225,   226,     0,   227,
   228,     0,   229,   230,     0,   231,     0,     0,   232,   233,
   234,   235,   236,     0,   237,   238,     0,     0,   239,   240,
   241,   242,   243,   244,   245,   246,   247,     0,     0,     0,
     0,   248,     0,   249,   250,     0,     0,   251,   252,     0,
   253,     0,   254,     0,   255,   256,   257,   258,   259,     0,
   260,   261,   262,   263,   264,     0,     0,   265,   266,   267,
   268,   269,     0,     0,   270,     0,   271,   272,     0,     0,
   274,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     0,   176,     0,   177,   178,   179,   180,   181,   182,   183,
   184,   185,   186,     0,   187,   188,   189,   190,   191,   192,
     0,   193,   194,   195,   196,   197,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   200,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
     0,     0,     0,   206,   207,   208,     0,     0,     0,     0,
   209,     0,     0,     0,     0,     0,   210,     0,   211,   212,
     0,     0,     0,     0,     0,     0,     0,   213,   214,     0,
     0,   215,     0,   216,     0,     0,     0,   217,   218,     0,
     0,     0,     0,     0,     0,   219,   220,   221,   222,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   223,   224,   225,
   226,     0,   227,   228,     0,   229,   230,     0,   231,     0,
     0,   232,   233,   234,   235,   236,     0,   237,   238,     0,
     0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     0,     0,     0,     0,   248,     0,   249,   250,     0,     0,
   251,   252,   985,   253,     0,   254,     0,   255,   256,   257,
   258,   259,     0,   260,   261,   262,   263,   264,     0,     0,
   265,   266,   267,   268,   269,     0,     0,   270,     0,   271,
   272,     0,     0,   274,   167,   168,   169,   170,   171,   172,
   173,   174,   175,     0,   176,     0,   177,   178,   179,   180,
   181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
   190,   191,   192,     0,   193,   194,   195,   196,   197,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
   201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     0,   203,     0,     0,     0,     0,     0,     0,     0,   204,
   205,     0,     0,     0,     0,     0,   206,   207,   208,     0,
     0,     0,     0,   209,     0,     0,     0,     0,     0,   210,
     0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
   213,   214,     0,     0,   215,     0,   216,     0,     0,     0,
   217,   218,     0,     0,     0,     0,     0,     0,   219,   220,
   221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   223,   224,   225,   226,     0,   227,   228,     0,   229,   230,
     0,   231,     0,     0,   232,   233,   234,   235,   236,     0,
   237,   238,     0,     0,   239,   240,   241,   242,   243,   244,
   245,   246,   247,     0,     0,     0,     0,   248,     0,   249,
   250,     0,     0,   251,   252,  1635,   253,     0,   254,     0,
   255,   256,   257,   258,   259,     0,   260,   261,   262,   263,
   264,     0,     0,   265,   266,   267,   268,   269,     0,     0,
   270,     0,   271,   272,     0,     0,   274,   167,   168,   169,
   170,   171,   172,   173,   174,   175,     0,   176,     0,   177,
   178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
   187,   188,   189,   190,   191,   192,     0,   193,   194,   195,
   196,   197,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,   199,     0,     0,     0,     0,     0,
  1840,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
     0,     0,     0,   201,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   202,     0,     0,   203,     0,     0,     0,     0,     0,
     0,     0,   204,   205,     0,     0,     0,     0,     0,   206,
   207,   208,     0,     0,     0,     0,   209,     0,     0,     0,
     0,     0,   210,     0,   211,   212,     0,     0,     0,     0,
     0,     0,     0,   213,   214,     0,     0,   215,     0,   216,
     0,     0,     0,   217,   218,     0,     0,     0,     0,     0,
     0,   219,   220,   221,   222,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   223,   224,   225,   226,     0,   227,   228,
     0,   229,   230,     0,   231,     0,     0,   232,   233,   234,
   235,   236,     0,   237,   238,     0,     0,   239,   240,   241,
   242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
   248,     0,   249,   250,     0,     0,   251,   252,     0,   253,
     0,   254,     0,   255,   256,   257,   258,   259,     0,   260,
   261,   262,   263,   264,     0,     0,   265,   266,   267,   268,
   269,     0,     0,   270,     0,   271,   272,     0,     0,   274,
   167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
   176,     0,   177,   178,   179,   180,   181,   182,   183,   184,
   185,   186,     0,   187,   188,   189,   190,   191,   192,     0,
   193,   194,   195,   196,   197,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   198,   199,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
     0,     0,     0,     0,     0,     0,   201,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   202,     0,     0,   203,     0,     0,
     0,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     0,     0,   206,   207,   208,     0,     0,     0,     0,   209,
     0,     0,     0,     0,     0,   210,     0,   211,   212,     0,
     0,     0,     0,     0,     0,     0,   213,   214,     0,     0,
   215,     0,   216,     0,     0,     0,   217,   218,     0,     0,
     0,     0,     0,     0,   219,   220,   221,   222,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     0,   227,   228,     0,   229,   230,     0,   231,     0,     0,
   232,   233,   234,   235,   236,     0,   237,   238,     0,     0,
   239,   240,   241,   242,   243,   244,   245,   246,   247,     0,
     0,     0,     0,   248,     0,   249,   250,     0,     0,   251,
   252,     0,   253,     0,   254,     0,   255,   256,   257,   258,
   259,     0,   260,   261,   262,   263,   264,     0,     0,   265,
   266,   267,   268,   269,     0,     0,   270,     0,   271,   272,
     0,     0,   274,   167,   168,   169,   170,   171,   172,   173,
   174,   175,     0,   176,     0,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
   191,   192,     0,   193,   194,   195,   196,   197,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
   199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   200,     0,     0,     0,     0,     0,     0,   201,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
   203,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     0,     0,     0,     0,     0,   206,   207,   208,     0,     0,
     0,     0,   209,     0,     0,     0,     0,     0,   210,     0,
   211,   212,     0,     0,     0,     0,     0,     0,     0,   213,
   214,     0,     0,   215,     0,   216,     0,     0,     0,   217,
   218,     0,     0,     0,     0,     0,     0,   219,   220,   221,
   222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
   224,   225,   226,     0,   227,   228,     0,   229,   230,     0,
   231,     0,     0,   232,   233,   234,   235,   236,     0,   237,
   238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
   246,   247,     0,     0,     0,     0,   248,     0,   249,   250,
     0,     0,   251,   252,     0,   253,     0,   254,     0,   255,
   256,   257,   258,   259,     0,   260,   261,   262,   263,   264,
     0,     0,   265,   335,   267,   268,   269,     0,     0,   270,
     0,   271,   272,     0,     0,   274,   167,   168,   696,   170,
   171,   172,   173,   174,   175,     0,   176,     0,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,     0,   187,
   188,   189,   190,   191,   192,     0,   193,   194,   195,   196,
   197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   198,   199,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
     0,     0,   201,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
     0,   204,   205,     0,     0,     0,     0,     0,   206,   207,
   208,     0,     0,     0,     0,   209,     0,     0,     0,     0,
     0,   210,     0,   211,   212,     0,     0,     0,     0,     0,
     0,     0,   213,   214,     0,     0,   215,     0,   216,     0,
     0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
   219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   223,   224,   225,   226,     0,   227,   228,     0,
   229,   230,     0,   231,     0,     0,   232,   233,   234,   235,
   236,     0,   237,   238,     0,     0,   239,   240,   241,   242,
   243,   244,   245,   246,   247,     0,     0,     0,     0,   248,
     0,   249,   250,     0,     0,   251,   252,     0,   253,     0,
   254,     0,   255,   256,   257,   258,   259,     0,   260,   261,
   262,   263,   264,     0,     0,   265,   266,   267,   268,   269,
     0,     0,   270,     0,   271,   272,     0,     0,   274,   167,
   168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     0,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,     0,   187,   188,   189,   190,   191,   192,     0,   193,
   194,   195,   196,   197,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   202,     0,     0,   203,     0,     0,     0,
     0,     0,     0,     0,   204,   205,     0,     0,     0,     0,
     0,   206,   207,   208,     0,     0,     0,     0,   209,     0,
     0,     0,     0,     0,   210,     0,   211,   212,     0,     0,
     0,     0,     0,     0,     0,   213,   214,     0,     0,  1213,
     0,   216,     0,     0,     0,   217,   218,     0,     0,     0,
     0,     0,     0,   219,   220,   221,   222,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   223,   224,   225,   226,     0,
   227,   228,     0,   229,   230,     0,   231,     0,     0,   232,
   233,   234,   235,   236,     0,   237,   238,     0,     0,   239,
   240,   241,   242,   243,   244,   245,   246,   247,     0,     0,
     0,     0,   248,     0,   249,   250,     0,     0,   251,   252,
     0,   253,     0,   254,     0,   255,   256,   257,   258,   259,
     0,   260,   261,   262,   263,   264,     0,     0,   265,   266,
   267,   268,   269,     0,     0,   270,     0,   271,   272,     0,
     0,   274
};

static const short yycheck[] = {     1,
    91,     1,     1,   310,   511,   350,    56,   598,    49,   754,
   333,    52,   347,   320,   993,   435,  1524,   165,  1553,  1136,
  1137,  1138,  1139,  1140,  1261,   626,    76,   936,    49,  1516,
  1284,   325,   339,    42,   779,    42,  1861,    42,  1155,  1258,
  1451,    42,    17,    84,   710,    19,    19,    58,   432,   433,
   344,    54,    62,   438,    18,    65,  1581,   112,    39,  2071,
    63,    42,   548,   307,    45,    62,    50,    75,    95,    50,
   103,    52,    53,   112,    82,    83,   562,  2094,   110,    87,
    62,   190,    95,    92,    62,    92,   837,    92,   124,   122,
   190,    92,    96,    59,   171,   181,   190,    58,   393,  1058,
  2117,  2118,  2119,  2120,  2121,  1064,  1065,  1066,  1067,  1068,
    77,   149,    32,   278,    81,    95,   861,   121,    96,    39,
    77,   134,    42,    72,    61,    45,    63,   175,    23,  2380,
    50,   296,    52,    53,    58,   190,    49,    50,    95,    52,
    53,    54,    55,   121,   111,    95,    58,    60,    96,   101,
    63,   278,   190,   186,    67,   746,   174,    29,   272,    31,
   142,    74,    75,   100,   509,    78,   112,   512,   278,    82,
    83,   189,   299,    58,    87,    88,    89,   159,   272,  2430,
    95,   275,   477,  1044,   188,  1046,  1047,   144,   297,   299,
   299,   158,   113,   171,   143,    95,   282,   297,   705,   165,
   374,   158,    40,    41,   448,    43,    44,   164,    46,    47,
   188,    49,  2224,    51,    58,   190,    54,    55,    56,    57,
   187,   298,   124,   172,  1031,  1032,  1033,  1034,   276,    77,
   187,   146,   256,    62,   155,   181,   621,   839,  2255,   263,
   188,   207,   297,   195,   285,    96,   273,  2264,  2265,  2266,
  2267,  2268,  2269,  2270,  2271,  2272,  2273,   223,   297,   291,
   273,   297,   163,   111,   285,    58,   299,   171,    58,    98,
   121,   171,   144,   100,   270,     4,   287,   288,   289,   257,
   136,   278,   279,    12,   770,   876,    58,   188,   298,   880,
   674,   191,    64,   273,    58,   112,   278,  1363,  1415,    28,
  1045,   309,   276,   276,   286,    34,    35,  2319,   272,   112,
   158,   275,   190,   288,   170,   118,   253,   291,   321,   322,
   301,   329,   296,   273,   415,   328,   287,   288,   289,   337,
  1567,   298,  1569,  1399,   375,   376,  1453,   188,   341,   187,
   343,   761,  1829,  1562,   120,   172,    75,   209,   351,  1466,
  1467,  1468,  1469,  1470,  1471,  1472,  1767,   359,  1883,  1884,
  2372,   369,  2374,   287,   288,   289,   374,  2384,   272,   353,
    99,   275,   285,   423,   227,   287,   288,   289,    58,   292,
   109,   301,   390,   392,  2209,   392,    66,   392,   278,   274,
  1456,   392,   400,   169,   298,   246,   309,   310,   298,   401,
   285,   286,   287,   288,   289,   996,   296,   320,   321,   322,
   584,   248,   325,   326,   299,   328,   329,  1925,   273,   297,
   333,   299,   335,    94,   337,   338,   339,   171,   341,   213,
   343,   344,   345,   209,   272,   822,   439,   350,   351,   442,
   107,   274,   445,   287,   288,   289,  1037,   191,   432,   433,
   283,   284,   460,   437,   495,  1414,   369,   186,   242,  1418,
   297,  1420,   375,   192,  1423,  1424,  1425,  1426,  1427,  1428,
  1429,  1430,  1431,    58,   981,  1434,   190,   390,   273,   146,
   393,   274,  1073,   190,   197,   174,   489,   400,   117,   282,
   283,   284,   285,   286,   287,   288,   289,   287,   288,   289,
   295,   921,   274,   505,  1365,   292,   299,   136,    58,  1364,
   274,   424,   183,   285,   286,   287,   288,   289,   185,   432,
   433,   285,   286,   287,   288,   289,   439,   198,   214,   442,
   190,    69,   445,   118,  1136,  1137,  1138,  1139,  1140,   273,
  1401,   170,    24,   272,   585,  1400,   822,   460,   639,    58,
   641,  2038,  1143,  1155,   298,  1362,    58,   243,  2045,  1310,
   273,   295,    64,   278,   477,  1372,  1373,  1374,  1375,  1376,
  1377,  1378,   301,    32,   181,   616,   489,   618,   619,   278,
   118,   296,   295,   297,    69,   299,  1337,   286,  1705,   273,
   297,  2002,   299,   274,   274,   133,   509,  1458,   648,   512,
   513,  1202,  1457,   653,   654,   285,   286,   287,   288,   289,
   545,   295,   620,  2138,   622,   297,  1217,   299,    96,  1364,
  1371,   624,   916,  1289,   232,    58,   634,  1293,  1865,   278,
  1867,   672,   545,   118,   941,  1380,  1381,   297,   276,   299,
   248,   183,  1896,   121,  1389,   103,    58,   296,   133,   740,
   190,   672,     4,    58,   291,  1400,   198,   294,   112,   296,
    12,   298,  1413,   576,   122,   272,   273,   669,   275,   276,
   273,  1058,  2207,   125,   715,  1792,    28,  1064,  1065,  1066,
  1067,  1068,    34,    35,   858,   620,   275,   276,  1433,   274,
   674,   694,   295,   171,   204,   153,   273,   273,   208,  1608,
   285,   286,   287,   288,   289,    13,  2193,   620,  2195,   622,
   188,   624,  1457,    58,  1465,   297,   724,   299,   295,   295,
   723,   634,   273,    75,   274,    58,   729,    77,   186,  1474,
   733,   734,    58,    83,   107,   285,   286,   287,   288,   289,
    66,   291,    26,  2251,   295,    95,   296,    99,  1707,  2274,
   174,    20,    21,   755,   756,   757,   252,   109,    27,   672,
   762,   674,   294,   227,   912,   913,   298,   107,   107,  2277,
   291,   144,   274,   146,   776,   296,   285,   286,   287,   288,
   289,   694,  1058,   285,   286,   287,   288,   289,  1064,  1065,
  1066,  1067,  1068,   273,   144,    58,   273,   710,  1659,  1660,
  1661,    64,   160,   716,   144,   144,   146,   146,   158,   129,
   723,   724,   185,  1415,   164,   295,   729,   149,   295,   993,
   733,   734,  2059,  1330,  2061,    58,   297,   740,  1689,  1690,
  1691,   833,  1583,   835,   186,   272,   149,   187,   275,  1956,
   192,   274,    58,   778,  1435,   185,   185,   149,    64,   107,
   858,  1453,   285,   286,   287,   288,   289,    69,   291,   297,
   863,   299,   274,   296,  1466,  1467,  1468,  1469,  1470,  1471,
  1472,   283,   284,   285,   286,   287,   288,   289,   273,    58,
   285,   286,   287,   288,   289,   273,   273,   822,   146,   291,
   273,    58,   125,   107,   296,  1069,   898,   899,    20,    21,
   295,   264,   265,   200,   839,    27,   118,   295,   295,   911,
   273,   911,   295,   273,  1775,  1776,  1777,    61,   294,   295,
   272,   133,    66,   836,   837,   927,   928,   185,    72,   274,
  1675,   292,   146,    77,   918,   295,   297,   282,   283,   284,
   285,   286,   287,   288,   289,   653,   654,   860,   274,   862,
   863,  1930,   285,   286,   287,   288,   289,   870,   125,   285,
   286,   287,   288,   289,   966,   292,   968,   969,   970,   971,
   297,   185,   980,   273,   295,  1395,   113,   298,  1313,  1314,
   273,   291,   119,   126,   273,   993,   296,  1161,    94,  1312,
    96,   273,  1166,   291,   131,   295,  1170,   230,   296,    58,
  1174,   914,   295,   916,  1178,   918,   295,   273,  1182,   125,
    69,   274,  1186,   295,   247,   121,  1190,   154,   295,   172,
  1194,   298,   285,   286,   287,   288,   289,  1414,   941,   295,
   167,  1418,   149,  1420,   200,  2152,  1423,  1424,  1425,  1426,
  1427,  1428,  1429,  1430,  1431,   291,  1833,  1434,   126,  1836,
   296,    96,   285,   286,   287,   288,   289,   291,   274,   118,
   973,   200,   296,   230,   273,   171,   125,   980,   981,   285,
   286,   287,   288,   289,   133,   126,   121,  1289,   991,    58,
   247,  1293,   188,   291,   997,   210,   295,    96,   296,  1002,
   215,   206,   297,   273,   299,   274,  1031,  1032,  1033,  1034,
   292,   226,   273,  1705,    62,    58,   285,   286,   287,   288,
   289,    64,   121,   238,   239,   295,    69,   273,   285,   286,
   287,   288,   289,  1058,   295,   297,   171,   299,   110,  1064,
  1065,  1066,  1067,  1068,   297,   273,   299,   262,  1414,   295,
   246,   273,  1418,   188,  1420,    71,   125,  1423,  1424,  1425,
  1426,  1427,  1428,  1429,  1430,  1431,    58,   295,  1434,   273,
  1334,   291,   171,   295,   291,   118,   296,    69,  1342,   296,
   291,   230,   125,   272,   273,   273,   275,   276,   273,   188,
   133,   295,   291,  1224,   273,  1936,     6,   296,   247,     9,
  1792,   144,   298,  1201,  1945,    15,    16,   295,  1248,   152,
   295,  1136,  1137,  1138,  1139,  1140,   295,   102,  1216,    92,
    30,   273,   257,    33,    66,   274,   118,    92,   273,   273,
  1155,   273,    71,   125,   273,  1228,   285,   286,   287,   288,
   289,   133,  1235,   295,   117,   273,  1149,   246,   278,   279,
   295,   295,   117,   295,  1285,   181,   295,  1249,   287,  1249,
  1249,   230,  2003,   136,   137,   291,   297,   295,   299,   197,
   296,   136,   137,  1265,  1266,  1265,  1266,   292,   247,   937,
   938,   939,  1313,  1314,  1277,  1283,   272,   230,   291,   275,
   545,  1216,   278,   296,   280,   298,   291,   170,  1201,   298,
   297,   296,   299,  1295,   247,   170,   179,   180,    66,  1302,
  1213,   197,  2047,  1216,   300,  1218,   285,   286,   287,   288,
   289,  1313,  1314,  1313,  1314,  1228,   199,  1320,  2069,  1322,
  1707,   274,  1235,   297,   199,   299,  1547,  1548,   230,   282,
   283,   284,   285,   286,   287,   288,   289,   291,   297,    66,
   299,    41,   296,  1850,  1346,   247,   299,    47,   291,    49,
   278,    51,   280,   296,  1956,   620,   298,  1531,  1360,  1272,
    58,  1274,  1275,  1276,  1277,   297,   291,   299,    66,   291,
  1283,   296,   274,   298,   296,   129,  1289,   297,   169,   299,
  1293,   283,   284,   285,   286,   287,   288,   289,   298,  1302,
  1392,  1393,   297,   276,   299,    91,   196,  1310,   218,  1312,
  1313,  1314,  1315,  1994,   297,   291,   299,  1320,   297,  1322,
   296,  1324,   272,   273,   291,   275,  1329,   291,   278,   296,
   280,   149,   296,    96,  1337,  1338,  1339,  1362,  1363,   298,
   966,  1707,   968,   969,   970,   971,   278,  1372,  1373,  1374,
  1375,  1376,  1377,  1378,   291,   291,   193,  1449,   121,   296,
   296,   272,  1454,  1455,   275,   291,   291,   278,  1371,   280,
   296,   296,   291,   291,  1399,   298,   298,   296,   296,  1872,
  1644,  1874,  1875,  1876,  1877,  1878,   297,   291,   299,  1414,
  1415,   291,   296,  1418,   118,  1420,   296,   298,  1423,  1424,
  1425,  1426,  1427,  1428,  1429,  1430,  1431,   291,   171,  1434,
  1413,   291,   296,  2104,   291,  1513,   296,    76,  1516,   296,
   144,   291,  2263,   298,   272,   188,   296,   275,  1453,   291,
   278,  1456,   280,   298,   296,   291,   282,  2278,  2279,   157,
   296,  1466,  1467,  1468,  1469,  1470,  1471,  1472,  1712,   297,
   297,   299,   299,   291,  1718,  1547,  1548,  1549,   296,  1723,
  2152,   295,  1465,   291,  1728,   291,  1597,   298,   296,  1733,
   296,   291,  1564,  1565,  1738,   291,   296,  2318,    66,  1743,
   296,  1484,   245,   246,  1748,   291,   274,   291,   298,  1753,
   296,   298,   296,  1890,   282,   283,   284,   285,   286,   287,
   288,   289,    85,   297,    32,   299,   297,   291,   299,   298,
  1513,    39,   296,  1516,    42,   291,   298,    45,  1521,   298,
   296,  1524,    50,   298,    52,    53,  1618,   298,  1618,   291,
   113,   295,   295,   291,   296,   298,   119,   291,   296,   291,
  2381,   291,   296,   298,   296,   294,   296,   291,   131,   291,
   274,   291,   296,   298,   296,  1558,   296,   140,   282,   283,
   284,   285,   286,   287,   288,   289,   294,   132,   291,  2062,
   291,   154,   197,   296,   291,   296,   118,  2070,  1581,   296,
  1583,  2074,   132,  2076,   167,   132,  2079,  2080,  2081,  2082,
  2083,  2084,  2085,  2086,  2087,   291,  2089,   291,   188,   291,
   296,    94,   296,   186,   296,   291,  1609,   291,  1611,   274,
   296,   291,   296,   300,  1617,  2108,   296,   282,   283,   284,
   285,   286,   287,   288,   289,   291,  1629,   297,   300,   299,
   296,     3,     4,     5,     6,     7,     8,     9,    10,    11,
   300,    13,    58,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    69,    26,    27,    28,    29,    30,    31,
   294,    33,    34,    35,    36,    37,  1930,   291,   291,   291,
    85,  2106,   296,   296,   296,   189,   297,   297,   299,   299,
  1705,   297,  1707,   299,   297,   288,   299,   297,   292,   298,
   298,   251,   236,   255,   149,  1698,   298,   110,   113,   124,
   181,   191,   118,   298,   119,   112,   195,   294,   294,   125,
    76,   171,   127,   181,   181,   181,   131,   133,   181,   177,
    92,    93,   197,    58,   299,   140,   299,    99,   297,   112,
   298,  1829,   249,  2226,   272,   294,   297,   109,   148,   154,
   298,    26,   287,   300,   300,   117,    25,    81,    58,   149,
   152,   123,   167,   282,    64,   220,   157,   260,   149,    69,
  1853,    66,   282,   225,   136,   137,   282,  1792,  1899,   299,
   297,   297,    80,   172,   299,   147,   299,   299,   299,   112,
    58,   299,   170,  2380,   137,   298,    64,   298,  1791,  1920,
   298,    69,   298,   298,  1149,   299,  1889,   299,   170,   299,
   298,   298,  1900,   200,   298,   177,   178,   298,   118,   282,
   298,   298,   298,   295,   230,   125,   296,  1910,   282,   297,
   299,   298,   298,   133,   298,    91,  1829,   199,   298,   298,
   202,   247,  1930,   294,   144,  2328,   256,  1840,   272,   298,
   118,   298,   152,   299,   298,   298,  2243,   125,   298,   298,
  1853,   298,   298,   298,    58,   133,   298,   298,   274,   298,
   298,  1216,   298,   298,   175,    69,   144,   283,   284,   285,
   286,   287,   288,   289,   152,   298,   187,   298,   189,   298,
  1883,  1884,   232,   194,   298,   274,  1889,  1890,   292,   298,
   201,   202,   298,   301,   205,   298,   301,  1900,   296,   128,
   272,   128,   298,   275,   299,   216,   118,  1910,   282,   197,
   190,  1914,   110,   224,   118,  2055,   227,   102,    58,  2050,
   230,   125,  1925,   197,   110,    58,   299,   118,   299,   133,
   299,  1956,   299,  1936,   298,   298,    58,   247,   299,   250,
  2038,   252,  1945,   297,   299,   297,   257,  2045,   259,   287,
   299,   299,   230,   299,   299,   266,   299,   299,   299,  1962,
   299,  2053,   115,  2053,   274,   190,   110,  2098,   272,   247,
   272,   297,   282,   283,   284,   285,   286,   287,   288,   289,
   301,   301,   298,   298,   181,   115,   269,   110,   152,   299,
    66,   181,   228,   158,   231,   298,   274,   114,   298,   298,
  2003,   299,   299,   299,   282,   283,   284,   285,   286,   287,
   288,   289,   299,  2016,   127,   299,   154,   299,   299,   127,
    71,   299,   299,   299,   299,   298,   230,   299,   299,   299,
   298,   298,   116,   298,   298,  2038,   298,   298,   298,    32,
   298,   298,  2045,   247,   298,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,   298,    49,    50,    51,    52,
    53,    54,    55,    56,    57,   298,  2069,   298,  2071,   299,
   274,   299,   298,    95,   298,   298,   298,   296,   282,   283,
   284,   285,   286,   287,   288,   289,   299,   291,   298,   298,
   296,   299,   296,   217,   299,  2193,   299,  2195,   299,   299,
   299,   297,   272,  2106,   299,   299,   299,   299,   282,   296,
  2202,   299,  2202,  2205,    49,  2205,   299,    52,  2249,    54,
   299,   299,   299,   299,   299,    60,   299,  2152,    63,  1484,
   299,   299,   299,   299,    95,  2138,   299,   299,   298,    74,
    75,   298,   298,    78,   219,   104,   267,    82,    83,   298,
   128,   298,    87,    88,    89,  2248,   146,   128,   150,   148,
   151,   127,   299,   299,  2256,  2257,    58,   299,   299,   127,
   299,   299,   299,   299,   299,   161,   129,    64,    58,   299,
   299,   299,   164,   299,   299,   299,   135,   299,   299,   299,
  2193,   298,  2195,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,   299,    49,    50,    51,    52,    53,    54,
    55,    56,    57,   299,   299,  2218,   299,   297,   299,   298,
   294,  2224,  2314,  1578,  2314,  2314,   298,   298,   298,  2410,
   298,   297,   299,   298,   218,   299,   299,   299,   299,   299,
  2243,   299,   299,   299,   299,  2248,   299,  2378,  2251,   299,
    58,   299,   299,   299,   299,   299,    64,   299,   299,   299,
  2263,    69,   299,   299,   299,   299,   298,   297,   299,   298,
    64,  2274,    58,   298,  2277,  2278,  2279,  2280,  2281,   272,
   299,   229,   275,    69,   277,   278,  2378,   280,  2378,   282,
   299,   149,   299,   299,   287,   296,  2427,   292,    60,   292,
   299,     0,   295,   296,   297,   298,   299,   300,   301,   292,
   118,     0,    92,   452,   704,  2318,  2319,   125,   945,  1282,
  1591,   857,    58,  2326,   619,   133,  1272,  2330,  1609,  1274,
  1917,  2109,   118,    69,  2401,  2427,   144,  2427,  2326,   125,
  2421,  2426,  2391,  1698,   152,  1611,  1315,   133,  2427,  1599,
   285,    86,  1314,    71,   997,   510,  2277,  2423,   144,  2362,
  2393,  2276,   401,    90,  2410,  2368,   347,  1597,  1235,  2372,
  2377,  2374,   628,  1329,   309,  2378,   392,  1196,  2381,  1319,
   418,  1230,   118,  1549,   885,   491,   321,   322,  1837,   125,
   325,   326,  2281,   328,   329,  1516,  1834,   133,   333,  1765,
  2424,  1395,   337,   338,   576,   877,   341,  1698,   343,   344,
   345,  1962,  2362,  1216,   999,   350,   351,   281,   862,  1840,
  2423,  2424,   230,   427,  2427,   858,   918,   272,  1552,   914,
   275,   375,   501,   278,   369,   280,  1791,   282,   921,   247,
   375,   881,   287,  1220,   230,  2209,  1514,   990,   164,  2202,
   295,   296,   297,   298,   299,   390,   301,  2205,   393,    -1,
  1199,   247,    -1,    -1,   935,   400,   274,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   282,   283,   284,   285,   286,   287,
   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   274,   424,
    -1,   299,    -1,    -1,   230,    -1,   282,   283,   284,   285,
   286,   287,   288,   289,   439,    -1,    -1,   442,    -1,    -1,
   445,   247,    -1,    -1,    -1,    -1,    -1,  1872,    -1,  1874,
  1875,  1876,  1877,  1878,    -1,   460,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,
    -1,    -1,   477,    -1,    -1,    -1,   282,   283,   284,   285,
   286,   287,   288,   289,   489,    -1,  1911,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
    -1,    -1,    -1,    -1,   509,    -1,    -1,   512,   513,    -1,
    -1,    -1,    -1,     3,   189,    -1,    -1,     7,    -1,   194,
    10,    11,    -1,    -1,    14,    -1,   201,   202,    -1,    -1,
   205,    -1,    22,    23,    -1,    -1,    -1,  1962,    -1,    -1,
   545,   216,    -1,    -1,    -1,    -1,    36,    37,    -1,   224,
    -1,    -1,   227,    58,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    63,    -1,   250,    -1,   252,    68,    -1,
    -1,    -1,   257,    -1,   259,    -1,    -1,    -1,    78,    -1,
    -1,  2016,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    -1,    -1,
   100,    -1,   102,   118,   104,   620,    -1,   622,   108,   624,
   125,    -1,    -1,    -1,   114,    -1,    -1,    -1,   133,   634,
    -1,   121,    -1,    -1,    -1,    -1,    -1,  2062,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2070,  2071,    -1,    -1,  2074,
    -1,  2076,    -1,    -1,  2079,  2080,  2081,  2082,  2083,  2084,
  2085,  2086,  2087,    -1,  2089,    -1,    -1,   672,    -1,  2094,
    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,   168,    -1,
    -1,   171,   172,  2108,    -1,    -1,    -1,    -1,    -1,   694,
    -1,    -1,  2117,  2118,  2119,  2120,  2121,    -1,   188,    -1,
    -1,    -1,    -1,    -1,    -1,   710,    -1,    -1,    -1,    -1,
    -1,   716,   202,   203,    -1,    -1,    -1,    -1,   723,   724,
    -1,   211,   212,    -1,   729,   230,    -1,    58,   733,   734,
    -1,   221,   222,    64,    -1,   740,    -1,    -1,    69,    -1,
    -1,    -1,   247,   233,   234,   235,    -1,   237,    -1,    -1,
   240,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,   274,
    -1,   261,    -1,   778,    -1,    -1,    -1,    -1,   268,    -1,
   285,   286,   287,   288,   289,    -1,    -1,   118,    -1,    58,
    -1,    -1,    -1,  2218,   125,    -1,    -1,    -1,    -1,  2224,
    69,  2226,   133,    -1,    -1,    -1,    -1,    -1,   298,    -1,
    -1,    -1,    -1,   144,    -1,    -1,    -1,   822,    -1,    -1,
    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2255,   836,    -1,    -1,   839,    -1,    -1,    -1,    -1,  2264,
  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2273,   118,
    -1,    -1,    -1,    -1,    -1,   860,   125,   862,   863,    -1,
    -1,    -1,    -1,    -1,   133,   870,    -1,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2319,    -1,    -1,    -1,    -1,   230,
    -1,  2326,    -1,  2328,    -1,    -1,    -1,    -1,    -1,   914,
    -1,   916,    -1,    -1,    -1,    -1,   247,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,   274,    -1,    -1,    -1,  2372,    -1,  2374,
    -1,   282,   283,   284,   285,   286,   287,   288,   289,  2384,
    -1,   230,    -1,    -1,    -1,    -1,   297,    -1,   973,    -1,
    -1,    -1,    -1,    -1,    -1,   980,    -1,    -1,   247,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   991,    -1,    -1,    -1,
    -1,    -1,   997,    -1,    -1,    -1,    -1,  1002,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   282,   283,   284,   285,   286,   287,   288,
   289,    -1,    -1,    -1,    -1,    -1,  1031,  1032,  1033,  1034,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1058,    -1,    -1,    -1,    -1,    -1,  1064,
  1065,  1066,  1067,  1068,    -1,    -1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    -1,    13,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
    27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
    37,   272,    -1,    -1,   275,    -1,    -1,   278,    -1,   280,
    -1,   282,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   295,   296,   297,   298,   299,    -1,
   301,  1136,  1137,  1138,  1139,  1140,    -1,    -1,    75,    76,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1155,   272,    -1,    -1,   275,    92,    93,   278,    -1,   280,
    -1,   282,    99,    -1,    -1,    -1,   287,    -1,    -1,    -1,
   107,    -1,   109,    -1,   295,   296,   297,   298,   299,    -1,
   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1201,    -1,    -1,   136,
   137,    -1,   139,    -1,   141,    -1,    -1,    -1,  1213,    -1,
   147,  1216,    -1,  1218,    58,    -1,    -1,    -1,    -1,    -1,
    64,    -1,    -1,  1228,    -1,    69,    -1,    -1,    -1,    -1,
  1235,    -1,    -1,   170,   171,    -1,    -1,    -1,    -1,    -1,
   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
    -1,    -1,   199,    -1,    -1,   202,    -1,  1272,    -1,  1274,
  1275,  1276,  1277,    -1,   118,    -1,    -1,    -1,  1283,    -1,
    -1,   125,    -1,    -1,  1289,    -1,    -1,    -1,  1293,   133,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1302,    -1,    -1,
   144,    -1,    -1,    -1,    -1,    -1,    -1,  1312,  1313,  1314,
  1315,    -1,    -1,    -1,    -1,  1320,    -1,  1322,    58,  1324,
    -1,    -1,    -1,   260,  1329,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,  1338,  1339,   272,   273,    -1,   275,    -1,
    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,
    49,    -1,    -1,    52,    -1,    54,    -1,  1362,  1363,    -1,
    -1,    60,    -1,    -1,    63,    -1,    -1,  1372,  1373,  1374,
  1375,  1376,  1377,  1378,    -1,    74,    75,    -1,   118,    78,
    -1,    -1,    -1,    82,    83,   125,   230,    -1,    87,    88,
    89,    -1,    -1,   133,  1399,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   247,   144,    -1,    -1,    -1,    -1,  1414,
  1415,    -1,    -1,  1418,    -1,  1420,    -1,    -1,  1423,  1424,
  1425,  1426,  1427,  1428,  1429,  1430,  1431,    -1,    -1,  1434,
   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,
   284,   285,   286,   287,   288,   289,    -1,    -1,  1453,    -1,
    -1,  1456,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1466,  1467,  1468,  1469,  1470,  1471,  1472,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   230,    -1,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
    -1,    14,    -1,    -1,    -1,    -1,    -1,   247,  1513,    22,
    23,  1516,    -1,    -1,    -1,    -1,  1521,    -1,    -1,  1524,
    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   282,   283,   284,   285,   286,   287,   288,   289,
    63,    -1,    -1,  1558,    -1,    68,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    82,
    -1,    84,    -1,  1578,    -1,    -1,  1581,    -1,    -1,    -1,
    -1,    94,    -1,    96,    -1,    -1,   285,   100,    -1,   102,
    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
    -1,   114,    -1,    -1,  1609,    -1,  1611,    -1,   121,    -1,
   309,    -1,  1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   321,   322,    -1,    -1,   325,   326,    -1,   328,
   329,    -1,    -1,    -1,   333,    -1,    -1,    -1,   337,   338,
    -1,    -1,   341,    -1,   343,   344,   345,    -1,    -1,    -1,
    -1,   350,   351,   166,    -1,   168,    -1,    -1,   171,   172,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   369,    -1,    -1,    -1,    -1,   188,   375,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   390,    -1,    -1,   393,    -1,    -1,    -1,   211,   212,
  1705,   400,  1707,    -1,    -1,    -1,    -1,    -1,   221,   222,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   233,   234,   235,    -1,   237,   424,    -1,   240,    -1,    -1,
    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
   439,   254,    -1,   442,    -1,    -1,   445,    -1,   261,    -1,
    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    58,    -1,
    -1,   460,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,
    -1,    -1,    -1,    -1,    -1,   298,    -1,  1792,    -1,    -1,
   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   509,    -1,    -1,   512,   513,    -1,    -1,    -1,   118,    -1,
    -1,    58,    -1,    -1,  1829,   125,    -1,    64,    -1,    -1,
    -1,    -1,    69,   133,    -1,  1840,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   144,    -1,   545,    -1,  1853,    -1,
    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   560,    -1,    -1,    -1,    -1,    -1,  1872,    -1,  1874,
  1875,  1876,  1877,  1878,    -1,    -1,    -1,   576,  1883,  1884,
    -1,   118,    -1,    -1,  1889,    -1,    -1,    -1,   125,    -1,
    -1,    -1,    -1,    -1,    -1,  1900,   133,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1910,  1911,   144,    -1,  1914,
    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
  1925,   620,    -1,   622,    -1,   624,    -1,    -1,    -1,    -1,
   230,    49,    50,    -1,    52,   634,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
    -1,  1956,    58,    -1,    -1,    -1,    -1,    -1,    64,    -1,
    -1,   326,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   672,   274,    -1,    -1,    -1,    -1,    -1,
   345,    -1,   282,   283,   284,   285,   286,   287,   288,   289,
    -1,    -1,    -1,   230,    -1,   694,    -1,    -1,    -1,   299,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   247,   710,   118,    -1,    -1,    -1,    -1,   716,    -1,   125,
    -1,    -1,    -1,    -1,   723,   724,    -1,   133,    -1,    -1,
   729,    -1,    -1,  2038,   733,   734,    -1,   274,   144,    -1,
  2045,   740,    -1,    -1,    -1,   282,   283,   284,   285,   286,
   287,   288,   289,    -1,    -1,    -1,    -1,  2062,    -1,    58,
   297,    -1,   761,    -1,    -1,  2070,    -1,    -1,    -1,  2074,
    69,  2076,    -1,    -1,  2079,  2080,  2081,  2082,  2083,  2084,
  2085,  2086,  2087,    -1,  2089,    -1,    -1,    -1,    -1,  2094,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2106,    -1,  2108,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2117,  2118,  2119,  2120,  2121,    -1,    -1,   118,
    -1,    -1,    -1,    -1,   230,    -1,   125,    -1,    -1,    -1,
    -1,    -1,    -1,  2138,   133,    -1,    -1,   836,   837,    -1,
    -1,   247,    -1,    -1,    -1,   144,    -1,  2152,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   860,    -1,   862,   863,    -1,   284,   285,   274,    -1,
    -1,   870,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
   286,   287,   288,   289,    -1,    -1,    -1,    -1,  2193,    -1,
  2195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   914,    -1,   916,    -1,    -1,
    -1,  2226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   230,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2248,    -1,    -1,  2251,    -1,   247,    -1,
  2255,    -1,    -1,    -1,    -1,    -1,    -1,   375,    -1,  2264,
  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2273,  2274,
    -1,    -1,  2277,    -1,   973,   274,  2281,    -1,    -1,    -1,
    -1,   980,    -1,   282,   283,   284,   285,   286,   287,   288,
   289,    -1,   991,    -1,    -1,    -1,    -1,    -1,   997,    -1,
    -1,    -1,    -1,  1002,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   432,   433,    -1,    -1,    -1,   437,
    -1,    -1,    -1,  2328,    -1,  2330,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    -1,    13,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
    27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
    37,    -1,    -1,  2368,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2384,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   778,    -1,    92,    93,    -1,    -1,  2424,
    58,    -1,    99,    -1,    -1,    -1,    64,    -1,    -1,    -1,
    -1,    69,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
  1149,    -1,    -1,    -1,    -1,    -1,    -1,   822,    -1,   136,
   137,    -1,   139,    -1,   141,    -1,    -1,    -1,    -1,    -1,
   147,    -1,    -1,    -1,   839,    -1,    -1,    -1,    -1,    -1,
   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
    -1,    -1,   610,   170,    -1,   133,    -1,    -1,    -1,    58,
   177,   178,  1201,    -1,    -1,    64,   144,    -1,    -1,    -1,
    69,    -1,    -1,    -1,  1213,   192,    -1,  1216,    -1,  1218,
    -1,    -1,   199,    -1,    -1,   202,    -1,    -1,    -1,  1228,
    -1,    -1,    -1,    -1,    -1,    -1,  1235,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   672,    -1,   674,    -1,    -1,   118,
    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
    -1,    -1,    -1,  1272,   133,  1274,  1275,  1276,  1277,    -1,
    -1,   258,    -1,   260,  1283,   144,    -1,    -1,    -1,    -1,
  1289,    -1,   230,   152,  1293,   272,    -1,    -1,   275,    -1,
    -1,    -1,    -1,  1302,    -1,    -1,    -1,    -1,    -1,   247,
    -1,  1310,    -1,  1312,  1313,  1314,  1315,    -1,    -1,    -1,
    -1,  1320,    58,  1322,    -1,  1324,    -1,    -1,    64,    -1,
  1329,    67,    -1,    69,    -1,    -1,   274,    -1,  1337,  1338,
  1339,    -1,    -1,    -1,   282,   283,   284,   285,   286,   287,
   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    97,    -1,    -1,    -1,    -1,  1031,  1032,  1033,  1034,
    -1,   230,  1371,    58,    -1,    -1,    -1,    -1,    -1,    64,
    -1,    66,   118,    -1,    69,    -1,    -1,    -1,   247,   125,
    -1,    -1,    -1,  1058,    -1,    -1,  1395,   133,    -1,  1064,
  1065,  1066,  1067,  1068,   822,    -1,    -1,    -1,   144,    -1,
    -1,    -1,    -1,    -1,  1413,   274,   152,    -1,    -1,    -1,
    -1,   839,    -1,   282,   283,   284,   285,   286,   287,   288,
   289,    -1,    -1,   118,    -1,    -1,    -1,    -1,   297,   857,
   125,    58,    -1,    -1,    -1,   863,    -1,    64,   133,    -1,
    -1,    -1,    69,    -1,   190,    -1,    -1,    -1,    -1,   144,
    -1,    -1,    -1,    -1,    -1,    -1,  1465,   152,    -1,    -1,
    -1,  1136,  1137,  1138,  1139,  1140,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1484,    -1,    -1,    -1,    -1,
  1155,    -1,    -1,    -1,   230,   112,    -1,    -1,    -1,    -1,
   918,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
    -1,   247,    -1,    58,  1513,    -1,   133,  1516,    -1,    -1,
    -1,    -1,  1521,    -1,    69,  1524,    -1,   144,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,   274,    -1,
    -1,    -1,    -1,    -1,    -1,   230,   282,   283,   284,   285,
   286,   287,   288,   289,    -1,    -1,    58,    -1,    -1,  1558,
    -1,    -1,   247,    -1,    -1,    -1,    -1,    69,    -1,    -1,
    -1,    -1,   990,   118,    -1,    -1,    -1,    -1,    -1,    -1,
   125,    -1,  1581,    -1,  1583,    -1,    -1,    -1,   133,   274,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
   285,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
  1609,    -1,  1611,   230,    -1,    -1,   118,    -1,  1617,    -1,
    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
   247,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1058,    -1,    -1,    -1,    -1,    -1,  1064,  1065,  1066,  1067,
  1068,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,
    -1,  1079,    -1,    -1,    -1,   282,   283,   284,   285,   286,
   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1362,  1363,  1698,
    -1,    -1,   247,    -1,    -1,    -1,    -1,  1372,  1373,  1374,
  1375,  1376,  1377,  1378,    -1,    -1,    -1,    -1,  1136,  1137,
  1138,  1139,  1140,    -1,    -1,    -1,    -1,    -1,   230,   274,
    -1,    -1,    -1,    -1,  1399,    -1,    -1,  1155,   283,   284,
   285,   286,   287,   288,   289,   247,    -1,    -1,    -1,  1414,
  1415,    -1,    -1,  1418,    -1,  1420,    -1,    -1,  1423,  1424,
  1425,  1426,  1427,  1428,  1429,  1430,  1431,    -1,    -1,  1434,
    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1199,    -1,   285,   286,   287,   288,   289,  1453,    -1,
    -1,  1456,  1791,    -1,    -1,    -1,    -1,    -1,    58,    -1,
    -1,  1466,  1467,  1468,  1469,  1470,  1471,  1472,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1829,    58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
    -1,  1840,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1853,    -1,    -1,    -1,   118,    -1,
    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1883,  1884,    -1,    -1,    -1,    -1,
  1889,   118,    -1,    -1,    58,    -1,    -1,    -1,   125,    -1,
    64,  1900,    66,    -1,    -1,    69,   133,    -1,    -1,    -1,
    -1,  1910,    -1,  1578,    -1,  1914,    -1,   144,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   152,  1925,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1936,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1945,    -1,    -1,   176,
    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
    -1,   125,    -1,  1962,    -1,    -1,    -1,    -1,    -1,   133,
   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   144,    -1,    -1,    -1,    -1,    -1,    -1,   247,   152,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1414,  1415,    -1,    -1,
  1418,    -1,  1420,   230,  2003,  1423,  1424,  1425,  1426,  1427,
  1428,  1429,  1430,  1431,   274,    -1,  1434,  2016,    -1,    -1,
   247,    -1,   282,   283,   284,   285,   286,   287,   288,   289,
    -1,    -1,    -1,    -1,    -1,  1453,    -1,    -1,    -1,  2038,
  1705,    -1,  1707,    -1,    -1,    -1,  2045,   274,  1466,  1467,
  1468,  1469,  1470,  1471,  1472,   282,   283,   284,   285,   286,
   287,   288,   289,    -1,    -1,    -1,   230,    -1,    -1,    -1,
  2069,    -1,  2071,    -1,   563,    -1,    -1,    -1,    58,    -1,
    -1,    -1,    -1,   247,    64,    -1,    66,    -1,   577,    69,
   579,    -1,   581,   582,   583,   584,  1514,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2106,    -1,    -1,
   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,
   284,   285,   286,   287,   288,   289,    -1,  1792,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,  2138,
    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
    -1,   640,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    58,    -1,   144,    -1,    -1,    -1,    64,    -1,
    -1,    -1,   152,    69,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2193,    -1,  2195,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1872,    -1,  1874,
  1875,  1876,  1877,  1878,    -1,    -1,    -1,    -1,    -1,  2218,
    -1,    -1,   118,    -1,    -1,  2224,    -1,    -1,    -1,   125,
    -1,    -1,   721,    -1,    -1,    -1,    -1,   133,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1911,    -1,   144,  2248,
   230,    58,  2251,    -1,    -1,    -1,   152,    64,    -1,    -1,
  1925,   750,    69,    -1,  2263,    -1,    -1,   247,    -1,    -1,
   760,    -1,    -1,    -1,    -1,  2274,    -1,    -1,  2277,  2278,
  2279,    -1,  2281,    -1,    -1,   774,   775,  1705,    -1,  1707,
    -1,  1956,    -1,   782,   274,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   282,   283,   284,   285,   286,   287,   288,   289,
    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,  2318,
  2319,    -1,    -1,    -1,    -1,    -1,   133,  2326,    -1,    -1,
    -1,  2330,    -1,   822,   230,    -1,    -1,   144,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,   838,
    -1,   247,    -1,   842,    -1,   844,    -1,    -1,   847,   848,
   849,   850,   851,   852,   853,   854,   855,    -1,    -1,  2368,
    -1,    -1,    -1,  2372,  1792,  2374,    -1,    -1,   274,    -1,
    -1,    -1,  2381,    -1,    -1,    -1,   282,   283,   284,   285,
   286,   287,   288,   289,    -1,    -1,    -1,  2062,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2070,    -1,    -1,    -1,  2074,
    -1,  2076,    -1,    -1,  2079,  2080,  2081,  2082,  2083,  2084,
  2085,  2086,  2087,   230,  2089,  2424,    -1,    -1,    -1,  2094,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   247,    -1,    -1,  2108,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2117,  2118,  2119,  2120,  2121,   778,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,   286,
   287,   288,   289,    -1,    -1,    -1,    -1,  2152,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   998,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   839,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1956,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1044,    -1,  1046,  1047,    -1,
    -1,  2226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1058,
    -1,    -1,    -1,    -1,    -1,  1064,  1065,  1066,  1067,  1068,
  1069,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2255,    -1,    -1,  1082,    -1,    -1,    -1,    -1,    -1,  2264,
  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2273,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1141,    -1,    -1,    -1,    -1,    -1,    -1,  1149,
    -1,    -1,    -1,  2328,    -1,    -1,    -1,    -1,  1157,    -1,
    -1,  1161,  1161,    -1,    -1,    -1,  1166,  1166,    -1,    -1,
  1170,  1170,    -1,    -1,  1174,  1174,    -1,    -1,  1178,  1178,
    -1,    -1,  1182,  1182,    -1,    -1,  1186,  1186,    -1,    -1,
  1190,  1190,    -1,    -1,  1194,  1194,    -1,    -1,    -1,    -1,
  1031,  1032,  1033,  1034,    -1,    -1,    -1,    -1,    -1,  2384,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2152,    -1,    -1,  1058,    -1,    -1,
    -1,  1230,    -1,  1064,  1065,  1066,  1067,  1068,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,  1136,  1137,  1138,  1139,  1140,
    -1,  1311,    -1,    -1,    -1,    -1,    -1,    -1,  1149,    -1,
    -1,    -1,    -1,    -1,  1155,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
    76,    -1,  1341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1350,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
  1359,    -1,    -1,    99,    -1,    -1,  1365,    -1,    -1,    -1,
    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,    -1,    58,    -1,   123,    -1,    -1,
    -1,    64,  1391,    -1,  1394,    -1,    69,    -1,    -1,  1398,
   136,   137,  1401,   139,    -1,   141,    -1,    -1,    -1,    -1,
    -1,   147,    -1,    -1,    -1,  1414,    -1,    -1,    -1,  1418,
    -1,  1420,    -1,    -1,  1423,  1424,  1425,  1426,  1427,  1428,
  1429,  1430,  1431,    -1,   170,  1434,    -1,    -1,    -1,    -1,
    -1,   177,   178,    -1,    -1,   118,    -1,    -1,    -1,    -1,
    -1,    -1,   125,    -1,    -1,    -1,   192,    -1,    -1,  1458,
   133,    -1,    -1,   199,    -1,    -1,   202,    -1,    -1,    -1,
    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
    -1,    -1,    -1,    -1,  1484,    -1,  1486,  1487,    -1,  1489,
  1490,    -1,  1492,  1493,    -1,  1495,  1496,    -1,  1498,  1499,
    -1,  1501,  1502,    -1,  1504,  1505,    -1,  1507,  1508,    -1,
  1510,  1511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,
    -1,  1362,  1363,    -1,    -1,    -1,   272,    -1,    -1,   275,
    -1,  1372,  1373,  1374,  1375,  1376,  1377,  1378,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1399,    -1,
    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1414,  1415,    -1,    -1,  1418,    -1,  1420,
    -1,    -1,  1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,
  1431,   274,    -1,  1434,    -1,    -1,    -1,    -1,    -1,   282,
   283,   284,   285,   286,   287,   288,   289,    -1,    -1,    -1,
    -1,    -1,  1453,    -1,    -1,  1456,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1466,  1467,  1468,  1469,  1470,
  1471,  1472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1484,    -1,    -1,    -1,    -1,    -1,    -1,
  1659,  1660,  1661,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1689,  1690,  1691,    -1,    -1,    -1,    -1,    -1,  1698,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1707,    -1,
    -1,    -1,  1712,  1712,    -1,    -1,    -1,    -1,  1718,  1718,
    -1,    -1,    -1,  1723,  1723,    -1,    -1,    -1,  1728,  1728,
    -1,    -1,    -1,  1733,  1733,    -1,    -1,    -1,  1738,  1738,
    -1,    -1,    -1,  1743,  1743,    -1,    -1,  1578,  1748,  1748,
    -1,    -1,    -1,  1753,  1753,    -1,    -1,    -1,    -1,    -1,
    -1,  1761,    -1,    -1,    -1,  1765,  1765,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1775,  1776,  1777,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1698,    -1,    -1,
    -1,    -1,    -1,    -1,  1705,    -1,  1707,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
  1791,  1792,  1962,    -1,    -1,  1965,  1966,    -1,  1968,  1969,
    -1,  1971,  1972,    -1,  1974,  1975,    -1,  1977,  1978,    -1,
  1980,  1981,    -1,  1983,  1984,    -1,  1986,  1987,    -1,  1989,
  1990,    75,    76,    -1,    -1,    -1,  1996,    -1,    -1,    -1,
  2000,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,   123,
    -1,  1872,    -1,  1874,  1875,  1876,  1877,  1878,    -1,  2048,
    -1,    -1,   136,   137,    -1,   139,    -1,   141,    -1,    -1,
    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1911,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
    -1,    -1,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,
    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,   202,    -1,
    -1,    -1,    -1,    -1,    -1,  1956,    -1,    -1,    -1,    -1,
    -1,  1962,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2016,    -1,    -1,   272,   273,
    -1,   275,    -1,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2062,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2070,
  2071,    -1,    -1,  2074,    -1,  2076,    -1,    -1,  2079,  2080,
  2081,  2082,  2083,  2084,  2085,  2086,  2087,    -1,  2089,    -1,
    -1,    -1,    -1,  2094,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2108,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  2117,  2118,  2119,  2120,
  2121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2218,    -1,    -1,
    -1,    -1,    -1,  2224,    -1,  2226,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2255,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
  2271,  2272,  2273,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2319,    -1,
    -1,    -1,    -1,    -1,    -1,  2326,    -1,  2328,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,  2372,    -1,  2374,    -1,   105,   106,   107,    -1,   109,
    -1,    -1,    -1,  2384,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,   144,   145,   146,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,   287,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,   299,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
    13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    -1,    26,    27,    28,    29,    30,    31,    -1,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,
    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,
    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,
    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,
    -1,   144,   145,   146,   147,   148,    -1,   150,   151,    -1,
    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,
   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,
   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,
    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,
   213,   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,
   223,   224,   225,   226,   227,   228,   229,   230,   231,    -1,
    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,
   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,
   253,    -1,   255,   256,   257,   258,   259,   260,    -1,   262,
   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,
   273,   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,
    -1,    -1,    -1,   286,   287,    -1,   289,   290,    -1,   292,
    -1,    -1,    -1,    -1,    -1,   298,   299,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,   289,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,   299,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    -1,    13,    -1,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
    29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,
    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,
   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,
   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,
   139,    -1,   141,   142,    -1,   144,   145,   146,   147,   148,
    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,
   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,
   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,
   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,
   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
   199,   200,   201,   202,    -1,   204,   205,    -1,   207,   208,
    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,
   219,   220,    -1,    -1,   223,   224,   225,   226,   227,   228,
   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,
   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,
   249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
   259,   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,
   269,    -1,   271,   272,   273,   274,   275,   276,    -1,   278,
   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,
   289,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,
   299,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,    -1,    -1,    -1,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,    -1,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,   299,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,
   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,
    -1,   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,
   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,
    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,
   185,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,
   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,
   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,
   225,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,
   245,    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,
   255,   256,   257,   258,   259,   260,    -1,   262,   263,   264,
   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,
   275,    -1,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,
    -1,   286,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,
    -1,    -1,    -1,   298,   299,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,    -1,    -1,    -1,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,    -1,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,    -1,    -1,   275,    -1,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,   299,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,   105,   106,   107,    -1,   109,    -1,    -1,   112,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
   144,   145,   146,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,   182,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    -1,    -1,    73,    74,    75,    76,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
    -1,   109,    -1,    -1,   112,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,   130,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,   182,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,   274,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,   289,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,
    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
   112,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,   130,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,   144,   145,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
   182,    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,   276,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,   112,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,   130,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,   182,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,   289,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,   144,   145,   146,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
   144,   145,   146,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,   274,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,   289,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,
    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,   144,   145,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,   276,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,   289,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,   144,   145,   146,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
   144,   145,   146,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,    -1,   145,   146,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,    -1,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,   289,   290,   291,   292,    -1,    -1,    -1,   296,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,
    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,   144,   145,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,   276,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,   289,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,   144,   145,   146,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
   144,   145,   146,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,   274,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,   289,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,
    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,   144,   145,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,   276,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,   289,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,   144,   145,   146,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,   287,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,   105,   106,   107,    -1,   109,    -1,    -1,   112,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
   144,   145,   146,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,   171,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,   274,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,   289,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,
    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,   144,   145,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,   171,
    -1,   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,   276,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,   289,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,   144,   145,   146,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
    74,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
   144,   145,   146,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,    -1,   145,   146,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,    -1,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,   289,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,
    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,    -1,   145,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,   173,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,    -1,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,
   242,   243,    -1,   245,    -1,    -1,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,    -1,   275,   276,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,   291,
   292,    -1,    -1,    -1,   296,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,    -1,   145,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
   156,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,   173,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,    -1,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,   241,   242,   243,    -1,   245,
    -1,    -1,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,    -1,   275,
   276,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,   289,
   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
    -1,    -1,    -1,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,   173,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
    -1,   275,   276,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,   289,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,    -1,    -1,    -1,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,    -1,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,    -1,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,    -1,   275,   276,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,    -1,    -1,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,    -1,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,    -1,    -1,
    -1,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,   185,
    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,   274,   275,
    -1,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
    -1,   141,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,   173,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,   184,   185,    -1,    -1,    -1,    -1,
    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
   260,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,   273,   274,   275,    -1,    -1,   278,   279,
   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,
   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,    93,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,    -1,
    -1,    -1,    -1,   147,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
    -1,   275,    -1,    -1,   278,   279,   280,    -1,    -1,    -1,
    -1,    -1,   286,    -1,    -1,    -1,   290,    -1,   292,    -1,
    -1,    -1,    -1,    -1,   298,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,   139,    -1,   141,   142,    -1,    -1,    -1,    -1,   147,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,   184,   185,    -1,    -1,
    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,   260,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,    -1,   275,    -1,    -1,
   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,    -1,
    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   298,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,
   142,    -1,   144,    -1,   146,   147,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,   260,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,   274,   275,    -1,    -1,   278,   279,   280,    -1,
    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,   290,    -1,
   292,    -1,    -1,    -1,    -1,    -1,   298,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,   139,    -1,   141,   142,    -1,    -1,    -1,
   146,   147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,   185,
    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,    -1,   275,
    -1,    -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,
   286,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,
    -1,    -1,   298,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,   241,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,    -1,    -1,   275,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    -1,    13,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,   298,    26,
    27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,
    -1,    -1,   169,   170,   171,    -1,    -1,    -1,    -1,    -1,
   177,   178,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,
   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,
   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,
   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,
    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,
   247,    -1,   249,   250,   251,   252,   253,    -1,   255,   256,
   257,   258,   259,    -1,    -1,   262,   263,   264,   265,   266,
    -1,    -1,   269,    -1,   271,   272,    -1,    -1,   275,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,   298,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
   274,   275,    -1,    -1,   278,    -1,   280,    -1,   282,   283,
   284,   285,   286,   287,   288,   289,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    -1,    13,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
    27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    -1,
    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
   127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   159,   160,   161,    -1,   163,    -1,   165,    -1,
    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
   177,   178,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,
   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,
   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,
   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,
    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,
   247,    -1,   249,   250,   251,   252,   253,    -1,   255,   256,
   257,   258,   259,    -1,    -1,   262,   263,   264,   265,   266,
    -1,    -1,   269,    -1,   271,   272,    -1,   274,   275,    -1,
    -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,   286,
   287,   288,   289,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,    -1,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,    -1,   274,   275,    -1,    -1,    -1,    -1,
    -1,    -1,   282,   283,   284,   285,   286,   287,   288,   289,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
    13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    -1,    26,    27,    28,    29,    30,    31,    -1,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,
    -1,    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,
    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,
   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,
    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,
   213,   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,
   223,   224,   225,   226,   227,   228,   229,   230,   231,    -1,
    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,
   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,
   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,
   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,
    -1,    -1,   275,    -1,    -1,    -1,   279,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   287,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,   241,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,    -1,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,    -1,    -1,   275,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    -1,    13,   287,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,
   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,
    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,
   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,
    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,
   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,
   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,
   225,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,
   245,    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,
   255,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
   265,   266,    -1,    -1,   269,    -1,   271,   272,    -1,    -1,
   275,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,   287,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,    -1,
   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,    -1,    -1,   275,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    -1,    13,   287,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
    29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,
    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,
    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,
   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,
   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   199,   200,   201,   202,    -1,   204,   205,    -1,   207,   208,
    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,
   219,   220,    -1,    -1,   223,   224,   225,   226,   227,   228,
   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,
   239,    -1,    -1,   242,   243,    -1,   245,    -1,   247,    -1,
   249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
   259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
   269,    -1,   271,   272,    -1,    -1,   275,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,   287,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,    -1,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,    -1,    -1,   275,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
    13,   287,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    -1,    26,    27,    28,    29,    30,    31,    -1,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,
    -1,    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,
    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,
   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,
    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,
   213,   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,
   223,   224,   225,   226,   227,   228,   229,   230,   231,    -1,
    -1,    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,
   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,
   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,
   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,
    -1,    -1,   275,    -1,    -1,    -1,   279,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,    -1,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,   273,    -1,   275,
   276,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    92,    -1,    -1,    95,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,    -1,
   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,
   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,   273,    -1,   275,   276,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,    -1,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,   273,    -1,   275,   276,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,   273,
    -1,   275,   276,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,    -1,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,    -1,    -1,   275,   276,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,    -1,
    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
    -1,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,   115,
    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
    -1,    -1,   148,    -1,   150,   151,    -1,   153,    -1,    -1,
   156,   157,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,   174,    -1,
   176,   177,   178,   179,   180,    -1,    -1,   183,    -1,   185,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
    -1,    -1,    -1,   199,   200,   201,   202,   203,   204,   205,
   206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
   216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,   233,    -1,   235,
   236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,   254,   255,
   256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
   266,    -1,   268,   269,   270,   271,   272,    -1,    -1,   275,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
    13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    -1,    26,    27,    28,    29,    30,    31,    -1,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,
    -1,    -1,   135,   136,   137,    -1,   139,    -1,   141,   142,
    -1,    -1,    -1,    -1,   147,   148,    -1,   150,   151,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,
   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,
    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,
   213,   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,
   223,   224,   225,   226,   227,   228,   229,   230,   231,    -1,
    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,   242,
   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,
   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,
   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,
    -1,    -1,   275,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,    -1,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,    -1,    -1,   275,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    -1,    13,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
    27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,
    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
   177,   178,   179,   180,    -1,    -1,   183,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,
   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,
   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,
   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,
    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,
   247,    -1,   249,   250,   251,   252,   253,    -1,   255,   256,
   257,   258,   259,    -1,    -1,   262,   263,   264,   265,   266,
    -1,    -1,   269,    -1,   271,   272,    -1,    -1,   275,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,   241,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,    -1,
    -1,   275,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    -1,    13,    -1,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   115,    -1,   117,    -1,    -1,   120,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,
    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,
    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,
   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,
    -1,   162,   163,    -1,   165,    -1,    -1,    -1,   169,   170,
    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,
   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,
    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,   220,
    -1,    -1,   223,   224,   225,   226,   227,   228,   229,   230,
   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,
    -1,   242,   243,    -1,   245,    -1,   247,    -1,   249,   250,
   251,   252,   253,    -1,   255,   256,   257,   258,   259,    -1,
    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,
   271,   272,    -1,    -1,   275,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    -1,    13,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
    28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,
    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,
   178,   179,   180,    -1,    -1,   183,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,   207,
   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,   227,
   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,   247,
    -1,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
   258,   259,    -1,    -1,   262,   263,   264,   265,   266,    -1,
    -1,   269,    -1,   271,   272,    -1,    -1,   275,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,
   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,
    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,
   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,
    -1,    -1,   177,   178,   179,   180,    -1,    -1,   183,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,
   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,
   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,
   225,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,
   245,    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,
   255,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
   265,   266,    -1,    -1,   269,    -1,   271,   272,    -1,    -1,
   275,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    -1,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
    -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,    -1,
   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
    -1,   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,
    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
   202,    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,
    -1,   213,   214,   215,   216,   217,    -1,   219,   220,    -1,
    -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
    -1,    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,
   242,   243,   244,   245,    -1,   247,    -1,   249,   250,   251,
   252,   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,
   262,   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,
   272,    -1,    -1,   275,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    -1,    13,    -1,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
    29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,
    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,
    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   159,   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,
   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,
   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   199,   200,   201,   202,    -1,   204,   205,    -1,   207,   208,
    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,
   219,   220,    -1,    -1,   223,   224,   225,   226,   227,   228,
   229,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,
   239,    -1,    -1,   242,   243,   244,   245,    -1,   247,    -1,
   249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
   259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
   269,    -1,   271,   272,    -1,    -1,   275,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
    26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
   136,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,
    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
    -1,   177,   178,   179,   180,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,
    -1,   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,
   216,   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,
   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
   236,    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,
    -1,   247,    -1,   249,   250,   251,   252,   253,    -1,   255,
   256,   257,   258,   259,    -1,    -1,   262,   263,   264,   265,
   266,    -1,    -1,   269,    -1,   271,   272,    -1,    -1,   275,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
    13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    -1,    26,    27,    28,    29,    30,    31,    -1,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,
    -1,    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,
    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,
   163,    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,
    -1,    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
    -1,   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,
   213,   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,
   223,   224,   225,   226,   227,   228,   229,   230,   231,    -1,
    -1,    -1,    -1,   236,    -1,   238,   239,    -1,    -1,   242,
   243,    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,
   253,    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,
   263,   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,
    -1,    -1,   275,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
    30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,
   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
   160,    -1,    -1,   163,    -1,   165,    -1,    -1,    -1,   169,
   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,
   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
   200,   201,   202,    -1,   204,   205,    -1,   207,   208,    -1,
   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
   220,    -1,    -1,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,   236,    -1,   238,   239,
    -1,    -1,   242,   243,    -1,   245,    -1,   247,    -1,   249,
   250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,   269,
    -1,   271,   272,    -1,    -1,   275,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    -1,    13,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
    27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
    -1,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   159,   160,    -1,    -1,   163,    -1,   165,    -1,
    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
   177,   178,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   199,   200,   201,   202,    -1,   204,   205,    -1,
   207,   208,    -1,   210,    -1,    -1,   213,   214,   215,   216,
   217,    -1,   219,   220,    -1,    -1,   223,   224,   225,   226,
   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,   236,
    -1,   238,   239,    -1,    -1,   242,   243,    -1,   245,    -1,
   247,    -1,   249,   250,   251,   252,   253,    -1,   255,   256,
   257,   258,   259,    -1,    -1,   262,   263,   264,   265,   266,
    -1,    -1,   269,    -1,   271,   272,    -1,    -1,   275,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
    -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,
    -1,   165,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,
    -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,    -1,
   204,   205,    -1,   207,   208,    -1,   210,    -1,    -1,   213,
   214,   215,   216,   217,    -1,   219,   220,    -1,    -1,   223,
   224,   225,   226,   227,   228,   229,   230,   231,    -1,    -1,
    -1,    -1,   236,    -1,   238,   239,    -1,    -1,   242,   243,
    -1,   245,    -1,   247,    -1,   249,   250,   251,   252,   253,
    -1,   255,   256,   257,   258,   259,    -1,    -1,   262,   263,
   264,   265,   266,    -1,    -1,   269,    -1,   271,   272,    -1,
    -1,   275
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/misc/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/share/misc/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 4:
#line 851 "preproc.y"
{ connection = NULL; ;
    break;}
case 7:
#line 854 "preproc.y"
{ fprintf(yyout, "%s", yyvsp[0].str); free(yyvsp[0].str); ;
    break;}
case 8:
#line 855 "preproc.y"
{ fprintf(yyout, "%s", yyvsp[0].str); free(yyvsp[0].str); ;
    break;}
case 9:
#line 856 "preproc.y"
{ fputs(yyvsp[0].str, yyout); free(yyvsp[0].str); ;
    break;}
case 10:
#line 857 "preproc.y"
{ fputs(yyvsp[0].str, yyout); free(yyvsp[0].str); ;
    break;}
case 11:
#line 859 "preproc.y"
{ connection = yyvsp[0].str; ;
    break;}
case 12:
#line 861 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 13:
#line 862 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 14:
#line 863 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 15:
#line 864 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 16:
#line 865 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 17:
#line 866 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 18:
#line 867 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 19:
#line 868 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 20:
#line 869 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 21:
#line 870 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 22:
#line 871 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 23:
#line 872 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 24:
#line 873 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 25:
#line 874 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 26:
#line 875 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 27:
#line 876 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 28:
#line 877 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 29:
#line 878 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 30:
#line 879 "preproc.y"
{ output_statement(yyvsp[0].str, 1); ;
    break;}
case 31:
#line 880 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 32:
#line 881 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 33:
#line 882 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 34:
#line 883 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 35:
#line 884 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 36:
#line 885 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 37:
#line 886 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 38:
#line 887 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 39:
#line 888 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 40:
#line 889 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 41:
#line 890 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 42:
#line 891 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 43:
#line 892 "preproc.y"
{
						if (strncmp(yyvsp[0].str, "/* " , sizeof("/* ")-1) == 0)
							output_simple_statement(yyvsp[0].str);
						else
							output_statement(yyvsp[0].str, 1);
					;
    break;}
case 44:
#line 898 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 45:
#line 899 "preproc.y"
{
						fprintf(yyout, "ECPGtrans(__LINE__, %s, \"%s\");", connection ? connection : "NULL", yyvsp[0].str);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 46:
#line 904 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 47:
#line 905 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 48:
#line 906 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 49:
#line 907 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 50:
#line 908 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 51:
#line 909 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 52:
#line 910 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 53:
#line 911 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 54:
#line 912 "preproc.y"
{
						if (connection)
							yyerror("no at option for connect statement.\n");

						fprintf(yyout, "ECPGconnect(__LINE__, %s, %d);", yyvsp[0].str, no_auto_trans);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 55:
#line 920 "preproc.y"
{
						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 56:
#line 923 "preproc.y"
{
						if (connection)
							yyerror("no at option for connect statement.\n");

						fputs(yyvsp[0].str, yyout);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 57:
#line 931 "preproc.y"
{
						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 58:
#line 934 "preproc.y"
{
						if (connection)
							yyerror("no at option for disconnect statement.\n");

						fprintf(yyout, "ECPGdisconnect(__LINE__, \"%s\");", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 59:
#line 942 "preproc.y"
{
						output_statement(yyvsp[0].str, 0);
					;
    break;}
case 60:
#line 945 "preproc.y"
{
						fprintf(yyout, "ECPGdeallocate(__LINE__, %s, \"%s\");", connection ? connection : "NULL", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 61:
#line 950 "preproc.y"
{	
						struct cursor *ptr;
						 
						for (ptr = cur; ptr != NULL; ptr=ptr->next)
						{
					               if (strcmp(ptr->name, yyvsp[0].str) == 0)
						       		break;
						}
						
						if (ptr == NULL)
						{
							sprintf(errortext, "trying to open undeclared cursor %s\n", yyvsp[0].str);
							yyerror(errortext);
						}
                  
						fprintf(yyout, "ECPGdo(__LINE__, %s, \"%s\",", ptr->connection ? ptr->connection : "NULL", ptr->command);
						/* dump variables to C file*/
						dump_variables(ptr->argsinsert, 0);
						dump_variables(argsinsert, 0);
						fputs("ECPGt_EOIT, ", yyout);
						dump_variables(ptr->argsresult, 0);
						fputs("ECPGt_EORT);", yyout);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 62:
#line 975 "preproc.y"
{
						if (connection)
							yyerror("no at option for set connection statement.\n");

						fprintf(yyout, "ECPGprepare(__LINE__, %s);", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 63:
#line 983 "preproc.y"
{ /* output already done */ ;
    break;}
case 64:
#line 984 "preproc.y"
{
						if (connection)
							yyerror("no at option for set connection statement.\n");

						fprintf(yyout, "ECPGsetconn(__LINE__, %s);", yyvsp[0].str);
						whenever_action(0);
                                       		free(yyvsp[0].str);
					;
    break;}
case 65:
#line 992 "preproc.y"
{
						if (connection)
							yyerror("no at option for typedef statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 66:
#line 998 "preproc.y"
{
						if (connection)
							yyerror("no at option for var statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 67:
#line 1004 "preproc.y"
{
						if (connection)
							yyerror("no at option for whenever statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 68:
#line 1026 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("create user"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 69:
#line 1040 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("alter user"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 70:
#line 1053 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop user"), yyvsp[0].str);
				;
    break;}
case 71:
#line 1058 "preproc.y"
{ yyval.str = cat2_str(make1_str("with password") , yyvsp[0].str); ;
    break;}
case 72:
#line 1059 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 73:
#line 1063 "preproc.y"
{
					yyval.str = make1_str("createdb");
				;
    break;}
case 74:
#line 1067 "preproc.y"
{
					yyval.str = make1_str("nocreatedb");
				;
    break;}
case 75:
#line 1070 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 76:
#line 1074 "preproc.y"
{
					yyval.str = make1_str("createuser");
				;
    break;}
case 77:
#line 1078 "preproc.y"
{
					yyval.str = make1_str("nocreateuser");
				;
    break;}
case 78:
#line 1081 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 79:
#line 1085 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 80:
#line 1089 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 81:
#line 1094 "preproc.y"
{ yyval.str = cat2_str(make1_str("in group"), yyvsp[0].str); ;
    break;}
case 82:
#line 1095 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 83:
#line 1098 "preproc.y"
{ yyval.str = cat2_str(make1_str("valid until"), yyvsp[0].str); ;
    break;}
case 84:
#line 1099 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 85:
#line 1112 "preproc.y"
{
					yyval.str = cat4_str(make1_str("set"), yyvsp[-2].str, make1_str("to"), yyvsp[0].str);
				;
    break;}
case 86:
#line 1116 "preproc.y"
{
					yyval.str = cat4_str(make1_str("set"), yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 87:
#line 1120 "preproc.y"
{
					yyval.str = cat2_str(make1_str("set time zone"), yyvsp[0].str);
				;
    break;}
case 88:
#line 1124 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "COMMITTED"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
						yyerror(errortext);
					}

					yyval.str = cat2_str(make1_str("set transaction isolation level read"), yyvsp[0].str);
				;
    break;}
case 89:
#line 1134 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "SERIALIZABLE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
                                                yyerror(errortext);
					}

					yyval.str = cat2_str(make1_str("set transaction isolation level read"), yyvsp[0].str);
				;
    break;}
case 90:
#line 1144 "preproc.y"
{
#ifdef MB
					yyval.str = cat2_str(make1_str("set names"), yyvsp[0].str);
#else
                                        yyerror("SET NAMES is not supported");
#endif
                                ;
    break;}
case 91:
#line 1153 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 92:
#line 1154 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 93:
#line 1157 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 94:
#line 1158 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 95:
#line 1159 "preproc.y"
{ yyval.str = make1_str("local"); ;
    break;}
case 96:
#line 1163 "preproc.y"
{
					yyval.str = cat2_str(make1_str("show"), yyvsp[0].str);
				;
    break;}
case 97:
#line 1167 "preproc.y"
{
					yyval.str = make1_str("show time zone");
				;
    break;}
case 98:
#line 1171 "preproc.y"
{
					yyval.str = make1_str("show transaction isolation level");
				;
    break;}
case 99:
#line 1177 "preproc.y"
{
					yyval.str = cat2_str(make1_str("reset"), yyvsp[0].str);
				;
    break;}
case 100:
#line 1181 "preproc.y"
{
					yyval.str = make1_str("reset time zone");
				;
    break;}
case 101:
#line 1185 "preproc.y"
{
					yyval.str = make1_str("reset transaction isolation level");
				;
    break;}
case 102:
#line 1199 "preproc.y"
{
					yyval.str = cat4_str(make1_str("alter table"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 103:
#line 1205 "preproc.y"
{
					yyval.str = cat3_str(make1_str("add"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 104:
#line 1209 "preproc.y"
{
					yyval.str = make3_str(make1_str("add("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 105:
#line 1213 "preproc.y"
{	yyerror("ALTER TABLE/DROP COLUMN not yet implemented"); ;
    break;}
case 106:
#line 1215 "preproc.y"
{	yyerror("ALTER TABLE/ALTER COLUMN/SET DEFAULT not yet implemented"); ;
    break;}
case 107:
#line 1217 "preproc.y"
{	yyerror("ALTER TABLE/ALTER COLUMN/DROP DEFAULT not yet implemented"); ;
    break;}
case 108:
#line 1219 "preproc.y"
{	yyerror("ALTER TABLE/ADD CONSTRAINT not yet implemented"); ;
    break;}
case 109:
#line 1230 "preproc.y"
{
					yyval.str = cat2_str(make1_str("close"), yyvsp[0].str);
				;
    break;}
case 110:
#line 1245 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("copy"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 111:
#line 1251 "preproc.y"
{ yyval.str = make1_str("to"); ;
    break;}
case 112:
#line 1253 "preproc.y"
{ yyval.str = make1_str("from"); ;
    break;}
case 113:
#line 1261 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 114:
#line 1262 "preproc.y"
{ yyval.str = make1_str("stdin"); ;
    break;}
case 115:
#line 1263 "preproc.y"
{ yyval.str = make1_str("stdout"); ;
    break;}
case 116:
#line 1266 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 117:
#line 1267 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 118:
#line 1270 "preproc.y"
{ yyval.str = make1_str("with oids"); ;
    break;}
case 119:
#line 1271 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 120:
#line 1277 "preproc.y"
{ yyval.str = cat2_str(make1_str("using delimiters"), yyvsp[0].str); ;
    break;}
case 121:
#line 1278 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 122:
#line 1292 "preproc.y"
{
					yyval.str = cat3_str(cat4_str(make1_str("create"), yyvsp[-6].str, make1_str("table"), yyvsp[-4].str), make3_str(make1_str("("), yyvsp[-2].str, make1_str(")")), yyvsp[0].str);
				;
    break;}
case 123:
#line 1297 "preproc.y"
{ yyval.str = make1_str("temp"); ;
    break;}
case 124:
#line 1298 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 125:
#line 1302 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 126:
#line 1306 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 127:
#line 1309 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 128:
#line 1312 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 129:
#line 1313 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 130:
#line 1317 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 131:
#line 1321 "preproc.y"
{
			yyval.str = make3_str(yyvsp[-2].str, make1_str(" serial "), yyvsp[0].str);
		;
    break;}
case 132:
#line 1326 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 133:
#line 1327 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 134:
#line 1330 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str,yyvsp[0].str); ;
    break;}
case 135:
#line 1331 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 136:
#line 1335 "preproc.y"
{
			yyval.str = make1_str("primary key");
                ;
    break;}
case 137:
#line 1339 "preproc.y"
{
			yyval.str = make1_str("");
		;
    break;}
case 138:
#line 1346 "preproc.y"
{
					yyval.str = cat3_str(make1_str("constraint"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 139:
#line 1350 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 140:
#line 1364 "preproc.y"
{
					yyval.str = make3_str(make1_str("check("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 141:
#line 1368 "preproc.y"
{
					yyval.str = make1_str("default null");
				;
    break;}
case 142:
#line 1372 "preproc.y"
{
					yyval.str = cat2_str(make1_str("default"), yyvsp[0].str);
				;
    break;}
case 143:
#line 1376 "preproc.y"
{
					yyval.str = make1_str("not null");
				;
    break;}
case 144:
#line 1380 "preproc.y"
{
					yyval.str = make1_str("unique");
				;
    break;}
case 145:
#line 1384 "preproc.y"
{
					yyval.str = make1_str("primary key");
				;
    break;}
case 146:
#line 1388 "preproc.y"
{
					fprintf(stderr, "CREATE TABLE/FOREIGN KEY clause ignored; not yet implemented");
					yyval.str = make1_str("");
				;
    break;}
case 147:
#line 1395 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 148:
#line 1399 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 149:
#line 1413 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 150:
#line 1415 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 151:
#line 1417 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 152:
#line 1419 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 153:
#line 1421 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 154:
#line 1423 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 155:
#line 1425 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 156:
#line 1427 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 157:
#line 1429 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 158:
#line 1431 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 159:
#line 1437 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 160:
#line 1439 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 161:
#line 1441 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str); ;
    break;}
case 162:
#line 1443 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str) , make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 163:
#line 1447 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 164:
#line 1449 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); ;
    break;}
case 165:
#line 1451 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); ;
    break;}
case 166:
#line 1453 "preproc.y"
{
					if (!strcmp("<=", yyvsp[-1].str) || !strcmp(">=", yyvsp[-1].str))
						yyerror("boolean expressions not supported in DEFAULT");
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 167:
#line 1459 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 168:
#line 1461 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 169:
#line 1464 "preproc.y"
{	yyval.str = make1_str("current_date"); ;
    break;}
case 170:
#line 1466 "preproc.y"
{	yyval.str = make1_str("current_time"); ;
    break;}
case 171:
#line 1468 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr, "CURRENT_TIME(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = "current_time";
				;
    break;}
case 172:
#line 1474 "preproc.y"
{	yyval.str = make1_str("current_timestamp"); ;
    break;}
case 173:
#line 1476 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr, "CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = "current_timestamp";
				;
    break;}
case 174:
#line 1482 "preproc.y"
{	yyval.str = make1_str("current_user"); ;
    break;}
case 175:
#line 1484 "preproc.y"
{       yyval.str = make1_str("user"); ;
    break;}
case 176:
#line 1492 "preproc.y"
{
						yyval.str = cat3_str(make1_str("constraint"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 177:
#line 1496 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 178:
#line 1500 "preproc.y"
{
					yyval.str = make3_str(make1_str("check("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 179:
#line 1504 "preproc.y"
{
					yyval.str = make3_str(make1_str("unique("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 180:
#line 1508 "preproc.y"
{
					yyval.str = make3_str(make1_str("primary key("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 181:
#line 1512 "preproc.y"
{
					fprintf(stderr, "CREATE TABLE/FOREIGN KEY clause ignored; not yet implemented");
					yyval.str = "";
				;
    break;}
case 182:
#line 1519 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 183:
#line 1523 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 184:
#line 1529 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 185:
#line 1531 "preproc.y"
{	yyval.str = make1_str("null"); ;
    break;}
case 186:
#line 1533 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 187:
#line 1537 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 188:
#line 1539 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 189:
#line 1541 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 190:
#line 1543 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 191:
#line 1545 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 192:
#line 1547 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 193:
#line 1549 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 194:
#line 1551 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 195:
#line 1553 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 196:
#line 1559 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 197:
#line 1561 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 198:
#line 1563 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 199:
#line 1567 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 200:
#line 1571 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 201:
#line 1573 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); }
				;
    break;}
case 202:
#line 1577 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 203:
#line 1581 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 204:
#line 1583 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 205:
#line 1585 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 206:
#line 1587 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 207:
#line 1589 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 208:
#line 1591 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 209:
#line 1593 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 210:
#line 1595 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 211:
#line 1597 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 212:
#line 1599 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 213:
#line 1601 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 214:
#line 1603 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 215:
#line 1605 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); ;
    break;}
case 216:
#line 1607 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); ;
    break;}
case 217:
#line 1609 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); ;
    break;}
case 218:
#line 1611 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); ;
    break;}
case 219:
#line 1613 "preproc.y"
{	yyval.str = cat4_str(yyvsp[-4].str, make1_str("in ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 220:
#line 1615 "preproc.y"
{	yyval.str = cat4_str(yyvsp[-5].str, make1_str("not in ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 221:
#line 1617 "preproc.y"
{	yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 222:
#line 1619 "preproc.y"
{	yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 223:
#line 1622 "preproc.y"
{
		yyval.str = make3_str(yyvsp[-2].str, make1_str(", "), yyvsp[0].str);
	;
    break;}
case 224:
#line 1626 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 225:
#line 1631 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 226:
#line 1635 "preproc.y"
{ yyval.str = make1_str("match full"); ;
    break;}
case 227:
#line 1636 "preproc.y"
{ yyval.str = make1_str("match partial"); ;
    break;}
case 228:
#line 1637 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 229:
#line 1640 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 230:
#line 1641 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 231:
#line 1642 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 232:
#line 1645 "preproc.y"
{ yyval.str = cat2_str(make1_str("on delete"), yyvsp[0].str); ;
    break;}
case 233:
#line 1646 "preproc.y"
{ yyval.str = cat2_str(make1_str("on update"), yyvsp[0].str); ;
    break;}
case 234:
#line 1649 "preproc.y"
{ yyval.str = make1_str("no action"); ;
    break;}
case 235:
#line 1650 "preproc.y"
{ yyval.str = make1_str("cascade"); ;
    break;}
case 236:
#line 1651 "preproc.y"
{ yyval.str = make1_str("set default"); ;
    break;}
case 237:
#line 1652 "preproc.y"
{ yyval.str = make1_str("set null"); ;
    break;}
case 238:
#line 1655 "preproc.y"
{ yyval.str = make3_str(make1_str("inherits ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 239:
#line 1656 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 240:
#line 1660 "preproc.y"
{
			yyval.str = cat5_str(cat3_str(make1_str("create"), yyvsp[-5].str, make1_str("table")), yyvsp[-3].str, yyvsp[-2].str, make1_str("as"), yyvsp[0].str); 
		;
    break;}
case 241:
#line 1665 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 242:
#line 1666 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 243:
#line 1669 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 244:
#line 1670 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 245:
#line 1673 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 246:
#line 1684 "preproc.y"
{
					yyval.str = cat3_str(make1_str("create sequence"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 247:
#line 1690 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 248:
#line 1691 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 249:
#line 1695 "preproc.y"
{
					yyval.str = cat2_str(make1_str("cache"), yyvsp[0].str);
				;
    break;}
case 250:
#line 1699 "preproc.y"
{
					yyval.str = make1_str("cycle");
				;
    break;}
case 251:
#line 1703 "preproc.y"
{
					yyval.str = cat2_str(make1_str("increment"), yyvsp[0].str);
				;
    break;}
case 252:
#line 1707 "preproc.y"
{
					yyval.str = cat2_str(make1_str("maxvalue"), yyvsp[0].str);
				;
    break;}
case 253:
#line 1711 "preproc.y"
{
					yyval.str = cat2_str(make1_str("minvalue"), yyvsp[0].str);
				;
    break;}
case 254:
#line 1715 "preproc.y"
{
					yyval.str = cat2_str(make1_str("start"), yyvsp[0].str);
				;
    break;}
case 255:
#line 1720 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 256:
#line 1721 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 257:
#line 1724 "preproc.y"
{
                                       yyval.str = yyvsp[0].str;
                               ;
    break;}
case 258:
#line 1728 "preproc.y"
{
                                       yyval.str = cat2_str(make1_str("-"), yyvsp[0].str);
                               ;
    break;}
case 259:
#line 1735 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 260:
#line 1739 "preproc.y"
{
					yyval.str = cat2_str(make1_str("-"), yyvsp[0].str);
				;
    break;}
case 261:
#line 1754 "preproc.y"
{
				yyval.str = cat4_str(cat5_str(make1_str("create"), yyvsp[-7].str, make1_str("precedural language"), yyvsp[-4].str, make1_str("handler")), yyvsp[-2].str, make1_str("langcompiler"), yyvsp[0].str);
			;
    break;}
case 262:
#line 1759 "preproc.y"
{ yyval.str = make1_str("trusted"); ;
    break;}
case 263:
#line 1760 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 264:
#line 1763 "preproc.y"
{
				yyval.str = cat2_str(make1_str("drop procedural language"), yyvsp[0].str);
			;
    break;}
case 265:
#line 1779 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create trigger"), yyvsp[-11].str, yyvsp[-10].str, yyvsp[-9].str, make1_str("on")), yyvsp[-7].str, yyvsp[-6].str, make1_str("execute procedure"), yyvsp[-3].str), make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 266:
#line 1784 "preproc.y"
{ yyval.str = make1_str("before"); ;
    break;}
case 267:
#line 1785 "preproc.y"
{ yyval.str = make1_str("after"); ;
    break;}
case 268:
#line 1789 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 269:
#line 1793 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str);
				;
    break;}
case 270:
#line 1797 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("or"), yyvsp[-2].str, make1_str("or"), yyvsp[0].str);
				;
    break;}
case 271:
#line 1802 "preproc.y"
{ yyval.str = make1_str("insert"); ;
    break;}
case 272:
#line 1803 "preproc.y"
{ yyval.str = make1_str("delete"); ;
    break;}
case 273:
#line 1804 "preproc.y"
{ yyval.str = make1_str("update"); ;
    break;}
case 274:
#line 1808 "preproc.y"
{
					yyval.str = cat3_str(make1_str("for"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 275:
#line 1813 "preproc.y"
{ yyval.str = make1_str("each"); ;
    break;}
case 276:
#line 1814 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 277:
#line 1817 "preproc.y"
{ yyval.str = make1_str("row"); ;
    break;}
case 278:
#line 1818 "preproc.y"
{ yyval.str = make1_str("statement"); ;
    break;}
case 279:
#line 1822 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 280:
#line 1824 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 281:
#line 1826 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 282:
#line 1830 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 283:
#line 1834 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 284:
#line 1837 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 285:
#line 1838 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 286:
#line 1842 "preproc.y"
{
					yyval.str = cat4_str(make1_str("drop trigger"), yyvsp[-2].str, make1_str("on"), yyvsp[0].str);
				;
    break;}
case 287:
#line 1855 "preproc.y"
{
					yyval.str = cat3_str(make1_str("create"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 288:
#line 1861 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 289:
#line 1866 "preproc.y"
{ yyval.str = make1_str("operator"); ;
    break;}
case 290:
#line 1867 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 291:
#line 1868 "preproc.y"
{ yyval.str = make1_str("aggregate"); ;
    break;}
case 292:
#line 1871 "preproc.y"
{ yyval.str = make1_str("procedure"); ;
    break;}
case 293:
#line 1872 "preproc.y"
{ yyval.str = make1_str("join"); ;
    break;}
case 294:
#line 1873 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 295:
#line 1874 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 296:
#line 1875 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 297:
#line 1878 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 298:
#line 1881 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 299:
#line 1882 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 300:
#line 1885 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 301:
#line 1889 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 302:
#line 1893 "preproc.y"
{
					yyval.str = cat2_str(make1_str("default ="), yyvsp[0].str);
				;
    break;}
case 303:
#line 1898 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 304:
#line 1899 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 305:
#line 1900 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 306:
#line 1901 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 307:
#line 1903 "preproc.y"
{
					yyval.str = cat2_str(make1_str("setof"), yyvsp[0].str);
				;
    break;}
case 308:
#line 1916 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop table"), yyvsp[0].str);
				;
    break;}
case 309:
#line 1920 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop sequence"), yyvsp[0].str);
				;
    break;}
case 310:
#line 1937 "preproc.y"
{
					if (strncmp(yyvsp[-4].str, "relative", strlen("relative")) == 0 && atol(yyvsp[-3].str) == 0L)
						yyerror("FETCH/RELATIVE at current position is not supported");

					yyval.str = cat4_str(make1_str("fetch"), yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str);
				;
    break;}
case 311:
#line 1944 "preproc.y"
{
					yyval.str = cat4_str(make1_str("fetch"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 312:
#line 1949 "preproc.y"
{ yyval.str = make1_str("forward"); ;
    break;}
case 313:
#line 1950 "preproc.y"
{ yyval.str = make1_str("backward"); ;
    break;}
case 314:
#line 1951 "preproc.y"
{ yyval.str = make1_str("relative"); ;
    break;}
case 315:
#line 1953 "preproc.y"
{
					fprintf(stderr, "FETCH/ABSOLUTE not supported, using RELATIVE");
					yyval.str = make1_str("absolute");
				;
    break;}
case 316:
#line 1957 "preproc.y"
{ yyval.str = make1_str(""); /* default */ ;
    break;}
case 317:
#line 1960 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 318:
#line 1961 "preproc.y"
{ yyval.str = make2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 319:
#line 1962 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 320:
#line 1963 "preproc.y"
{ yyval.str = make1_str("next"); ;
    break;}
case 321:
#line 1964 "preproc.y"
{ yyval.str = make1_str("prior"); ;
    break;}
case 322:
#line 1965 "preproc.y"
{ yyval.str = make1_str(""); /*default*/ ;
    break;}
case 323:
#line 1968 "preproc.y"
{ yyval.str = cat2_str(make1_str("in"), yyvsp[0].str); ;
    break;}
case 324:
#line 1969 "preproc.y"
{ yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 325:
#line 1971 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 326:
#line 1983 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("grant"), yyvsp[-5].str, make1_str("on"), yyvsp[-3].str, make1_str("to")), yyvsp[-1].str);
				;
    break;}
case 327:
#line 1989 "preproc.y"
{
				 yyval.str = make1_str("all privileges");
				;
    break;}
case 328:
#line 1993 "preproc.y"
{
				 yyval.str = make1_str("all");
				;
    break;}
case 329:
#line 1997 "preproc.y"
{
				 yyval.str = yyvsp[0].str;
				;
    break;}
case 330:
#line 2003 "preproc.y"
{
						yyval.str = yyvsp[0].str;
				;
    break;}
case 331:
#line 2007 "preproc.y"
{
						yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 332:
#line 2013 "preproc.y"
{
						yyval.str = make1_str("select");
				;
    break;}
case 333:
#line 2017 "preproc.y"
{
						yyval.str = make1_str("insert");
				;
    break;}
case 334:
#line 2021 "preproc.y"
{
						yyval.str = make1_str("update");
				;
    break;}
case 335:
#line 2025 "preproc.y"
{
						yyval.str = make1_str("delete");
				;
    break;}
case 336:
#line 2029 "preproc.y"
{
						yyval.str = make1_str("rule");
				;
    break;}
case 337:
#line 2035 "preproc.y"
{
						yyval.str = make1_str("public");
				;
    break;}
case 338:
#line 2039 "preproc.y"
{
						yyval.str = cat2_str(make1_str("group"), yyvsp[0].str);
				;
    break;}
case 339:
#line 2043 "preproc.y"
{
						yyval.str = yyvsp[0].str;
				;
    break;}
case 340:
#line 2049 "preproc.y"
{
					yyerror("WITH GRANT OPTION is not supported.  Only relation owners can set privileges");
				 ;
    break;}
case 342:
#line 2064 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("revoke"), yyvsp[-4].str, make1_str("on"), yyvsp[-2].str, make1_str("from")), yyvsp[0].str);
				;
    break;}
case 343:
#line 2083 "preproc.y"
{
					/* should check that access_method is valid,
					   etc ... but doesn't */
					yyval.str = cat5_str(cat5_str(make1_str("create"), yyvsp[-9].str, make1_str("index"), yyvsp[-7].str, make1_str("on")), yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("("), yyvsp[-2].str, make1_str(")")), yyvsp[0].str);
				;
    break;}
case 344:
#line 2090 "preproc.y"
{ yyval.str = make1_str("unique"); ;
    break;}
case 345:
#line 2091 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 346:
#line 2094 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 347:
#line 2095 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 348:
#line 2098 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 349:
#line 2099 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 350:
#line 2102 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 351:
#line 2103 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 352:
#line 2107 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-5].str, make3_str(make1_str("("), yyvsp[-3].str, ")"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 353:
#line 2113 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 354:
#line 2118 "preproc.y"
{ yyval.str = cat2_str(make1_str(":"), yyvsp[0].str); ;
    break;}
case 355:
#line 2119 "preproc.y"
{ yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 356:
#line 2120 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 357:
#line 2129 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 358:
#line 2130 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 359:
#line 2131 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 360:
#line 2142 "preproc.y"
{
					yyval.str = cat3_str(make1_str("extend index"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 361:
#line 2179 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create function"), yyvsp[-8].str, yyvsp[-7].str, make1_str("returns"), yyvsp[-5].str), yyvsp[-4].str, make1_str("as"), yyvsp[-2].str, make1_str("language")), yyvsp[0].str);
				;
    break;}
case 362:
#line 2183 "preproc.y"
{ yyval.str = cat2_str(make1_str("with"), yyvsp[0].str); ;
    break;}
case 363:
#line 2184 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 364:
#line 2187 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 365:
#line 2188 "preproc.y"
{ yyval.str = make1_str("()"); ;
    break;}
case 366:
#line 2191 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 367:
#line 2193 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 368:
#line 2197 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 369:
#line 2202 "preproc.y"
{ yyval.str = make1_str("setof"); ;
    break;}
case 370:
#line 2203 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 371:
#line 2225 "preproc.y"
{
					yyval.str = cat3_str(make1_str("drop"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 372:
#line 2230 "preproc.y"
{  yyval.str = make1_str("type"); ;
    break;}
case 373:
#line 2231 "preproc.y"
{  yyval.str = make1_str("index"); ;
    break;}
case 374:
#line 2232 "preproc.y"
{  yyval.str = make1_str("rule"); ;
    break;}
case 375:
#line 2233 "preproc.y"
{  yyval.str = make1_str("view"); ;
    break;}
case 376:
#line 2238 "preproc.y"
{
						yyval.str = cat3_str(make1_str("drop aggregate"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 377:
#line 2243 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 378:
#line 2244 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 379:
#line 2249 "preproc.y"
{
						yyval.str = cat3_str(make1_str("drop function"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 380:
#line 2256 "preproc.y"
{
					yyval.str = cat3_str(make1_str("drop operator"), yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 383:
#line 2263 "preproc.y"
{ yyval.str = make1_str("+"); ;
    break;}
case 384:
#line 2264 "preproc.y"
{ yyval.str = make1_str("-"); ;
    break;}
case 385:
#line 2265 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 386:
#line 2266 "preproc.y"
{ yyval.str = make1_str("%"); ;
    break;}
case 387:
#line 2267 "preproc.y"
{ yyval.str = make1_str("/"); ;
    break;}
case 388:
#line 2268 "preproc.y"
{ yyval.str = make1_str("<"); ;
    break;}
case 389:
#line 2269 "preproc.y"
{ yyval.str = make1_str(">"); ;
    break;}
case 390:
#line 2270 "preproc.y"
{ yyval.str = make1_str("="); ;
    break;}
case 391:
#line 2274 "preproc.y"
{
				   yyerror("parser: argument type missing (use NONE for unary operators)");
				;
    break;}
case 392:
#line 2278 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 393:
#line 2280 "preproc.y"
{ yyval.str = cat2_str(make1_str("none,"), yyvsp[0].str); ;
    break;}
case 394:
#line 2282 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-2].str, make1_str(", none")); ;
    break;}
case 395:
#line 2296 "preproc.y"
{
					yyval.str = cat4_str(cat5_str(make1_str("alter table"), yyvsp[-6].str, yyvsp[-5].str, make1_str("rename"), yyvsp[-3].str), yyvsp[-2].str, make1_str("to"), yyvsp[0].str);
				;
    break;}
case 396:
#line 2301 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 397:
#line 2302 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 398:
#line 2305 "preproc.y"
{ yyval.str = make1_str("colmunn"); ;
    break;}
case 399:
#line 2306 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 400:
#line 2320 "preproc.y"
{ QueryIsRule=1; ;
    break;}
case 401:
#line 2323 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create rule"), yyvsp[-10].str, make1_str("as on"), yyvsp[-6].str, make1_str("to")), yyvsp[-4].str, yyvsp[-3].str, make1_str("do"), yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 402:
#line 2328 "preproc.y"
{ yyval.str = make1_str("nothing"); ;
    break;}
case 403:
#line 2329 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 404:
#line 2330 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 405:
#line 2331 "preproc.y"
{ yyval.str = cat3_str(make1_str("["), yyvsp[-1].str, make1_str("]")); ;
    break;}
case 406:
#line 2332 "preproc.y"
{ yyval.str = cat3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 407:
#line 2335 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 408:
#line 2336 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 409:
#line 2340 "preproc.y"
{  yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 410:
#line 2342 "preproc.y"
{  yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, make1_str(";")); ;
    break;}
case 411:
#line 2344 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, make1_str(";")); ;
    break;}
case 416:
#line 2354 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 417:
#line 2358 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 418:
#line 2364 "preproc.y"
{ yyval.str = make1_str("select"); ;
    break;}
case 419:
#line 2365 "preproc.y"
{ yyval.str = make1_str("update"); ;
    break;}
case 420:
#line 2366 "preproc.y"
{ yyval.str = make1_str("delete"); ;
    break;}
case 421:
#line 2367 "preproc.y"
{ yyval.str = make1_str("insert"); ;
    break;}
case 422:
#line 2370 "preproc.y"
{ yyval.str = make1_str("instead"); ;
    break;}
case 423:
#line 2371 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 424:
#line 2384 "preproc.y"
{
					yyval.str = cat2_str(make1_str("notify"), yyvsp[0].str);
				;
    break;}
case 425:
#line 2390 "preproc.y"
{
					yyval.str = cat2_str(make1_str("listen"), yyvsp[0].str);
                                ;
    break;}
case 426:
#line 2396 "preproc.y"
{
					yyval.str = cat2_str(make1_str("unlisten"), yyvsp[0].str);
                                ;
    break;}
case 427:
#line 2400 "preproc.y"
{
					yyval.str = make1_str("unlisten *");
                                ;
    break;}
case 428:
#line 2417 "preproc.y"
{ yyval.str = make1_str("rollback"); ;
    break;}
case 429:
#line 2418 "preproc.y"
{ yyval.str = make1_str("begin transaction"); ;
    break;}
case 430:
#line 2419 "preproc.y"
{ yyval.str = make1_str("commit"); ;
    break;}
case 431:
#line 2420 "preproc.y"
{ yyval.str = make1_str("commit"); ;
    break;}
case 432:
#line 2421 "preproc.y"
{ yyval.str = make1_str("rollback"); ;
    break;}
case 433:
#line 2423 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 434:
#line 2424 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 435:
#line 2425 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 436:
#line 2436 "preproc.y"
{
					yyval.str = cat4_str(make1_str("create view"), yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
				;
    break;}
case 437:
#line 2450 "preproc.y"
{
					yyval.str = cat2_str(make1_str("load"), yyvsp[0].str);
				;
    break;}
case 438:
#line 2464 "preproc.y"
{
					if (strlen(yyvsp[-1].str) == 0 || strlen(yyvsp[0].str) == 0) 
						yyerror("CREATE DATABASE WITH requires at least an option");
#ifndef MULTIBYTE
					if (strlen(yyvsp[0].str) != 0)
						yyerror("WITH ENCODING is not supported");
#endif
					yyval.str = cat5_str(make1_str("create database"), yyvsp[-3].str, make1_str("with"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 439:
#line 2474 "preproc.y"
{
					yyval.str = cat2_str(make1_str("create database"), yyvsp[0].str);
				;
    break;}
case 440:
#line 2479 "preproc.y"
{ yyval.str = cat2_str(make1_str("location ="), yyvsp[0].str); ;
    break;}
case 441:
#line 2480 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 442:
#line 2483 "preproc.y"
{ yyval.str = cat2_str(make1_str("encoding ="), yyvsp[0].str); ;
    break;}
case 443:
#line 2484 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 444:
#line 2487 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 445:
#line 2488 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 446:
#line 2489 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 447:
#line 2492 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 448:
#line 2493 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 449:
#line 2494 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 450:
#line 2505 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop database"), yyvsp[0].str);
				;
    break;}
case 451:
#line 2519 "preproc.y"
{
				   yyval.str = cat4_str(make1_str("cluster"), yyvsp[-2].str, make1_str("on"), yyvsp[0].str);
				;
    break;}
case 452:
#line 2533 "preproc.y"
{
					yyval.str = cat3_str(make1_str("vacuum"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 453:
#line 2537 "preproc.y"
{
					if ( strlen(yyvsp[0].str) > 0 && strlen(yyvsp[-1].str) == 0 )
						yyerror("parser: syntax error at or near \"(\"");
					yyval.str = cat5_str(make1_str("vacuum"), yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 454:
#line 2544 "preproc.y"
{ yyval.str = make1_str("verbose"); ;
    break;}
case 455:
#line 2545 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 456:
#line 2548 "preproc.y"
{ yyval.str = make1_str("analyse"); ;
    break;}
case 457:
#line 2549 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 458:
#line 2552 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 459:
#line 2553 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 460:
#line 2557 "preproc.y"
{ yyval.str=yyvsp[0].str; ;
    break;}
case 461:
#line 2559 "preproc.y"
{ yyval.str=cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 462:
#line 2571 "preproc.y"
{
					yyval.str = cat3_str(make1_str("explain"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 469:
#line 2611 "preproc.y"
{
					yyval.str = cat3_str(make1_str("insert into"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 470:
#line 2617 "preproc.y"
{
					yyval.str = make3_str(make1_str("values("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 471:
#line 2621 "preproc.y"
{
					yyval.str = make1_str("default values");
				;
    break;}
case 472:
#line 2625 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 473:
#line 2629 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-5].str, make1_str(") values ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 474:
#line 2633 "preproc.y"
{
					yyval.str = make4_str(make1_str("("), yyvsp[-2].str, make1_str(")"), yyvsp[0].str);
				;
    break;}
case 475:
#line 2638 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 476:
#line 2639 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 477:
#line 2644 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 478:
#line 2646 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 479:
#line 2650 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 480:
#line 2665 "preproc.y"
{
					yyval.str = cat3_str(make1_str("delete from"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 481:
#line 2671 "preproc.y"
{
					yyval.str = cat3_str(make1_str("lock"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 482:
#line 2675 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "MODE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
						yyerror(errortext);
					}
					if (yyvsp[-3].str != NULL)
                                        {
                                                if (strcasecmp(yyvsp[-3].str, "SHARE"))
						{
                                                        sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[-3].str);
	                                                yyerror(errortext);
						}
                                                if (strcasecmp(yyvsp[-1].str, "EXCLUSIVE"))
						{
							sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[-1].str);
	                                                yyerror(errortext);
						}
					}
                                        else
                                        {
                                                if (strcasecmp(yyvsp[-1].str, "SHARE") && strcasecmp(yyvsp[-1].str, "EXCLUSIVE"))
						{
                                               		sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[-1].str);
	                                                yyerror(errortext);
						}
                                        }

					yyval.str=cat4_str(cat5_str(make1_str("lock"), yyvsp[-6].str, yyvsp[-5].str, make1_str("in"), yyvsp[-3].str), make1_str("row"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 483:
#line 2706 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "MODE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
                                                yyerror(errortext);
					}                                
                                        if (strcasecmp(yyvsp[-2].str, "ACCESS"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[-2].str);
                                                yyerror(errortext);
					}
                                        if (strcasecmp(yyvsp[-1].str, "SHARE") && strcasecmp(yyvsp[-1].str, "EXCLUSIVE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[-1].str);
                                                yyerror(errortext);
					}

					yyval.str=cat3_str(cat5_str(make1_str("lock"), yyvsp[-5].str, yyvsp[-4].str, make1_str("in"), yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 484:
#line 2726 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "MODE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
						yyerror(errortext);
					}
                                        if (strcasecmp(yyvsp[-1].str, "SHARE") && strcasecmp(yyvsp[-1].str, "EXCLUSIVE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[-1].str);
                                                yyerror(errortext);
					}

					yyval.str=cat2_str(cat5_str(make1_str("lock"), yyvsp[-4].str, yyvsp[-3].str, make1_str("in"), yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 485:
#line 2742 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 486:
#line 2743 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 487:
#line 2760 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("update"), yyvsp[-4].str, make1_str("set"), yyvsp[-2].str, yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 488:
#line 2773 "preproc.y"
{
					struct cursor *ptr, *this;
	
					for (ptr = cur; ptr != NULL; ptr = ptr->next)
					{
						if (strcmp(yyvsp[-5].str, ptr->name) == 0)
						{
						        /* re-definition is a bug */
							sprintf(errortext, "cursor %s already defined", yyvsp[-5].str);
							yyerror(errortext);
				                }
        				}
                        
        				this = (struct cursor *) mm_alloc(sizeof(struct cursor));

			        	/* initial definition */
				        this->next = cur;
				        this->name = yyvsp[-5].str;
					this->connection = connection;
				        this->command =  cat2_str(cat5_str(make1_str("declare"), mm_strdup(yyvsp[-5].str), yyvsp[-4].str, make1_str("cursor for"), yyvsp[-1].str), yyvsp[0].str);
					this->argsinsert = argsinsert;
					this->argsresult = argsresult;
					argsinsert = argsresult = NULL;
											
			        	cur = this;
					
					yyval.str = cat3_str(make1_str("/*"), mm_strdup(this->command), make1_str("*/"));
				;
    break;}
case 489:
#line 2803 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 490:
#line 2804 "preproc.y"
{ yyval.str = make1_str("insensitive"); ;
    break;}
case 491:
#line 2805 "preproc.y"
{ yyval.str = make1_str("scroll"); ;
    break;}
case 492:
#line 2806 "preproc.y"
{ yyval.str = make1_str("insensitive scroll"); ;
    break;}
case 493:
#line 2807 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 494:
#line 2810 "preproc.y"
{ yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 495:
#line 2811 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 496:
#line 2815 "preproc.y"
{ yyval.str = make1_str("read only"); ;
    break;}
case 497:
#line 2817 "preproc.y"
{
                               yyerror("DECLARE/UPDATE not supported; Cursors must be READ ONLY.");
                       ;
    break;}
case 498:
#line 2822 "preproc.y"
{ yyval.str = make2_str(make1_str("of"), yyvsp[0].str); ;
    break;}
case 499:
#line 2839 "preproc.y"
{
					if (strlen(yyvsp[-1].str) > 0 && ForUpdateNotAllowed != 0)
							yyerror("SELECT FOR UPDATE is not allowed in this context");

					ForUpdateNotAllowed = 0;
					yyval.str = cat4_str(yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 500:
#line 2856 "preproc.y"
{
                               yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); 
                        ;
    break;}
case 501:
#line 2860 "preproc.y"
{
                               yyval.str = yyvsp[0].str; 
                        ;
    break;}
case 502:
#line 2864 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-2].str, make1_str("except"), yyvsp[0].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 503:
#line 2869 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-3].str, make1_str("union"), yyvsp[-1].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 504:
#line 2874 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-3].str, make1_str("intersect"), yyvsp[-1].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 505:
#line 2884 "preproc.y"
{
					yyval.str = cat4_str(cat5_str(make1_str("select"), yyvsp[-6].str, yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
					if (strlen(yyvsp[-1].str) > 0 || strlen(yyvsp[0].str) > 0)
						ForUpdateNotAllowed = 1;
				;
    break;}
case 506:
#line 2891 "preproc.y"
{ yyval.str= cat4_str(make1_str("into"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 507:
#line 2892 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 508:
#line 2893 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 509:
#line 2896 "preproc.y"
{ yyval.str = make1_str("table"); ;
    break;}
case 510:
#line 2897 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 511:
#line 2900 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 512:
#line 2901 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 513:
#line 2904 "preproc.y"
{ yyval.str = make1_str("distinct"); ;
    break;}
case 514:
#line 2905 "preproc.y"
{ yyval.str = cat2_str(make1_str("distinct on"), yyvsp[0].str); ;
    break;}
case 515:
#line 2906 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 516:
#line 2907 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 517:
#line 2910 "preproc.y"
{ yyval.str = cat2_str(make1_str("order by"), yyvsp[0].str); ;
    break;}
case 518:
#line 2911 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 519:
#line 2914 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 520:
#line 2915 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 521:
#line 2919 "preproc.y"
{
					 yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 522:
#line 2924 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 523:
#line 2925 "preproc.y"
{ yyval.str = make1_str("using <"); ;
    break;}
case 524:
#line 2926 "preproc.y"
{ yyval.str = make1_str("using >"); ;
    break;}
case 525:
#line 2927 "preproc.y"
{ yyval.str = make1_str("asc"); ;
    break;}
case 526:
#line 2928 "preproc.y"
{ yyval.str = make1_str("desc"); ;
    break;}
case 527:
#line 2929 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 528:
#line 2933 "preproc.y"
{ yyval.str = cat4_str(make1_str("limit"), yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 529:
#line 2935 "preproc.y"
{ yyval.str = cat4_str(make1_str("limit"), yyvsp[-2].str, make1_str("offset"), yyvsp[0].str); ;
    break;}
case 530:
#line 2937 "preproc.y"
{ yyval.str = cat2_str(make1_str("limit"), yyvsp[0].str); ;
    break;}
case 531:
#line 2939 "preproc.y"
{ yyval.str = cat4_str(make1_str("offset"), yyvsp[-2].str, make1_str("limit"), yyvsp[0].str); ;
    break;}
case 532:
#line 2941 "preproc.y"
{ yyval.str = cat2_str(make1_str("offset"), yyvsp[0].str); ;
    break;}
case 533:
#line 2943 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 534:
#line 2946 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 535:
#line 2947 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 536:
#line 2948 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 537:
#line 2951 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 538:
#line 2952 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 539:
#line 2962 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 540:
#line 2963 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 541:
#line 2966 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 542:
#line 2969 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 543:
#line 2971 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 544:
#line 2974 "preproc.y"
{ yyval.str = cat2_str(make1_str("groub by"), yyvsp[0].str); ;
    break;}
case 545:
#line 2975 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 546:
#line 2979 "preproc.y"
{
					yyval.str = cat2_str(make1_str("having"), yyvsp[0].str);
				;
    break;}
case 547:
#line 2982 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 548:
#line 2986 "preproc.y"
{
                	yyval.str = make1_str("for update"); 
		;
    break;}
case 549:
#line 2990 "preproc.y"
{
                        yyval.str = make1_str("");
                ;
    break;}
case 550:
#line 2995 "preproc.y"
{
			yyval.str = cat2_str(make1_str("of"), yyvsp[0].str);
	      ;
    break;}
case 551:
#line 2999 "preproc.y"
{
                        yyval.str = make1_str("");
              ;
    break;}
case 552:
#line 3013 "preproc.y"
{
			yyval.str = cat2_str(make1_str("from"), yyvsp[0].str);
		;
    break;}
case 553:
#line 3017 "preproc.y"
{
			yyval.str = make1_str("");
		;
    break;}
case 554:
#line 3023 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 555:
#line 3025 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 556:
#line 3027 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 557:
#line 3031 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 558:
#line 3033 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 559:
#line 3037 "preproc.y"
{
                                        yyval.str = cat3_str(yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
                                ;
    break;}
case 560:
#line 3041 "preproc.y"
{
                                        yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 561:
#line 3045 "preproc.y"
{
                                        yyval.str = yyvsp[0].str;
                                ;
    break;}
case 562:
#line 3055 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 563:
#line 3057 "preproc.y"
{       yyerror("UNION JOIN not yet implemented"); ;
    break;}
case 564:
#line 3061 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 565:
#line 3067 "preproc.y"
{
                                        yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 566:
#line 3071 "preproc.y"
{
                                        yyval.str = yyvsp[0].str;
                                ;
    break;}
case 567:
#line 3084 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-3].str, make1_str("join"), yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 568:
#line 3088 "preproc.y"
{
					yyval.str = cat4_str(make1_str("natural"), yyvsp[-2].str, make1_str("join"), yyvsp[0].str);
                                ;
    break;}
case 569:
#line 3092 "preproc.y"
{ 	yyval.str = cat2_str(make1_str("cross join"), yyvsp[0].str); ;
    break;}
case 570:
#line 3097 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("full"), yyvsp[0].str);
                                        fprintf(stderr,"FULL OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 571:
#line 3102 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("left"), yyvsp[0].str);
                                        fprintf(stderr,"LEFT OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 572:
#line 3107 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("right"), yyvsp[0].str);
                                        fprintf(stderr,"RIGHT OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 573:
#line 3112 "preproc.y"
{
                                        yyval.str = make1_str("outer");
                                        fprintf(stderr,"OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 574:
#line 3117 "preproc.y"
{
                                        yyval.str = make1_str("inner");
				;
    break;}
case 575:
#line 3121 "preproc.y"
{
                                        yyval.str = make1_str("");
				;
    break;}
case 576:
#line 3126 "preproc.y"
{ yyval.str = make1_str("outer"); ;
    break;}
case 577:
#line 3127 "preproc.y"
{ yyval.str = make1_str("");  /* no qualifiers */ ;
    break;}
case 578:
#line 3138 "preproc.y"
{ yyval.str = make3_str(make1_str("using ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 579:
#line 3139 "preproc.y"
{ yyval.str = cat2_str(make1_str("on"), yyvsp[0].str); ;
    break;}
case 580:
#line 3142 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 581:
#line 3143 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 582:
#line 3147 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 583:
#line 3152 "preproc.y"
{ yyval.str = cat2_str(make1_str("where"), yyvsp[0].str); ;
    break;}
case 584:
#line 3153 "preproc.y"
{ yyval.str = make1_str("");  /* no qualifiers */ ;
    break;}
case 585:
#line 3157 "preproc.y"
{
					/* normal relations */
					yyval.str = yyvsp[0].str;
				;
    break;}
case 586:
#line 3162 "preproc.y"
{
					/* inheritance query */
					yyval.str = cat2_str(yyvsp[-1].str, make1_str("*"));
				;
    break;}
case 587:
#line 3168 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 588:
#line 3174 "preproc.y"
{
                            yyval.index.index1 = atol(yyvsp[-2].str);
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 589:
#line 3180 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 590:
#line 3188 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 591:
#line 3194 "preproc.y"
{
                            yyval.index.index1 = atol(yyvsp[-2].str);
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 592:
#line 3200 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 593:
#line 3218 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].index.str);
				;
    break;}
case 594:
#line 3221 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 595:
#line 3223 "preproc.y"
{
					yyval.str = cat2_str(make1_str("setof"), yyvsp[0].str);
				;
    break;}
case 597:
#line 3229 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 598:
#line 3230 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 599:
#line 3234 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 600:
#line 3239 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 601:
#line 3240 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 602:
#line 3241 "preproc.y"
{ yyval.str = make1_str("at"); ;
    break;}
case 603:
#line 3242 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 604:
#line 3243 "preproc.y"
{ yyval.str = make1_str("break"); ;
    break;}
case 605:
#line 3244 "preproc.y"
{ yyval.str = make1_str("call"); ;
    break;}
case 606:
#line 3245 "preproc.y"
{ yyval.str = make1_str("connect"); ;
    break;}
case 607:
#line 3246 "preproc.y"
{ yyval.str = make1_str("connection"); ;
    break;}
case 608:
#line 3247 "preproc.y"
{ yyval.str = make1_str("continue"); ;
    break;}
case 609:
#line 3248 "preproc.y"
{ yyval.str = make1_str("deallocate"); ;
    break;}
case 610:
#line 3249 "preproc.y"
{ yyval.str = make1_str("disconnect"); ;
    break;}
case 611:
#line 3250 "preproc.y"
{ yyval.str = make1_str("found"); ;
    break;}
case 612:
#line 3251 "preproc.y"
{ yyval.str = make1_str("go"); ;
    break;}
case 613:
#line 3252 "preproc.y"
{ yyval.str = make1_str("goto"); ;
    break;}
case 614:
#line 3253 "preproc.y"
{ yyval.str = make1_str("identified"); ;
    break;}
case 615:
#line 3254 "preproc.y"
{ yyval.str = make1_str("immediate"); ;
    break;}
case 616:
#line 3255 "preproc.y"
{ yyval.str = make1_str("indicator"); ;
    break;}
case 617:
#line 3256 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 618:
#line 3257 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 619:
#line 3258 "preproc.y"
{ yyval.str = make1_str("open"); ;
    break;}
case 620:
#line 3259 "preproc.y"
{ yyval.str = make1_str("prepare"); ;
    break;}
case 621:
#line 3260 "preproc.y"
{ yyval.str = make1_str("release"); ;
    break;}
case 622:
#line 3261 "preproc.y"
{ yyval.str = make1_str("section"); ;
    break;}
case 623:
#line 3262 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 624:
#line 3263 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 625:
#line 3264 "preproc.y"
{ yyval.str = make1_str("sqlerror"); ;
    break;}
case 626:
#line 3265 "preproc.y"
{ yyval.str = make1_str("sqlprint"); ;
    break;}
case 627:
#line 3266 "preproc.y"
{ yyval.str = make1_str("sqlwarning"); ;
    break;}
case 628:
#line 3267 "preproc.y"
{ yyval.str = make1_str("stop"); ;
    break;}
case 629:
#line 3268 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 630:
#line 3269 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 631:
#line 3270 "preproc.y"
{ yyval.str = make1_str("var"); ;
    break;}
case 632:
#line 3271 "preproc.y"
{ yyval.str = make1_str("whenever"); ;
    break;}
case 633:
#line 3280 "preproc.y"
{
					yyval.str = cat2_str(make1_str("float"), yyvsp[0].str);
				;
    break;}
case 634:
#line 3284 "preproc.y"
{
					yyval.str = make1_str("double precision");
				;
    break;}
case 635:
#line 3288 "preproc.y"
{
					yyval.str = cat2_str(make1_str("decimal"), yyvsp[0].str);
				;
    break;}
case 636:
#line 3292 "preproc.y"
{
					yyval.str = cat2_str(make1_str("numeric"), yyvsp[0].str);
				;
    break;}
case 637:
#line 3298 "preproc.y"
{	yyval.str = make1_str("float"); ;
    break;}
case 638:
#line 3300 "preproc.y"
{	yyval.str = make1_str("double precision"); ;
    break;}
case 639:
#line 3302 "preproc.y"
{	yyval.str = make1_str("decimal"); ;
    break;}
case 640:
#line 3304 "preproc.y"
{	yyval.str = make1_str("numeric"); ;
    break;}
case 641:
#line 3308 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1)
						yyerror("precision for FLOAT must be at least 1");
					else if (atol(yyvsp[-1].str) >= 16)
						yyerror("precision for FLOAT must be less than 16");
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 642:
#line 3316 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 643:
#line 3322 "preproc.y"
{
					if (atol(yyvsp[-3].str) < 1 || atol(yyvsp[-3].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-3].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					if (atol(yyvsp[-1].str) < 0 || atol(yyvsp[-1].str) > atol(yyvsp[-3].str)) {
						sprintf(errortext, "NUMERIC scale %s must be between 0 and precision %s", yyvsp[-1].str, yyvsp[-3].str);
						yyerror(errortext);
					}
					yyval.str = cat3_str(make2_str(make1_str("("), yyvsp[-3].str), make1_str(","), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 644:
#line 3334 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1 || atol(yyvsp[-1].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-1].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 645:
#line 3342 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 646:
#line 3348 "preproc.y"
{
					if (atol(yyvsp[-3].str) < 1 || atol(yyvsp[-3].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-3].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					if (atol(yyvsp[-1].str) < 0 || atol(yyvsp[-1].str) > atol(yyvsp[-3].str)) {
						sprintf(errortext, "NUMERIC scale %s must be between 0 and precision %s", yyvsp[-1].str, yyvsp[-3].str);
						yyerror(errortext);
					}
					yyval.str = cat3_str(make2_str(make1_str("("), yyvsp[-3].str), make1_str(","), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 647:
#line 3360 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1 || atol(yyvsp[-1].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-1].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 648:
#line 3368 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 649:
#line 3381 "preproc.y"
{
					if (strncasecmp(yyvsp[-3].str, "char", strlen("char")) && strncasecmp(yyvsp[-3].str, "varchar", strlen("varchar")))
						yyerror("internal parsing error; unrecognized character type");
					if (atol(yyvsp[-1].str) < 1) {
						sprintf(errortext, "length for '%s' type must be at least 1",yyvsp[-3].str);
						yyerror(errortext);
					}
					else if (atol(yyvsp[-1].str) > 4096) {
						/* we can store a char() of length up to the size
						 * of a page (8KB) - page headers and friends but
						 * just to be safe here...	- ay 6/95
						 * XXX note this hardcoded limit - thomas 1997-07-13
						 */
						sprintf(errortext, "length for type '%s' cannot exceed 4096",yyvsp[-3].str);
						yyerror(errortext);
					}

					yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 650:
#line 3401 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 651:
#line 3407 "preproc.y"
{
					if (strlen(yyvsp[0].str) > 0) 
						fprintf(stderr, "COLLATE %s not yet implemented",yyvsp[0].str);

					yyval.str = cat4_str(make1_str("character"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 652:
#line 3413 "preproc.y"
{ yyval.str = cat2_str(make1_str("char"), yyvsp[0].str); ;
    break;}
case 653:
#line 3414 "preproc.y"
{ yyval.str = make1_str("varchar"); ;
    break;}
case 654:
#line 3415 "preproc.y"
{ yyval.str = cat2_str(make1_str("national character"), yyvsp[0].str); ;
    break;}
case 655:
#line 3416 "preproc.y"
{ yyval.str = cat2_str(make1_str("nchar"), yyvsp[0].str); ;
    break;}
case 656:
#line 3419 "preproc.y"
{ yyval.str = make1_str("varying"); ;
    break;}
case 657:
#line 3420 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 658:
#line 3423 "preproc.y"
{ yyval.str = cat2_str(make1_str("character set"), yyvsp[0].str); ;
    break;}
case 659:
#line 3424 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 660:
#line 3427 "preproc.y"
{ yyval.str = cat2_str(make1_str("collate"), yyvsp[0].str); ;
    break;}
case 661:
#line 3428 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 662:
#line 3432 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 663:
#line 3436 "preproc.y"
{
					yyval.str = cat2_str(make1_str("timestamp"), yyvsp[0].str);
				;
    break;}
case 664:
#line 3440 "preproc.y"
{
					yyval.str = make1_str("time");
				;
    break;}
case 665:
#line 3444 "preproc.y"
{
					yyval.str = cat2_str(make1_str("interval"), yyvsp[0].str);
				;
    break;}
case 666:
#line 3449 "preproc.y"
{ yyval.str = make1_str("year"); ;
    break;}
case 667:
#line 3450 "preproc.y"
{ yyval.str = make1_str("month"); ;
    break;}
case 668:
#line 3451 "preproc.y"
{ yyval.str = make1_str("day"); ;
    break;}
case 669:
#line 3452 "preproc.y"
{ yyval.str = make1_str("hour"); ;
    break;}
case 670:
#line 3453 "preproc.y"
{ yyval.str = make1_str("minute"); ;
    break;}
case 671:
#line 3454 "preproc.y"
{ yyval.str = make1_str("second"); ;
    break;}
case 672:
#line 3457 "preproc.y"
{ yyval.str = make1_str("with time zone"); ;
    break;}
case 673:
#line 3458 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 674:
#line 3461 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 675:
#line 3462 "preproc.y"
{ yyval.str = make1_str("year to #month"); ;
    break;}
case 676:
#line 3463 "preproc.y"
{ yyval.str = make1_str("day to hour"); ;
    break;}
case 677:
#line 3464 "preproc.y"
{ yyval.str = make1_str("day to minute"); ;
    break;}
case 678:
#line 3465 "preproc.y"
{ yyval.str = make1_str("day to second"); ;
    break;}
case 679:
#line 3466 "preproc.y"
{ yyval.str = make1_str("hour to minute"); ;
    break;}
case 680:
#line 3467 "preproc.y"
{ yyval.str = make1_str("minute to second"); ;
    break;}
case 681:
#line 3468 "preproc.y"
{ yyval.str = make1_str("hour to second"); ;
    break;}
case 682:
#line 3469 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 683:
#line 3480 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 684:
#line 3482 "preproc.y"
{
					yyval.str = make1_str("null");
				;
    break;}
case 685:
#line 3497 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-5].str, make1_str(") in ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 686:
#line 3501 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-6].str, make1_str(") not in ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 687:
#line 3505 "preproc.y"
{
					yyval.str = make4_str(make5_str(make1_str("("), yyvsp[-6].str, make1_str(")"), yyvsp[-4].str, yyvsp[-3].str), make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 688:
#line 3509 "preproc.y"
{
					yyval.str = make3_str(make5_str(make1_str("("), yyvsp[-5].str, make1_str(")"), yyvsp[-3].str, make1_str("(")), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 689:
#line 3513 "preproc.y"
{
					yyval.str = cat3_str(make3_str(make1_str("("), yyvsp[-5].str, make1_str(")")), yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 690:
#line 3519 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 691:
#line 3524 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 692:
#line 3525 "preproc.y"
{ yyval.str = "<"; ;
    break;}
case 693:
#line 3526 "preproc.y"
{ yyval.str = "="; ;
    break;}
case 694:
#line 3527 "preproc.y"
{ yyval.str = ">"; ;
    break;}
case 695:
#line 3528 "preproc.y"
{ yyval.str = "+"; ;
    break;}
case 696:
#line 3529 "preproc.y"
{ yyval.str = "-"; ;
    break;}
case 697:
#line 3530 "preproc.y"
{ yyval.str = "*"; ;
    break;}
case 698:
#line 3531 "preproc.y"
{ yyval.str = "%"; ;
    break;}
case 699:
#line 3532 "preproc.y"
{ yyval.str = "/"; ;
    break;}
case 700:
#line 3535 "preproc.y"
{ yyval.str = make1_str("ANY"); ;
    break;}
case 701:
#line 3536 "preproc.y"
{ yyval.str = make1_str("ALL"); ;
    break;}
case 702:
#line 3541 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 703:
#line 3545 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 704:
#line 3560 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 705:
#line 3564 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 706:
#line 3566 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 707:
#line 3568 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 708:
#line 3572 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 709:
#line 3574 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 710:
#line 3576 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 711:
#line 3578 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 712:
#line 3580 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 713:
#line 3582 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 714:
#line 3584 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 715:
#line 3586 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 716:
#line 3588 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 717:
#line 3590 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 718:
#line 3592 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-2].str, make1_str("= NULL")); ;
    break;}
case 719:
#line 3594 "preproc.y"
{       yyval.str = cat2_str(make1_str("= NULL"), yyvsp[0].str); ;
    break;}
case 720:
#line 3596 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 721:
#line 3601 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 722:
#line 3603 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 723:
#line 3605 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 724:
#line 3609 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 725:
#line 3613 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 726:
#line 3615 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 727:
#line 3617 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 728:
#line 3619 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 729:
#line 3621 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 730:
#line 3623 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 731:
#line 3625 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make1_str("(*)")); 
				;
    break;}
case 732:
#line 3629 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 733:
#line 3633 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 734:
#line 3637 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 735:
#line 3641 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 736:
#line 3645 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 737:
#line 3651 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 738:
#line 3655 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 739:
#line 3661 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 740:
#line 3665 "preproc.y"
{
  		     		        yyval.str = make1_str("user");
			     	;
    break;}
case 741:
#line 3669 "preproc.y"
{
					yyval.str = make3_str(make1_str("exists("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 742:
#line 3673 "preproc.y"
{
					yyval.str = make3_str(make1_str("extract("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 743:
#line 3677 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 744:
#line 3681 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 745:
#line 3686 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 746:
#line 3690 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 747:
#line 3694 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 748:
#line 3698 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 749:
#line 3702 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 750:
#line 3704 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 751:
#line 3706 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 752:
#line 3708 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 753:
#line 3715 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); }
				;
    break;}
case 754:
#line 3719 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); }
				;
    break;}
case 755:
#line 3723 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); }
				;
    break;}
case 756:
#line 3727 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); }
				;
    break;}
case 757:
#line 3731 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 758:
#line 3735 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 759:
#line 3739 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(" in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 760:
#line 3743 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str(" not in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 761:
#line 3747 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-4].str, yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 762:
#line 3751 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("+("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 763:
#line 3755 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("-("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 764:
#line 3759 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("/("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 765:
#line 3763 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("%("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 766:
#line 3767 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("*("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 767:
#line 3771 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("<("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 768:
#line 3775 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(">("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 769:
#line 3779 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("=("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 770:
#line 3783 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("any("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 771:
#line 3787 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 772:
#line 3791 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 773:
#line 3795 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 774:
#line 3799 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 775:
#line 3803 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 776:
#line 3807 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 777:
#line 3811 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 778:
#line 3815 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 779:
#line 3819 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("all ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 780:
#line 3823 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 781:
#line 3827 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 782:
#line 3831 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 783:
#line 3835 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 784:
#line 3839 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 785:
#line 3843 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 786:
#line 3847 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 787:
#line 3851 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 788:
#line 3855 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 789:
#line 3857 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 790:
#line 3859 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 791:
#line 3861 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 792:
#line 3863 "preproc.y"
{ yyval.str = make1_str("?"); ;
    break;}
case 793:
#line 3872 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 794:
#line 3876 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 795:
#line 3878 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 796:
#line 3882 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 797:
#line 3884 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 798:
#line 3886 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 799:
#line 3888 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 800:
#line 3890 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 801:
#line 3892 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 802:
#line 3894 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 803:
#line 3896 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 804:
#line 3901 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 805:
#line 3903 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 806:
#line 3905 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 807:
#line 3909 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 808:
#line 3913 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 809:
#line 3915 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 810:
#line 3917 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 811:
#line 3919 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 812:
#line 3921 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 813:
#line 3925 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 814:
#line 3929 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 815:
#line 3933 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 816:
#line 3937 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 817:
#line 3943 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 818:
#line 3947 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 819:
#line 3953 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 820:
#line 3957 "preproc.y"
{
					yyval.str = make1_str("user");
				;
    break;}
case 821:
#line 3961 "preproc.y"
{
					yyval.str = make3_str(make1_str("position ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 822:
#line 3965 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 823:
#line 3970 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 824:
#line 3974 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 825:
#line 3978 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 826:
#line 3982 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 827:
#line 3986 "preproc.y"
{ 	yyval.str = yyvsp[0].str; ;
    break;}
case 828:
#line 3990 "preproc.y"
{
					yyval.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].str);
				;
    break;}
case 829:
#line 3994 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("["), yyvsp[-4].str, make1_str(":"), yyvsp[-2].str, make1_str("]")), yyvsp[0].str);
				;
    break;}
case 830:
#line 3998 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 831:
#line 4002 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 832:
#line 4004 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 833:
#line 4006 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str("using"), yyvsp[0].str); ;
    break;}
case 834:
#line 4010 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("from"), yyvsp[0].str);
				;
    break;}
case 835:
#line 4014 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 836:
#line 4016 "preproc.y"
{ yyval.str = make1_str("?"); ;
    break;}
case 837:
#line 4019 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 838:
#line 4020 "preproc.y"
{ yyval.str = make1_str("timezone_hour"); ;
    break;}
case 839:
#line 4021 "preproc.y"
{ yyval.str = make1_str("timezone_minute"); ;
    break;}
case 840:
#line 4025 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("in"), yyvsp[0].str); ;
    break;}
case 841:
#line 4027 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 842:
#line 4031 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 843:
#line 4035 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 844:
#line 4037 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 845:
#line 4039 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 846:
#line 4041 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 847:
#line 4043 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 848:
#line 4045 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 849:
#line 4047 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 850:
#line 4049 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 851:
#line 4051 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 852:
#line 4055 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 853:
#line 4059 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 854:
#line 4061 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 855:
#line 4063 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 856:
#line 4065 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 857:
#line 4067 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 858:
#line 4071 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()"));
				;
    break;}
case 859:
#line 4075 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 860:
#line 4079 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 861:
#line 4083 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 862:
#line 4088 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 863:
#line 4092 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 864:
#line 4096 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 865:
#line 4100 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 866:
#line 4106 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 867:
#line 4110 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 868:
#line 4114 "preproc.y"
{	yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 869:
#line 4116 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 870:
#line 4122 "preproc.y"
{	yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 871:
#line 4124 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 872:
#line 4128 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str("from"), yyvsp[0].str); ;
    break;}
case 873:
#line 4130 "preproc.y"
{ yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 874:
#line 4132 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 875:
#line 4136 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 876:
#line 4140 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 877:
#line 4144 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 878:
#line 4146 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);;
    break;}
case 879:
#line 4150 "preproc.y"
{
					yyval.str = yyvsp[0].str; 
				;
    break;}
case 880:
#line 4154 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 881:
#line 4158 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 882:
#line 4160 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);;
    break;}
case 883:
#line 4179 "preproc.y"
{ yyval.str = cat5_str(make1_str("case"), yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, make1_str("end")); ;
    break;}
case 884:
#line 4181 "preproc.y"
{
					yyval.str = cat5_str(make1_str("nullif("), yyvsp[-3].str, make1_str(","), yyvsp[-1].str, make1_str(")"));

					fprintf(stderr, "NULLIF() not yet fully implemented");
                                ;
    break;}
case 885:
#line 4187 "preproc.y"
{
					yyval.str = cat3_str(make1_str("coalesce("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 886:
#line 4193 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 887:
#line 4195 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 888:
#line 4199 "preproc.y"
{
					yyval.str = cat4_str(make1_str("when"), yyvsp[-2].str, make1_str("then"), yyvsp[0].str);
                               ;
    break;}
case 889:
#line 4204 "preproc.y"
{ yyval.str = cat2_str(make1_str("else"), yyvsp[0].str); ;
    break;}
case 890:
#line 4205 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 891:
#line 4209 "preproc.y"
{
                                       yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                               ;
    break;}
case 892:
#line 4213 "preproc.y"
{
                                       yyval.str = yyvsp[0].str;
                               ;
    break;}
case 893:
#line 4217 "preproc.y"
{       yyval.str = make1_str(""); ;
    break;}
case 894:
#line 4221 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 895:
#line 4225 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 896:
#line 4231 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 897:
#line 4233 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str); ;
    break;}
case 898:
#line 4235 "preproc.y"
{ yyval.str = make2_str(yyvsp[-2].str, make1_str(".*")); ;
    break;}
case 899:
#line 4246 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","),yyvsp[0].str);  ;
    break;}
case 900:
#line 4248 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 901:
#line 4249 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 902:
#line 4253 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-3].str, yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 903:
#line 4257 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 904:
#line 4261 "preproc.y"
{
					yyval.str = make2_str(yyvsp[-2].str, make1_str(".*"));
				;
    break;}
case 905:
#line 4272 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);  ;
    break;}
case 906:
#line 4274 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 907:
#line 4279 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
				;
    break;}
case 908:
#line 4283 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 909:
#line 4287 "preproc.y"
{
					yyval.str = make2_str(yyvsp[-2].str, make1_str(".*"));
				;
    break;}
case 910:
#line 4291 "preproc.y"
{
					yyval.str = make1_str("*");
				;
    break;}
case 911:
#line 4296 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 912:
#line 4297 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 913:
#line 4301 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 914:
#line 4305 "preproc.y"
{
					/* disallow refs to variable system tables */
					if (strcmp(LogRelationName, yyvsp[0].str) == 0
					   || strcmp(VariableRelationName, yyvsp[0].str) == 0) {
						sprintf(errortext, make1_str("%s cannot be accessed by users"),yyvsp[0].str);
						yyerror(errortext);
					}
					else
						yyval.str = yyvsp[0].str;
				;
    break;}
case 915:
#line 4317 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 916:
#line 4318 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 917:
#line 4319 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 918:
#line 4320 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 919:
#line 4321 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 920:
#line 4327 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 921:
#line 4328 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 922:
#line 4330 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 923:
#line 4337 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 924:
#line 4341 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 925:
#line 4345 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 926:
#line 4349 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 927:
#line 4353 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 928:
#line 4355 "preproc.y"
{
					yyval.str = make1_str("true");
				;
    break;}
case 929:
#line 4359 "preproc.y"
{
					yyval.str = make1_str("false");
				;
    break;}
case 930:
#line 4365 "preproc.y"
{
					yyval.str = cat2_str(make_name(), yyvsp[0].str);
				;
    break;}
case 931:
#line 4370 "preproc.y"
{ yyval.str = make_name();;
    break;}
case 932:
#line 4371 "preproc.y"
{ yyval.str = make_name();;
    break;}
case 933:
#line 4372 "preproc.y"
{
							yyval.str = (char *)mm_alloc(strlen(yyvsp[0].str) + 3);
							yyval.str[0]='\'';
				     		        strcpy(yyval.str+1, yyvsp[0].str);
							yyval.str[strlen(yyvsp[0].str)+2]='\0';
							yyval.str[strlen(yyvsp[0].str)+1]='\'';
							free(yyvsp[0].str);
						;
    break;}
case 934:
#line 4380 "preproc.y"
{ yyval.str = yyvsp[0].str;;
    break;}
case 935:
#line 4388 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 936:
#line 4390 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 937:
#line 4392 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 938:
#line 4402 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 939:
#line 4403 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 940:
#line 4404 "preproc.y"
{ yyval.str = make1_str("absolute"); ;
    break;}
case 941:
#line 4405 "preproc.y"
{ yyval.str = make1_str("action"); ;
    break;}
case 942:
#line 4406 "preproc.y"
{ yyval.str = make1_str("after"); ;
    break;}
case 943:
#line 4407 "preproc.y"
{ yyval.str = make1_str("aggregate"); ;
    break;}
case 944:
#line 4408 "preproc.y"
{ yyval.str = make1_str("backward"); ;
    break;}
case 945:
#line 4409 "preproc.y"
{ yyval.str = make1_str("before"); ;
    break;}
case 946:
#line 4410 "preproc.y"
{ yyval.str = make1_str("cache"); ;
    break;}
case 947:
#line 4411 "preproc.y"
{ yyval.str = make1_str("createdb"); ;
    break;}
case 948:
#line 4412 "preproc.y"
{ yyval.str = make1_str("createuser"); ;
    break;}
case 949:
#line 4413 "preproc.y"
{ yyval.str = make1_str("cycle"); ;
    break;}
case 950:
#line 4414 "preproc.y"
{ yyval.str = make1_str("database"); ;
    break;}
case 951:
#line 4415 "preproc.y"
{ yyval.str = make1_str("delimiters"); ;
    break;}
case 952:
#line 4416 "preproc.y"
{ yyval.str = make1_str("double"); ;
    break;}
case 953:
#line 4417 "preproc.y"
{ yyval.str = make1_str("each"); ;
    break;}
case 954:
#line 4418 "preproc.y"
{ yyval.str = make1_str("encoding"); ;
    break;}
case 955:
#line 4419 "preproc.y"
{ yyval.str = make1_str("forward"); ;
    break;}
case 956:
#line 4420 "preproc.y"
{ yyval.str = make1_str("function"); ;
    break;}
case 957:
#line 4421 "preproc.y"
{ yyval.str = make1_str("handler"); ;
    break;}
case 958:
#line 4422 "preproc.y"
{ yyval.str = make1_str("increment"); ;
    break;}
case 959:
#line 4423 "preproc.y"
{ yyval.str = make1_str("index"); ;
    break;}
case 960:
#line 4424 "preproc.y"
{ yyval.str = make1_str("inherits"); ;
    break;}
case 961:
#line 4425 "preproc.y"
{ yyval.str = make1_str("insensitive"); ;
    break;}
case 962:
#line 4426 "preproc.y"
{ yyval.str = make1_str("instead"); ;
    break;}
case 963:
#line 4427 "preproc.y"
{ yyval.str = make1_str("isnull"); ;
    break;}
case 964:
#line 4428 "preproc.y"
{ yyval.str = make1_str("key"); ;
    break;}
case 965:
#line 4429 "preproc.y"
{ yyval.str = make1_str("language"); ;
    break;}
case 966:
#line 4430 "preproc.y"
{ yyval.str = make1_str("lancompiler"); ;
    break;}
case 967:
#line 4431 "preproc.y"
{ yyval.str = make1_str("location"); ;
    break;}
case 968:
#line 4432 "preproc.y"
{ yyval.str = make1_str("match"); ;
    break;}
case 969:
#line 4433 "preproc.y"
{ yyval.str = make1_str("maxvalue"); ;
    break;}
case 970:
#line 4434 "preproc.y"
{ yyval.str = make1_str("minvalue"); ;
    break;}
case 971:
#line 4435 "preproc.y"
{ yyval.str = make1_str("next"); ;
    break;}
case 972:
#line 4436 "preproc.y"
{ yyval.str = make1_str("nocreatedb"); ;
    break;}
case 973:
#line 4437 "preproc.y"
{ yyval.str = make1_str("nocreateuser"); ;
    break;}
case 974:
#line 4438 "preproc.y"
{ yyval.str = make1_str("nothing"); ;
    break;}
case 975:
#line 4439 "preproc.y"
{ yyval.str = make1_str("notnull"); ;
    break;}
case 976:
#line 4440 "preproc.y"
{ yyval.str = make1_str("of"); ;
    break;}
case 977:
#line 4441 "preproc.y"
{ yyval.str = make1_str("oids"); ;
    break;}
case 978:
#line 4442 "preproc.y"
{ yyval.str = make1_str("only"); ;
    break;}
case 979:
#line 4443 "preproc.y"
{ yyval.str = make1_str("operator"); ;
    break;}
case 980:
#line 4444 "preproc.y"
{ yyval.str = make1_str("option"); ;
    break;}
case 981:
#line 4445 "preproc.y"
{ yyval.str = make1_str("password"); ;
    break;}
case 982:
#line 4446 "preproc.y"
{ yyval.str = make1_str("prior"); ;
    break;}
case 983:
#line 4447 "preproc.y"
{ yyval.str = make1_str("privileges"); ;
    break;}
case 984:
#line 4448 "preproc.y"
{ yyval.str = make1_str("procedural"); ;
    break;}
case 985:
#line 4449 "preproc.y"
{ yyval.str = make1_str("read"); ;
    break;}
case 986:
#line 4451 "preproc.y"
{ yyval.str = make1_str("relative"); ;
    break;}
case 987:
#line 4452 "preproc.y"
{ yyval.str = make1_str("rename"); ;
    break;}
case 988:
#line 4453 "preproc.y"
{ yyval.str = make1_str("returns"); ;
    break;}
case 989:
#line 4454 "preproc.y"
{ yyval.str = make1_str("row"); ;
    break;}
case 990:
#line 4455 "preproc.y"
{ yyval.str = make1_str("rule"); ;
    break;}
case 991:
#line 4456 "preproc.y"
{ yyval.str = make1_str("scroll"); ;
    break;}
case 992:
#line 4457 "preproc.y"
{ yyval.str = make1_str("sequence"); ;
    break;}
case 993:
#line 4458 "preproc.y"
{ yyval.str = make1_str("serial"); ;
    break;}
case 994:
#line 4459 "preproc.y"
{ yyval.str = make1_str("start"); ;
    break;}
case 995:
#line 4460 "preproc.y"
{ yyval.str = make1_str("statement"); ;
    break;}
case 996:
#line 4461 "preproc.y"
{ yyval.str = make1_str("stdin"); ;
    break;}
case 997:
#line 4462 "preproc.y"
{ yyval.str = make1_str("stdout"); ;
    break;}
case 998:
#line 4463 "preproc.y"
{ yyval.str = make1_str("time"); ;
    break;}
case 999:
#line 4464 "preproc.y"
{ yyval.str = make1_str("timestamp"); ;
    break;}
case 1000:
#line 4465 "preproc.y"
{ yyval.str = make1_str("timezone_hour"); ;
    break;}
case 1001:
#line 4466 "preproc.y"
{ yyval.str = make1_str("timezone_minute"); ;
    break;}
case 1002:
#line 4467 "preproc.y"
{ yyval.str = make1_str("trigger"); ;
    break;}
case 1003:
#line 4468 "preproc.y"
{ yyval.str = make1_str("trusted"); ;
    break;}
case 1004:
#line 4469 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 1005:
#line 4470 "preproc.y"
{ yyval.str = make1_str("valid"); ;
    break;}
case 1006:
#line 4471 "preproc.y"
{ yyval.str = make1_str("version"); ;
    break;}
case 1007:
#line 4472 "preproc.y"
{ yyval.str = make1_str("zone"); ;
    break;}
case 1008:
#line 4473 "preproc.y"
{ yyval.str = make1_str("at"); ;
    break;}
case 1009:
#line 4474 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 1010:
#line 4475 "preproc.y"
{ yyval.str = make1_str("break"); ;
    break;}
case 1011:
#line 4476 "preproc.y"
{ yyval.str = make1_str("call"); ;
    break;}
case 1012:
#line 4477 "preproc.y"
{ yyval.str = make1_str("connect"); ;
    break;}
case 1013:
#line 4478 "preproc.y"
{ yyval.str = make1_str("connection"); ;
    break;}
case 1014:
#line 4479 "preproc.y"
{ yyval.str = make1_str("continue"); ;
    break;}
case 1015:
#line 4480 "preproc.y"
{ yyval.str = make1_str("deallocate"); ;
    break;}
case 1016:
#line 4481 "preproc.y"
{ yyval.str = make1_str("disconnect"); ;
    break;}
case 1017:
#line 4482 "preproc.y"
{ yyval.str = make1_str("found"); ;
    break;}
case 1018:
#line 4483 "preproc.y"
{ yyval.str = make1_str("go"); ;
    break;}
case 1019:
#line 4484 "preproc.y"
{ yyval.str = make1_str("goto"); ;
    break;}
case 1020:
#line 4485 "preproc.y"
{ yyval.str = make1_str("identified"); ;
    break;}
case 1021:
#line 4486 "preproc.y"
{ yyval.str = make1_str("immediate"); ;
    break;}
case 1022:
#line 4487 "preproc.y"
{ yyval.str = make1_str("indicator"); ;
    break;}
case 1023:
#line 4488 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 1024:
#line 4489 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 1025:
#line 4490 "preproc.y"
{ yyval.str = make1_str("open"); ;
    break;}
case 1026:
#line 4491 "preproc.y"
{ yyval.str = make1_str("prepare"); ;
    break;}
case 1027:
#line 4492 "preproc.y"
{ yyval.str = make1_str("release"); ;
    break;}
case 1028:
#line 4493 "preproc.y"
{ yyval.str = make1_str("section"); ;
    break;}
case 1029:
#line 4494 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 1030:
#line 4495 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1031:
#line 4496 "preproc.y"
{ yyval.str = make1_str("sqlerror"); ;
    break;}
case 1032:
#line 4497 "preproc.y"
{ yyval.str = make1_str("sqlprint"); ;
    break;}
case 1033:
#line 4498 "preproc.y"
{ yyval.str = make1_str("sqlwarning"); ;
    break;}
case 1034:
#line 4499 "preproc.y"
{ yyval.str = make1_str("stop"); ;
    break;}
case 1035:
#line 4500 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 1036:
#line 4501 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 1037:
#line 4502 "preproc.y"
{ yyval.str = make1_str("var"); ;
    break;}
case 1038:
#line 4503 "preproc.y"
{ yyval.str = make1_str("whenever"); ;
    break;}
case 1039:
#line 4515 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1040:
#line 4516 "preproc.y"
{ yyval.str = make1_str("abort"); ;
    break;}
case 1041:
#line 4517 "preproc.y"
{ yyval.str = make1_str("analyze"); ;
    break;}
case 1042:
#line 4518 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 1043:
#line 4519 "preproc.y"
{ yyval.str = make1_str("case"); ;
    break;}
case 1044:
#line 4520 "preproc.y"
{ yyval.str = make1_str("cluster"); ;
    break;}
case 1045:
#line 4521 "preproc.y"
{ yyval.str = make1_str("coalesce"); ;
    break;}
case 1046:
#line 4522 "preproc.y"
{ yyval.str = make1_str("constraint"); ;
    break;}
case 1047:
#line 4523 "preproc.y"
{ yyval.str = make1_str("copy"); ;
    break;}
case 1048:
#line 4524 "preproc.y"
{ yyval.str = make1_str("current"); ;
    break;}
case 1049:
#line 4525 "preproc.y"
{ yyval.str = make1_str("do"); ;
    break;}
case 1050:
#line 4526 "preproc.y"
{ yyval.str = make1_str("else"); ;
    break;}
case 1051:
#line 4527 "preproc.y"
{ yyval.str = make1_str("end"); ;
    break;}
case 1052:
#line 4528 "preproc.y"
{ yyval.str = make1_str("explain"); ;
    break;}
case 1053:
#line 4529 "preproc.y"
{ yyval.str = make1_str("extend"); ;
    break;}
case 1054:
#line 4530 "preproc.y"
{ yyval.str = make1_str("false"); ;
    break;}
case 1055:
#line 4531 "preproc.y"
{ yyval.str = make1_str("foreign"); ;
    break;}
case 1056:
#line 4532 "preproc.y"
{ yyval.str = make1_str("group"); ;
    break;}
case 1057:
#line 4533 "preproc.y"
{ yyval.str = make1_str("listen"); ;
    break;}
case 1058:
#line 4534 "preproc.y"
{ yyval.str = make1_str("load"); ;
    break;}
case 1059:
#line 4535 "preproc.y"
{ yyval.str = make1_str("lock"); ;
    break;}
case 1060:
#line 4536 "preproc.y"
{ yyval.str = make1_str("move"); ;
    break;}
case 1061:
#line 4537 "preproc.y"
{ yyval.str = make1_str("new"); ;
    break;}
case 1062:
#line 4538 "preproc.y"
{ yyval.str = make1_str("none"); ;
    break;}
case 1063:
#line 4539 "preproc.y"
{ yyval.str = make1_str("nullif"); ;
    break;}
case 1064:
#line 4540 "preproc.y"
{ yyval.str = make1_str("order"); ;
    break;}
case 1065:
#line 4541 "preproc.y"
{ yyval.str = make1_str("position"); ;
    break;}
case 1066:
#line 4542 "preproc.y"
{ yyval.str = make1_str("precision"); ;
    break;}
case 1067:
#line 4543 "preproc.y"
{ yyval.str = make1_str("reset"); ;
    break;}
case 1068:
#line 4544 "preproc.y"
{ yyval.str = make1_str("setof"); ;
    break;}
case 1069:
#line 4545 "preproc.y"
{ yyval.str = make1_str("show"); ;
    break;}
case 1070:
#line 4546 "preproc.y"
{ yyval.str = make1_str("table"); ;
    break;}
case 1071:
#line 4547 "preproc.y"
{ yyval.str = make1_str("then"); ;
    break;}
case 1072:
#line 4548 "preproc.y"
{ yyval.str = make1_str("transaction"); ;
    break;}
case 1073:
#line 4549 "preproc.y"
{ yyval.str = make1_str("true"); ;
    break;}
case 1074:
#line 4550 "preproc.y"
{ yyval.str = make1_str("vacuum"); ;
    break;}
case 1075:
#line 4551 "preproc.y"
{ yyval.str = make1_str("verbose"); ;
    break;}
case 1076:
#line 4552 "preproc.y"
{ yyval.str = make1_str("when"); ;
    break;}
case 1077:
#line 4556 "preproc.y"
{
					if (QueryIsRule)
						yyval.str = make1_str("current");
					else
						yyerror("CURRENT used in non-rule query");
				;
    break;}
case 1078:
#line 4563 "preproc.y"
{
					if (QueryIsRule)
						yyval.str = make1_str("new");
					else
						yyerror("NEW used in non-rule query");
				;
    break;}
case 1079:
#line 4579 "preproc.y"
{
			yyval.str = make5_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str, make1_str(","), yyvsp[-1].str);
                ;
    break;}
case 1080:
#line 4583 "preproc.y"
{
                	yyval.str = make1_str("NULL,NULL,NULL,\"DEFAULT\"");
                ;
    break;}
case 1081:
#line 4588 "preproc.y"
{
		       yyval.str = make3_str(make1_str("NULL,"), yyvsp[0].str, make1_str(",NULL"));
		;
    break;}
case 1082:
#line 4593 "preproc.y"
{
		  /* old style: dbname[@server][:port] */
		  if (strlen(yyvsp[-1].str) > 0 && *(yyvsp[-1].str) != '@')
		  {
		    sprintf(errortext, "parse error at or near '%s'", yyvsp[-1].str);
		    yyerror(errortext);
		  }

		  yyval.str = make5_str(make1_str("\""), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str, make1_str("\""));
		;
    break;}
case 1083:
#line 4604 "preproc.y"
{
		  /* new style: <tcp|unix>:postgresql://server[:port][/dbname] */
                  if (strncmp(yyvsp[-4].str, "://", 3) != 0)
		  {
		    sprintf(errortext, "parse error at or near '%s'", yyvsp[-4].str);
		    yyerror(errortext);
		  }

		  if (strncmp(yyvsp[-5].str, "unix", 4) == 0 && strncmp(yyvsp[-4].str + 3, "localhost", 9) != 0)
		  {
		    sprintf(errortext, "unix domain sockets only work on 'localhost' but not on '%9.9s'", yyvsp[-4].str);
                    yyerror(errortext);
		  }

		  if (strncmp(yyvsp[-5].str, "unix", 4) != 0 && strncmp(yyvsp[-5].str, "tcp", 3) != 0)
		  {
		    sprintf(errortext, "only protocols 'tcp' and 'unix' are supported");
                    yyerror(errortext);
		  }
	
		  yyval.str = make4_str(make5_str(make1_str("\""), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, make1_str("/")), yyvsp[-1].str, yyvsp[0].str, make1_str("\""));
		;
    break;}
case 1084:
#line 4627 "preproc.y"
{
		  yyval.str = yyvsp[0].str;
		;
    break;}
case 1085:
#line 4631 "preproc.y"
{
		  yyval.str = mm_strdup(yyvsp[0].str);
		  yyval.str[0] = '\"';
		  yyval.str[strlen(yyval.str) - 1] = '\"';
		  free(yyvsp[0].str);
		;
    break;}
case 1086:
#line 4639 "preproc.y"
{
		  if (strcmp(yyvsp[0].str, "postgresql") != 0 && strcmp(yyvsp[0].str, "postgres") != 0)
		  {
		    sprintf(errortext, "parse error at or near '%s'", yyvsp[0].str);
		    yyerror(errortext);	
		  }

		  if (strcmp(yyvsp[-1].str, "tcp") != 0 && strcmp(yyvsp[-1].str, "unix") != 0)
		  {
		    sprintf(errortext, "Illegal connection type %s", yyvsp[-1].str);
		    yyerror(errortext);
		  }

		  yyval.str = make3_str(yyvsp[-1].str, make1_str(":"), yyvsp[0].str);
		;
    break;}
case 1087:
#line 4656 "preproc.y"
{
		  if (strcmp(yyvsp[-1].str, "@") != 0 && strcmp(yyvsp[-1].str, "://") != 0)
		  {
		    sprintf(errortext, "parse error at or near '%s'", yyvsp[-1].str);
		    yyerror(errortext);
		  }

		  yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str);
	        ;
    break;}
case 1088:
#line 4666 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1089:
#line 4667 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1090:
#line 4669 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1091:
#line 4670 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str); ;
    break;}
case 1092:
#line 4672 "preproc.y"
{ yyval.str = make2_str(make1_str(":"), yyvsp[0].str); ;
    break;}
case 1093:
#line 4673 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1094:
#line 4675 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1095:
#line 4676 "preproc.y"
{ yyval.str = make1_str("NULL"); ;
    break;}
case 1096:
#line 4678 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1097:
#line 4679 "preproc.y"
{ yyval.str = make1_str("NULL,NULL"); ;
    break;}
case 1098:
#line 4682 "preproc.y"
{
                        yyval.str = make2_str(yyvsp[0].str, make1_str(",NULL"));
	        ;
    break;}
case 1099:
#line 4686 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1100:
#line 4690 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-3].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1101:
#line 4694 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1102:
#line 4698 "preproc.y"
{ if (yyvsp[0].str[0] == '\"')
				yyval.str = yyvsp[0].str;
			  else
				yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\""));
			;
    break;}
case 1103:
#line 4703 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1104:
#line 4704 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1105:
#line 4707 "preproc.y"
{ /* check if we have a char variable */
			struct variable *p = find_variable(yyvsp[0].str);
			enum ECPGttype typ = p->type->typ;

			/* if array see what's inside */
			if (typ == ECPGt_array)
				typ = p->type->u.element->typ;

                        switch (typ)
                        {
                            case ECPGt_char:
                            case ECPGt_unsigned_char:
                                yyval.str = yyvsp[0].str;
                                break;
                            case ECPGt_varchar:
                                yyval.str = make2_str(yyvsp[0].str, make1_str(".arr"));
                                break;
                            default:
                                yyerror("invalid datatype");
                                break;
                        }
		;
    break;}
case 1106:
#line 4731 "preproc.y"
{
			if (strlen(yyvsp[-1].str) == 0)
				yyerror("parse error");
				
			if (strcmp(yyvsp[-1].str, "?") != 0)
			{
				sprintf(errortext, "parse error at or near %s", yyvsp[-1].str);
				yyerror(errortext);
			}
			
			yyval.str = make2_str(make1_str("?"), yyvsp[0].str);
		;
    break;}
case 1107:
#line 4743 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1108:
#line 4750 "preproc.y"
{
					struct cursor *ptr, *this;
					struct variable *thisquery = (struct variable *)mm_alloc(sizeof(struct variable));

					for (ptr = cur; ptr != NULL; ptr = ptr->next)
					{
						if (strcmp(yyvsp[-5].str, ptr->name) == 0)
						{
						        /* re-definition is a bug */
							sprintf(errortext, "cursor %s already defined", yyvsp[-5].str);
							yyerror(errortext);
				                }
        				}

        				this = (struct cursor *) mm_alloc(sizeof(struct cursor));

			        	/* initial definition */
				        this->next = cur;
				        this->name = yyvsp[-5].str;
					this->connection = connection;
				        this->command =  cat5_str(make1_str("declare"), mm_strdup(yyvsp[-5].str), yyvsp[-4].str, make1_str("cursor for ?"), yyvsp[0].str);
					this->argsresult = NULL;

					thisquery->type = &ecpg_query;
					thisquery->brace_level = 0;
					thisquery->next = NULL;
					thisquery->name = (char *) mm_alloc(sizeof("ECPGprepared_statement(\"\")") + strlen(yyvsp[-1].str));
					sprintf(thisquery->name, "ECPGprepared_statement(\"%s\")", yyvsp[-1].str);

					this->argsinsert = NULL;
					add_variable(&(this->argsinsert), thisquery, &no_indicator); 

			        	cur = this;
					
					yyval.str = cat3_str(make1_str("/*"), mm_strdup(this->command), make1_str("*/"));
				;
    break;}
case 1109:
#line 4792 "preproc.y"
{ yyval.str = make3_str(make1_str("ECPGdeallocate(__LINE__, \""), yyvsp[0].str, make1_str("\");")); ;
    break;}
case 1110:
#line 4798 "preproc.y"
{
		fputs("/* exec sql begin declare section */", yyout);
	        output_line_number();
	;
    break;}
case 1111:
#line 4803 "preproc.y"
{
		fprintf(yyout, "%s/* exec sql end declare section */", yyvsp[-1].str);
		free(yyvsp[-1].str);
		output_line_number();
	;
    break;}
case 1112:
#line 4809 "preproc.y"
{;
    break;}
case 1113:
#line 4811 "preproc.y"
{;
    break;}
case 1114:
#line 4814 "preproc.y"
{
		yyval.str = make1_str("");
	;
    break;}
case 1115:
#line 4818 "preproc.y"
{
		yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
	;
    break;}
case 1116:
#line 4823 "preproc.y"
{
		actual_storage[struct_level] = mm_strdup(yyvsp[0].str);
	;
    break;}
case 1117:
#line 4827 "preproc.y"
{
		actual_type[struct_level].type_enum = yyvsp[0].type.type_enum;
		actual_type[struct_level].type_dimension = yyvsp[0].type.type_dimension;
		actual_type[struct_level].type_index = yyvsp[0].type.type_index;
	;
    break;}
case 1118:
#line 4833 "preproc.y"
{
 		yyval.str = cat4_str(yyvsp[-5].str, yyvsp[-3].type.type_str, yyvsp[-1].str, make1_str(";\n"));
	;
    break;}
case 1119:
#line 4837 "preproc.y"
{ yyval.str = make1_str("extern"); ;
    break;}
case 1120:
#line 4838 "preproc.y"
{ yyval.str = make1_str("static"); ;
    break;}
case 1121:
#line 4839 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1122:
#line 4840 "preproc.y"
{ yyval.str = make1_str("const"); ;
    break;}
case 1123:
#line 4841 "preproc.y"
{ yyval.str = make1_str("register"); ;
    break;}
case 1124:
#line 4842 "preproc.y"
{ yyval.str = make1_str("auto"); ;
    break;}
case 1125:
#line 4843 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1126:
#line 4846 "preproc.y"
{
			yyval.type.type_enum = yyvsp[0].type_enum;
			yyval.type.type_str = mm_strdup(ECPGtype_name(yyvsp[0].type_enum));
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1127:
#line 4853 "preproc.y"
{
			yyval.type.type_enum = ECPGt_varchar;
			yyval.type.type_str = make1_str("");
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1128:
#line 4860 "preproc.y"
{
			yyval.type.type_enum = ECPGt_struct;
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1129:
#line 4867 "preproc.y"
{
			yyval.type.type_enum = ECPGt_union;
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1130:
#line 4874 "preproc.y"
{
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_enum = ECPGt_int;
		
	yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1131:
#line 4882 "preproc.y"
{
			/* this is for typedef'ed types */
			struct typedefs *this = get_typedef(yyvsp[0].str);

			yyval.type.type_str = (this->type->type_enum == ECPGt_varchar) ? make1_str("") : mm_strdup(this->name);
                        yyval.type.type_enum = this->type->type_enum;
			yyval.type.type_dimension = this->type->type_dimension;
  			yyval.type.type_index = this->type->type_index;
			struct_member_list[struct_level] = ECPGstruct_member_dup(this->struct_member_list);
		;
    break;}
case 1132:
#line 4894 "preproc.y"
{
		yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1133:
#line 4898 "preproc.y"
{ yyval.str = cat2_str(make1_str("enum"), yyvsp[0].str); ;
    break;}
case 1134:
#line 4901 "preproc.y"
{
	    ECPGfree_struct_member(struct_member_list[struct_level]);
	    free(actual_storage[struct_level--]);
	    yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1135:
#line 4908 "preproc.y"
{
	    ECPGfree_struct_member(struct_member_list[struct_level]);
	    free(actual_storage[struct_level--]);
	    yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1136:
#line 4915 "preproc.y"
{
            struct_member_list[struct_level++] = NULL;
            if (struct_level >= STRUCT_DEPTH)
                 yyerror("Too many levels in nested structure definition");
	    yyval.str = cat2_str(make1_str("struct"), yyvsp[0].str);
	;
    break;}
case 1137:
#line 4923 "preproc.y"
{
            struct_member_list[struct_level++] = NULL;
            if (struct_level >= STRUCT_DEPTH)
                 yyerror("Too many levels in nested structure definition");
	    yyval.str = cat2_str(make1_str("union"), yyvsp[0].str);
	;
    break;}
case 1138:
#line 4930 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1139:
#line 4931 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1140:
#line 4933 "preproc.y"
{ yyval.type_enum = ECPGt_short; ;
    break;}
case 1141:
#line 4934 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_short; ;
    break;}
case 1142:
#line 4935 "preproc.y"
{ yyval.type_enum = ECPGt_int; ;
    break;}
case 1143:
#line 4936 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_int; ;
    break;}
case 1144:
#line 4937 "preproc.y"
{ yyval.type_enum = ECPGt_long; ;
    break;}
case 1145:
#line 4938 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_long; ;
    break;}
case 1146:
#line 4939 "preproc.y"
{ yyval.type_enum = ECPGt_float; ;
    break;}
case 1147:
#line 4940 "preproc.y"
{ yyval.type_enum = ECPGt_double; ;
    break;}
case 1148:
#line 4941 "preproc.y"
{ yyval.type_enum = ECPGt_bool; ;
    break;}
case 1149:
#line 4942 "preproc.y"
{ yyval.type_enum = ECPGt_char; ;
    break;}
case 1150:
#line 4943 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_char; ;
    break;}
case 1151:
#line 4945 "preproc.y"
{ yyval.type_enum = ECPGt_varchar; ;
    break;}
case 1152:
#line 4948 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 1153:
#line 4952 "preproc.y"
{
		yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
	;
    break;}
case 1154:
#line 4957 "preproc.y"
{
			struct ECPGtype * type;
                        int dimension = yyvsp[-1].index.index1; /* dimension of array */
                        int length = yyvsp[-1].index.index2;    /* lenght of string */
                        char dim[14L], ascii_len[12];

			adjust_array(actual_type[struct_level].type_enum, &dimension, &length, actual_type[struct_level].type_dimension, actual_type[struct_level].type_index, strlen(yyvsp[-3].str));

			switch (actual_type[struct_level].type_enum)
			{
			   case ECPGt_struct:
			   case ECPGt_union:
                               if (dimension < 0)
                                   type = ECPGmake_struct_type(struct_member_list[struct_level], actual_type[struct_level].type_enum);
                               else
                                   type = ECPGmake_array_type(ECPGmake_struct_type(struct_member_list[struct_level], actual_type[struct_level].type_enum), dimension); 

                               yyval.str = make4_str(yyvsp[-3].str, mm_strdup(yyvsp[-2].str), yyvsp[-1].index.str, yyvsp[0].str);
                               break;
                           case ECPGt_varchar:
                               if (dimension == -1)
                                   type = ECPGmake_simple_type(actual_type[struct_level].type_enum, length);
                               else
                                   type = ECPGmake_array_type(ECPGmake_simple_type(actual_type[struct_level].type_enum, length), dimension);

                               switch(dimension)
                               {
                                  case 0:
				  case -1:
                                  case 1:
                                      *dim = '\0';
                                      break;
                                  default:
                                      sprintf(dim, "[%d]", dimension);
                                      break;
                               }
			       sprintf(ascii_len, "%d", length);

                               if (length == 0)
				   yyerror ("pointer to varchar are not implemented");

			       if (dimension == 0)
				   yyval.str = make4_str(make5_str(mm_strdup(actual_storage[struct_level]), make1_str(" struct varchar_"), mm_strdup(yyvsp[-2].str), make1_str(" { int len; char arr["), mm_strdup(ascii_len)), make1_str("]; } *"), mm_strdup(yyvsp[-2].str), yyvsp[0].str);
			       else
                                   yyval.str = make5_str(make5_str(mm_strdup(actual_storage[struct_level]), make1_str(" struct varchar_"), mm_strdup(yyvsp[-2].str), make1_str(" { int len; char arr["), mm_strdup(ascii_len)), make1_str("]; } "), mm_strdup(yyvsp[-2].str), mm_strdup(dim), yyvsp[0].str);

                               break;
                           case ECPGt_char:
                           case ECPGt_unsigned_char:
                               if (dimension == -1)
                                   type = ECPGmake_simple_type(actual_type[struct_level].type_enum, length);
                               else
                                   type = ECPGmake_array_type(ECPGmake_simple_type(actual_type[struct_level].type_enum, length), dimension);

			       yyval.str = make4_str(yyvsp[-3].str, mm_strdup(yyvsp[-2].str), yyvsp[-1].index.str, yyvsp[0].str);
                               break;
                           default:
                               if (dimension < 0)
                                   type = ECPGmake_simple_type(actual_type[struct_level].type_enum, 1);
                               else
                                   type = ECPGmake_array_type(ECPGmake_simple_type(actual_type[struct_level].type_enum, 1), dimension);

			       yyval.str = make4_str(yyvsp[-3].str, mm_strdup(yyvsp[-2].str), yyvsp[-1].index.str, yyvsp[0].str);
                               break;
			}

			if (struct_level == 0)
				new_variable(yyvsp[-2].str, type);
			else
				ECPGmake_struct_member(yyvsp[-2].str, type, &(struct_member_list[struct_level - 1]));

			free(yyvsp[-2].str);
		;
    break;}
case 1155:
#line 5031 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1156:
#line 5032 "preproc.y"
{ yyval.str = make2_str(make1_str("="), yyvsp[0].str); ;
    break;}
case 1157:
#line 5034 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1158:
#line 5035 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 1159:
#line 5042 "preproc.y"
{
		/* this is only supported for compatibility */
		yyval.str = cat3_str(make1_str("/* declare statement"), yyvsp[0].str, make1_str("*/"));
	;
    break;}
case 1160:
#line 5049 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1161:
#line 5051 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1162:
#line 5052 "preproc.y"
{ yyval.str = make1_str("CURRENT"); ;
    break;}
case 1163:
#line 5053 "preproc.y"
{ yyval.str = make1_str("ALL"); ;
    break;}
case 1164:
#line 5054 "preproc.y"
{ yyval.str = make1_str("CURRENT"); ;
    break;}
case 1165:
#line 5056 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1166:
#line 5057 "preproc.y"
{ yyval.str = make1_str("DEFAULT"); ;
    break;}
case 1167:
#line 5063 "preproc.y"
{ 
		struct variable *thisquery = (struct variable *)mm_alloc(sizeof(struct variable));

		thisquery->type = &ecpg_query;
		thisquery->brace_level = 0;
		thisquery->next = NULL;
		thisquery->name = yyvsp[0].str;

		add_variable(&argsinsert, thisquery, &no_indicator); 

		yyval.str = make1_str("?");
	;
    break;}
case 1168:
#line 5076 "preproc.y"
{
		struct variable *thisquery = (struct variable *)mm_alloc(sizeof(struct variable));

		thisquery->type = &ecpg_query;
		thisquery->brace_level = 0;
		thisquery->next = NULL;
		thisquery->name = (char *) mm_alloc(sizeof("ECPGprepared_statement(\"\")") + strlen(yyvsp[0].str));
		sprintf(thisquery->name, "ECPGprepared_statement(\"%s\")", yyvsp[0].str);

		add_variable(&argsinsert, thisquery, &no_indicator); 
	;
    break;}
case 1169:
#line 5087 "preproc.y"
{
		yyval.str = make1_str("?");
	;
    break;}
case 1171:
#line 5092 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1172:
#line 5098 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1173:
#line 5103 "preproc.y"
{
		yyval.str = yyvsp[-1].str;
;
    break;}
case 1174:
#line 5107 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1175:
#line 5108 "preproc.y"
{
					/* yyerror ("open cursor with variables not implemented yet"); */
					yyval.str = make1_str("");
				;
    break;}
case 1178:
#line 5120 "preproc.y"
{
		yyval.str = make4_str(make1_str("\""), yyvsp[-2].str, make1_str("\", "), yyvsp[0].str);
	;
    break;}
case 1179:
#line 5130 "preproc.y"
{
		if (strncmp(yyvsp[-1].str, "begin", 5) == 0)
                        yyerror("RELEASE does not make sense when beginning a transaction");

		fprintf(yyout, "ECPGtrans(__LINE__, %s, \"%s\");", connection, yyvsp[-1].str);
		whenever_action(0);
		fprintf(yyout, "ECPGdisconnect(\"\");"); 
		whenever_action(0);
		free(yyvsp[-1].str);
	;
    break;}
case 1180:
#line 5146 "preproc.y"
{
				yyval.str = yyvsp[0].str;
                        ;
    break;}
case 1181:
#line 5154 "preproc.y"
{
		/* add entry to list */
		struct typedefs *ptr, *this;
		int dimension = yyvsp[-1].index.index1;
		int length = yyvsp[-1].index.index2;

		for (ptr = types; ptr != NULL; ptr = ptr->next)
		{
			if (strcmp(yyvsp[-4].str, ptr->name) == 0)
			{
			        /* re-definition is a bug */
				sprintf(errortext, "type %s already defined", yyvsp[-4].str);
				yyerror(errortext);
	                }
		}

		adjust_array(yyvsp[-2].type.type_enum, &dimension, &length, yyvsp[-2].type.type_dimension, yyvsp[-2].type.type_index, strlen(yyvsp[0].str));

        	this = (struct typedefs *) mm_alloc(sizeof(struct typedefs));

        	/* initial definition */
	        this->next = types;
	        this->name = yyvsp[-4].str;
		this->type = (struct this_type *) mm_alloc(sizeof(struct this_type));
		this->type->type_enum = yyvsp[-2].type.type_enum;
		this->type->type_str = mm_strdup(yyvsp[-4].str);
		this->type->type_dimension = dimension; /* dimension of array */
		this->type->type_index = length;    /* lenght of string */
		this->struct_member_list = struct_member_list[struct_level];

		if (yyvsp[-2].type.type_enum != ECPGt_varchar &&
		    yyvsp[-2].type.type_enum != ECPGt_char &&
	            yyvsp[-2].type.type_enum != ECPGt_unsigned_char &&
		    this->type->type_index >= 0)
                            yyerror("No multi-dimensional array support for simple data types");

        	types = this;

		yyval.str = cat5_str(cat3_str(make1_str("/* exec sql type"), mm_strdup(yyvsp[-4].str), make1_str("is")), mm_strdup(yyvsp[-2].type.type_str), mm_strdup(yyvsp[-1].index.str), yyvsp[0].str, make1_str("*/"));
	;
    break;}
case 1182:
#line 5196 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1183:
#line 5202 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1184:
#line 5208 "preproc.y"
{
                            yyval.index.index1 = atol(yyvsp[-2].str);
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1185:
#line 5214 "preproc.y"
{
                            yyval.index.index1 = atol(yyvsp[-2].str);
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1186:
#line 5220 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 1187:
#line 5228 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1188:
#line 5234 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1189:
#line 5240 "preproc.y"
{
                            yyval.index.index1 = atol(yyvsp[-2].str);
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1190:
#line 5246 "preproc.y"
{
                            yyval.index.index1 = atol(yyvsp[-2].str);
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1191:
#line 5252 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 1192:
#line 5258 "preproc.y"
{ yyval.str = make1_str("reference"); ;
    break;}
case 1193:
#line 5259 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1194:
#line 5262 "preproc.y"
{
		yyval.type.type_str = make1_str("char");
                yyval.type.type_enum = ECPGt_char;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1195:
#line 5269 "preproc.y"
{
		yyval.type.type_str = make1_str("varchar");
                yyval.type.type_enum = ECPGt_varchar;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1196:
#line 5276 "preproc.y"
{
		yyval.type.type_str = make1_str("float");
                yyval.type.type_enum = ECPGt_float;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1197:
#line 5283 "preproc.y"
{
		yyval.type.type_str = make1_str("double");
                yyval.type.type_enum = ECPGt_double;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1198:
#line 5290 "preproc.y"
{
		yyval.type.type_str = make1_str("int");
       	        yyval.type.type_enum = ECPGt_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1199:
#line 5297 "preproc.y"
{
		yyval.type.type_str = make1_str("int");
       	        yyval.type.type_enum = ECPGt_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1200:
#line 5304 "preproc.y"
{
		yyval.type.type_str = make1_str("short");
       	        yyval.type.type_enum = ECPGt_short;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1201:
#line 5311 "preproc.y"
{
		yyval.type.type_str = make1_str("long");
       	        yyval.type.type_enum = ECPGt_long;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1202:
#line 5318 "preproc.y"
{
		yyval.type.type_str = make1_str("bool");
       	        yyval.type.type_enum = ECPGt_bool;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1203:
#line 5325 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned int");
       	        yyval.type.type_enum = ECPGt_unsigned_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1204:
#line 5332 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned short");
       	        yyval.type.type_enum = ECPGt_unsigned_short;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1205:
#line 5339 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned long");
       	        yyval.type.type_enum = ECPGt_unsigned_long;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1206:
#line 5346 "preproc.y"
{
		struct_member_list[struct_level++] = NULL;
		if (struct_level >= STRUCT_DEPTH)
        		yyerror("Too many levels in nested structure definition");
	;
    break;}
case 1207:
#line 5351 "preproc.y"
{
		ECPGfree_struct_member(struct_member_list[struct_level--]);
		yyval.type.type_str = cat3_str(make1_str("struct {"), yyvsp[-1].str, make1_str("}"));
		yyval.type.type_enum = ECPGt_struct;
                yyval.type.type_index = -1;
                yyval.type.type_dimension = -1;
	;
    break;}
case 1208:
#line 5359 "preproc.y"
{
		struct_member_list[struct_level++] = NULL;
		if (struct_level >= STRUCT_DEPTH)
        		yyerror("Too many levels in nested structure definition");
	;
    break;}
case 1209:
#line 5364 "preproc.y"
{
		ECPGfree_struct_member(struct_member_list[struct_level--]);
		yyval.type.type_str = cat3_str(make1_str("union {"), yyvsp[-1].str, make1_str("}"));
		yyval.type.type_enum = ECPGt_union;
                yyval.type.type_index = -1;
                yyval.type.type_dimension = -1;
	;
    break;}
case 1210:
#line 5372 "preproc.y"
{
		struct typedefs *this = get_typedef(yyvsp[0].str);

		yyval.type.type_str = mm_strdup(yyvsp[0].str);
		yyval.type.type_enum = this->type->type_enum;
		yyval.type.type_dimension = this->type->type_dimension;
		yyval.type.type_index = this->type->type_index;
		struct_member_list[struct_level] = this->struct_member_list;
	;
    break;}
case 1213:
#line 5385 "preproc.y"
{
		yyval.str = make1_str("");
	;
    break;}
case 1214:
#line 5389 "preproc.y"
{
		yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
	;
    break;}
case 1215:
#line 5395 "preproc.y"
{
		actual_type[struct_level].type_enum = yyvsp[0].type.type_enum;
		actual_type[struct_level].type_dimension = yyvsp[0].type.type_dimension;
		actual_type[struct_level].type_index = yyvsp[0].type.type_index;
	;
    break;}
case 1216:
#line 5401 "preproc.y"
{
		yyval.str = cat3_str(yyvsp[-3].type.type_str, yyvsp[-1].str, make1_str(";"));
	;
    break;}
case 1217:
#line 5406 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 1218:
#line 5410 "preproc.y"
{
		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
	;
    break;}
case 1219:
#line 5415 "preproc.y"
{
			int dimension = yyvsp[0].index.index1;
			int length = yyvsp[0].index.index2;
			struct ECPGtype * type;
                        char dim[14L];

			adjust_array(actual_type[struct_level].type_enum, &dimension, &length, actual_type[struct_level].type_dimension, actual_type[struct_level].type_index, strlen(yyvsp[-2].str));

			switch (actual_type[struct_level].type_enum)
			{
			   case ECPGt_struct:
			   case ECPGt_union:
                               if (dimension < 0)
                                   type = ECPGmake_struct_type(struct_member_list[struct_level], actual_type[struct_level].type_enum);
                               else
                                   type = ECPGmake_array_type(ECPGmake_struct_type(struct_member_list[struct_level], actual_type[struct_level].type_enum), dimension); 

                               break;
                           case ECPGt_varchar:
                               if (dimension == -1)
                                   type = ECPGmake_simple_type(actual_type[struct_level].type_enum, length);
                               else
                                   type = ECPGmake_array_type(ECPGmake_simple_type(actual_type[struct_level].type_enum, length), dimension);

                               switch(dimension)
                               {
                                  case 0:
                                      strcpy(dim, "[]");
                                      break;
				  case -1:
                                  case 1:
                                      *dim = '\0';
                                      break;
                                  default:
                                      sprintf(dim, "[%d]", dimension);
                                      break;
                                }

                               break;
                           case ECPGt_char:
                           case ECPGt_unsigned_char:
                               if (dimension == -1)
                                   type = ECPGmake_simple_type(actual_type[struct_level].type_enum, length);
                               else
                                   type = ECPGmake_array_type(ECPGmake_simple_type(actual_type[struct_level].type_enum, length), dimension);

                               break;
                           default:
			       if (length >= 0)
                	            yyerror("No multi-dimensional array support for simple data types");

                               if (dimension < 0)
                                   type = ECPGmake_simple_type(actual_type[struct_level].type_enum, 1);
                               else
                                   type = ECPGmake_array_type(ECPGmake_simple_type(actual_type[struct_level].type_enum, 1), dimension);

                               break;
			}

			if (struct_level == 0)
				new_variable(yyvsp[-1].str, type);
			else
				ECPGmake_struct_member(yyvsp[-1].str, type, &(struct_member_list[struct_level - 1]));

			yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].index.str);
		;
    break;}
case 1220:
#line 5486 "preproc.y"
{
		struct variable *p = find_variable(yyvsp[-4].str);
		int dimension = yyvsp[-1].index.index1;
		int length = yyvsp[-1].index.index2;
		struct ECPGtype * type;

		adjust_array(yyvsp[-2].type.type_enum, &dimension, &length, yyvsp[-2].type.type_dimension, yyvsp[-2].type.type_index, strlen(yyvsp[0].str));

		switch (yyvsp[-2].type.type_enum)
		{
		   case ECPGt_struct:
		   case ECPGt_union:
                        if (dimension < 0)
                            type = ECPGmake_struct_type(struct_member_list[struct_level], yyvsp[-2].type.type_enum);
                        else
                            type = ECPGmake_array_type(ECPGmake_struct_type(struct_member_list[struct_level], yyvsp[-2].type.type_enum), dimension); 
                        break;
                   case ECPGt_varchar:
                        if (dimension == -1)
                            type = ECPGmake_simple_type(yyvsp[-2].type.type_enum, length);
                        else
                            type = ECPGmake_array_type(ECPGmake_simple_type(yyvsp[-2].type.type_enum, length), dimension);

			break;
                   case ECPGt_char:
                   case ECPGt_unsigned_char:
                        if (dimension == -1)
                            type = ECPGmake_simple_type(yyvsp[-2].type.type_enum, length);
                        else
                            type = ECPGmake_array_type(ECPGmake_simple_type(yyvsp[-2].type.type_enum, length), dimension);

			break;
		   default:
			if (length >= 0)
                	    yyerror("No multi-dimensional array support for simple data types");

                        if (dimension < 0)
                            type = ECPGmake_simple_type(yyvsp[-2].type.type_enum, 1);
                        else
                            type = ECPGmake_array_type(ECPGmake_simple_type(yyvsp[-2].type.type_enum, 1), dimension);

			break;
		}	

		ECPGfree_type(p->type);
		p->type = type;

		yyval.str = cat5_str(cat3_str(make1_str("/* exec sql var"), mm_strdup(yyvsp[-4].str), make1_str("is")), mm_strdup(yyvsp[-2].type.type_str), mm_strdup(yyvsp[-1].index.str), yyvsp[0].str, make1_str("*/"));
	;
    break;}
case 1221:
#line 5540 "preproc.y"
{
	when_error.code = yyvsp[0].action.code;
	when_error.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever sqlerror "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1222:
#line 5545 "preproc.y"
{
	when_nf.code = yyvsp[0].action.code;
	when_nf.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever not found "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1223:
#line 5550 "preproc.y"
{
	when_warn.code = yyvsp[0].action.code;
	when_warn.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever sql_warning "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1224:
#line 5556 "preproc.y"
{
	yyval.action.code = W_NOTHING;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("continue");
;
    break;}
case 1225:
#line 5561 "preproc.y"
{
	yyval.action.code = W_SQLPRINT;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("sqlprint");
;
    break;}
case 1226:
#line 5566 "preproc.y"
{
	yyval.action.code = W_STOP;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("stop");
;
    break;}
case 1227:
#line 5571 "preproc.y"
{
        yyval.action.code = W_GOTO;
        yyval.action.command = strdup(yyvsp[0].str);
	yyval.action.str = cat2_str(make1_str("goto "), yyvsp[0].str);
;
    break;}
case 1228:
#line 5576 "preproc.y"
{
        yyval.action.code = W_GOTO;
        yyval.action.command = strdup(yyvsp[0].str);
	yyval.action.str = cat2_str(make1_str("goto "), yyvsp[0].str);
;
    break;}
case 1229:
#line 5581 "preproc.y"
{
	yyval.action.code = W_DO;
	yyval.action.command = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
	yyval.action.str = cat2_str(make1_str("do"), mm_strdup(yyval.action.command));
;
    break;}
case 1230:
#line 5586 "preproc.y"
{
        yyval.action.code = W_BREAK;
        yyval.action.command = NULL;
        yyval.action.str = make1_str("break");
;
    break;}
case 1231:
#line 5591 "preproc.y"
{
	yyval.action.code = W_DO;
	yyval.action.command = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
	yyval.action.str = cat2_str(make1_str("call"), mm_strdup(yyval.action.command));
;
    break;}
case 1232:
#line 5599 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 1233:
#line 5603 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 1234:
#line 5605 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 1235:
#line 5607 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 1236:
#line 5611 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 1237:
#line 5613 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 1238:
#line 5615 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 1239:
#line 5617 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 1240:
#line 5619 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 1241:
#line 5621 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 1242:
#line 5623 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 1243:
#line 5625 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 1244:
#line 5627 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 1245:
#line 5629 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 1246:
#line 5631 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-2].str, make1_str("= NULL")); ;
    break;}
case 1247:
#line 5633 "preproc.y"
{       yyval.str = cat2_str(make1_str("= NULL"), yyvsp[0].str); ;
    break;}
case 1248:
#line 5635 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 1249:
#line 5639 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 1250:
#line 5641 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 1251:
#line 5643 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 1252:
#line 5647 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 1253:
#line 5651 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 1254:
#line 5653 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 1255:
#line 5655 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 1256:
#line 5657 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 1257:
#line 5659 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1258:
#line 5661 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1259:
#line 5663 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make1_str("(*)")); 
				;
    break;}
case 1260:
#line 5667 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 1261:
#line 5671 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1262:
#line 5675 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 1263:
#line 5679 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 1264:
#line 5683 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 1265:
#line 5689 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 1266:
#line 5693 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 1267:
#line 5699 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 1268:
#line 5703 "preproc.y"
{
  		     		        yyval.str = make1_str("user");
			     	;
    break;}
case 1269:
#line 5707 "preproc.y"
{
					yyval.str = make3_str(make1_str("exists("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1270:
#line 5711 "preproc.y"
{
					yyval.str = make3_str(make1_str("extract("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1271:
#line 5715 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1272:
#line 5719 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1273:
#line 5724 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1274:
#line 5728 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1275:
#line 5732 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1276:
#line 5736 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1277:
#line 5740 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 1278:
#line 5742 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 1279:
#line 5744 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 1280:
#line 5746 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 1281:
#line 5753 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); }
				;
    break;}
case 1282:
#line 5757 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); }
				;
    break;}
case 1283:
#line 5761 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); }
				;
    break;}
case 1284:
#line 5765 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); }
				;
    break;}
case 1285:
#line 5769 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 1286:
#line 5773 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 1287:
#line 5777 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(" in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1288:
#line 5781 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str(" not in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1289:
#line 5785 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-4].str, yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1290:
#line 5789 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("+("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1291:
#line 5793 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("-("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1292:
#line 5797 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("/("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1293:
#line 5801 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("%("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1294:
#line 5805 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("*("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1295:
#line 5809 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("<("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1296:
#line 5813 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(">("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1297:
#line 5817 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("=("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1298:
#line 5821 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("any ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1299:
#line 5825 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1300:
#line 5829 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1301:
#line 5833 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1302:
#line 5837 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1303:
#line 5841 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1304:
#line 5845 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1305:
#line 5849 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1306:
#line 5853 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1307:
#line 5857 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("all ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1308:
#line 5861 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1309:
#line 5865 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1310:
#line 5869 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1311:
#line 5873 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1312:
#line 5877 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1313:
#line 5881 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1314:
#line 5885 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1315:
#line 5889 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("=all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1316:
#line 5893 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 1317:
#line 5895 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 1318:
#line 5897 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 1319:
#line 5899 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 1320:
#line 5901 "preproc.y"
{ 	yyval.str = yyvsp[0].str; ;
    break;}
case 1323:
#line 5906 "preproc.y"
{ reset_variables();;
    break;}
case 1324:
#line 5908 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1325:
#line 5909 "preproc.y"
{ yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1326:
#line 5911 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1327:
#line 5912 "preproc.y"
{ yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1328:
#line 5914 "preproc.y"
{
		add_variable(&argsresult, find_variable(yyvsp[-1].str), (yyvsp[0].str == NULL) ? &no_indicator : find_variable(yyvsp[0].str)); 
;
    break;}
case 1329:
#line 5918 "preproc.y"
{
		add_variable(&argsinsert, find_variable(yyvsp[-1].str), (yyvsp[0].str == NULL) ? &no_indicator : find_variable(yyvsp[0].str)); 
;
    break;}
case 1330:
#line 5922 "preproc.y"
{
		add_variable(&argsinsert, find_variable(yyvsp[0].str), &no_indicator); 
		yyval.str = make1_str("?");
;
    break;}
case 1331:
#line 5927 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1332:
#line 5929 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 1333:
#line 5930 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1334:
#line 5931 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1335:
#line 5932 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1336:
#line 5934 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1337:
#line 5935 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1338:
#line 5940 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1339:
#line 5942 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1340:
#line 5944 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1341:
#line 5946 "preproc.y"
{
			yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str);
		;
    break;}
case 1343:
#line 5950 "preproc.y"
{ yyval.str = make1_str(";"); ;
    break;}
case 1344:
#line 5952 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1345:
#line 5953 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1346:
#line 5954 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1347:
#line 5955 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1348:
#line 5956 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 1349:
#line 5957 "preproc.y"
{ yyval.str = make1_str("auto"); ;
    break;}
case 1350:
#line 5958 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 1351:
#line 5959 "preproc.y"
{ yyval.str = make1_str("char"); ;
    break;}
case 1352:
#line 5960 "preproc.y"
{ yyval.str = make1_str("const"); ;
    break;}
case 1353:
#line 5961 "preproc.y"
{ yyval.str = make1_str("double"); ;
    break;}
case 1354:
#line 5962 "preproc.y"
{ yyval.str = make1_str("enum"); ;
    break;}
case 1355:
#line 5963 "preproc.y"
{ yyval.str = make1_str("extern"); ;
    break;}
case 1356:
#line 5964 "preproc.y"
{ yyval.str = make1_str("float"); ;
    break;}
case 1357:
#line 5965 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 1358:
#line 5966 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 1359:
#line 5967 "preproc.y"
{ yyval.str = make1_str("register"); ;
    break;}
case 1360:
#line 5968 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 1361:
#line 5969 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1362:
#line 5970 "preproc.y"
{ yyval.str = make1_str("static"); ;
    break;}
case 1363:
#line 5971 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 1364:
#line 5972 "preproc.y"
{ yyval.str = make1_str("union"); ;
    break;}
case 1365:
#line 5973 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 1366:
#line 5974 "preproc.y"
{ yyval.str = make1_str("varchar"); ;
    break;}
case 1367:
#line 5975 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 1368:
#line 5976 "preproc.y"
{ yyval.str = make1_str("["); ;
    break;}
case 1369:
#line 5977 "preproc.y"
{ yyval.str = make1_str("]"); ;
    break;}
case 1370:
#line 5978 "preproc.y"
{ yyval.str = make1_str("("); ;
    break;}
case 1371:
#line 5979 "preproc.y"
{ yyval.str = make1_str(")"); ;
    break;}
case 1372:
#line 5980 "preproc.y"
{ yyval.str = make1_str("="); ;
    break;}
case 1373:
#line 5981 "preproc.y"
{ yyval.str = make1_str(","); ;
    break;}
case 1374:
#line 5983 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1375:
#line 5984 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\""));;
    break;}
case 1376:
#line 5985 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1377:
#line 5986 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1378:
#line 5987 "preproc.y"
{ yyval.str = make1_str(","); ;
    break;}
case 1379:
#line 5989 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1380:
#line 5990 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1381:
#line 5991 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1382:
#line 5992 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1383:
#line 5993 "preproc.y"
{ yyval.str = make3_str(make1_str("{"), yyvsp[-1].str, make1_str("}")); ;
    break;}
case 1384:
#line 5995 "preproc.y"
{
    braces_open++;
    yyval.str = make1_str("{");
;
    break;}
case 1385:
#line 6000 "preproc.y"
{
    remove_variables(braces_open--);
    yyval.str = make1_str("}");
;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/usr/share/misc/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 6005 "preproc.y"


void yyerror(char * error)
{
    fprintf(stderr, "%s:%d: %s\n", input_filename, yylineno, error);
    exit(PARSE_ERROR);
}
