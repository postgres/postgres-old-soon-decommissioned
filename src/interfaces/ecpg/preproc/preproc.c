
/*  A Bison parser, made from preproc.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	SQL_AT	258
#define	SQL_AUTOCOMMIT	259
#define	SQL_BOOL	260
#define	SQL_BREAK	261
#define	SQL_CALL	262
#define	SQL_CONNECT	263
#define	SQL_CONNECTION	264
#define	SQL_CONTINUE	265
#define	SQL_DEALLOCATE	266
#define	SQL_DISCONNECT	267
#define	SQL_ENUM	268
#define	SQL_FOUND	269
#define	SQL_FREE	270
#define	SQL_GO	271
#define	SQL_GOTO	272
#define	SQL_IDENTIFIED	273
#define	SQL_IMMEDIATE	274
#define	SQL_INDICATOR	275
#define	SQL_INT	276
#define	SQL_LONG	277
#define	SQL_OFF	278
#define	SQL_OPEN	279
#define	SQL_PREPARE	280
#define	SQL_RELEASE	281
#define	SQL_REFERENCE	282
#define	SQL_SECTION	283
#define	SQL_SHORT	284
#define	SQL_SIGNED	285
#define	SQL_SQLERROR	286
#define	SQL_SQLPRINT	287
#define	SQL_SQLWARNING	288
#define	SQL_START	289
#define	SQL_STOP	290
#define	SQL_STRUCT	291
#define	SQL_UNSIGNED	292
#define	SQL_VAR	293
#define	SQL_WHENEVER	294
#define	S_ANYTHING	295
#define	S_AUTO	296
#define	S_BOOL	297
#define	S_CHAR	298
#define	S_CONST	299
#define	S_DOUBLE	300
#define	S_ENUM	301
#define	S_EXTERN	302
#define	S_FLOAT	303
#define	S_INT	304
#define	S	305
#define	S_LONG	306
#define	S_REGISTER	307
#define	S_SHORT	308
#define	S_SIGNED	309
#define	S_STATIC	310
#define	S_STRUCT	311
#define	S_UNION	312
#define	S_UNSIGNED	313
#define	S_VARCHAR	314
#define	TYPECAST	315
#define	ABSOLUTE	316
#define	ACTION	317
#define	ADD	318
#define	ALL	319
#define	ALTER	320
#define	AND	321
#define	ANY	322
#define	AS	323
#define	ASC	324
#define	BEGIN_TRANS	325
#define	BETWEEN	326
#define	BOTH	327
#define	BY	328
#define	CASCADE	329
#define	CASE	330
#define	CAST	331
#define	CHAR	332
#define	CHARACTER	333
#define	CHECK	334
#define	CLOSE	335
#define	COALESCE	336
#define	COLLATE	337
#define	COLUMN	338
#define	COMMIT	339
#define	CONSTRAINT	340
#define	CREATE	341
#define	CROSS	342
#define	CURRENT	343
#define	CURRENT_DATE	344
#define	CURRENT_TIME	345
#define	CURRENT_TIMESTAMP	346
#define	CURRENT_USER	347
#define	CURSOR	348
#define	DAY_P	349
#define	DECIMAL	350
#define	DECLARE	351
#define	DEFAULT	352
#define	DELETE	353
#define	DESC	354
#define	DISTINCT	355
#define	DOUBLE	356
#define	DROP	357
#define	ELSE	358
#define	END_TRANS	359
#define	EXCEPT	360
#define	EXECUTE	361
#define	EXISTS	362
#define	EXTRACT	363
#define	FALSE_P	364
#define	FETCH	365
#define	FLOAT	366
#define	FOR	367
#define	FOREIGN	368
#define	FROM	369
#define	FULL	370
#define	GRANT	371
#define	GROUP	372
#define	HAVING	373
#define	HOUR_P	374
#define	IN	375
#define	INNER_P	376
#define	INSENSITIVE	377
#define	INSERT	378
#define	INTERSECT	379
#define	INTERVAL	380
#define	INTO	381
#define	IS	382
#define	ISOLATION	383
#define	JOIN	384
#define	KEY	385
#define	LANGUAGE	386
#define	LEADING	387
#define	LEFT	388
#define	LEVEL	389
#define	LIKE	390
#define	LOCAL	391
#define	MATCH	392
#define	MINUTE_P	393
#define	MONTH_P	394
#define	NAMES	395
#define	NATIONAL	396
#define	NATURAL	397
#define	NCHAR	398
#define	NEXT	399
#define	NO	400
#define	NOT	401
#define	NULLIF	402
#define	NULL_P	403
#define	NUMERIC	404
#define	OF	405
#define	ON	406
#define	ONLY	407
#define	OPTION	408
#define	OR	409
#define	ORDER	410
#define	OUTER_P	411
#define	PARTIAL	412
#define	POSITION	413
#define	PRECISION	414
#define	PRIMARY	415
#define	PRIOR	416
#define	PRIVILEGES	417
#define	PROCEDURE	418
#define	PUBLIC	419
#define	READ	420
#define	REFERENCES	421
#define	RELATIVE	422
#define	REVOKE	423
#define	RIGHT	424
#define	ROLLBACK	425
#define	SCROLL	426
#define	SECOND_P	427
#define	SELECT	428
#define	SET	429
#define	SUBSTRING	430
#define	TABLE	431
#define	TEMP	432
#define	TEMPORARY	433
#define	THEN	434
#define	TIME	435
#define	TIMESTAMP	436
#define	TIMEZONE_HOUR	437
#define	TIMEZONE_MINUTE	438
#define	TO	439
#define	TRAILING	440
#define	TRANSACTION	441
#define	TRIM	442
#define	TRUE_P	443
#define	UNION	444
#define	UNIQUE	445
#define	UPDATE	446
#define	USER	447
#define	USING	448
#define	VALUES	449
#define	VARCHAR	450
#define	VARYING	451
#define	VIEW	452
#define	WHEN	453
#define	WHERE	454
#define	WITH	455
#define	WORK	456
#define	YEAR_P	457
#define	ZONE	458
#define	TRIGGER	459
#define	TYPE_P	460
#define	ABORT_TRANS	461
#define	AFTER	462
#define	AGGREGATE	463
#define	ANALYZE	464
#define	BACKWARD	465
#define	BEFORE	466
#define	BINARY	467
#define	CACHE	468
#define	CLUSTER	469
#define	COPY	470
#define	CREATEDB	471
#define	CREATEUSER	472
#define	CYCLE	473
#define	DATABASE	474
#define	DELIMITERS	475
#define	DO	476
#define	EACH	477
#define	ENCODING	478
#define	EXPLAIN	479
#define	EXTEND	480
#define	FORWARD	481
#define	FUNCTION	482
#define	HANDLER	483
#define	INCREMENT	484
#define	INDEX	485
#define	INHERITS	486
#define	INSTEAD	487
#define	ISNULL	488
#define	LANCOMPILER	489
#define	LIMIT	490
#define	LISTEN	491
#define	UNLISTEN	492
#define	LOAD	493
#define	LOCATION	494
#define	LOCK_P	495
#define	MAXVALUE	496
#define	MINVALUE	497
#define	MOVE	498
#define	NEW	499
#define	NOCREATEDB	500
#define	NOCREATEUSER	501
#define	NONE	502
#define	NOTHING	503
#define	NOTIFY	504
#define	NOTNULL	505
#define	OFFSET	506
#define	OIDS	507
#define	OPERATOR	508
#define	PASSWORD	509
#define	PROCEDURAL	510
#define	RENAME	511
#define	RESET	512
#define	RETURNS	513
#define	ROW	514
#define	RULE	515
#define	SERIAL	516
#define	SEQUENCE	517
#define	SETOF	518
#define	SHOW	519
#define	START	520
#define	STATEMENT	521
#define	STDIN	522
#define	STDOUT	523
#define	TRUSTED	524
#define	UNTIL	525
#define	VACUUM	526
#define	VALID	527
#define	VERBOSE	528
#define	VERSION	529
#define	IDENT	530
#define	SCONST	531
#define	Op	532
#define	CSTRING	533
#define	CVARIABLE	534
#define	CPP_LINE	535
#define	ICONST	536
#define	PARAM	537
#define	FCONST	538
#define	OP	539
#define	UMINUS	540

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



#define	YYFINAL		2483
#define	YYFLAG		-32768
#define	YYNTBASE	306

#define YYTRANSLATE(x) ((unsigned)(x) <= 541 ? yytranslate[x] : 673)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,   292,     2,     2,   301,
   302,   290,   288,   300,   289,   297,   291,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,   294,   295,   286,
   285,   287,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   298,     2,   299,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   303,   293,   304,     2,     2,     2,     2,     2,
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
   276,   277,   278,   279,   280,   281,   282,   283,   284,   296,
   305
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     3,     6,    11,    15,    17,    19,    21,    23,
    25,    28,    30,    32,    34,    36,    38,    40,    42,    44,
    46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
    66,    68,    70,    72,    74,    76,    78,    80,    82,    84,
    86,    88,    90,    92,    94,    96,    98,   100,   102,   104,
   106,   108,   110,   112,   114,   116,   118,   120,   122,   124,
   126,   128,   130,   132,   134,   136,   138,   140,   142,   151,
   160,   164,   168,   169,   171,   173,   174,   176,   178,   179,
   183,   185,   189,   190,   194,   195,   200,   205,   210,   217,
   223,   227,   229,   231,   233,   235,   237,   240,   244,   249,
   252,   256,   261,   267,   271,   276,   280,   287,   293,   296,
   299,   307,   309,   311,   313,   315,   317,   319,   320,   323,
   324,   328,   329,   338,   340,   342,   343,   347,   349,   350,
   352,   354,   358,   362,   364,   365,   368,   370,   373,   374,
   378,   380,   385,   388,   391,   394,   396,   399,   405,   409,
   411,   413,   416,   420,   424,   428,   432,   436,   440,   444,
   448,   451,   454,   458,   465,   469,   473,   478,   482,   485,
   488,   490,   492,   497,   499,   504,   506,   508,   512,   514,
   519,   524,   530,   541,   545,   547,   549,   551,   553,   556,
   560,   564,   568,   572,   576,   580,   584,   588,   591,   594,
   598,   605,   609,   613,   618,   622,   626,   631,   635,   639,
   642,   645,   648,   651,   655,   658,   663,   667,   671,   676,
   681,   687,   694,   700,   707,   711,   713,   715,   718,   721,
   722,   725,   727,   728,   732,   736,   739,   741,   744,   747,
   752,   753,   761,   765,   766,   770,   772,   774,   779,   782,
   783,   786,   788,   791,   794,   797,   800,   802,   804,   806,
   809,   811,   814,   824,   826,   827,   832,   847,   849,   851,
   853,   857,   863,   865,   867,   869,   873,   875,   876,   878,
   880,   882,   886,   887,   889,   891,   893,   895,   901,   905,
   908,   910,   912,   914,   916,   918,   920,   922,   924,   928,
   930,   934,   938,   940,   944,   946,   948,   950,   952,   955,
   959,   963,   970,   975,   977,   979,   981,   983,   984,   986,
   989,   991,   993,   995,   996,   999,  1002,  1003,  1011,  1014,
  1016,  1018,  1020,  1024,  1026,  1028,  1030,  1032,  1034,  1036,
  1039,  1041,  1045,  1046,  1053,  1065,  1067,  1068,  1071,  1072,
  1074,  1076,  1080,  1082,  1089,  1093,  1096,  1099,  1100,  1102,
  1105,  1106,  1111,  1123,  1126,  1127,  1131,  1134,  1136,  1140,
  1143,  1145,  1146,  1150,  1152,  1154,  1156,  1158,  1163,  1165,
  1167,  1172,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,
  1195,  1197,  1199,  1201,  1205,  1209,  1213,  1223,  1225,  1226,
  1228,  1229,  1230,  1244,  1246,  1248,  1250,  1254,  1258,  1260,
  1262,  1265,  1269,  1272,  1274,  1276,  1278,  1280,  1284,  1286,
  1288,  1290,  1292,  1294,  1296,  1297,  1300,  1303,  1306,  1309,
  1312,  1315,  1318,  1321,  1324,  1326,  1328,  1329,  1335,  1338,
  1345,  1349,  1353,  1354,  1358,  1359,  1361,  1363,  1364,  1366,
  1368,  1369,  1373,  1378,  1382,  1388,  1390,  1391,  1393,  1394,
  1398,  1399,  1401,  1405,  1409,  1411,  1413,  1415,  1417,  1419,
  1421,  1426,  1431,  1434,  1436,  1444,  1449,  1453,  1454,  1458,
  1460,  1463,  1468,  1472,  1481,  1489,  1496,  1498,  1499,  1506,
  1514,  1516,  1518,  1520,  1523,  1524,  1527,  1528,  1531,  1534,
  1537,  1542,  1546,  1548,  1552,  1557,  1562,  1571,  1576,  1579,
  1580,  1582,  1583,  1585,  1586,  1588,  1592,  1594,  1595,  1599,
  1600,  1602,  1606,  1609,  1612,  1615,  1618,  1620,  1622,  1623,
  1628,  1633,  1636,  1641,  1644,  1645,  1647,  1649,  1651,  1653,
  1655,  1657,  1658,  1660,  1662,  1666,  1670,  1671,  1674,  1675,
  1679,  1680,  1683,  1684,  1687,  1688,  1692,  1694,  1696,  1700,
  1702,  1706,  1709,  1711,  1713,  1718,  1721,  1724,  1726,  1731,
  1736,  1740,  1743,  1746,  1749,  1751,  1753,  1754,  1756,  1757,
  1762,  1765,  1769,  1771,  1773,  1776,  1777,  1779,  1782,  1786,
  1791,  1792,  1796,  1801,  1802,  1804,  1808,  1812,  1816,  1820,
  1824,  1828,  1831,  1833,  1836,  1838,  1840,  1842,  1844,  1846,
  1848,  1850,  1852,  1854,  1856,  1858,  1860,  1862,  1864,  1866,
  1868,  1870,  1872,  1874,  1876,  1878,  1880,  1882,  1884,  1886,
  1888,  1890,  1892,  1894,  1896,  1898,  1900,  1902,  1904,  1906,
  1908,  1910,  1912,  1914,  1917,  1920,  1923,  1926,  1928,  1931,
  1933,  1935,  1939,  1940,  1946,  1950,  1951,  1957,  1961,  1962,
  1967,  1969,  1974,  1977,  1979,  1983,  1986,  1988,  1989,  1993,
  1994,  1997,  1998,  2000,  2003,  2005,  2008,  2010,  2012,  2014,
  2016,  2018,  2020,  2024,  2025,  2027,  2031,  2035,  2039,  2043,
  2047,  2051,  2055,  2056,  2058,  2060,  2068,  2077,  2086,  2094,
  2102,  2106,  2108,  2110,  2112,  2114,  2116,  2118,  2120,  2122,
  2124,  2126,  2128,  2132,  2134,  2137,  2139,  2141,  2143,  2146,
  2149,  2152,  2156,  2160,  2164,  2168,  2172,  2176,  2180,  2184,
  2188,  2192,  2195,  2198,  2202,  2209,  2213,  2217,  2221,  2226,
  2229,  2232,  2237,  2241,  2246,  2248,  2250,  2255,  2257,  2262,
  2264,  2266,  2271,  2276,  2281,  2286,  2292,  2298,  2304,  2309,
  2312,  2316,  2319,  2324,  2328,  2333,  2337,  2342,  2348,  2355,
  2361,  2368,  2374,  2380,  2386,  2392,  2398,  2404,  2410,  2416,
  2422,  2429,  2436,  2443,  2450,  2457,  2464,  2471,  2478,  2485,
  2492,  2499,  2506,  2513,  2520,  2527,  2534,  2541,  2548,  2552,
  2556,  2559,  2561,  2563,  2566,  2568,  2570,  2573,  2576,  2579,
  2583,  2587,  2591,  2595,  2599,  2602,  2605,  2609,  2616,  2620,
  2624,  2627,  2630,  2634,  2639,  2641,  2643,  2648,  2650,  2655,
  2657,  2659,  2664,  2669,  2675,  2681,  2687,  2692,  2694,  2699,
  2706,  2707,  2709,  2713,  2717,  2721,  2722,  2724,  2726,  2728,
  2730,  2734,  2735,  2738,  2740,  2743,  2747,  2751,  2755,  2759,
  2763,  2766,  2770,  2777,  2781,  2785,  2788,  2791,  2793,  2797,
  2802,  2807,  2812,  2818,  2824,  2830,  2835,  2839,  2840,  2843,
  2844,  2847,  2848,  2852,  2855,  2857,  2859,  2861,  2863,  2867,
  2869,  2871,  2873,  2877,  2883,  2890,  2895,  2898,  2900,  2905,
  2908,  2909,  2912,  2914,  2915,  2919,  2923,  2925,  2929,  2933,
  2937,  2939,  2941,  2946,  2949,  2953,  2957,  2959,  2963,  2965,
  2969,  2971,  2973,  2974,  2976,  2978,  2980,  2982,  2984,  2986,
  2988,  2990,  2992,  2994,  2996,  2998,  3000,  3003,  3005,  3007,
  3009,  3012,  3014,  3016,  3018,  3020,  3022,  3024,  3026,  3028,
  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,  3046,  3048,
  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,  3066,  3068,
  3070,  3072,  3074,  3076,  3078,  3080,  3082,  3084,  3086,  3088,
  3090,  3092,  3094,  3096,  3098,  3100,  3102,  3104,  3106,  3108,
  3110,  3112,  3114,  3116,  3118,  3120,  3122,  3124,  3126,  3128,
  3130,  3132,  3134,  3136,  3138,  3140,  3142,  3144,  3146,  3148,
  3150,  3152,  3154,  3156,  3158,  3160,  3162,  3164,  3166,  3168,
  3170,  3172,  3174,  3176,  3178,  3180,  3182,  3184,  3186,  3188,
  3190,  3192,  3194,  3196,  3198,  3200,  3202,  3204,  3206,  3208,
  3210,  3212,  3214,  3216,  3218,  3220,  3222,  3224,  3226,  3228,
  3230,  3232,  3234,  3236,  3238,  3240,  3242,  3244,  3246,  3248,
  3250,  3252,  3254,  3256,  3258,  3260,  3262,  3264,  3266,  3268,
  3270,  3272,  3274,  3276,  3278,  3280,  3282,  3284,  3286,  3288,
  3290,  3292,  3294,  3296,  3298,  3300,  3302,  3304,  3306,  3308,
  3314,  3318,  3321,  3325,  3332,  3334,  3336,  3339,  3342,  3344,
  3345,  3347,  3351,  3354,  3355,  3358,  3359,  3362,  3363,  3365,
  3369,  3374,  3378,  3380,  3382,  3384,  3386,  3389,  3390,  3398,
  3402,  3403,  3408,  3414,  3420,  3421,  3424,  3425,  3426,  3433,
  3435,  3437,  3439,  3441,  3443,  3445,  3446,  3448,  3450,  3452,
  3454,  3456,  3458,  3463,  3466,  3471,  3476,  3479,  3482,  3483,
  3485,  3487,  3490,  3492,  3495,  3497,  3500,  3502,  3504,  3506,
  3508,  3511,  3513,  3515,  3519,  3524,  3525,  3528,  3529,  3531,
  3535,  3538,  3540,  3542,  3544,  3545,  3547,  3549,  3553,  3554,
  3559,  3561,  3563,  3566,  3570,  3571,  3574,  3576,  3580,  3585,
  3588,  3593,  3595,  3597,  3599,  3601,  3606,  3613,  3617,  3621,
  3626,  3631,  3632,  3636,  3640,  3645,  3650,  3651,  3653,  3654,
  3656,  3658,  3660,  3662,  3665,  3667,  3670,  3673,  3675,  3678,
  3681,  3684,  3685,  3691,  3692,  3698,  3700,  3702,  3703,  3704,
  3707,  3708,  3713,  3715,  3719,  3723,  3730,  3734,  3739,  3743,
  3745,  3747,  3749,  3752,  3756,  3762,  3765,  3771,  3774,  3776,
  3778,  3780,  3783,  3786,  3789,  3793,  3797,  3801,  3805,  3809,
  3813,  3817,  3821,  3825,  3829,  3832,  3835,  3839,  3846,  3850,
  3854,  3858,  3863,  3866,  3869,  3874,  3878,  3883,  3885,  3887,
  3892,  3894,  3899,  3901,  3903,  3908,  3913,  3918,  3923,  3929,
  3935,  3941,  3946,  3949,  3953,  3956,  3961,  3965,  3970,  3974,
  3979,  3985,  3992,  3998,  4005,  4011,  4017,  4023,  4029,  4035,
  4041,  4047,  4053,  4059,  4066,  4073,  4080,  4087,  4094,  4101,
  4108,  4115,  4122,  4129,  4136,  4143,  4150,  4157,  4164,  4171,
  4178,  4185,  4189,  4193,  4196,  4198,  4200,  4202,  4206,  4208,
  4209,  4212,  4214,  4217,  4220,  4223,  4225,  4227,  4228,  4230,
  4233,  4236,  4238,  4240,  4242,  4244,  4246,  4249,  4251,  4253,
  4255,  4257,  4259,  4261,  4263,  4265,  4267,  4269,  4271,  4273,
  4275,  4277,  4279,  4281,  4283,  4285,  4287,  4289,  4291,  4293,
  4295,  4297,  4299,  4301,  4303,  4305,  4307,  4309,  4311,  4313,
  4315,  4317,  4319,  4321,  4323,  4325,  4327,  4329,  4331,  4333,
  4335,  4337,  4339,  4343,  4345
};

static const short yyrhs[] = {   307,
     0,     0,   307,   308,     0,   655,   309,   310,   295,     0,
   655,   310,   295,     0,   597,     0,   667,     0,   665,     0,
   671,     0,   672,     0,     3,   583,     0,   325,     0,   312,
     0,   327,     0,   328,     0,   334,     0,   357,     0,   361,
     0,   367,     0,   370,     0,   311,     0,   450,     0,   380,
     0,   388,     0,   369,     0,   379,     0,   313,     0,   409,
     0,   456,     0,   389,     0,   393,     0,   400,     0,   438,
     0,   439,     0,   464,     0,   410,     0,   418,     0,   421,
     0,   420,     0,   416,     0,   425,     0,   399,     0,   457,
     0,   428,     0,   440,     0,   442,     0,   443,     0,   444,
     0,   449,     0,   451,     0,   320,     0,   323,     0,   324,
     0,   582,     0,   595,     0,   596,     0,   620,     0,   621,
     0,   624,     0,   627,     0,   628,     0,   631,     0,   632,
     0,   633,     0,   636,     0,   637,     0,   650,     0,   651,
     0,    86,   192,   577,   314,   315,   316,   318,   319,     0,
    65,   192,   577,   314,   315,   316,   318,   319,     0,   102,
   192,   577,     0,   200,   254,   577,     0,     0,   216,     0,
   245,     0,     0,   217,     0,   246,     0,     0,   317,   300,
   577,     0,   577,     0,   120,   117,   317,     0,     0,   272,
   270,   576,     0,     0,   174,   579,   184,   321,     0,   174,
   579,   285,   321,     0,   174,   180,   203,   322,     0,   174,
   186,   128,   134,   165,   579,     0,   174,   186,   128,   134,
   579,     0,   174,   140,   448,     0,   576,     0,    97,     0,
   576,     0,    97,     0,   136,     0,   264,   579,     0,   264,
   180,   203,     0,   264,   186,   128,   134,     0,   257,   579,
     0,   257,   180,   203,     0,   257,   186,   128,   134,     0,
    65,   176,   563,   486,   326,     0,    63,   427,   338,     0,
    63,   301,   336,   302,     0,   102,   427,   579,     0,    65,
   427,   579,   174,    97,   345,     0,    65,   427,   579,   102,
    97,     0,    63,   347,     0,    80,   562,     0,   215,   331,
   563,   332,   329,   330,   333,     0,   184,     0,   114,     0,
   576,     0,   267,     0,   268,     0,   212,     0,     0,   200,
   252,     0,     0,   193,   220,   576,     0,     0,    86,   335,
   176,   563,   301,   336,   302,   356,     0,   177,     0,   178,
     0,     0,   336,   300,   337,     0,   337,     0,     0,   338,
     0,   346,     0,   579,   511,   339,     0,   579,   261,   341,
     0,   340,     0,     0,   340,   342,     0,   342,     0,   160,
   130,     0,     0,    85,   569,   343,     0,   343,     0,    79,
   301,   349,   302,     0,    97,   148,     0,    97,   345,     0,
   146,   148,     0,   190,     0,   160,   130,     0,   166,   579,
   460,   352,   353,     0,   344,   300,   345,     0,   345,     0,
   572,     0,   289,   345,     0,   345,   288,   345,     0,   345,
   289,   345,     0,   345,   291,   345,     0,   345,   292,   345,
     0,   345,   290,   345,     0,   345,   285,   345,     0,   345,
   286,   345,     0,   345,   287,   345,     0,   295,   345,     0,
   293,   345,     0,   345,    60,   511,     0,    76,   301,   345,
    68,   511,   302,     0,   301,   345,   302,     0,   570,   301,
   302,     0,   570,   301,   344,   302,     0,   345,   277,   345,
     0,   277,   345,     0,   345,   277,     0,    89,     0,    90,
     0,    90,   301,   574,   302,     0,    91,     0,    91,   301,
   574,   302,     0,    92,     0,   192,     0,    85,   569,   347,
     0,   347,     0,    79,   301,   349,   302,     0,   190,   301,
   461,   302,     0,   160,   130,   301,   461,   302,     0,   113,
   130,   301,   461,   302,   166,   579,   460,   352,   353,     0,
   348,   300,   349,     0,   349,     0,   572,     0,   148,     0,
   579,     0,   289,   349,     0,   349,   288,   349,     0,   349,
   289,   349,     0,   349,   291,   349,     0,   349,   292,   349,
     0,   349,   290,   349,     0,   349,   285,   349,     0,   349,
   286,   349,     0,   349,   287,   349,     0,   295,   349,     0,
   293,   349,     0,   349,    60,   511,     0,    76,   301,   349,
    68,   511,   302,     0,   301,   349,   302,     0,   570,   301,
   302,     0,   570,   301,   348,   302,     0,   349,   277,   349,
     0,   349,   135,   349,     0,   349,   146,   135,   349,     0,
   349,    66,   349,     0,   349,   154,   349,     0,   146,   349,
     0,   277,   349,     0,   349,   277,     0,   349,   233,     0,
   349,   127,   148,     0,   349,   250,     0,   349,   127,   146,
   148,     0,   349,   127,   188,     0,   349,   127,   109,     0,
   349,   127,   146,   188,     0,   349,   127,   146,   109,     0,
   349,   120,   301,   350,   302,     0,   349,   146,   120,   301,
   350,   302,     0,   349,    71,   351,    66,   351,     0,   349,
   146,    71,   351,    66,   351,     0,   350,   300,   351,     0,
   351,     0,   572,     0,   137,   115,     0,   137,   157,     0,
     0,   354,   354,     0,   354,     0,     0,   151,    98,   355,
     0,   151,   191,   355,     0,   145,    62,     0,    74,     0,
   174,    97,     0,   174,   148,     0,   231,   301,   487,   302,
     0,     0,    86,   335,   176,   563,   358,    68,   474,     0,
   301,   359,   302,     0,     0,   359,   300,   360,     0,   360,
     0,   579,     0,    86,   262,   563,   362,     0,   362,   363,
     0,     0,   213,   366,     0,   218,     0,   229,   366,     0,
   241,   366,     0,   242,   366,     0,   265,   366,     0,   365,
     0,   366,     0,   575,     0,   289,   575,     0,   574,     0,
   289,   574,     0,    86,   368,   255,   131,   576,   228,   383,
   234,   576,     0,   269,     0,     0,   102,   255,   131,   576,
     0,    86,   204,   569,   371,   372,   151,   563,   374,   106,
   163,   569,   301,   377,   302,     0,   211,     0,   207,     0,
   373,     0,   373,   154,   373,     0,   373,   154,   373,   154,
   373,     0,   123,     0,    98,     0,   191,     0,   112,   375,
   376,     0,   222,     0,     0,   259,     0,   266,     0,   378,
     0,   377,   300,   378,     0,     0,   574,     0,   575,     0,
   576,     0,   663,     0,   102,   204,   569,   151,   563,     0,
    86,   382,   381,     0,   383,   384,     0,   253,     0,   205,
     0,   208,     0,   163,     0,   129,     0,   579,     0,   423,
     0,   277,     0,   301,   385,   302,     0,   386,     0,   385,
   300,   386,     0,   383,   285,   387,     0,   383,     0,    97,
   285,   387,     0,   579,     0,   422,     0,   364,     0,   576,
     0,   263,   579,     0,   102,   176,   487,     0,   102,   262,
   487,     0,   110,   390,   391,   392,   126,   654,     0,   243,
   390,   391,   392,     0,   226,     0,   210,     0,   167,     0,
    61,     0,     0,   574,     0,   289,   574,     0,    64,     0,
   144,     0,   161,     0,     0,   120,   569,     0,   114,   569,
     0,     0,   116,   394,   151,   487,   184,   397,   398,     0,
    64,   162,     0,    64,     0,   395,     0,   396,     0,   395,
   300,   396,     0,   173,     0,   123,     0,   191,     0,    98,
     0,   260,     0,   164,     0,   117,   579,     0,   579,     0,
   200,   116,   153,     0,     0,   168,   394,   151,   487,   114,
   397,     0,    86,   401,   230,   568,   151,   563,   402,   301,
   403,   302,   411,     0,   190,     0,     0,   193,   565,     0,
     0,   404,     0,   405,     0,   404,   300,   406,     0,   406,
     0,   570,   301,   488,   302,   407,   408,     0,   566,   407,
   408,     0,   294,   511,     0,   112,   511,     0,     0,   567,
     0,   193,   567,     0,     0,   225,   230,   568,   506,     0,
    86,   227,   570,   412,   258,   414,   411,    68,   576,   131,
   576,     0,   200,   384,     0,     0,   301,   413,   302,     0,
   301,   302,     0,   578,     0,   413,   300,   578,     0,   415,
   578,     0,   263,     0,     0,   102,   417,   569,     0,   205,
     0,   230,     0,   260,     0,   197,     0,   102,   208,   569,
   419,     0,   569,     0,   290,     0,   102,   227,   570,   412,
     0,   102,   253,   422,   301,   424,   302,     0,   277,     0,
   423,     0,   288,     0,   289,     0,   290,     0,   292,     0,
   291,     0,   286,     0,   287,     0,   285,     0,   569,     0,
   569,   300,   569,     0,   247,   300,   569,     0,   569,   300,
   247,     0,    65,   176,   563,   486,   256,   427,   426,   184,
   569,     0,   569,     0,     0,    83,     0,     0,     0,    86,
   260,   569,    68,   429,   151,   435,   184,   434,   506,   221,
   436,   430,     0,   248,     0,   472,     0,   433,     0,   298,
   431,   299,     0,   301,   431,   302,     0,   432,     0,   433,
     0,   432,   433,     0,   432,   433,   295,     0,   433,   295,
     0,   458,     0,   466,     0,   463,     0,   437,     0,   563,
   297,   566,     0,   563,     0,   173,     0,   191,     0,    98,
     0,   123,     0,   232,     0,     0,   249,   563,     0,   236,
   563,     0,   237,   563,     0,   237,   290,     0,   206,   441,
     0,    70,   441,     0,    84,   441,     0,   104,   441,     0,
   170,   441,     0,   201,     0,   186,     0,     0,    86,   197,
   569,    68,   472,     0,   238,   571,     0,    86,   219,   564,
   200,   445,   446,     0,    86,   219,   564,     0,   239,   285,
   447,     0,     0,   223,   285,   448,     0,     0,   576,     0,
    97,     0,     0,   576,     0,    97,     0,     0,   102,   219,
   564,     0,   214,   568,   151,   563,     0,   271,   452,   453,
     0,   271,   452,   453,   563,   454,     0,   273,     0,     0,
   209,     0,     0,   301,   455,   302,     0,     0,   569,     0,
   455,   300,   569,     0,   224,   452,   457,     0,   472,     0,
   467,     0,   466,     0,   458,     0,   437,     0,   463,     0,
   123,   126,   563,   459,     0,   194,   301,   560,   302,     0,
    97,   194,     0,   472,     0,   301,   461,   302,   194,   301,
   560,   302,     0,   301,   461,   302,   472,     0,   301,   461,
   302,     0,     0,   461,   300,   462,     0,   462,     0,   579,
   537,     0,    98,   114,   563,   506,     0,   240,   476,   563,
     0,   240,   476,   563,   120,   465,   259,   275,   275,     0,
   240,   476,   563,   120,   275,   275,   275,     0,   240,   476,
   563,   120,   275,   275,     0,   275,     0,     0,   191,   563,
   174,   558,   493,   506,     0,    96,   569,   468,    93,   112,
   472,   469,     0,   212,     0,   122,     0,   171,     0,   122,
   171,     0,     0,   112,   470,     0,     0,   165,   152,     0,
   191,   471,     0,   150,   461,     0,   473,   479,   491,   483,
     0,   301,   473,   302,     0,   474,     0,   473,   105,   473,
     0,   473,   189,   477,   473,     0,   473,   124,   477,   473,
     0,   173,   478,   560,   475,   493,   506,   489,   490,     0,
   126,   335,   476,   563,     0,   126,   654,     0,     0,   176,
     0,     0,    64,     0,     0,   100,     0,   100,   151,   579,
     0,    64,     0,     0,   155,    73,   480,     0,     0,   481,
     0,   480,   300,   481,     0,   535,   482,     0,   193,   277,
     0,   193,   286,     0,   193,   287,     0,    69,     0,    99,
     0,     0,   235,   484,   300,   485,     0,   235,   484,   251,
   485,     0,   235,   484,     0,   251,   485,   235,   484,     0,
   251,   485,     0,     0,   574,     0,    64,     0,   282,     0,
   574,     0,   282,     0,   290,     0,     0,   488,     0,   569,
     0,   488,   300,   569,     0,   117,    73,   538,     0,     0,
   118,   535,     0,     0,   112,   191,   492,     0,     0,   150,
   455,     0,     0,   114,   494,     0,     0,   301,   497,   302,
     0,   498,     0,   495,     0,   495,   300,   496,     0,   496,
     0,   507,    68,   580,     0,   507,   579,     0,   507,     0,
   498,     0,   496,   189,   129,   496,     0,   496,   499,     0,
   499,   500,     0,   500,     0,   501,   129,   496,   503,     0,
   142,   501,   129,   496,     0,    87,   129,   496,     0,   115,
   502,     0,   133,   502,     0,   169,   502,     0,   156,     0,
   121,     0,     0,   156,     0,     0,   193,   301,   504,   302,
     0,   151,   535,     0,   504,   300,   505,     0,   505,     0,
   579,     0,   199,   535,     0,     0,   563,     0,   563,   290,
     0,   298,   299,   509,     0,   298,   510,   299,   509,     0,
     0,   298,   299,   509,     0,   298,   510,   299,   509,     0,
     0,   574,     0,   301,   510,   302,     0,   510,   288,   510,
     0,   510,   289,   510,     0,   510,   290,   510,     0,   510,
   291,   510,     0,   510,   292,   510,     0,   512,   508,     0,
   520,     0,   263,   512,     0,   513,     0,   525,     0,   515,
     0,   514,     0,   663,     0,   205,     0,     3,     0,     4,
     0,     5,     0,     6,     0,     7,     0,     8,     0,     9,
     0,    10,     0,    11,     0,    12,     0,    14,     0,    16,
     0,    17,     0,    18,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    35,     0,    36,     0,    37,     0,    38,
     0,    39,     0,   111,   517,     0,   101,   159,     0,    95,
   519,     0,   149,   518,     0,   111,     0,   101,   159,     0,
    95,     0,   149,     0,   301,   574,   302,     0,     0,   301,
   574,   300,   574,   302,     0,   301,   574,   302,     0,     0,
   301,   574,   300,   574,   302,     0,   301,   574,   302,     0,
     0,   521,   301,   574,   302,     0,   521,     0,    78,   522,
   523,   524,     0,    77,   522,     0,   195,     0,   141,    78,
   522,     0,   143,   522,     0,   196,     0,     0,    78,   174,
   579,     0,     0,    82,   579,     0,     0,   526,     0,   181,
   527,     0,   180,     0,   125,   528,     0,   202,     0,   139,
     0,    94,     0,   119,     0,   138,     0,   172,     0,   200,
   180,   203,     0,     0,   526,     0,   202,   184,   139,     0,
    94,   184,   119,     0,    94,   184,   138,     0,    94,   184,
   172,     0,   119,   184,   138,     0,   138,   184,   172,     0,
   119,   184,   172,     0,     0,   535,     0,   148,     0,   301,
   531,   302,   120,   301,   474,   302,     0,   301,   531,   302,
   146,   120,   301,   474,   302,     0,   301,   531,   302,   532,
   533,   301,   474,   302,     0,   301,   531,   302,   532,   301,
   474,   302,     0,   301,   531,   302,   532,   301,   531,   302,
     0,   534,   300,   535,     0,   277,     0,   286,     0,   285,
     0,   287,     0,   288,     0,   289,     0,   290,     0,   292,
     0,   291,     0,    67,     0,    64,     0,   534,   300,   535,
     0,   535,     0,   556,   537,     0,   530,     0,   572,     0,
   579,     0,   289,   535,     0,   292,   535,     0,   535,   292,
     0,   535,   288,   535,     0,   535,   289,   535,     0,   535,
   291,   535,     0,   535,   292,   535,     0,   535,   290,   535,
     0,   535,   286,   535,     0,   535,   287,   535,     0,   535,
   285,   148,     0,   148,   285,   535,     0,   535,   285,   535,
     0,   295,   535,     0,   293,   535,     0,   535,    60,   511,
     0,    76,   301,   535,    68,   511,   302,     0,   301,   529,
   302,     0,   535,   277,   535,     0,   535,   135,   535,     0,
   535,   146,   135,   535,     0,   277,   535,     0,   535,   277,
     0,   570,   301,   290,   302,     0,   570,   301,   302,     0,
   570,   301,   538,   302,     0,    89,     0,    90,     0,    90,
   301,   574,   302,     0,    91,     0,    91,   301,   574,   302,
     0,    92,     0,   192,     0,   107,   301,   474,   302,     0,
   108,   301,   539,   302,     0,   158,   301,   541,   302,     0,
   175,   301,   543,   302,     0,   187,   301,    72,   546,   302,
     0,   187,   301,   132,   546,   302,     0,   187,   301,   185,
   546,   302,     0,   187,   301,   546,   302,     0,   535,   233,
     0,   535,   127,   148,     0,   535,   250,     0,   535,   127,
   146,   148,     0,   535,   127,   188,     0,   535,   127,   146,
   109,     0,   535,   127,   109,     0,   535,   127,   146,   188,
     0,   535,    71,   536,    66,   536,     0,   535,   146,    71,
   536,    66,   536,     0,   535,   120,   301,   547,   302,     0,
   535,   146,   120,   301,   549,   302,     0,   535,   277,   301,
   474,   302,     0,   535,   288,   301,   474,   302,     0,   535,
   289,   301,   474,   302,     0,   535,   291,   301,   474,   302,
     0,   535,   292,   301,   474,   302,     0,   535,   290,   301,
   474,   302,     0,   535,   286,   301,   474,   302,     0,   535,
   287,   301,   474,   302,     0,   535,   285,   301,   474,   302,
     0,   535,   277,    67,   301,   474,   302,     0,   535,   288,
    67,   301,   474,   302,     0,   535,   289,    67,   301,   474,
   302,     0,   535,   291,    67,   301,   474,   302,     0,   535,
   292,    67,   301,   474,   302,     0,   535,   290,    67,   301,
   474,   302,     0,   535,   286,    67,   301,   474,   302,     0,
   535,   287,    67,   301,   474,   302,     0,   535,   285,    67,
   301,   474,   302,     0,   535,   277,    64,   301,   474,   302,
     0,   535,   288,    64,   301,   474,   302,     0,   535,   289,
    64,   301,   474,   302,     0,   535,   291,    64,   301,   474,
   302,     0,   535,   292,    64,   301,   474,   302,     0,   535,
   290,    64,   301,   474,   302,     0,   535,   286,    64,   301,
   474,   302,     0,   535,   287,    64,   301,   474,   302,     0,
   535,   285,    64,   301,   474,   302,     0,   535,    66,   535,
     0,   535,   154,   535,     0,   146,   535,     0,   551,     0,
   659,     0,   556,   537,     0,   572,     0,   579,     0,   289,
   536,     0,   292,   536,     0,   536,   292,     0,   536,   288,
   536,     0,   536,   289,   536,     0,   536,   291,   536,     0,
   536,   292,   536,     0,   536,   290,   536,     0,   295,   536,
     0,   293,   536,     0,   536,    60,   511,     0,    76,   301,
   536,    68,   511,   302,     0,   301,   535,   302,     0,   536,
   277,   536,     0,   277,   536,     0,   536,   277,     0,   570,
   301,   302,     0,   570,   301,   538,   302,     0,    89,     0,
    90,     0,    90,   301,   574,   302,     0,    91,     0,    91,
   301,   574,   302,     0,    92,     0,   192,     0,   158,   301,
   541,   302,     0,   175,   301,   543,   302,     0,   187,   301,
    72,   546,   302,     0,   187,   301,   132,   546,   302,     0,
   187,   301,   185,   546,   302,     0,   187,   301,   546,   302,
     0,   660,     0,   298,   653,   299,   537,     0,   298,   653,
   294,   653,   299,   537,     0,     0,   529,     0,   538,   300,
   529,     0,   538,   193,   535,     0,   540,   114,   535,     0,
     0,   659,     0,   526,     0,   182,     0,   183,     0,   542,
   120,   542,     0,     0,   556,   537,     0,   572,     0,   289,
   542,     0,   542,   288,   542,     0,   542,   289,   542,     0,
   542,   291,   542,     0,   542,   292,   542,     0,   542,   290,
   542,     0,   293,   542,     0,   542,    60,   511,     0,    76,
   301,   542,    68,   511,   302,     0,   301,   542,   302,     0,
   542,   277,   542,     0,   277,   542,     0,   542,   277,     0,
   579,     0,   570,   301,   302,     0,   570,   301,   538,   302,
     0,   158,   301,   541,   302,     0,   175,   301,   543,   302,
     0,   187,   301,    72,   546,   302,     0,   187,   301,   132,
   546,   302,     0,   187,   301,   185,   546,   302,     0,   187,
   301,   546,   302,     0,   538,   544,   545,     0,     0,   114,
   538,     0,     0,   112,   538,     0,     0,   535,   114,   538,
     0,   114,   538,     0,   538,     0,   474,     0,   548,     0,
   572,     0,   548,   300,   572,     0,   474,     0,   550,     0,
   572,     0,   550,   300,   572,     0,    75,   555,   552,   554,
   104,     0,   147,   301,   535,   300,   535,   302,     0,    81,
   301,   538,   302,     0,   552,   553,     0,   553,     0,   198,
   535,   179,   529,     0,   103,   529,     0,     0,   556,   537,
     0,   579,     0,     0,   563,   297,   557,     0,   573,   297,
   557,     0,   566,     0,   557,   297,   566,     0,   557,   297,
   290,     0,   558,   300,   559,     0,   559,     0,   290,     0,
   579,   537,   285,   529,     0,   556,   537,     0,   563,   297,
   290,     0,   560,   300,   561,     0,   561,     0,   529,    68,
   580,     0,   529,     0,   563,   297,   290,     0,   290,     0,
   579,     0,     0,   581,     0,   579,     0,   579,     0,   663,
     0,   579,     0,   663,     0,   579,     0,   579,     0,   579,
     0,   576,     0,   574,     0,   575,     0,   576,     0,   511,
   576,     0,   573,     0,   188,     0,   109,     0,   282,   537,
     0,   281,     0,   283,     0,   276,     0,   663,     0,   579,
     0,   516,     0,   521,     0,   663,     0,   526,     0,    61,
     0,    62,     0,   207,     0,   208,     0,   210,     0,   211,
     0,   213,     0,   216,     0,   217,     0,   218,     0,   219,
     0,   220,     0,   101,     0,   222,     0,   223,     0,   226,
     0,   227,     0,   228,     0,   229,     0,   230,     0,   231,
     0,   122,     0,   232,     0,   233,     0,   130,     0,   131,
     0,   234,     0,   239,     0,   137,     0,   241,     0,   242,
     0,   144,     0,   245,     0,   246,     0,   248,     0,   250,
     0,   150,     0,   252,     0,   152,     0,   253,     0,   153,
     0,   254,     0,   161,     0,   162,     0,   255,     0,   165,
     0,   167,     0,   256,     0,   258,     0,   259,     0,   260,
     0,   171,     0,   262,     0,   261,     0,   265,     0,   266,
     0,   267,     0,   268,     0,   180,     0,   181,     0,   182,
     0,   183,     0,   204,     0,   269,     0,   205,     0,   272,
     0,   274,     0,   203,     0,     3,     0,     5,     0,     6,
     0,     7,     0,     8,     0,    10,     0,    11,     0,    12,
     0,    14,     0,    16,     0,    17,     0,    18,     0,    19,
     0,    20,     0,    21,     0,    22,     0,    23,     0,    24,
     0,    25,     0,    26,     0,    28,     0,    29,     0,    30,
     0,    31,     0,    32,     0,    33,     0,    35,     0,    36,
     0,    37,     0,    38,     0,    39,     0,   579,     0,   206,
     0,   209,     0,   212,     0,    75,     0,   214,     0,    81,
     0,    85,     0,   215,     0,    88,     0,   221,     0,   103,
     0,   104,     0,   224,     0,   225,     0,   109,     0,   113,
     0,   117,     0,   236,     0,   238,     0,   240,     0,   243,
     0,   244,     0,   247,     0,   147,     0,   155,     0,   158,
     0,   159,     0,   257,     0,   263,     0,   264,     0,   176,
     0,   179,     0,   186,     0,   188,     0,   271,     0,   273,
     0,   198,     0,    88,     0,   244,     0,     8,   184,   583,
   589,   590,     0,     8,   184,    97,     0,     8,   591,     0,
   564,   586,   588,     0,   584,   585,   588,   291,   564,   594,
     0,   593,     0,   576,     0,   663,   661,     0,   277,   587,
     0,   585,     0,     0,   579,     0,   579,   297,   587,     0,
   294,   574,     0,     0,    68,   583,     0,     0,   192,   591,
     0,     0,   592,     0,   592,   291,   592,     0,   592,    18,
    73,   592,     0,   592,   193,   592,     0,   577,     0,   593,
     0,   276,     0,   661,     0,   277,   579,     0,     0,    96,
   569,   468,    93,   112,   663,   469,     0,    11,    25,   663,
     0,     0,   599,   598,   601,   600,     0,   655,    70,    96,
    28,   295,     0,   655,   104,    96,    28,   295,     0,     0,
   602,   601,     0,     0,     0,   605,   603,   606,   604,   616,
   295,     0,    47,     0,    55,     0,    54,     0,    44,     0,
    52,     0,    41,     0,     0,   614,     0,   615,     0,   609,
     0,   610,     0,   607,     0,   664,     0,   608,   303,   666,
   304,     0,    46,   613,     0,   611,   303,   601,   304,     0,
   612,   303,   601,   304,     0,    56,   613,     0,    57,   613,
     0,     0,   664,     0,    53,     0,    58,    53,     0,    49,
     0,    58,    49,     0,    51,     0,    58,    51,     0,    48,
     0,    45,     0,    42,     0,    43,     0,    58,    43,     0,
    59,     0,   617,     0,   616,   300,   617,     0,   619,   664,
   508,   618,     0,     0,   285,   657,     0,     0,   290,     0,
    96,   266,   663,     0,    12,   622,     0,   623,     0,    88,
     0,    64,     0,     0,   583,     0,    97,     0,   106,    19,
   626,     0,     0,   106,   663,   625,   629,     0,   593,     0,
   278,     0,    15,   663,     0,    24,   569,   629,     0,     0,
   193,   630,     0,   659,     0,   659,   300,   630,     0,    25,
   663,   114,   626,     0,   440,    26,     0,   174,     4,   635,
   634,     0,   151,     0,    23,     0,   184,     0,   305,     0,
   174,     9,   635,   623,     0,   205,   664,   127,   641,   638,
   640,     0,   298,   299,   639,     0,   301,   302,   639,     0,
   298,   510,   299,   639,     0,   301,   510,   302,   639,     0,
     0,   298,   299,   639,     0,   301,   302,   639,     0,   298,
   510,   299,   639,     0,   301,   510,   302,   639,     0,     0,
    27,     0,     0,    77,     0,   195,     0,   111,     0,   101,
     0,   644,    21,     0,    13,     0,   644,    29,     0,   644,
    22,     0,     5,     0,    37,    21,     0,    37,    29,     0,
    37,    22,     0,     0,    36,   642,   303,   645,   304,     0,
     0,   189,   643,   303,   645,   304,     0,   664,     0,    30,
     0,     0,     0,   646,   645,     0,     0,   641,   647,   648,
   295,     0,   649,     0,   648,   300,   649,     0,   619,   664,
   508,     0,    38,   664,   127,   641,   638,   640,     0,    39,
    31,   652,     0,    39,   146,    14,   652,     0,    39,    33,
   652,     0,    10,     0,    32,     0,    35,     0,    17,   569,
     0,    16,   184,   569,     0,   221,   569,   301,   656,   302,
     0,   221,     6,     0,     7,   569,   301,   656,   302,     0,
   556,   537,     0,   530,     0,   572,     0,   579,     0,   289,
   653,     0,   292,   653,     0,   535,   292,     0,   535,   288,
   653,     0,   535,   289,   653,     0,   535,   291,   653,     0,
   535,   292,   653,     0,   535,   290,   653,     0,   535,   286,
   653,     0,   535,   287,   653,     0,   535,   285,   148,     0,
   148,   285,   535,     0,   535,   285,   653,     0,   295,   653,
     0,   293,   653,     0,   535,    60,   511,     0,    76,   301,
   535,    68,   511,   302,     0,   301,   529,   302,     0,   535,
   277,   653,     0,   535,   135,   653,     0,   535,   146,   135,
   653,     0,   277,   653,     0,   535,   277,     0,   570,   301,
   290,   302,     0,   570,   301,   302,     0,   570,   301,   538,
   302,     0,    89,     0,    90,     0,    90,   301,   574,   302,
     0,    91,     0,    91,   301,   574,   302,     0,    92,     0,
   192,     0,   107,   301,   474,   302,     0,   108,   301,   539,
   302,     0,   158,   301,   541,   302,     0,   175,   301,   543,
   302,     0,   187,   301,    72,   546,   302,     0,   187,   301,
   132,   546,   302,     0,   187,   301,   185,   546,   302,     0,
   187,   301,   546,   302,     0,   535,   233,     0,   535,   127,
   148,     0,   535,   250,     0,   535,   127,   146,   148,     0,
   535,   127,   188,     0,   535,   127,   146,   109,     0,   535,
   127,   109,     0,   535,   127,   146,   188,     0,   535,    71,
   536,    66,   536,     0,   535,   146,    71,   536,    66,   536,
     0,   535,   120,   301,   547,   302,     0,   535,   146,   120,
   301,   549,   302,     0,   535,   277,   301,   474,   302,     0,
   535,   288,   301,   474,   302,     0,   535,   289,   301,   474,
   302,     0,   535,   291,   301,   474,   302,     0,   535,   292,
   301,   474,   302,     0,   535,   290,   301,   474,   302,     0,
   535,   286,   301,   474,   302,     0,   535,   287,   301,   474,
   302,     0,   535,   285,   301,   474,   302,     0,   535,   277,
    67,   301,   474,   302,     0,   535,   288,    67,   301,   474,
   302,     0,   535,   289,    67,   301,   474,   302,     0,   535,
   291,    67,   301,   474,   302,     0,   535,   292,    67,   301,
   474,   302,     0,   535,   290,    67,   301,   474,   302,     0,
   535,   286,    67,   301,   474,   302,     0,   535,   287,    67,
   301,   474,   302,     0,   535,   285,    67,   301,   474,   302,
     0,   535,   277,    64,   301,   474,   302,     0,   535,   288,
    64,   301,   474,   302,     0,   535,   289,    64,   301,   474,
   302,     0,   535,   291,    64,   301,   474,   302,     0,   535,
   292,    64,   301,   474,   302,     0,   535,   290,    64,   301,
   474,   302,     0,   535,   286,    64,   301,   474,   302,     0,
   535,   287,    64,   301,   474,   302,     0,   535,   285,    64,
   301,   474,   302,     0,   535,    66,   653,     0,   535,   154,
   653,     0,   146,   653,     0,   551,     0,   660,     0,   658,
     0,   654,   300,   658,     0,    34,     0,     0,   656,   669,
     0,   670,     0,   657,   670,     0,   661,   662,     0,   661,
   662,     0,   661,     0,   279,     0,     0,   661,     0,    20,
   661,     0,    20,   569,     0,   275,     0,   278,     0,   275,
     0,   280,     0,   668,     0,   666,   668,     0,   668,     0,
   295,     0,   275,     0,   278,     0,   574,     0,   575,     0,
   290,     0,   288,     0,   289,     0,   291,     0,   292,     0,
    41,     0,    42,     0,    43,     0,    44,     0,    45,     0,
    46,     0,    47,     0,    48,     0,    49,     0,    51,     0,
    52,     0,    53,     0,    54,     0,    55,     0,    56,     0,
    57,     0,    58,     0,    59,     0,    40,     0,   298,     0,
   299,     0,   301,     0,   302,     0,   285,     0,   300,     0,
   275,     0,   278,     0,   574,     0,   575,     0,   300,     0,
   275,     0,   278,     0,   574,     0,   575,     0,   303,   666,
   304,     0,   303,     0,   304,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   847,   849,   850,   852,   853,   854,   855,   856,   857,   858,
   860,   862,   863,   864,   865,   866,   867,   868,   869,   870,
   871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
   881,   882,   883,   884,   885,   886,   887,   888,   889,   890,
   891,   892,   893,   899,   900,   905,   906,   907,   908,   909,
   910,   911,   912,   913,   921,   924,   932,   935,   943,   946,
   951,   976,   984,   985,   990,   998,  1004,  1010,  1030,  1044,
  1058,  1064,  1065,  1068,  1072,  1076,  1079,  1083,  1087,  1090,
  1094,  1100,  1101,  1104,  1105,  1117,  1121,  1125,  1129,  1139,
  1149,  1159,  1160,  1163,  1164,  1165,  1168,  1172,  1176,  1182,
  1186,  1190,  1204,  1210,  1214,  1218,  1220,  1222,  1224,  1235,
  1250,  1256,  1258,  1267,  1268,  1269,  1272,  1273,  1276,  1277,
  1283,  1284,  1296,  1303,  1304,  1305,  1308,  1312,  1316,  1319,
  1320,  1323,  1327,  1333,  1334,  1337,  1338,  1341,  1345,  1351,
  1356,  1370,  1374,  1378,  1382,  1386,  1390,  1394,  1401,  1405,
  1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,
  1443,  1445,  1447,  1449,  1453,  1455,  1457,  1459,  1465,  1467,
  1470,  1472,  1474,  1480,  1482,  1488,  1490,  1498,  1502,  1506,
  1510,  1514,  1518,  1525,  1529,  1535,  1537,  1539,  1543,  1545,
  1547,  1549,  1551,  1553,  1555,  1557,  1559,  1565,  1567,  1569,
  1573,  1577,  1579,  1583,  1587,  1589,  1591,  1593,  1595,  1597,
  1599,  1601,  1603,  1605,  1607,  1609,  1611,  1613,  1615,  1617,
  1619,  1621,  1623,  1625,  1628,  1632,  1637,  1642,  1643,  1644,
  1647,  1648,  1649,  1652,  1653,  1656,  1657,  1658,  1659,  1662,
  1663,  1666,  1672,  1673,  1676,  1677,  1680,  1690,  1696,  1698,
  1701,  1705,  1709,  1713,  1717,  1721,  1727,  1728,  1730,  1734,
  1741,  1745,  1759,  1766,  1767,  1769,  1783,  1791,  1792,  1795,
  1799,  1803,  1809,  1810,  1811,  1814,  1820,  1821,  1824,  1825,
  1828,  1830,  1832,  1836,  1840,  1844,  1845,  1848,  1861,  1867,
  1873,  1874,  1875,  1878,  1879,  1880,  1881,  1882,  1885,  1888,
  1889,  1892,  1895,  1899,  1905,  1906,  1907,  1908,  1909,  1922,
  1926,  1943,  1950,  1956,  1957,  1958,  1959,  1964,  1967,  1968,
  1969,  1970,  1971,  1972,  1975,  1976,  1978,  1989,  1995,  1999,
  2003,  2009,  2013,  2019,  2023,  2027,  2031,  2035,  2041,  2045,
  2049,  2055,  2059,  2070,  2088,  2097,  2098,  2101,  2102,  2105,
  2106,  2109,  2110,  2113,  2119,  2125,  2126,  2127,  2136,  2137,
  2138,  2148,  2184,  2190,  2191,  2194,  2195,  2198,  2199,  2203,
  2209,  2210,  2231,  2237,  2238,  2239,  2240,  2244,  2250,  2251,
  2255,  2262,  2268,  2268,  2270,  2271,  2272,  2273,  2274,  2275,
  2276,  2277,  2280,  2284,  2286,  2288,  2301,  2308,  2309,  2312,
  2313,  2326,  2328,  2335,  2336,  2337,  2338,  2339,  2342,  2343,
  2346,  2348,  2350,  2354,  2355,  2356,  2357,  2360,  2364,  2371,
  2372,  2373,  2374,  2377,  2378,  2390,  2396,  2402,  2406,  2424,
  2425,  2426,  2427,  2428,  2430,  2431,  2432,  2442,  2456,  2470,
  2480,  2486,  2487,  2490,  2491,  2494,  2495,  2496,  2499,  2500,
  2501,  2511,  2525,  2539,  2543,  2551,  2552,  2555,  2556,  2559,
  2560,  2563,  2565,  2577,  2595,  2596,  2597,  2598,  2599,  2600,
  2617,  2623,  2627,  2631,  2635,  2639,  2645,  2646,  2649,  2652,
  2656,  2670,  2677,  2681,  2712,  2732,  2749,  2750,  2763,  2779,
  2810,  2811,  2812,  2813,  2814,  2817,  2818,  2822,  2823,  2829,
  2845,  2862,  2866,  2870,  2875,  2880,  2888,  2898,  2899,  2900,
  2903,  2904,  2907,  2908,  2911,  2912,  2913,  2914,  2917,  2918,
  2921,  2922,  2925,  2931,  2932,  2933,  2934,  2935,  2936,  2939,
  2941,  2943,  2945,  2947,  2949,  2953,  2954,  2955,  2958,  2959,
  2969,  2970,  2973,  2975,  2977,  2981,  2982,  2985,  2989,  2992,
  2996,  3001,  3005,  3019,  3023,  3029,  3031,  3033,  3037,  3039,
  3043,  3047,  3051,  3061,  3063,  3067,  3073,  3077,  3090,  3094,
  3098,  3103,  3108,  3113,  3118,  3123,  3127,  3133,  3134,  3145,
  3146,  3149,  3150,  3153,  3159,  3160,  3163,  3168,  3174,  3180,
  3189,  3197,  3203,  3212,  3220,  3221,  3222,  3223,  3224,  3225,
  3226,  3240,  3244,  3245,  3251,  3252,  3253,  3256,  3262,  3263,
  3264,  3265,  3266,  3267,  3268,  3269,  3270,  3271,  3272,  3273,
  3274,  3275,  3276,  3277,  3278,  3279,  3280,  3281,  3282,  3283,
  3284,  3285,  3286,  3287,  3288,  3289,  3290,  3291,  3292,  3293,
  3294,  3295,  3296,  3304,  3308,  3312,  3316,  3322,  3324,  3326,
  3328,  3332,  3340,  3346,  3358,  3366,  3372,  3384,  3392,  3405,
  3425,  3431,  3438,  3439,  3440,  3441,  3444,  3445,  3448,  3449,
  3452,  3453,  3456,  3460,  3464,  3468,  3474,  3475,  3476,  3477,
  3478,  3479,  3482,  3483,  3486,  3487,  3488,  3489,  3490,  3491,
  3492,  3493,  3494,  3504,  3506,  3521,  3525,  3529,  3533,  3537,
  3543,  3549,  3550,  3551,  3552,  3553,  3554,  3555,  3556,  3557,
  3560,  3561,  3565,  3569,  3584,  3588,  3590,  3592,  3596,  3598,
  3600,  3602,  3604,  3606,  3608,  3610,  3612,  3614,  3616,  3618,
  3620,  3625,  3627,  3629,  3633,  3637,  3639,  3641,  3643,  3645,
  3647,  3649,  3653,  3657,  3661,  3665,  3669,  3675,  3679,  3685,
  3689,  3693,  3697,  3701,  3705,  3710,  3714,  3718,  3722,  3726,
  3728,  3730,  3732,  3739,  3743,  3747,  3751,  3755,  3759,  3763,
  3767,  3771,  3775,  3779,  3783,  3787,  3791,  3795,  3799,  3803,
  3807,  3811,  3815,  3819,  3823,  3827,  3831,  3835,  3839,  3843,
  3847,  3851,  3855,  3859,  3863,  3867,  3871,  3875,  3879,  3881,
  3883,  3885,  3887,  3896,  3900,  3902,  3906,  3908,  3910,  3912,
  3914,  3916,  3918,  3920,  3925,  3927,  3929,  3933,  3937,  3939,
  3941,  3943,  3945,  3949,  3953,  3957,  3961,  3967,  3971,  3977,
  3981,  3985,  3989,  3994,  3998,  4002,  4006,  4010,  4014,  4018,
  4022,  4026,  4028,  4030,  4034,  4038,  4040,  4044,  4045,  4046,
  4049,  4051,  4055,  4059,  4061,  4063,  4065,  4067,  4069,  4071,
  4073,  4075,  4079,  4083,  4085,  4087,  4089,  4091,  4095,  4099,
  4103,  4107,  4112,  4116,  4120,  4124,  4130,  4134,  4138,  4140,
  4146,  4148,  4152,  4154,  4156,  4160,  4164,  4168,  4170,  4174,
  4178,  4182,  4184,  4203,  4205,  4211,  4217,  4219,  4223,  4229,
  4230,  4233,  4237,  4241,  4245,  4249,  4255,  4257,  4259,  4270,
  4272,  4274,  4277,  4281,  4285,  4296,  4298,  4303,  4307,  4311,
  4315,  4321,  4322,  4325,  4329,  4342,  4343,  4344,  4345,  4346,
  4352,  4353,  4355,  4361,  4365,  4369,  4373,  4377,  4379,  4383,
  4389,  4395,  4396,  4397,  4405,  4412,  4414,  4416,  4427,  4428,
  4429,  4430,  4431,  4432,  4433,  4434,  4435,  4436,  4437,  4438,
  4439,  4440,  4441,  4442,  4443,  4444,  4445,  4446,  4447,  4448,
  4449,  4450,  4451,  4452,  4453,  4454,  4455,  4456,  4457,  4458,
  4459,  4460,  4461,  4462,  4463,  4464,  4465,  4466,  4467,  4468,
  4469,  4470,  4471,  4472,  4473,  4474,  4476,  4477,  4478,  4479,
  4480,  4481,  4482,  4483,  4484,  4485,  4486,  4487,  4488,  4489,
  4490,  4491,  4492,  4493,  4494,  4495,  4496,  4497,  4498,  4499,
  4500,  4501,  4502,  4503,  4504,  4505,  4506,  4507,  4508,  4509,
  4510,  4511,  4512,  4513,  4514,  4515,  4516,  4517,  4518,  4519,
  4520,  4521,  4522,  4523,  4524,  4525,  4526,  4527,  4528,  4540,
  4541,  4542,  4543,  4544,  4545,  4546,  4547,  4548,  4549,  4550,
  4551,  4552,  4553,  4554,  4555,  4556,  4557,  4558,  4559,  4560,
  4561,  4562,  4563,  4564,  4565,  4566,  4567,  4568,  4569,  4570,
  4571,  4572,  4573,  4574,  4575,  4576,  4577,  4580,  4587,  4603,
  4607,  4612,  4617,  4628,  4651,  4655,  4663,  4680,  4691,  4692,
  4694,  4695,  4697,  4698,  4700,  4701,  4703,  4704,  4706,  4710,
  4714,  4718,  4723,  4728,  4729,  4731,  4755,  4768,  4774,  4817,
  4822,  4827,  4834,  4836,  4838,  4842,  4847,  4852,  4857,  4862,
  4863,  4864,  4865,  4866,  4867,  4868,  4870,  4877,  4884,  4891,
  4898,  4906,  4918,  4923,  4925,  4932,  4939,  4947,  4955,  4956,
  4958,  4959,  4960,  4961,  4962,  4963,  4964,  4965,  4966,  4967,
  4968,  4970,  4972,  4976,  4981,  5056,  5057,  5059,  5060,  5066,
  5074,  5076,  5077,  5078,  5079,  5081,  5082,  5087,  5100,  5112,
  5116,  5116,  5123,  5128,  5132,  5133,  5138,  5138,  5144,  5154,
  5170,  5175,  5176,  5178,  5178,  5184,  5192,  5234,  5240,  5246,
  5255,  5264,  5272,  5278,  5284,  5293,  5302,  5309,  5310,  5312,
  5319,  5326,  5333,  5340,  5347,  5354,  5361,  5368,  5375,  5382,
  5389,  5396,  5401,  5409,  5414,  5422,  5433,  5433,  5435,  5439,
  5445,  5451,  5456,  5460,  5465,  5536,  5591,  5596,  5601,  5607,
  5612,  5617,  5622,  5627,  5632,  5637,  5642,  5649,  5653,  5655,
  5657,  5661,  5663,  5665,  5667,  5669,  5671,  5673,  5675,  5677,
  5679,  5681,  5683,  5685,  5689,  5691,  5693,  5697,  5701,  5703,
  5705,  5707,  5709,  5711,  5713,  5717,  5721,  5725,  5729,  5733,
  5739,  5743,  5749,  5753,  5757,  5761,  5765,  5769,  5774,  5778,
  5782,  5786,  5790,  5792,  5794,  5796,  5803,  5807,  5811,  5815,
  5819,  5823,  5827,  5831,  5835,  5839,  5843,  5847,  5851,  5855,
  5859,  5863,  5867,  5871,  5875,  5879,  5883,  5887,  5891,  5895,
  5899,  5903,  5907,  5911,  5915,  5919,  5923,  5927,  5931,  5935,
  5939,  5943,  5945,  5947,  5949,  5951,  5955,  5955,  5957,  5959,
  5960,  5962,  5963,  5965,  5969,  5973,  5978,  5980,  5981,  5982,
  5983,  5985,  5986,  5991,  5993,  5995,  5996,  6001,  6001,  6003,
  6004,  6005,  6006,  6007,  6008,  6009,  6010,  6011,  6012,  6013,
  6014,  6015,  6016,  6017,  6018,  6019,  6020,  6021,  6022,  6023,
  6024,  6025,  6026,  6027,  6028,  6029,  6030,  6031,  6032,  6033,
  6034,  6035,  6036,  6038,  6039,  6040,  6041,  6042,  6044,  6045,
  6046,  6047,  6048,  6050,  6055
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","SQL_AT",
"SQL_AUTOCOMMIT","SQL_BOOL","SQL_BREAK","SQL_CALL","SQL_CONNECT","SQL_CONNECTION",
"SQL_CONTINUE","SQL_DEALLOCATE","SQL_DISCONNECT","SQL_ENUM","SQL_FOUND","SQL_FREE",
"SQL_GO","SQL_GOTO","SQL_IDENTIFIED","SQL_IMMEDIATE","SQL_INDICATOR","SQL_INT",
"SQL_LONG","SQL_OFF","SQL_OPEN","SQL_PREPARE","SQL_RELEASE","SQL_REFERENCE",
"SQL_SECTION","SQL_SHORT","SQL_SIGNED","SQL_SQLERROR","SQL_SQLPRINT","SQL_SQLWARNING",
"SQL_START","SQL_STOP","SQL_STRUCT","SQL_UNSIGNED","SQL_VAR","SQL_WHENEVER",
"S_ANYTHING","S_AUTO","S_BOOL","S_CHAR","S_CONST","S_DOUBLE","S_ENUM","S_EXTERN",
"S_FLOAT","S_INT","S","S_LONG","S_REGISTER","S_SHORT","S_SIGNED","S_STATIC",
"S_STRUCT","S_UNION","S_UNSIGNED","S_VARCHAR","TYPECAST","ABSOLUTE","ACTION",
"ADD","ALL","ALTER","AND","ANY","AS","ASC","BEGIN_TRANS","BETWEEN","BOTH","BY",
"CASCADE","CASE","CAST","CHAR","CHARACTER","CHECK","CLOSE","COALESCE","COLLATE",
"COLUMN","COMMIT","CONSTRAINT","CREATE","CROSS","CURRENT","CURRENT_DATE","CURRENT_TIME",
"CURRENT_TIMESTAMP","CURRENT_USER","CURSOR","DAY_P","DECIMAL","DECLARE","DEFAULT",
"DELETE","DESC","DISTINCT","DOUBLE","DROP","ELSE","END_TRANS","EXCEPT","EXECUTE",
"EXISTS","EXTRACT","FALSE_P","FETCH","FLOAT","FOR","FOREIGN","FROM","FULL","GRANT",
"GROUP","HAVING","HOUR_P","IN","INNER_P","INSENSITIVE","INSERT","INTERSECT",
"INTERVAL","INTO","IS","ISOLATION","JOIN","KEY","LANGUAGE","LEADING","LEFT",
"LEVEL","LIKE","LOCAL","MATCH","MINUTE_P","MONTH_P","NAMES","NATIONAL","NATURAL",
"NCHAR","NEXT","NO","NOT","NULLIF","NULL_P","NUMERIC","OF","ON","ONLY","OPTION",
"OR","ORDER","OUTER_P","PARTIAL","POSITION","PRECISION","PRIMARY","PRIOR","PRIVILEGES",
"PROCEDURE","PUBLIC","READ","REFERENCES","RELATIVE","REVOKE","RIGHT","ROLLBACK",
"SCROLL","SECOND_P","SELECT","SET","SUBSTRING","TABLE","TEMP","TEMPORARY","THEN",
"TIME","TIMESTAMP","TIMEZONE_HOUR","TIMEZONE_MINUTE","TO","TRAILING","TRANSACTION",
"TRIM","TRUE_P","UNION","UNIQUE","UPDATE","USER","USING","VALUES","VARCHAR",
"VARYING","VIEW","WHEN","WHERE","WITH","WORK","YEAR_P","ZONE","TRIGGER","TYPE_P",
"ABORT_TRANS","AFTER","AGGREGATE","ANALYZE","BACKWARD","BEFORE","BINARY","CACHE",
"CLUSTER","COPY","CREATEDB","CREATEUSER","CYCLE","DATABASE","DELIMITERS","DO",
"EACH","ENCODING","EXPLAIN","EXTEND","FORWARD","FUNCTION","HANDLER","INCREMENT",
"INDEX","INHERITS","INSTEAD","ISNULL","LANCOMPILER","LIMIT","LISTEN","UNLISTEN",
"LOAD","LOCATION","LOCK_P","MAXVALUE","MINVALUE","MOVE","NEW","NOCREATEDB","NOCREATEUSER",
"NONE","NOTHING","NOTIFY","NOTNULL","OFFSET","OIDS","OPERATOR","PASSWORD","PROCEDURAL",
"RENAME","RESET","RETURNS","ROW","RULE","SERIAL","SEQUENCE","SETOF","SHOW","START",
"STATEMENT","STDIN","STDOUT","TRUSTED","UNTIL","VACUUM","VALID","VERBOSE","VERSION",
"IDENT","SCONST","Op","CSTRING","CVARIABLE","CPP_LINE","ICONST","PARAM","FCONST",
"OP","'='","'<'","'>'","'+'","'-'","'*'","'/'","'%'","'|'","':'","';'","UMINUS",
"'.'","'['","']'","','","'('","')'","'{'","'}'","\"=\"","prog","statements",
"statement","opt_at","stmt","CreateUserStmt","AlterUserStmt","DropUserStmt",
"user_passwd_clause","user_createdb_clause","user_createuser_clause","user_group_list",
"user_group_clause","user_valid_clause","VariableSetStmt","var_value","zone_value",
"VariableShowStmt","VariableResetStmt","AddAttrStmt","alter_clause","ClosePortalStmt",
"CopyStmt","copy_dirn","copy_file_name","opt_binary","opt_with_copy","copy_delimiter",
"CreateStmt","OptTemp","OptTableElementList","OptTableElement","columnDef","ColQualifier",
"ColQualList","ColPrimaryKey","ColConstraint","ColConstraintElem","default_list",
"default_expr","TableConstraint","ConstraintElem","constraint_list","constraint_expr",
"c_list","c_expr","key_match","key_actions","key_action","key_reference","OptInherit",
"CreateAsStmt","OptCreateAs","CreateAsList","CreateAsElement","CreateSeqStmt",
"OptSeqList","OptSeqElem","NumericOnly","FloatOnly","IntegerOnly","CreatePLangStmt",
"PLangTrusted","DropPLangStmt","CreateTrigStmt","TriggerActionTime","TriggerEvents",
"TriggerOneEvent","TriggerForSpec","TriggerForOpt","TriggerForType","TriggerFuncArgs",
"TriggerFuncArg","DropTrigStmt","DefineStmt","def_rest","def_type","def_name",
"definition","def_list","def_elem","def_arg","DestroyStmt","FetchStmt","opt_direction",
"fetch_how_many","opt_portal_name","GrantStmt","privileges","operation_commalist",
"operation","grantee","opt_with_grant","RevokeStmt","IndexStmt","index_opt_unique",
"access_method_clause","index_params","index_list","func_index","index_elem",
"opt_type","opt_class","ExtendStmt","ProcedureStmt","opt_with","func_args","func_args_list",
"func_return","set_opt","RemoveStmt","remove_type","RemoveAggrStmt","aggr_argtype",
"RemoveFuncStmt","RemoveOperStmt","all_Op","MathOp","oper_argtypes","RenameStmt",
"opt_name","opt_column","RuleStmt","@1","RuleActionList","RuleActionBlock","RuleActionMulti",
"RuleActionStmt","event_object","event","opt_instead","NotifyStmt","ListenStmt",
"UnlistenStmt","TransactionStmt","opt_trans","ViewStmt","LoadStmt","CreatedbStmt",
"opt_database1","opt_database2","location","encoding","DestroydbStmt","ClusterStmt",
"VacuumStmt","opt_verbose","opt_analyze","opt_va_list","va_list","ExplainStmt",
"OptimizableStmt","InsertStmt","insert_rest","opt_column_list","columnList",
"columnElem","DeleteStmt","LockStmt","opt_lmode","UpdateStmt","CursorStmt","opt_cursor",
"cursor_clause","opt_readonly","opt_of","SelectStmt","select_clause","SubSelect",
"result","opt_table","opt_union","opt_unique","sort_clause","sortby_list","sortby",
"OptUseOp","opt_select_limit","select_limit_value","select_offset_value","opt_inh_star",
"relation_name_list","name_list","group_clause","having_clause","for_update_clause",
"update_list","from_clause","from_expr","table_list","table_expr","join_clause_with_union",
"join_clause","join_list","join_expr","join_type","join_outer","join_qual","using_list",
"using_expr","where_clause","relation_expr","opt_array_bounds","nest_array_bounds",
"Iresult","Typename","Array","Generic","generic","Numeric","numeric","opt_float",
"opt_numeric","opt_decimal","Character","character","opt_varying","opt_charset",
"opt_collate","Datetime","datetime","opt_timezone","opt_interval","a_expr_or_null",
"row_expr","row_descriptor","row_op","sub_type","row_list","a_expr","b_expr",
"opt_indirection","expr_list","extract_list","extract_arg","position_list","position_expr",
"substr_list","substr_from","substr_for","trim_list","in_expr","in_expr_nodes",
"not_in_expr","not_in_expr_nodes","case_expr","when_clause_list","when_clause",
"case_default","case_arg","attr","attrs","res_target_list","res_target_el","res_target_list2",
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
"ECPGPrepare","ECPGRelease","ECPGSetAutocommit","on_off","to_equal","ECPGSetConnection",
"ECPGTypedef","opt_type_array_bounds","nest_type_array_bounds","opt_reference",
"ctype","@6","@7","opt_signed","sql_variable_declarations","sql_declaration",
"@8","sql_variable_list","sql_variable","ECPGVar","ECPGWhenever","action","ecpg_expr",
"into_list","ecpgstart","dotext","vartext","coutputvariable","cinputvariable",
"civariableonly","cvariable","indicator","ident","symbol","cpp_line","c_line",
"c_thing","c_anything","do_anything","var_anything","blockstart","blockend", NULL
};
#endif

static const short yyr1[] = {     0,
   306,   307,   307,   308,   308,   308,   308,   308,   308,   308,
   309,   310,   310,   310,   310,   310,   310,   310,   310,   310,
   310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
   310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
   310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
   310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
   310,   310,   310,   310,   310,   310,   310,   310,   311,   312,
   313,   314,   314,   315,   315,   315,   316,   316,   316,   317,
   317,   318,   318,   319,   319,   320,   320,   320,   320,   320,
   320,   321,   321,   322,   322,   322,   323,   323,   323,   324,
   324,   324,   325,   326,   326,   326,   326,   326,   326,   327,
   328,   329,   329,   330,   330,   330,   331,   331,   332,   332,
   333,   333,   334,   335,   335,   335,   336,   336,   336,   337,
   337,   338,   338,   339,   339,   340,   340,   341,   341,   342,
   342,   343,   343,   343,   343,   343,   343,   343,   344,   344,
   345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   345,   346,   346,   347,
   347,   347,   347,   348,   348,   349,   349,   349,   349,   349,
   349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
   349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
   349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
   349,   349,   349,   349,   350,   350,   351,   352,   352,   352,
   353,   353,   353,   354,   354,   355,   355,   355,   355,   356,
   356,   357,   358,   358,   359,   359,   360,   361,   362,   362,
   363,   363,   363,   363,   363,   363,   364,   364,   365,   365,
   366,   366,   367,   368,   368,   369,   370,   371,   371,   372,
   372,   372,   373,   373,   373,   374,   375,   375,   376,   376,
   377,   377,   377,   378,   378,   378,   378,   379,   380,   381,
   382,   382,   382,   383,   383,   383,   383,   383,   384,   385,
   385,   386,   386,   386,   387,   387,   387,   387,   387,   388,
   388,   389,   389,   390,   390,   390,   390,   390,   391,   391,
   391,   391,   391,   391,   392,   392,   392,   393,   394,   394,
   394,   395,   395,   396,   396,   396,   396,   396,   397,   397,
   397,   398,   398,   399,   400,   401,   401,   402,   402,   403,
   403,   404,   404,   405,   406,   407,   407,   407,   408,   408,
   408,   409,   410,   411,   411,   412,   412,   413,   413,   414,
   415,   415,   416,   417,   417,   417,   417,   418,   419,   419,
   420,   421,   422,   422,   423,   423,   423,   423,   423,   423,
   423,   423,   424,   424,   424,   424,   425,   426,   426,   427,
   427,   429,   428,   430,   430,   430,   430,   430,   431,   431,
   432,   432,   432,   433,   433,   433,   433,   434,   434,   435,
   435,   435,   435,   436,   436,   437,   438,   439,   439,   440,
   440,   440,   440,   440,   441,   441,   441,   442,   443,   444,
   444,   445,   445,   446,   446,   447,   447,   447,   448,   448,
   448,   449,   450,   451,   451,   452,   452,   453,   453,   454,
   454,   455,   455,   456,   457,   457,   457,   457,   457,   457,
   458,   459,   459,   459,   459,   459,   460,   460,   461,   461,
   462,   463,   464,   464,   464,   464,   465,   465,   466,   467,
   468,   468,   468,   468,   468,   469,   469,   470,   470,   471,
   472,   473,   473,   473,   473,   473,   474,   475,   475,   475,
   476,   476,   477,   477,   478,   478,   478,   478,   479,   479,
   480,   480,   481,   482,   482,   482,   482,   482,   482,   483,
   483,   483,   483,   483,   483,   484,   484,   484,   485,   485,
   486,   486,   487,   488,   488,   489,   489,   490,   490,   491,
   491,   492,   492,   493,   493,   494,   494,   494,   495,   495,
   496,   496,   496,   497,   497,   498,   499,   499,   500,   500,
   500,   501,   501,   501,   501,   501,   501,   502,   502,   503,
   503,   504,   504,   505,   506,   506,   507,   507,   508,   508,
   508,   509,   509,   509,   510,   510,   510,   510,   510,   510,
   510,   511,   511,   511,   512,   512,   512,   513,   514,   514,
   514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
   514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
   514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
   514,   514,   514,   515,   515,   515,   515,   516,   516,   516,
   516,   517,   517,   518,   518,   518,   519,   519,   519,   520,
   520,   521,   521,   521,   521,   521,   522,   522,   523,   523,
   524,   524,   525,   525,   525,   525,   526,   526,   526,   526,
   526,   526,   527,   527,   528,   528,   528,   528,   528,   528,
   528,   528,   528,   529,   529,   530,   530,   530,   530,   530,
   531,   532,   532,   532,   532,   532,   532,   532,   532,   532,
   533,   533,   534,   534,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
   535,   535,   535,   536,   536,   536,   536,   536,   536,   536,
   536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
   536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
   536,   536,   536,   536,   536,   536,   536,   536,   537,   537,
   537,   538,   538,   538,   539,   539,   539,   540,   540,   540,
   541,   541,   542,   542,   542,   542,   542,   542,   542,   542,
   542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
   542,   542,   542,   542,   542,   542,   543,   543,   544,   544,
   545,   545,   546,   546,   546,   547,   547,   548,   548,   549,
   549,   550,   550,   551,   551,   551,   552,   552,   553,   554,
   554,   555,   555,   555,   556,   556,   557,   557,   557,   558,
   558,   558,   559,   559,   559,   560,   560,   561,   561,   561,
   561,   562,   562,   563,   563,   564,   565,   566,   567,   568,
   569,   570,   571,   572,   572,   572,   572,   572,   572,   572,
   573,   574,   575,   576,   577,   578,   578,   578,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
   579,   579,   579,   579,   579,   579,   579,   579,   579,   580,
   580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
   580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
   580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
   580,   580,   580,   580,   580,   580,   580,   581,   581,   582,
   582,   582,   583,   583,   583,   583,   584,   585,   586,   586,
   587,   587,   588,   588,   589,   589,   590,   590,   591,   591,
   591,   591,   592,   592,   592,   593,   594,   594,   595,   596,
   598,   597,   599,   600,   601,   601,   603,   604,   602,   605,
   605,   605,   605,   605,   605,   605,   606,   606,   606,   606,
   606,   606,   607,   608,   609,   610,   611,   612,   613,   613,
   614,   614,   614,   614,   614,   614,   614,   614,   614,   614,
   614,   615,   616,   616,   617,   618,   618,   619,   619,   620,
   621,   622,   622,   622,   622,   623,   623,   624,   625,   624,
   626,   626,   627,   628,   629,   629,   630,   630,   631,   632,
   633,   634,   634,   635,   635,   636,   637,   638,   638,   638,
   638,   638,   639,   639,   639,   639,   639,   640,   640,   641,
   641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
   641,   642,   641,   643,   641,   641,   644,   644,   645,   645,
   647,   646,   648,   648,   649,   650,   651,   651,   651,   652,
   652,   652,   652,   652,   652,   652,   652,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,   653,   654,   654,   655,   656,
   656,   657,   657,   658,   659,   660,   661,   662,   662,   662,
   662,   663,   663,   664,   665,   666,   666,   667,   667,   668,
   668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
   668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
   668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
   668,   668,   668,   669,   669,   669,   669,   669,   670,   670,
   670,   670,   670,   671,   672
};

static const short yyr2[] = {     0,
     1,     0,     2,     4,     3,     1,     1,     1,     1,     1,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     8,     8,
     3,     3,     0,     1,     1,     0,     1,     1,     0,     3,
     1,     3,     0,     3,     0,     4,     4,     4,     6,     5,
     3,     1,     1,     1,     1,     1,     2,     3,     4,     2,
     3,     4,     5,     3,     4,     3,     6,     5,     2,     2,
     7,     1,     1,     1,     1,     1,     1,     0,     2,     0,
     3,     0,     8,     1,     1,     0,     3,     1,     0,     1,
     1,     3,     3,     1,     0,     2,     1,     2,     0,     3,
     1,     4,     2,     2,     2,     1,     2,     5,     3,     1,
     1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     2,     2,     3,     6,     3,     3,     4,     3,     2,     2,
     1,     1,     4,     1,     4,     1,     1,     3,     1,     4,
     4,     5,    10,     3,     1,     1,     1,     1,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
     6,     3,     3,     4,     3,     3,     4,     3,     3,     2,
     2,     2,     2,     3,     2,     4,     3,     3,     4,     4,
     5,     6,     5,     6,     3,     1,     1,     2,     2,     0,
     2,     1,     0,     3,     3,     2,     1,     2,     2,     4,
     0,     7,     3,     0,     3,     1,     1,     4,     2,     0,
     2,     1,     2,     2,     2,     2,     1,     1,     1,     2,
     1,     2,     9,     1,     0,     4,    14,     1,     1,     1,
     3,     5,     1,     1,     1,     3,     1,     0,     1,     1,
     1,     3,     0,     1,     1,     1,     1,     5,     3,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
     3,     3,     1,     3,     1,     1,     1,     1,     2,     3,
     3,     6,     4,     1,     1,     1,     1,     0,     1,     2,
     1,     1,     1,     0,     2,     2,     0,     7,     2,     1,
     1,     1,     3,     1,     1,     1,     1,     1,     1,     2,
     1,     3,     0,     6,    11,     1,     0,     2,     0,     1,
     1,     3,     1,     6,     3,     2,     2,     0,     1,     2,
     0,     4,    11,     2,     0,     3,     2,     1,     3,     2,
     1,     0,     3,     1,     1,     1,     1,     4,     1,     1,
     4,     6,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     3,     3,     9,     1,     0,     1,
     0,     0,    13,     1,     1,     1,     3,     3,     1,     1,
     2,     3,     2,     1,     1,     1,     1,     3,     1,     1,
     1,     1,     1,     1,     0,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     1,     1,     0,     5,     2,     6,
     3,     3,     0,     3,     0,     1,     1,     0,     1,     1,
     0,     3,     4,     3,     5,     1,     0,     1,     0,     3,
     0,     1,     3,     3,     1,     1,     1,     1,     1,     1,
     4,     4,     2,     1,     7,     4,     3,     0,     3,     1,
     2,     4,     3,     8,     7,     6,     1,     0,     6,     7,
     1,     1,     1,     2,     0,     2,     0,     2,     2,     2,
     4,     3,     1,     3,     4,     4,     8,     4,     2,     0,
     1,     0,     1,     0,     1,     3,     1,     0,     3,     0,
     1,     3,     2,     2,     2,     2,     1,     1,     0,     4,
     4,     2,     4,     2,     0,     1,     1,     1,     1,     1,
     1,     0,     1,     1,     3,     3,     0,     2,     0,     3,
     0,     2,     0,     2,     0,     3,     1,     1,     3,     1,
     3,     2,     1,     1,     4,     2,     2,     1,     4,     4,
     3,     2,     2,     2,     1,     1,     0,     1,     0,     4,
     2,     3,     1,     1,     2,     0,     1,     2,     3,     4,
     0,     3,     4,     0,     1,     3,     3,     3,     3,     3,
     3,     2,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     2,     2,     2,     2,     1,     2,     1,
     1,     3,     0,     5,     3,     0,     5,     3,     0,     4,
     1,     4,     2,     1,     3,     2,     1,     0,     3,     0,
     2,     0,     1,     2,     1,     2,     1,     1,     1,     1,
     1,     1,     3,     0,     1,     3,     3,     3,     3,     3,
     3,     3,     0,     1,     1,     7,     8,     8,     7,     7,
     3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     1,     2,     1,     1,     1,     2,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     2,     3,     6,     3,     3,     3,     4,     2,
     2,     4,     3,     4,     1,     1,     4,     1,     4,     1,
     1,     4,     4,     4,     4,     5,     5,     5,     4,     2,
     3,     2,     4,     3,     4,     3,     4,     5,     6,     5,
     6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     3,     3,
     2,     1,     1,     2,     1,     1,     2,     2,     2,     3,
     3,     3,     3,     3,     2,     2,     3,     6,     3,     3,
     2,     2,     3,     4,     1,     1,     4,     1,     4,     1,
     1,     4,     4,     5,     5,     5,     4,     1,     4,     6,
     0,     1,     3,     3,     3,     0,     1,     1,     1,     1,
     3,     0,     2,     1,     2,     3,     3,     3,     3,     3,
     2,     3,     6,     3,     3,     2,     2,     1,     3,     4,
     4,     4,     5,     5,     5,     4,     3,     0,     2,     0,
     2,     0,     3,     2,     1,     1,     1,     1,     3,     1,
     1,     1,     3,     5,     6,     4,     2,     1,     4,     2,
     0,     2,     1,     0,     3,     3,     1,     3,     3,     3,
     1,     1,     4,     2,     3,     3,     1,     3,     1,     3,
     1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
     1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
     3,     2,     3,     6,     1,     1,     2,     2,     1,     0,
     1,     3,     2,     0,     2,     0,     2,     0,     1,     3,
     4,     3,     1,     1,     1,     1,     2,     0,     7,     3,
     0,     4,     5,     5,     0,     2,     0,     0,     6,     1,
     1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
     1,     1,     4,     2,     4,     4,     2,     2,     0,     1,
     1,     2,     1,     2,     1,     2,     1,     1,     1,     1,
     2,     1,     1,     3,     4,     0,     2,     0,     1,     3,
     2,     1,     1,     1,     0,     1,     1,     3,     0,     4,
     1,     1,     2,     3,     0,     2,     1,     3,     4,     2,
     4,     1,     1,     1,     1,     4,     6,     3,     3,     4,
     4,     0,     3,     3,     4,     4,     0,     1,     0,     1,
     1,     1,     1,     2,     1,     2,     2,     1,     2,     2,
     2,     0,     5,     0,     5,     1,     1,     0,     0,     2,
     0,     4,     1,     3,     3,     6,     3,     4,     3,     1,
     1,     1,     2,     3,     5,     2,     5,     2,     1,     1,
     1,     2,     2,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     2,     2,     3,     6,     3,     3,
     3,     4,     2,     2,     4,     3,     4,     1,     1,     4,
     1,     4,     1,     1,     4,     4,     4,     4,     5,     5,
     5,     4,     2,     3,     2,     4,     3,     4,     3,     4,
     5,     6,     5,     6,     5,     5,     5,     5,     5,     5,
     5,     5,     5,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     3,     3,     2,     1,     1,     1,     3,     1,     0,
     2,     1,     2,     2,     2,     1,     1,     0,     1,     2,
     2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     1,     1
};

static const short yydefact[] = {     2,
     1,  1339,  1387,  1369,  1370,  1371,  1372,  1373,  1374,  1375,
  1376,  1377,  1378,  1379,  1380,  1381,  1382,  1383,  1384,  1385,
  1386,  1360,  1361,  1355,   942,   943,  1392,  1365,  1366,  1364,
  1367,  1368,  1359,  1388,  1389,  1393,  1390,  1391,  1404,  1405,
     3,  1362,  1363,     6,  1121,     0,     8,     7,  1358,     9,
    10,  1136,     0,     0,     0,  1175,     0,     0,     0,     0,
     0,     0,   437,   923,   437,   126,     0,     0,     0,   437,
     0,   318,     0,     0,     0,   437,   518,     0,     0,     0,
   437,     0,   118,   457,     0,     0,     0,     0,   512,   318,
     0,     0,     0,   457,     0,     0,     0,    21,    13,    27,
    51,    52,    53,    12,    14,    15,    16,    17,    18,    19,
    25,    20,    26,    23,    24,    30,    31,    42,    32,    28,
    36,    40,    37,    39,    38,    41,    44,   469,    33,    34,
    45,    46,    47,    48,    49,    22,    50,    29,    43,   468,
   470,    35,   467,   466,   465,   520,   503,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,  1135,  1133,  1130,  1134,  1132,  1131,     0,  1136,
  1127,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
  1048,  1049,   951,   952,   679,   963,   680,   972,   975,   976,
   979,   681,   678,   982,   987,   989,   991,   993,   994,   996,
   997,  1002,   682,  1009,  1010,  1011,  1012,   677,  1018,  1013,
  1015,   953,   954,   955,   956,   957,   958,   959,   960,   961,
   962,   964,   965,   966,   967,   968,   969,   970,   971,   973,
   974,   977,   978,   980,   981,   983,   984,   985,   986,   988,
   990,   992,   995,   998,   999,  1000,  1001,  1004,  1003,  1005,
  1006,  1007,  1008,  1014,  1016,  1017,  1352,   944,  1353,  1347,
   950,  1100,  1096,   926,    11,     0,  1095,  1116,   949,     0,
  1115,  1113,  1092,  1109,  1114,   945,     0,  1174,  1173,  1177,
  1176,  1171,  1172,  1183,  1185,   931,   949,     0,  1354,     0,
     0,     0,     0,     0,     0,     0,   436,   435,   431,   110,
   922,   432,   124,   125,   346,     0,     0,     0,   292,   293,
     0,     0,   291,     0,     0,   264,     0,     0,     0,     0,
  1006,   495,     0,     0,     0,   377,     0,   374,     0,     0,
     0,   375,     0,     0,   376,     0,     0,   433,     0,  1179,
   317,   316,   315,   314,   324,   330,   337,   335,   334,   336,
   338,     0,   331,   332,     0,     0,   434,   517,   515,     0,
     0,     0,   451,  1009,     0,     0,  1088,  1089,     0,   925,
   924,     0,   430,     0,   930,   117,     0,   456,     0,     0,
   427,   429,   428,   439,   933,   511,     0,   324,   426,  1009,
     0,   100,  1009,     0,    97,   459,     0,   437,     0,     5,
  1190,     0,   514,     0,   514,   551,  1122,     0,  1126,     0,
     0,  1099,  1104,  1104,  1097,  1091,  1106,     0,     0,     0,
  1120,     0,  1184,     0,  1228,     0,  1240,     0,     0,  1241,
  1242,     0,  1237,  1239,     0,   542,    73,     0,    73,     0,
     0,   441,     0,   932,     0,   250,     0,     0,   295,   294,
   298,   392,   390,   391,   385,   386,   387,   389,   388,   289,
     0,   297,   296,     0,  1170,   492,   493,   491,     0,   586,
   310,   543,   544,    71,     0,     0,   452,     0,   383,     0,
   384,     0,   311,   373,  1182,  1181,  1178,  1185,   321,   322,
   323,     0,   327,   319,   329,     0,     0,     0,     0,     0,
  1019,   612,  1020,  1021,  1022,  1023,   617,  1024,  1025,  1026,
  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
  1047,  1048,  1049,   904,     0,   668,   668,     0,   745,   746,
   748,   750,   659,   963,     0,     0,   940,   653,   693,     0,
   668,     0,     0,   695,   656,     0,     0,  1009,  1010,     0,
   939,   751,   664,  1015,     0,     0,   841,     0,   921,     0,
     0,     0,     0,     0,   591,   605,   608,   607,   603,   661,
   606,   950,   919,   716,   694,   802,   841,   510,   917,     0,
     0,   717,   938,   934,   935,   936,   718,   803,  1348,   949,
  1194,  1195,     0,     0,   450,    91,   449,     0,     0,     0,
     0,     0,  1228,     0,   120,     0,   464,   586,   483,   327,
   101,     0,    98,     0,   458,   454,   502,     4,   504,   513,
     0,     0,     0,     0,   535,     0,  1159,  1160,  1158,  1149,
  1157,  1153,  1155,  1151,  1149,  1149,     0,  1162,  1128,  1141,
     0,  1139,  1140,     0,     0,  1137,  1138,  1142,  1101,  1098,
     0,  1093,     0,     0,  1108,     0,  1112,  1110,  1186,  1187,
  1189,  1218,  1215,  1227,  1222,     0,  1210,  1213,  1212,  1224,
  1211,  1202,     0,  1226,     0,     0,  1243,  1021,     0,  1238,
   541,     0,     0,    76,  1123,    76,     0,   269,   268,     0,
   443,     0,     0,   402,   248,   244,     0,     0,   290,     0,
   494,     0,     0,   482,     0,     0,   380,   378,   379,   381,
     0,   266,  1180,   320,     0,     0,     0,     0,   333,     0,
     0,     0,   471,   474,     0,   516,     0,   841,     0,     0,
   903,     0,   667,   663,   670,     0,     0,     0,     0,   646,
   645,     0,   846,     0,   644,   679,   680,   681,   677,   685,
   676,   668,   666,     0,   801,     0,     0,     0,   647,   852,
   878,     0,   674,     0,   611,   613,   614,   615,   616,   618,
   619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
   629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
   639,   640,   641,   642,   643,     0,   675,   684,   610,   604,
   673,   609,   740,     0,   941,   719,   720,   733,   732,     0,
     0,     0,   694,   937,     0,   602,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   760,   762,   741,     0,
     0,     0,     0,     0,     0,     0,   721,   715,   126,     0,
   555,     0,     0,     0,     0,  1349,  1345,  1193,  1192,  1191,
  1196,    95,    96,    88,    94,     0,    93,    86,    92,    87,
   912,   841,   555,   911,     0,   841,  1202,   453,     0,     0,
   495,   362,   488,   313,   102,    99,   461,   506,   519,   521,
   529,   505,   553,     0,     0,   501,     0,  1144,  1150,  1147,
  1148,  1161,  1154,  1156,  1152,  1168,     0,  1136,  1136,     0,
  1103,     0,  1105,     0,  1090,  1111,     0,     0,  1219,  1221,
  1220,     0,     0,     0,  1209,  1214,  1217,  1216,  1340,  1244,
  1340,   401,   401,   401,   401,   103,     0,    74,    75,    79,
    79,   438,   274,   273,   275,     0,   270,     0,   445,   650,
   963,   648,   651,   367,     0,   947,   948,   368,   946,   372,
     0,     0,   252,     0,     0,     0,     0,   249,   129,     0,
     0,     0,   303,     0,   300,     0,     0,   585,   545,   288,
     0,     0,   393,   326,   325,     0,     0,   473,     0,     0,
   480,   841,     0,     0,   901,   898,   902,     0,     0,     0,
   672,   842,     0,     0,     0,     0,     0,   849,   850,   848,
     0,     0,   847,     0,     0,     0,     0,     0,   665,     0,
   730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   841,     0,   854,   868,   880,     0,     0,     0,
     0,     0,     0,   694,   885,     0,     0,   745,   746,   748,
   750,     0,     0,     0,     0,     0,     0,     0,   751,     0,
     0,     0,     0,     0,     0,   716,     0,   802,   841,     0,
   717,   718,     0,  1336,  1348,   736,     0,     0,   594,     0,
     0,   595,     0,  1054,  1056,  1057,  1059,  1061,  1062,  1065,
  1066,  1067,  1074,  1075,  1076,  1077,  1081,  1082,  1083,  1084,
  1087,  1051,  1052,  1053,  1055,  1058,  1060,  1063,  1064,  1068,
  1069,  1070,  1071,  1072,  1073,  1078,  1079,  1080,  1085,  1086,
  1050,   918,   734,   799,     0,   825,   826,   828,   830,     0,
     0,     0,   831,     0,     0,     0,     0,     0,     0,     0,
   841,     0,   805,   806,   838,  1346,     0,   766,     0,   761,
   764,   738,     0,     0,     0,   800,     0,     0,     0,   737,
     0,     0,   729,     0,   731,     0,     0,     0,   727,     0,
     0,     0,   728,     0,     0,     0,   722,     0,     0,     0,
   723,     0,     0,     0,   726,     0,     0,     0,   724,     0,
     0,     0,   725,   512,   509,  1337,  1348,   916,     0,   586,
   920,   905,   907,   928,     0,   743,     0,   906,  1351,  1350,
   996,    90,   914,     0,   586,     0,     0,  1209,   119,   113,
   112,     0,     0,   487,     0,     0,   455,     0,   527,   528,
     0,   523,     0,   550,   537,   538,   532,   536,   540,   534,
   539,     0,  1169,     0,  1163,     0,     0,  1356,     0,     0,
  1102,  1118,  1107,  1188,  1228,  1228,  1207,     0,  1207,     0,
  1208,  1236,     0,     0,     0,   400,     0,     0,     0,   129,
   109,     0,     0,     0,   399,    72,    77,    78,    83,    83,
     0,     0,   448,     0,   440,   649,     0,   366,   371,   365,
     0,     0,     0,   251,   261,   253,   254,   255,   256,     0,
     0,   128,   130,   131,   179,     0,   246,   247,     0,     0,
     0,     0,     0,   299,   349,   497,   497,     0,   382,     0,
   312,     0,   339,   343,   341,     0,     0,     0,   481,   344,
     0,     0,   897,     0,     0,     0,     0,   662,     0,     0,
   896,   747,   749,     0,   658,   752,   753,     0,   652,   687,
   688,   689,   690,   692,   691,   686,     0,     0,   655,     0,
   852,   878,     0,   866,   855,   861,     0,   754,     0,     0,
   867,     0,     0,     0,     0,     0,   853,     0,     0,   882,
   755,   683,     0,   884,     0,     0,     0,   759,     0,     0,
     0,     0,   846,   801,  1334,     0,   852,   878,     0,   740,
  1273,   719,  1252,   720,  1253,   733,  1266,   732,  1265,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   760,   762,
   741,     0,     0,     0,     0,     0,     0,     0,   721,   715,
     0,     0,   841,     0,     0,   702,   704,   703,   705,   706,
   707,   708,   710,   709,     0,   701,     0,   589,     0,     0,
     0,     0,     0,     0,   594,   660,     0,     0,     0,   852,
   878,     0,   821,   807,   808,   816,   815,     0,     0,     0,
   822,     0,     0,     0,     0,   809,   804,     0,   886,     0,
   887,   888,   938,   765,   763,   767,     0,     0,   739,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1344,     0,
   554,   558,   560,   557,   563,   587,   547,     0,   742,   744,
    89,   910,   489,   915,     0,  1197,   115,   116,   122,   114,
     0,   486,     0,     0,   462,   522,   524,   525,   526,   552,
     0,     0,     0,  1124,  1129,  1168,   591,  1143,  1357,  1145,
  1146,     0,  1094,  1231,     0,  1228,     0,     0,     0,  1198,
  1207,  1199,  1207,  1394,  1395,  1398,  1247,  1396,  1397,  1341,
  1245,     0,     0,     0,     0,     0,     0,   104,     0,   106,
     0,   398,     0,    85,    85,     0,   271,   447,   442,   446,
   451,   369,     0,     0,   370,   422,   423,   420,   421,     0,
   262,     0,     0,   241,     0,   243,   139,   135,   242,     0,
     0,   386,   307,   257,   258,   304,   306,   259,   308,   305,
   302,   301,     0,     0,     0,   490,  1119,   395,   396,   394,
   340,     0,   328,   472,   479,     0,   476,     0,   900,   894,
     0,   669,   671,   844,   843,     0,   845,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   864,   862,   851,   865,
   856,   857,   860,   858,   859,   869,     0,   879,     0,   877,
   756,   757,   758,   883,     0,     0,     0,     0,     0,   730,
     0,     0,     0,     0,     0,     0,   736,   734,   799,  1332,
     0,     0,   766,     0,   761,   764,   738,  1271,     0,     0,
     0,   800,  1333,     0,     0,     0,   737,  1270,     0,     0,
   729,     0,   731,  1264,     0,     0,     0,   727,  1260,     0,
     0,     0,   728,  1261,     0,     0,     0,   722,  1255,     0,
     0,     0,   723,  1256,     0,     0,     0,   726,  1259,     0,
     0,     0,   724,  1257,     0,     0,     0,   725,  1258,     0,
   743,     0,     0,   839,     0,     0,   712,   711,     0,     0,
   594,     0,   596,   597,   598,   599,   600,   601,   590,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   819,   817,
   768,   820,   810,   811,   814,   812,   813,   823,     0,   770,
     0,     0,   890,     0,   891,   892,     0,     0,   772,     0,
     0,   780,     0,     0,   778,     0,     0,   779,     0,     0,
   773,     0,     0,   774,     0,     0,   777,     0,     0,   775,
     0,     0,   776,   508,  1338,   577,     0,   564,     0,     0,
   579,   576,   579,   577,   575,   579,   566,   568,     0,     0,
   562,   588,     0,   549,   909,   908,   913,     0,   111,     0,
   485,     0,     0,   460,   531,   530,   533,  1164,  1166,  1117,
  1168,  1223,  1230,  1225,  1207,     0,  1207,     0,  1200,  1201,
     0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
   186,   188,     0,     0,     0,   105,     0,     0,     0,     0,
     0,    70,    69,   278,     0,     0,   444,   364,     0,     0,
   178,   127,     0,   123,   245,   247,     0,   133,     0,     0,
     0,     0,     0,     0,   146,   132,   134,   137,   141,     0,
   309,   260,   348,   927,     0,     0,     0,   496,     0,     0,
   899,   735,   657,   895,   654,     0,   871,   872,     0,     0,
     0,   876,   870,   881,     0,   747,   749,   752,   753,   754,
   755,     0,     0,     0,   759,     0,     0,   765,   763,   767,
     0,     0,   739,  1272,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   742,   744,   841,     0,     0,     0,     0,   714,     0,
   592,   594,     0,   827,   829,   832,   833,     0,     0,     0,
   837,   824,   889,   769,   771,     0,   790,   781,   798,   789,
   796,   787,   797,   788,   791,   782,   792,   783,   795,   786,
   793,   784,   794,   785,     0,   556,   559,     0,   578,   572,
   573,     0,   574,   567,     0,   561,     0,     0,   507,     0,
   484,   463,     0,  1165,     0,     0,  1233,  1203,  1207,  1204,
  1207,     0,   210,   211,   189,   199,   198,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   213,   215,   212,     0,
     0,     0,     0,     0,     0,     0,     0,   180,     0,     0,
     0,   181,   108,     0,   397,    82,    81,     0,   277,     0,
     0,   272,     0,   586,   419,     0,   138,     0,     0,     0,
   171,   172,   174,   176,   143,   177,     0,     0,     0,     0,
     0,   144,     0,   151,   145,   147,   478,   136,   263,     0,
   350,   351,   353,   358,     0,   928,   498,     0,   499,   342,
     0,     0,   873,   874,   875,     0,   756,   757,   758,   768,
   770,     0,     0,     0,     0,   772,     0,     0,   780,     0,
     0,   778,     0,     0,   779,     0,     0,   773,     0,     0,
   774,     0,     0,   777,     0,     0,   775,     0,     0,   776,
   840,   696,     0,   699,   700,     0,   593,     0,   834,   835,
   836,   893,     0,   571,     0,     0,   546,   548,   121,  1399,
  1400,     0,  1401,  1402,  1167,  1342,   591,  1232,  1168,  1205,
  1206,     0,   202,   200,   208,     0,   227,     0,   218,     0,
   214,   217,   206,     0,     0,     0,   209,   205,   195,   196,
   197,   190,   191,   194,   192,   193,   203,     0,   185,     0,
   182,   107,     0,    84,   279,   280,   276,     0,     0,     0,
     0,     0,     0,   140,     0,     0,     0,   169,   152,   162,
   161,     0,     0,   170,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   230,   365,     0,     0,     0,   361,
     0,   500,   475,   863,   735,   769,   771,   790,   781,   798,
   789,   796,   787,   797,   788,   791,   782,   792,   783,   795,
   786,   793,   784,   794,   785,   697,   698,   818,   565,   570,
     0,     0,   569,     0,  1343,  1235,  1234,     0,     0,     0,
   226,   220,   216,   219,     0,     0,   207,     0,   204,     0,
    80,     0,   363,   425,   418,   240,   142,     0,     0,     0,
   165,   163,   168,   158,   159,   160,   153,   154,   157,   155,
   156,   166,     0,   150,     0,     0,   233,   345,   352,   357,
   356,     0,   355,   359,   929,     0,   581,     0,  1403,     0,
   223,     0,   221,     0,     0,   184,   478,   283,   424,     0,
     0,   173,   175,     0,   167,   477,   228,   229,     0,   148,
   232,   360,   358,     0,   583,   584,   201,   225,   224,   222,
   230,     0,   281,   284,   285,   286,   287,   404,     0,     0,
   403,   406,   417,   414,   416,   415,   405,     0,   149,     0,
     0,   231,   361,     0,   580,   233,     0,   267,     0,   409,
   410,     0,   164,   237,     0,     0,   234,   235,   354,   582,
   183,   282,   407,   411,   413,   408,   236,   238,   239,   412,
     0,     0,     0
};

static const short yydefgoto[] = {  2481,
     1,    41,    96,    97,    98,    99,   100,   714,   960,  1299,
  2126,  1614,  1922,   101,   888,   884,   102,   103,   104,   956,
   105,   106,  1242,  1559,   397,   900,  1879,   107,   337,  1321,
  1322,  1323,  1946,  1947,  1938,  1948,  1949,  2383,  2152,  1324,
  1325,  2268,  1909,  2350,  2351,  2387,  2420,  2421,  2467,  1934,
   108,   990,  1326,  1327,   109,   725,   988,  1643,  1644,  1645,
   110,   338,   111,   112,   720,   966,   967,  1925,  2130,  2277,
  2432,  2433,   113,   114,   480,   339,   993,   729,   994,   995,
  1646,   115,   116,   365,   513,   747,   117,   372,   373,   374,
  1344,  1663,   118,   119,   340,  1654,  2160,  2161,  2162,  2163,
  2310,  2393,   120,   121,  1624,   723,   975,  1310,  1311,   122,
   357,   123,   738,   124,   125,  1647,   482,  1002,   126,  1611,
  1292,   127,   981,  2441,  2459,  2460,  2461,  2134,  1630,  2410,
  2443,   129,   130,   131,   319,   132,   133,   134,   969,  1305,
  1619,   626,   135,   136,   137,   399,   646,  1247,  1564,   138,
   139,  2444,   753,  2305,  1010,  1011,  2445,   142,  1245,  2446,
   144,   489,  1656,  1958,  2169,   145,   146,   147,   871,   407,
   651,   380,   426,   909,   910,  1252,   916,  1257,  1260,   712,
   491,   492,  1874,  2079,   655,  1254,  1220,  1541,  1542,  1543,
  1857,  1544,  1867,  1868,  1869,  2070,  2343,  2424,  2425,   734,
  1545,   846,  1468,  1101,   594,   595,   596,   597,   598,   976,
   775,   789,   770,   599,   600,   764,  1021,  1358,   601,   602,
   793,   781,  1022,   604,   841,  1465,  1790,   842,   605,  1160,
   835,  1065,  1031,  1032,  1051,  1052,  1058,  1400,  1700,  1066,
  1500,  1501,  1824,  1825,   606,  1015,  1016,  1354,   757,   607,
  1222,   893,   894,   608,   609,   320,   759,   282,  1953,  1223,
  2394,   394,   493,   611,   404,   612,   613,   614,   615,   616,
   292,   978,   617,  1142,   391,   148,   301,   286,   432,   433,
   680,   682,   685,   935,   293,   294,   287,  1583,   149,   150,
    44,    52,    45,   427,   169,   170,   430,   926,   171,   669,
   670,   671,   672,   673,   674,   675,   918,   676,   677,  1264,
  1265,  2084,  1266,   151,   152,   302,   303,   153,   508,   507,
   154,   155,   443,   689,   156,   157,   158,   880,   623,   159,
   160,   945,  1590,  1282,  1584,   938,   942,   703,  1585,  1586,
  1891,  2086,  2087,   161,   162,   453,  1093,  1215,    46,  1283,
  2235,  1216,   618,  1094,   619,   877,   620,   704,    47,  1267,
    48,  1268,  1600,  2236,    50,    51
};

static const short yypact[] = {-32768,
  1698,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3717,-32768,-32768,-32768,-32768,
-32768,  1254, 25520,   425,   127, 24689,   212, 29090,   212,  -109,
   112,    -7,    -9, 29090,   235,  2448, 29364,    69,  2132,   235,
    36,    23,   421,    80,   421,   235,    95, 26898, 27172,  -109,
   235, 29090,    79,   -39,    83, 27172, 23026,   159,   337,    23,
 27172, 27720, 27994,   -39,   -83,  4575,    93,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   336,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   386,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   443,    20,
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
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   260,-32768,-32768,-32768,   260,-32768,-32768,   264, 24966,
-32768,-32768,-32768,    29,-32768,-32768,   212,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   365,-32768,-32768,   476,-32768,   477,
   219,   219,   603, 27172,   212,   646,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   212, 29090, 29090,-32768,-32768,
 29090, 29090,-32768, 29090, 27172,-32768,   470,   427, 22455,   535,
   212,   569, 27172, 29090,   212,-32768, 29090,-32768, 29090, 29090,
 29090,-32768,  1750,   649,-32768, 29090, 29090,-32768,   387,-32768,
-32768,-32768,-32768,-32768,    64,   628,-32768,-32768,-32768,-32768,
-32768,   679,   534,-32768, 27172,   709,-32768,-32768,   727, 15349,
  -102,  -102,     8,   639,   758,   -69,-32768,-32768,   718,-32768,
-32768,   783,-32768,   768,-32768,-32768, 27172,-32768,   800, 29090,
-32768,-32768,-32768,-32768,-32768,-32768, 27172,    64,-32768,   733,
   832,-32768,   807,   901,-32768,   839,   -36,   235,   763,-32768,
-32768,   -83,  1013,  1012,  1013,   980,-32768,   996,-32768,    65,
 29090,-32768,   821,   821,-32768,-32768,  1099,  1069,  1550,  1550,
-32768,   264,-32768,   387,    99, 29090,-32768,   990, 29090,-32768,
-32768, 29638,-32768,-32768,   219,   909,   987,   924,   987,  1158,
   349,  1029,   938,-32768,  1180,-32768, 27172,  1136,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   963,-32768,-32768, 29090,-32768,  1107,-32768,-32768,  1197,  1082,
-32768,   997,-32768,-32768,  1166, 23303,-32768,   938,-32768,  1067,
-32768,   159,-32768,-32768,-32768,-32768,-32768,   365,-32768,-32768,
-32768,  1046,   284,-32768,-32768, 29090,   404,   -12, 29090, 29090,
    67,-32768,    68,   186,   216,   250,-32768,   309,   438,   471,
   509,   530,   579,   585,   611,   618,   631,   655,   664,   673,
   676,   729,   730,   732,   749,   774,   781,   790,   791,   815,
   864,   865,   868, 24411,  1084,  1193,  1193,  1102,-32768,  1105,
  1114,-32768,  1129,  1275,  1139,  1143,-32768,  1146,  1026,  1390,
  1193, 16545,  1174,  1191,  1184,  1187,  1196,   897,   259,  1204,
-32768,-32768,-32768,   918,  1682, 16545,  1200, 16545,-32768, 16545,
 16545, 16545, 16844,   159,  1208,-32768,-32768,-32768,-32768,  1214,
-32768,   927,  1458,-32768,  5629,-32768,  1200,   -60,-32768,  1235,
  1246,-32768,  1244,-32768,-32768,-32768,   301,-32768,    37,   932,
-32768,-32768,   132, 25243,-32768,-32768,-32768,    28,  1423,    41,
    41, 22745,    99, 27172,  1359, 29090,-32768,  1082,  1440,   284,
-32768,  1445,-32768,  1449,-32768, 27172,-32768,-32768,-32768,-32768,
   -83, 16545,   -83,  1372,   213,  1507,-32768,-32768,-32768,  -109,
-32768,-32768,-32768,-32768,  -109,  -109,   912,-32768,-32768,-32768,
  1305,-32768,-32768,  1322,  1346,-32768,-32768,-32768,  1368,-32768,
  1046,-32768,  1375, 25520,  1483,  1550,-32768,-32768,-32768,  1315,
-32768,-32768,-32768,-32768,-32768,   552,-32768,-32768,-32768,-32768,
-32768,   392,   859,-32768,  1379, 29090,-32768,  1389,  1394,-32768,
-32768,    91,  1455,   -56,-32768,   -56,   -83,-32768,-32768,    39,
  1477,  9381,  1466,-32768,   959,  1424,   159, 22165,-32768,  1584,
-32768,  1647, 16545,-32768, 29090, 27172,-32768,-32768,-32768,-32768,
 28268,-32768,-32768,-32768, 29090, 29090,  1634,  1585,-32768,  1578,
  1480, 21601,-32768,-32768,  1664,-32768,  1593,  1200,  1485,  1244,
  1502, 16545,-32768,-32768,  1728, 16844,  1046,  1046,  1046,-32768,
-32768,  1636,   505,  1046,-32768,  1632,  1635,  1639,  1648,-32768,
-32768,  1193,-32768,  1191,  1836, 16545, 16545,  1046,-32768, 19834,
 16844,  1653,-32768,  9668,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1275,-32768,  1652,-32768,-32768,
-32768,-32768,   163, 17143,-32768,  1788,  1788,  1788,  1788,  1570,
  1571,  1583,  2999,-32768,   445,-32768,  1046, 26074,  6765, 16545,
 18339,  1575,   203, 16545,   221, 16545,-32768,-32768, 17442, 10864,
 11163, 11462, 11761, 12060, 12359, 12658, 18040,-32768,   -29, 15349,
  1771, 23580,  7581, 29090, 25797,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768, 29912,-32768,-32768,-32768,-32768,
-32768,  1200,   -14,-32768,  1589,   474,   392,-32768,  1638,    73,
   569,-32768,  1613,-32768,-32768,-32768,  1591,-32768,  1594,-32768,
  4339,-32768,  1743,    -8,   522,-32768,  1867,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1607,  2745,    24,    24, 29090,
-32768, 29090,-32768,  1550,-32768,-32768,   264,  1596,-32768,-32768,
-32768,  1597,   546,   795,  1874,-32768,-32768,-32768,-32768,-32768,
-32768,    14,  1820,  1820,  1820,-32768,   212,-32768,-32768,   -75,
   -75,-32768,-32768,-32768,-32768,  1753,  1751,  1621,  1685,-32768,
  1754,-32768,-32768,-32768,   574,-32768,-32768,-32768,-32768,  1649,
  1758,   338,-32768,   338,   338,   338,   338,-32768, 26622,  1842,
  1686,  1630,  1631,   654,-32768, 27172,   -84,  5629,-32768,-32768,
  1617,  1641,  1644,-32768,-32768,   264, 27446,-32768, 15349,   667,
-32768,  1200, 27446, 16545,   -20,-32768,-32768, 29090,  4598,  1772,
  1865,-32768,  -101,  1656,  1657,   771,  1659,-32768,-32768,-32768,
  1660,  1834,-32768,  1662,   359,   308,  1778,  1813,-32768,  4163,
  2324,   857,  1654,  1666,  1667,  1668, 19834, 19834, 19834, 19834,
  1663,   528,  1200,  1669,-32768,   301,   -28,  1670,  1774, 15648,
 16844, 15648, 15648,  4690,   -61,  1672,  1679,   166,   542,   919,
   322,  1683,  1684, 17143,  1706,  1691,  1693,  1694,   419, 17143,
 17143, 17143, 17143, 17143, 16844,   439,  6184,   538,  1200,  1702,
   766,  1061,   844,-32768,    40,-32768,  1808, 16545,  1655,    22,
  1474,-32768,  1703,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1836,  1705,-32768,  1707,  1708,-32768,  1710,
  1711,  1713,-32768, 18339, 18339, 18339, 18339, 18339, 16545,   710,
  1200,  1714,-32768,   301,-32768,-32768,  3306,-32768,    10,-32768,
-32768,   837, 18339,  1715, 16545,  1304,  1716,  1718, 15947,   163,
  1719,  1720,-32768, 15947,  2324,  1721,  1722, 15947,  2687,  1724,
  1725, 15947,  2687,  1742,  1744, 15947,    35,  1745,  1746, 15947,
    35,  1748,  1749, 15947,  1788,  1752,  1755, 15947,  1788,  1756,
  1759, 15947,  1788,   337,  1704,-32768,    37,-32768, 21327,  1082,
-32768,  1732,-32768,-32768,  1760,-32768,   196,  1732,-32768,-32768,
 29090,-32768,-32768, 24411,  1082, 23857,  1766,  1874,-32768,-32768,
-32768,   347,  1914,  1769,  1793, 29090,-32768, 16545,-32768,-32768,
   475,-32768, 29090,-32768,-32768,-32768,  -125,-32768,-32768,  1819,
-32768,  1768,-32768,   875,-32768,  -109,  1878,-32768,  1757,  1767,
-32768,  1797,-32768,-32768,   104,   104,   592,  1576,   592,   985,
-32768,-32768,   637,   931,  1776,-32768,  1925,  1940,  1777, 26622,
-32768, 29090, 29090, 29090, 29090,-32768,-32768,-32768,  1955,  1955,
 27172,    39,    42,  1794,-32768,-32768, 26348,-32768,-32768,  1881,
 26348,   572,  1046,-32768,-32768,-32768,-32768,-32768,-32768, 29090,
   994,-32768,-32768,-32768,-32768,  1065,-32768,  5030,  1636, 22455,
 21875, 21875, 22165,-32768,  1894,  1977,  1977, 29090,-32768, 28542,
  1704, 29090,-32768,  1891,-32768,  1074, 29090,   -74,-32768,-32768,
  4795, 16844,-32768,  1988,  6765, 29090, 29090,-32768, 16545, 16844,
-32768,-32768,-32768,  1046,-32768,-32768,-32768, 16545,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, 16545,  1046,-32768, 19834,
 19834, 16844,  9967,   520,  2041,  2041,   137,-32768,  6765, 19834,
 20432, 19834, 19834, 19834, 19834, 19834,-32768,  8181, 16844,  1992,
-32768,-32768,  1803,   -61,  1804,  1805, 16844,-32768, 16545,  1046,
  1046,  1636,   505,  4095,-32768, 16545, 19834, 16844, 10266,   656,
-32768,  2050,-32768,  2050,-32768,  2050,-32768,  2050,-32768,  1809,
  6765, 17143, 18339,  1811,   488, 17143,   498, 17143,   877,   890,
 12957, 13256, 13555, 13854, 14153, 14452, 14751, 15050, 17741,   911,
  7881, 17143,  1200,  1814,  1994,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,     6,  4417,   669,-32768,  1222,    22,
    22,    22,    22,    22,  1655,-32768, 18339,  1046,  1046, 19834,
 16844, 10565,   612,  2056,  2056,  2056,  2056,  1172,  6765, 18339,
 18638, 18339, 18339, 18339, 18339, 18937,-32768,  8481,-32768,  1815,
  1818,-32768,-32768,-32768,-32768,-32768,  1051,  3306,   837,  1636,
  1636,  1828,  1636,  1636,  1829,  1636,  1636,  1830,  1636,  1636,
  1832,  1636,  1636,  1833,  1636,  1636,  1835,  1636,  1636,  1841,
  1636,  1636,  1843,  1636,  1636,  1844, 27172,   264,-32768, 27172,
-32768,  1847,  1646,-32768, 28816,  1846,  2003, 24134,-32768,-32768,
-32768,-32768,-32768,-32768, 16844,-32768,-32768,-32768,  1956,-32768,
  2036,  1875,  1876,  1165,-32768,-32768,-32768,-32768,-32768,  1852,
   522,   522,    -8,-32768,-32768,  1607,  1208,-32768,-32768,-32768,
-32768, 29090,-32768,-32768,  1850,   104,  1854,   936,   803,-32768,
   592,-32768,   592,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768, 20731,  1859,  1861, 29090,  1248,  5030,-32768,    45,-32768,
  1981,-32768,  2054,  1900,  1900,  2061,  2020,-32768,-32768,-32768,
     8,-32768,   963,  2107,-32768,-32768,-32768,-32768,-32768,  1999,
-32768,   142, 26622,  1954, 29090,-32768,  2024,  1464,-32768,  1957,
 29090,  1301,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   212,  1886,   131,-32768,-32768,-32768,-32768,-32768,
-32768,  2072,-32768,-32768,-32768,  1888,-32768, 16844,-32768,-32768,
  1890,-32768,-32768,  5629,-32768,  1892,  5629,  2870,  1893,  1276,
  1895,  1896, 15648, 15648, 15648,  1897,-32768,-32768,   891,   520,
    86,    86,  2041,  2041,  2041,-32768,   199,   -61, 16844,-32768,
-32768,-32768,-32768,   -61,  5061,  1898,  1899,  1902,  1903,   862,
  1904,  1905, 15648, 15648, 15648,  1906,   946,   971,  4095,-32768,
  1058,  3306,  1006,   641,  1035,  1072,  1381,-32768, 18339,  1889,
 17143,  6692,-32768,  1901,  1908, 15947,   656,-32768,  1909,  1910,
  1092, 15947,  5647,-32768,  1911,  1912, 15947,  3794,-32768,  1913,
  1915, 15947,  3794,-32768,  1916,  1918, 15947,    90,-32768,  1919,
  1920, 15947,    90,-32768,  1922,  1923, 15947,  2050,-32768,  1924,
  1927, 15947,  2050,-32768,  1931,  1936, 15947,  2050,-32768,  1937,
  1093,   263,  1947,-32768,  1636,  1946,-32768,-32768, 16246,  1948,
  1655,  1590,-32768,   704,   704,-32768,-32768,-32768,-32768,  1285,
  1950,  1952,  1958,  1959, 15648, 15648, 15648,  1960,-32768,-32768,
  1309,   612,   119,   119,  2056,  2056,  2056,-32768,   282,-32768,
  5459, 18339,-32768,  1961,  1926,-32768,  1963,  1964,-32768,  1965,
  1966,-32768,  1967,  1968,-32768,  1969,  1970,-32768,  1972,  1973,
-32768,  1975,  1978,-32768,  1979,  1980,-32768,  1987,  1989,-32768,
  1991,  1993,-32768,-32768,-32768,  1671,  1995,-32768, 27172,  2064,
  2040,-32768,  2040,   947,-32768,  2040,  1646,-32768,  2086, 26074,
-32768,-32768,  2175,  2137,-32768,-32768,-32768,  2038,-32768,   -83,
-32768,  1984, 29090,-32768,-32768,-32768,-32768,-32768,  1971,-32768,
  1607,-32768,-32768,-32768,   592,  1650,   592,  1555,-32768,-32768,
  1982, 20731,-32768, 20731, 20731, 20731, 20731, 20731,  3723,  2000,
-32768,  2002, 29090, 29090,  1319,-32768,  2182,  2199, 29090,   212,
  2030,-32768,-32768,  2082,  2188,    39,-32768,-32768,   159, 27172,
-32768,-32768,  2004,-32768,-32768,-32768,  2179,-32768,  2009, 29090,
 19236,  2166,  2185, 29090,-32768,-32768,  1464,-32768,-32768,   159,
-32768,-32768,-32768,-32768, 29090,  2164,  2167,-32768,  2165, 15349,
-32768,-32768,-32768,-32768,-32768,  6765,-32768,-32768,  2017,  2018,
  2019,-32768,-32768,   -61,  6765,  1108,  1118,  1119,  1120,  1127,
  1133,  2021,  2025,  2026,  1134, 18339,  2028,  1144,  1152,  1154,
  1203,  3306,  1381,-32768,  1636,  1636,  2029,  1636,  1636,  2031,
  1636,  1636,  2032,  1636,  1636,  2033,  1636,  1636,  2037,  1636,
  1636,  2039,  1636,  1636,  2042,  1636,  1636,  2044,  1636,  1636,
  2045,  1205,  1224,  1200,  2048,  1636,  2051,  2052,  5629,  1636,
-32768,  1655,  6765,-32768,-32768,-32768,-32768,  2053,  2058,  2059,
-32768,-32768,-32768,  1309,-32768,  5459,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2193,-32768,-32768, 27172,-32768,-32768,
-32768,  2203,-32768,-32768, 27172,-32768, 16844, 16545,-32768,   159,
-32768,-32768,   581,-32768,  -109,  1230,-32768,-32768,   592,-32768,
   592, 20731,  6761,   688,  2266,  2266,  2266,  3746,  6765, 20731,
  5459,  2057,   589, 20731,   559, 20731,-32768,-32768, 21030, 20731,
 20731, 20731, 20731, 20731, 20731, 20731, 20731,-32768,  9081,  1336,
  1468,-32768,-32768, 19535,-32768,  2063,-32768,   159,-32768,   222,
  2189,-32768,  2207,  1082,  2069, 29090,-32768, 20731,  1651,  2066,
-32768,  2067,  2068,-32768,-32768,-32768, 19535, 19535, 19535, 19535,
 19535,   845,  2070,-32768,-32768,-32768,  2071,-32768,-32768,  2079,
  2073,-32768,-32768,   -53,  2081,  2002,-32768, 29090,-32768,-32768,
  1508,  2087,-32768,-32768,-32768,  2088,  1234,  1240,  1241,   440,
  1257, 18339,  2089,  2091,  2094,  1286,  2095,  2096,  1308,  2097,
  2098,  1310,  2100,  2101,  1312,  2102,  2104,  1318,  2106,  2108,
  1324,  2109,  2111,  1328,  2113,  2116,  1334,  2117,  2119,  1335,
-32768,-32768,  2121,-32768,-32768,  2122,-32768,  2133,-32768,-32768,
-32768,-32768, 27172,-32768, 27172,    21,   -61,  5629,-32768,-32768,
-32768,  2745,-32768,-32768,   581,-32768,  1208,-32768,  1607,-32768,
-32768,  5528,-32768,-32768,  6761,  2276,-32768,  5459,-32768,   691,
-32768,-32768,  1953,  5459,  2138, 20731,  6809,   688,  6368,  6841,
  6841,   128,   128,  2266,  2266,  2266,-32768,  1512,  6295,  2204,
-32768,   845,   212,-32768,-32768,-32768,-32768, 29090,   159,  2162,
 29090,  2136,  3766,-32768, 19535,  1046,  1046,   764,  2328,  2328,
  2328,   580,  6765, 20133, 19535, 19535, 19535, 19535, 19535, 19535,
 19535, 19535,  8781, 29090,  2297,  1881, 29090,  6765,  6765,   325,
 29090,  2140,-32768,-32768,  1341,   465,  1345,  1351,  1352,  1354,
  1361,  1362,  1365,  1369,  1380,  1382,  1383,  1428,  1429,  1437,
  1486,  1490,  1496,  1504,  1506,-32768,-32768,-32768,-32768,-32768,
 16545,  2141,-32768,  2471,-32768,-32768,-32768,  6765,  5459,  1536,
-32768,-32768,-32768,-32768,  2375,  5459,  1953, 20731,-32768, 29090,
-32768,  2144,-32768,  2214,-32768,-32768,-32768,   754,  2145,  2146,
-32768,-32768,   764,   845,  1033,  1033,   153,   153,  2328,  2328,
  2328,-32768,  1537,   845,  1549,    71,  2298,-32768,-32768,-32768,
-32768,   212,-32768,-32768,-32768,  1553,  5629, 29090,-32768,  2148,
-32768,  5459,-32768,  5459,  1556,  6295,  2071,  1076,-32768,  1188,
  6765,-32768,-32768, 19535,-32768,-32768,-32768,-32768,    53,-32768,
  2298,-32768,   -53,  1559,-32768,-32768,-32768,-32768,-32768,-32768,
  2297,  1569,-32768,-32768,-32768,-32768,-32768,-32768,   318,   114,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2150,   845,    57,
    57,-32768,   325, 29090,-32768,  2298,  1076,-32768,  2154,   318,
  2159,  2153,-32768,-32768,  2395,    76,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  2168,-32768,-32768,-32768,-32768,-32768,-32768,
  2460,  2465,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,  2370,-32768,-32768,-32768,  2010,  1765,  1510,
-32768,  1168,   858,-32768,  1853,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1603,  1195,
   850,  1198,-32768,-32768,-32768,   541,   350,-32768, -1041,-32768,
  -930,-32768, -1643,   135, -2043,    61,    38,    74,    50,-32768,
-32768,-32768,-32768,   867,-32768,-32768,-32768,-32768,-32768,   396,
-32768,-32768,-32768,-32768,-32768,-32768, -1263,-32768,-32768,-32768,
-32768,    46,-32768,-32768,-32768,-32768,  -326,   881,-32768,  1175,
  1173,-32768,-32768,  2417,  2123,  1869,-32768,  2446,-32768,  2015,
  1520,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   228,
   113,    87,-32768,-32768,   233,  2043,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  2190,  -339,-32768,-32768,-32768,
   501,-32768,-32768,-32768,   102,-32768, -2253,-32768,-32768,-32768,
    -5,-32768,-32768,-32768,  1171,-32768,-32768,-32768,-32768,-32768,
-32768,   923,-32768,-32768,-32768,  2452,-32768,-32768,  1297,-32768,
  2161,     0,-32768,   146, -1577,  1211,     2,-32768,-32768,     7,
-32768,  1661,  1228,-32768,-32768,  -508,   -92,  5553,-32768,  1347,
  2143,-32768,-32768,-32768,  1325,-32768,-32768,   993,  -550,-32768,
  -349,   261,-32768,-32768,-32768,-32768,  1687,-32768,-32768, -1513,
-32768,  1038,-32768,   708,   715,  -708,-32768,-32768,   129,  -627,
-32768, -1548, -1431,  -920,  -806,  1997,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -685,  -427,-32768,-32768,-32768,  3911,
-32768,-32768,  -110,  -650,   796,-32768,-32768,-32768,  4937, -1123,
  -595,  -740,  1176,-32768, -1185,  -542,  -889,-32768,-32768,  -492,
   866,-32768,   594,-32768,  -429,-32768,  1577,-32768,-32768,   984,
  1729,-32768,  1350,  -994,  1726,-32768,    15,  -301,-32768, -1532,
   198,  -232,   -49,  3940,-32768,  5119,   784,    -1,     1,   -52,
  -307,  -969,  2220,   724,-32768,-32768,   -13,-32768,  2312,-32768,
  1674,  2172,-32768,-32768,  1665,  -377,    -2,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -150,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   638,-32768,-32768,-32768,
  1031,-32768, -1846,-32768,-32768,-32768,  1998,-32768,-32768,  2158,
-32768,-32768,  2110,  1692,-32768,-32768,-32768,-32768,  2226,-32768,
-32768,  1727, -1258,  1385,  -364,-32768,-32768,-32768, -1234,-32768,
-32768,-32768,   380,-32768,-32768,  -235,   -48,  1615,  2459,  1680,
-32768,  1094,  -425,  -771,  2197,  1413,   189,   -55,-32768,   401,
-32768,     5,-32768,   399,-32768,-32768
};


#define	YYLAST		30190


static const short yytable[] = {    42,
   283,    43,   417,   283,   310,    49,   503,   457,   305,   754,
   902,   868,   481,   501,  1346,  1876,   690,   342,   459,   429,
  1592,  1291,  1278,  1280,   392,  1023,  1856,  1915,  1889,   462,
  1483,  1484,  1485,  1486,  1487,   405,   977,   494,  1617,   285,
   128,  1587,  1143,  1799,  2085,   140,   438,   141,   497,  1507,
  1057,   295,   143, -1125,   359,  1255,   875,  2246,  2308,   875,
   163,   687,   688,   164,   163,   869,   165,   164,   422,  1787,
   165,   166,  1788,   167,   168,   166,   454,   167,   168,  1165,
   702,   621,  1352,   361,   750,  1399,   316,   423,    77,    77,
   128,  1359,  1285,   389,   849,   140,  1286,   141,    77,  1219,
   401,   403,   143,   692,   625,   409,   657,   658,   692,   659,
   660,   693,   661,   662,   630,   663,   693,   664,  1504,  1666,
   665,   666,   667,   668,   882,  1571,  1287,   509,   694,   765,
  2464,  1359,  1227,   694,   695,   696,   963,   887,  1618,   695,
   696,  1297,   311,   783,   312,  1389,  1917,   323,   324,  1431,
  2450,   297,   425,   952,   878,   953,  2442,  1505,   378,   958,
    77,   964,  1017,   883,  1359,   309,   748,   638,   314,   755,
  1298,  2341,  2478,  1288,  1572,   697,   317,  1014,  1489,  1469,
   697,   751,   343,  1086,   315,  2417,  1240,  2099,   959,   362,
   277,   318,   954,   279,   379,  1681,  1389,  1506,  1360,   698,
  1361,  2465,   622,  1289,   698,   375,  2474,   510,   962,   699,
  2355,    68,  2293,  2342,   699,   631,    95,    95,  1918,   710,
  1285,   439,   849,  2479,   511,   446,    95,  2418,   447,   965,
  2466,  1711,   363,   398,   448,   449,    74,   283,  1360,   870,
  2309,   289,   296,  2451,   289,   304,   307,   308,   364,   280,
   450,   730,   307,   451,  1287,   307,  1241,   313,  2093,   360,
  2094,  2095,  2096,  2097,  2098,   647,   307,   307,   897,   603,
   307,  1360,    25,  1256,   307,   307,   437,   460,   461,   307,
   307,   307,   879,   278,   465,  1234,    77,   700,   752,   853,
   396,  1173,   700,   701,  1803,  1956,  1233,   495,   701,   496,
  1237,  1288,    25,   278,    79,  2401,  1789,   504,   936,  1721,
   277,  1168,   400,   279,  1290,   280,   278,   278,   280,   440,
  1404,  1957,  1100, -1125,   865,   866,   867, -1125,   456,   649,
   627,  1289,  1899, -1346,  1900,  2120,  2121,  1622, -1346,   309,
  1174,  1625,  -611,  -613,    25,  2067,   955,  1033,  1169,   466,
  1170,  1893,   512,  1800,  1039,  1175,   506,   490,  2428,  2031,
  2429,   421,    91,   514,  -611,  -613,  1811,  1812,  1813,  1814,
  1815,  1816,  1817,   309,   678,  1394,  1395,  1396,   309,  1447,
  1448,  1449,  1165,  1165,  1165,  1165,  1165,   420,  1359,   518,
  1171,  1359,  2085,   128,   610,   857,   705,   745,   140,   707,
   141,  1165,   709,   746,  1088,   143,   514, -1229,  1494,  1495,
  1496,   635,   858,  1391,    95,    68,  1349,  2115,  2116,  2117,
   317,   639,  2164,  1086,  1392,  1393,  1394,  1395,  1396,  1086,
  1086,  1086,  1086,  1086,   278,   318,   295,   295,  1687,   452,
    74,   506,  2300,  2301,  2302,  1373,   739,   914,  2242,   742,
   863,   864,   865,   866,   867,  1359,  2245,  1397,   792, -1278,
  2253,  -614,  2257,   915, -1278,  2258,  2259,  2260,  2261,  2262,
  2263,  2264,  2265,  2266,  1359,  2269,     2,  1370,   289,  1374,
  2275,   726,   840,  -614,   366,   441,   277,  2276,  1336,   279,
   422,  -615,  1682,  1450,  2283,  1360,  1371,  1550,  1360,  1489,
  1973,   367,   307,   296,  1384,  1385,  1386,  1387,    79,   423,
   744,   690,   406,  -615,   296,   307,   307,  2392,   367,   307,
   307,  1638,   307,   307,  1489,  -616,   368,   307,  1712,   485,
  1372,   307,   307,   296,  -684,   307,   431,   307,   307,   307,
   424,   844,   280,   368,   307,   307,  1792,  -616,  1671,  1794,
  1795,  1796,  1797,  1798,  2224,   718,  -684,   442,   908,   719,
   912,  2226,  1360,   307,  2023,  1497,    91,  1403,  1729,  1405,
  1406,   283,   939,   940,   425,   885,   369,   889,   889,  1389,
   941,  1360,  1688,  2042,  -618,   307,   901,  1389,   307,   444,
  2312,  1804,  1547,   369,   370,   307,  1723,  -925,   205,   277,
  2217,  -932,   279,   445,   919,  1991,  -618,  1553,   290,   919,
   919,   370,  2357,  1557,  1558, -1283,   455,  1730,    25,   307,
 -1283,   977,   278,   207,  1718,   977,  1313,   296,   296,  2254,
  1272,   283,  1731,  1724,   307,  1725,  2088,   307,  2090,  2293,
   307,  1057,   212,   213,  1088,   467,   895,  1390,   898,  1296,
  1088,  1088,  1088,  1088,  1088,   307,   950,  1697,  1698,   417,
   907,  1165,  2132,   371,   505,   280,  1704,  1896,  1898,  1626,
   933,  1489,   307,   458,   991,  1726,   223,  1057,  2255,   931,
   371,   468,  1810,   295,   307,   999,  1028,  1029,  2346,   943,
   486,  1003,   944,  2256,  1627,  1004,  1005,  2249,  2044,   277,
   291,  1931,   279,   280,   307,  1165,   228,   307,   307,  2339,
  1782,  2340, -1284,  -619,  2406,  1431,  1491, -1284,  1165,  1165,
  1165,  1165,  1165,  1165,  1165,    25,  2385,  1492,  1493,  1494,
  1495,  1496, -1249, -1301,  2250,  -619,  2251, -1249, -1301,   487,
  1057,  1491,   307,  1099,  1628,  1100,  -620,  2099,  2365,  1988,
  1000,  1567,  1492,  1493,  1494,  1495,  1496,  1819, -1302,   603,
  1568,  1569,  1629, -1302,   484,  1024,  1025,  1026,  -620,  1489,
  -925,   834,  1034,   832,  2164,  1490,  2252,  1269,  1270,   502,
   488,  1086,  1435,   280,  -621,  1086,  1042,  1086,  1989,   515,
  1086,  1086,  1086,  1086,  1086,  1086,  1086,  1086,  1086,  2352,
  1638,  1086,    25,  1259,  1391,  -622,  -621,  1392,  1393,  1394,
  1395,  1396,   289,  2293,  2103,  1392,  1393,  1394,  1395,  1396,
   307,  2411,   307,  2293,   307,  1229,    25,  -622,  1990,   516,
  2240, -1335,  2241,   517,   307, -1279, -1335,  1680,  2353,  1667,
 -1279,   628,  1410,  1102,  1277,  1103,  1100,  1689,  1690,  1691,
  1692,  1693,  1694,  1695,  -623,  2230,  2294,  1784,  2231,   519,
  -624,    25,  2180,    26,  2295,  2296,  2297,  2298,  2299,  2300,
  2301,  2302,   289,  1307,   296,  1308,  -623,   520,  2354,   946,
   947,  2371,  -624,  2232,   610,   629,  -625,   948,  1439,  1588,
  1686,   632,  1589,  -626,   307,   636,   849,    68,   603,  1492,
  1493,  1494,  1495,  1496,  2293,  1440,  -627,   851,  -625,   633,
   307,  1594,  1258,  1261,  1595,  -626,   307,    25,   634,    26,
  2107,   849,    74,   307,   307,    42,  1716,    43,  -627,   307,
  -628,   295,   851,   307,   307,   641,  1596,  2108,  1597,  -629,
   307,  1102,  1102,  1445,  1446,  1447,  1448,  1449,  -630,    25,
  1389,  -631,  -628,  1333,   922,  1334,   852,  1165,  1974,   642,
   923,  -629,   924,   853,   925,  2171,  1347,  1791,  1348,  1100,
  -630,-32768,    77,  -631,  1430,  2113,  2114,  2115,  2116,  2117,
  1315,   852,  1315,  1315,  1315,  1315,  1491,  1033,   853,  1808,
    79,   501,   501,  1472,  1473,  1474,   854,  1492,  1493,  1494,
  1495,  1496,  1088,  1640,  -632,  -633,  1088,  -634,  1088,   643,
  1335,  1088,  1088,  1088,  1088,  1088,  1088,  1088,  1088,  1088,
  1885,  1886,  1088,   610,  -635,  1415,  -632,  -633,   644,  -634,
  2294,  1421,  1423,  1425,  1427,  1429,   307,   832,  2295,  2296,
  2297,  2298,  2299,  2300,  2301,  2302,  -635,   645,    91,  -636,
  1165,  2298,  2299,  2300,  2301,  2302,  -637,   648,  2316, -1250,
   307,  1861,   307,   307, -1250,  -638,  -639,  1862,   840,   857,
  1364,  -636,  1365,   840,   307,    25,   650,   840,  -637,  1863,
  1086,   840,  2272,    25,   652,   840,   858,  -638,  -639,   840,
  -640,   654,  2293,   840,   857,  1100,  1279,   840,  1102,   656,
    95,   840,  1865,  1100,  1897,  2288,  2289,  2290,  2291,  2292,
  1489,   858,  -640,   859,   681,  1866,  1822,  1489,   307,   776,
   307,  2294,   296,  1986,   863,   864,   865,   866,   867,  2295,
  2296,  2297,  2298,  2299,  2300,  2301,  2302,  1452,   859,  -641,
  -642,   686,  1453,  -643,   777,   296,   860,   861,   862,   863,
   864,   865,   866,   867,  2071, -1263,  1378,  2073,  1379,  2172,
 -1263,  -641,  -642,   778,   213,  -643,   684,  1391,  2176,  1575,
 -1293,   982,  -675,   706,  1576, -1293,   983,   307,  1392,  1393,
  1394,  1395,  1396, -1295,   307,  1337,   713,   984, -1295,  1560,
  1969,  1970,  1971,  -610,  -675,   307,  1565,   223,   711,   985,
   986,   307,  -673,  1565, -1248,  1594,   307,  -609,  1595, -1248,
  1577,    25, -1281,    26,  1165,  -610,    25, -1281,   715,  1411,
  1982,  1983,  1984,   987,  -673,   717,  2218,   779,   721,  -609,
  1596,   849,  1601,  1546,  1895,   322,  1100,   850,   722, -1269,
   358,  1669,   851,  2368, -1269,  1612,   377,   724,   895,  1675,
  1620,   393,  2373,  2374,  2375,  2376,  2377,  2378,  2379,  2380,
  2381,  2384,  1489,   728, -1267,    42,   727,    43,  2182, -1267,
  1632,  1579,  1470,  1471,  1472,  1473,  1474,   731,  1649,  1649,
   733,  1598,  1598,  1599,  1599,    68,  1593, -1125,  1658,   732,
  1660,   852,  2244,  1633,   163,  1634,   735,   164,   853, -1299,
   165,  1088,   920,   921, -1299,   166,   854,   167,   168,  2294,
    74,  1631,  2038,  2039,  2040,  1616,   736,   855,-32768,-32768,
  2298,  2299,  2300,  2301,  2302,   856,    25,  1491, -1294,  1315,
  1315,  1648,  1648, -1294,  1491,  1389,  2227,   760,  1492,  1493,
  1494,  1495,  1496,  1966,  1489,  1492,  1493,  1494,  1495,  1496,
   277,   278,  2033,   279, -1251,   832,    25,  -925,    26, -1251,
    77,  -932,  1676,   849,  1635, -1297,  1636,   741,  1489,   850,
 -1297,  1336,  2449,   870,   851,  1664,  1679,  1314,    79,  1316,
  1317,  1318,  1319,  1720,   762, -1262, -1276,  1728,   763,  1733,
 -1262, -1276,  1738,  1744,  1749,  1754,  1759,  1764,  1769,  1774,
  1779, -1280,   766,  1783,   857,   767, -1280,   307,  1706,  1707,
  1165, -1282, -1285, -1286,   768,   760, -1282, -1285, -1286,   307,
 -1287,   858,   307,   852,   307, -1287, -1288, -1292,  2211,   769,
   853, -1288, -1292,   771,   307,  2438,    91, -1298,   854,   772,
  1431,   307, -1298,   773,  1877, -1296,   774, -1300,   859,   855,
 -1296,  1433, -1300,  1293,  1294,  1295,   860,   861,   862,   863,
   864,   865,   866,   867,  1883,  1102,  1884,   782,  1102,  1102,
  1102,  1102,  1102,  1809,   786,   787,  1801,  1802,   307,  1491,
   307,   307,   307,   307,   788,  2439,  2372,   790,  2440,   307,
  1492,  1493,  1494,  1495,  1496,   307,   791,   834, -1275,   307,
  1434,  2390,  2391, -1275,   794,   845,  2280,  1435,   307,  1470,
  1471,  1472,  1473,  1474,   847,-32768,   832, -1277,   307,   307,
   307,   307, -1277,  1793,  2238,   848,   307, -1289,   307,  2239,
   307,   872, -1289, -1290, -1291,   307,   857,   758, -1290, -1291,
   874,  2400,  1939,   832,   307,   307,   873,  1633,  1940,  1916,
 -1303,  1854,  1391,   858,  1546, -1303,   886,  1961,   899,   903,
  1941,  1491,   913,  1392,  1393,  1394,  1395,  1396,   627,  1261,
  1261,  1258,  1492,  1493,  1494,  1495,  1496,   832,   905, -1305,
   859,    25,   906,    26, -1305,  1491,  1102,  1102,   860,   861,
   862,   863,   864,   865,   866,   867,  1492,  1493,  1494,  1495,
  1496, -1313,   917, -1311,  2448, -1312, -1313,   927, -1311,  1942,
 -1312, -1306,  2127,  1439,   937,   892, -1306, -1307,  1347,   832,
  2122, -1310, -1307,  1943,   928,  1430, -1310, -1308, -1309,  1944,
  1440,  1430, -1308, -1309, -1268,  1347,  1430,  2270, -1304, -1268,
  1631,  1430,  1952, -1304, -1323, -1314,  1430, -1331,   929, -1323,
 -1314,  1430, -1331,  1945, -1322, -1329,  1430,  1441, -1320, -1322,
 -1329,  1430, -1330, -1320,   930,   932,  1430, -1330,  1445,  1446,
  1447,  1448,  1449, -1321,   934, -1324, -1315,   832, -1321,   949,
 -1324, -1315,  1994, -1246,   795,   522,   796,   797,   798,   799,
   527,   800,   801,   802,   951,   803,   832,   804,   805,   806,
   807,   808,   809,   810,   811,   812,   813,   814,   957,   815,
   816,   817,   818,   819,   820,   968,   821,   822,   823,   824,
   825, -1325, -1316,   980,   989,   307, -1325, -1316,   307,  1939,
 -1328,     2,  1860,   307,   996, -1328,   307,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,  1941,    13,    14,
    15,    16,    17,    18,    19,    20,    21,  1860,   997,  1006,
  1861,  1470,  1471,  1472,  1473,  1474,  1862,  1347,  1007,  2271,
   307,  1008,  1475,  1053,  -577,   205,   563,  1013,  1863, -1319,
  1009,  1018,   826, -1326, -1319,  1861,  2282,  1864, -1326, -1317,
  1014,  1862,   568,   307, -1317,   832,  1942, -1327,  -925, -1318,
   207,  1865, -1327,  1863, -1318,  1020,   569,   870,    77,  2313,
  1943,  2358,  1864,  2359,  1866,  1035,  1944,  1089,  1036,   212,
   213,   307,  1037,   307,   277,   291,  1865,   279,   280,   307,
   575,  1038,  1059,  2082,  1161,  2402,  2414,  2403,  2415,  1866,
  1945,  1954,  1470,  1471,  1472,  1473,  1474,   849,  1347,   603,
  2416,   792,   735,   223,  2423,  2402,  2091,  2430,  2454,  2065,
  2455,   827,   828,  1470,  1471,  1472,  1473,  1474,  2457,  2125,
  2458,  1096,  1097,  1546,  1591,  1167,  2133,  1470,  1471,  1472,
  1473,  1474,  1098,   228,  1219,  1236,   829,  1244,  2032,  1239,
  2139,  1246,  1253,  1248,  1262,   849,  1263,  2159,  1275,  1276,
  1281,  2447,  1286,  1301,  1302,  1303,   851,  1304,  1312,  1329,
   832,  1309,  1306,  1330,  1331,  1332,  1338,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,  1454,    13,    14,
    15,    16,    17,    18,    19,    20,    21,  1470,  1471,  1472,
  1473,  1474,  1339,  1340,  2135,  1356,  1357,  1368,  2089,  1375,
  1503,  1376,  1467,  1455,  1380,   852,   277,  1362,  1363,   279,
  1366,  1367,   853,  1369,  1388,  2361,  1381,  1382,  1383,  1398,
   854,  1401,    22,  1408,   610,    23,  1402,    24,    25,  1409,
    26,   855,    27,  1412,  1413,    28,    29,    30,    31,    32,
  1416,  1417,    33,  1418,  1419,    34,    35,    36,    37,    38,
    39,    40,  1451,  1538,  1476,  1477,  1561,  1478,  1479,   832,
  1480,  1481,  2099,  1482,  1498,  1508,  1510,   760,  1511,  1513,
  1514,  1516,  1517,  2101,  1519,  1520,   499,  2229,  1548,  2237,
  1053,  1053,  1053,  1053,   472,   473,   474,   475,   476,   477,
   478,   479,  1522,  1562,  1523,  1525,  1526,   307,  1528,  1529,
  1555,  1563,  1531,  1573,  1603,  1532,  1534,  1089,   307,  1535,
  1580,  1549,  1574,  1089,  1089,  1089,  1089,  1089,   857,  1604,
  1581,   307,  2102,  1582,  1613,  2274,  1602,  1605,  1621,  2103,
  1623,  2233,  1546,  2234,  1456,   858,  1653,-32768,  1655,  1546,
  1662,  1670,  1457,  1458,  1459,  1460,  1461,  1462,  1463,  1464,
  1389,   307,   307,  1699,  1701,  1702,  1703,   307,   296,  1431,
  1717,  1722,   859,  1786,  1785,  1489,  1820,  1821,   307,  1873,
   860,   861,   862,   863,   864,   865,   866,   867,   307,  1829,
  1832,  1835,   307,  1838,  1841,  1872,  1844,  1161,  1161,  1161,
  1161,  1161,  1847,   307,  1850,  1853,  1859,  1880,  1878,  1881,
  1882,  1883,    22,  1892,   832,    23,  1161,  1894,    25,  1913,
    26,  1914,    27,   832,  1919,    28,    29,    30,    31,    32,
  1920,  1921,  1924,  1926,  1929,    34,    35,    36,    37,    38,
   832,  1578,  1930,  1937,  1933,  2107,  1955,  1959,  1960,  1992,
  1950,  1962,  2068,  1963,  1965,  2069,  1967,  1968,  1972,  1976,
  1977,  1995,  2108,  1978,  1979,  1980,  1981,  1985,  1996,  1998,
  1999,  2001,  2002,  2004,  2075,  2005,  2007,   892,  2008,  2010,
  2011,   832,  2013,  2014,  2016,  2046,  2363,  2017,  2362,  2109,
    42,  2019,    43,  2233,   832,  2234,  2020,  1546,  2022,  1546,
  2113,  2114,  2115,  2116,  2117,  2024,  2026,  2077,  2030,   288,
   288,  2034,   288,  2035,  2078,  2083,   307,  2080,  2081,  2036,
  2037,  2041,  2045,   307,  2047,  2048,  2049,  2050,  2051,  2052,
  2053,  2054,   284,  2055,  2056,   284,  2057,   306,  2123,  2058,
  2059,  2060,  2092,   321,  2369,  2370,   306,   832,  2061,   832,
  2062,  1503,  2063,  2131,  2064,  2124,  2066,   386,   390,  2128,
  2119,   395,  -932,  2129,  2136,   390,   390,   344,  2137,  2138,
   390,   412,   415,  2155,  2156,  2167,  2168,  2170,  2173,  2174,
  2175,  2223,  2177,   345,   307,  2099,  2178,  2179,   346,  2181,
  2186,  2225,  2189,  2192,  2195,   347,   348,  2279,  2198,   349,
  2201,  2349,    42,  2204,    43,  2207,  2210,   417,  1579,  2212,
   350,  2278,  2214,  2215,  2219,  2436,   307,  2248,   351,  2220,
  2221,   352,  2273,  1053,  1053,  2281,  2285,  2286,  2287,  2360,
  2303,  2304,  2307,  1053,  1053,  1053,  1053,  1053,  1053,  1053,
  2306,  2311,  2364,   849,   353,  1503,   354,  2293,  2314,  2315,
  2317,   355,  2318,   356,   851,  2319,  2320,  2321,  2322,  2323,
  1053,  2324,  2325,  2326,  2436,  2327,  2434,  2328,  2435,  2329,
  2330,   307,  2331,   307,  2332,  1089,  1161,  2333,  2334,  1089,
  2335,  1089,  2336,  2337,  1089,  1089,  1089,  1089,  1089,  1089,
  1089,  1089,  1089,  2386,  2338,  1089,   832,  2366,  2356,  1347,
  2404,  2398,   832,   852,  2408,  2409,  2412,  2413,  2419,  2427,
   853,  2463,  2473,  2475,  2476,  2434,  2477,  2435,   854,  2482,
  1161,   296,  2480,  1053,  2483,   419,   307,  1615,   716,   307,
  1300,  1214,  1923,  1161,  1161,  1161,  1161,  1161,  1161,  1161,
   961,   832,  1932,   890,  1606,   435,   288,  2158,  2284,  1608,
  2405,  2456,   307,  2471,  2452,   307,   832,   832,  2395,   307,
  2468,  1935,  2472,  1928,  1651,  1503,   408,  1652,   904,   284,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
   376,    13,    14,    15,    16,    17,    18,    19,    20,    21,
   640,   749,  1350,   390,  2389,  2453,   832,   832,  2388,  2469,
   740,  2462,   500,  1927,   832,   416,   306,   306,   307,  1570,
   284,   464,  2431,   306,   390,   288,   857,  1665,   483,   637,
  1537,  1243,   390,   306,  1657,  1887,   306,   653,   306,   284,
   464,  2396,  1566,   858,  2074,   306,   306,  1858,  2072,  1235,
  2395,   830,  2470,  1552,  2028,  2183,   307,  1987,  1709,  2422,
   832,  1353,   832,  2076,   390,  1218,  2437,   434,  1273,   832,
   859,   691,  1228,  1271,  1503,   683,  1888,   624,   860,   861,
   862,   863,   864,   865,   866,   867,   390,   743,  2347,   395,
  1341,   881,  1556,  1238,   323,   324,   390,   428,  1274,  1539,
  1284,  1855,  2344,  2345,     0,   288,   288,   325,     0,   326,
   288,  2395,   307,     0,   327,  2437,     0,     0,     0,     0,
   679,   328,   329,     0,     0,   330,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   306,   331,     0,   306,     0,
     0,   306,     0,     0,   332,     0,     0,  -347,     0,     0,
     0,     0,     0,     0,     0,  1503,   390,  1503,  1503,  1503,
  1503,  1503,     0,     0,     0,     0,     0,     0,     0,     0,
   333,     0,  -265,   395,     0,     0,     0,   334,     0,   335,
     0,     0,  1161,     0,  1089,   306,   336,     0,     0,     0,
     0,     0,     0,     0,  1503,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   306,     0,     0,   306,   756,
     0,     0,     0,     0,     0,    22,   849,     0,    23,     0,
     0,    25,     0,    26,     0,    27,     0,   851,    28,    29,
    30,    31,    32,     0,     0,     0,     0,     0,    34,    35,
    36,    37,    38,   761,  2399,  1503,     0,     0,     0,     0,
     0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,     0,    13,    14,    15,    16,    17,
    18,    19,    20,    21,     0,  1161,   852,     0,     0,     0,
     0,     0,     0,   853,     0,   876,     0,     0,     0,     0,
   288,   854,     0,     0,     0,     0,     0,     0,     0,  1503,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   284,     0,     0,     0,     0,     0,     0,
     0,   896,     0,   390,     0,   306,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   390,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1503,     0,     0,     0,     0,
   288,     0,   288,  1503,  1503,     0,     0,  1503,     0,  1503,
     0,     0,  1503,  1503,  1503,  1503,  1503,  1503,  1503,  1503,
  1503,     0,  1503,   284,     0,     0,     0,  1503,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   857,
     0,  1503,     0,     0,     0,   306,     0,     0,     0,   849,
  1503,  1503,  1503,  1503,  1503,   850,   858,     0,     0,     0,
   851,   979,     0,     0,     0,     0,     0,   483,     0,     0,
     0,     0,     0,     0,   306,   390,     0,     0,     0,     0,
   306,     0,     0,   859,   306,   306,     0,     0,     0,  1161,
     0,  1012,-32768,-32768,   863,   864,   865,   866,   867,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   852,
     0,     0,     0,     0,     0,     0,   853,     0,     0,     0,
     0,     0,     0,     0,   854,     0,     0,     0,     0,  1056,
     0,     0,     0,     0,     0,   855,     0,     0,     0,    22,
     0,     0,    23,   856,     0,    25,     0,    26,     0,    27,
  1095,  1503,    28,    29,    30,    31,    32,  1503,     0,  1503,
     0,     0,    34,    35,    36,    37,    38,  1166,     0,     0,
     0,     0,     0,  1092,     0,     0,     0,     0,   849,     0,
     0,     0,     0,     0,   850,  1217,     0,  1141,  1503,   851,
  1164,  1230,     0,     0,     0,     0,     0,  1503,  1503,  1503,
  1503,  1503,  1503,  1503,  1503,  1503,  1503,     0,     0,     0,
     0,  1224,     0,  1224,   306,     0,     0,     0,     0,     0,
     0,     0,   857,     0,     0,  1232,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   852,   858,
     0,     0,     0,     0,     0,   853,     0,     0,     0,     0,
   288,     0,  1503,   854,     0,     0,     0,     0,     0,  1503,
     0,  1503,     0,     0,   855,     0,   859,     0,     0,   679,
     0,   284,   856,     0,   860,   861,   862,   863,   864,   865,
   866,   867,     0,     0,     0,  1161,     0,     0,     0,     0,
     0,  1964,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1503,     0,  1503,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1503,     0,     0,
     0,     0,  1217,     0,     0,     0,     0,     0,  1328,     0,
     0,     0,     0,     0,     0,   390,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1345,     0,     0,     0,
     0,   857,  1345,     0,     0,     0,     0,  1224,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   858,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1056,  1056,  1056,  1056,
  1095,     0,     0,     0,     0,   859,  1095,  1095,  1095,  1095,
  1095,     0,     0,   860,   861,   862,   863,   864,   865,   866,
   867,   876,     0,  1092,     0,     0,     0,     0,  -714,  1092,
  1092,  1092,  1092,  1092,     0,     0,     0,     0,   795,   522,
   796,   797,   798,   799,   527,   800,   801,   802,     0,   803,
     0,   804,   805,   806,   807,   808,   809,   810,   811,   812,
   813,   814,     0,   815,   816,   817,   818,   819,   820,     0,
   821,   822,   823,   824,   825,     0,     0,     0,     0,     0,
  1166,  1166,  1166,  1166,  1166,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1166,
     0,     0,     0,  1164,  1164,  1164,  1164,  1164,     0,     0,
     0,     0,   556,   557,     0,     0,     0,     0,     0,     0,
     0,     0,  1164,     0,     0,     0,     0,     0,     0,   205,
   563,     0,     0,     0,     0,     0,   826,     0,     0,     0,
     0,     0,     0,   876,   567,     0,   568,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
   569,     0,     0,     0,     0,     0,     0,     0,   390,     0,
     0,     0,     0,   212,   213,     0,   570,     0,   571,     0,
  1551,     0,     0,   896,   575,  1224,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   306,     0,     0,     0,     0,
     0,     0,   306,     0,     0,     0,     0,   223,    77,     0,
     0,     0,     0,     0,     0,   827,   828,     0,     0,     0,
     0,     0,     0,   581,     0,     0,     0,     0,     0,     0,
   583,     0,     0,     0,     0,     0,     0,   228,     0,  1607,
   829,  1607,  1609,  1610,   306,     0,     0,     0,     0,     0,
   390,     0,     0,     0,     0,     0,   979,     0,     0,     0,
   979,     0,     0,     0,     0,     0,     0,     0,     0,   306,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
  1650,  1650,   483,     0,     0,     0,     0,   306,     0,   306,
     0,  1661,     0,     0,     0,     0,  1012,     0,   585,     0,
     0,     0,     0,     0,     0,  1672,  1673,     0,     0,     0,
   277,   278,     0,   279,     0,     0,    25,   587,    26,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1056,
  1056,     0,     0,     0,     0,     0,     0,     0,     0,  1056,
  1056,  1056,  1056,  1056,  1056,  1056,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1095,  1166,
     0,     0,  1095,     0,  1095,     0,  1056,  1095,  1095,  1095,
  1095,  1095,  1095,  1095,  1095,  1095,     0,     0,  1095,     0,
     0,  1092,  1164,     0,     0,  1092,     0,  1092,     0,     0,
  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,     0,
     0,  1092,     0,  1166,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1166,  1166,  1166,  1166,
  1166,  1166,  1166,     0,     0,     0,  1164,     0,     0,  1056,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1164,
  1164,  1164,  1164,  1164,  1164,  1164,     0,     0,     0,    53,
     0,     0,     0,     0,    54,     0,     0,    55,    56,     0,
     0,    57,     0,     0,  1217,     0,     0,     0,     0,     0,
    58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    60,    61,   390,     0,     0,   390,
     0,     0,     0,     0,  1871,     0,     0,  1224,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    62,  2099,     0,     0,     0,    63,     0,  2100,     0,
     0,     0,     0,  2101,     0,     0,    64,     0,     0,     0,
    65,  1890,    66,     0,     0,  2099,     0,     0,     0,     0,
     0,  2100,    67,     0,    68,     0,  2101,     0,    69,     0,
    70,  1912,    71,     0,  1012,  2099,    72,     0,     0,     0,
     0,  2100,    73,     0,     0,     0,  2101,     0,     0,    74,
     0,     0,  2102,     0,     0,     0,     0,     0,     0,  2103,
     0,     0,  1607,  1431,  1936,     0,     0,  2104,     0,     0,
  1951,     0,     0,     0,  1433,  2102,     0,     0,  2105,     0,
     0,     0,  2103,     0,     0,     0,  2106,     0,     0,     0,
  2104,     0,     0,     0,    75,  2102,    76,     0,     0,    77,
    78,  2105,  2103,     0,     0,     0,     0,     0,     0,  2106,
  2104,     0,     0,     0,     0,     0,     0,    79,     0,     0,
     0,  2105,     0,  1434,     0,     0,     0,     0,     0,  2106,
  1435,    80,    81,     0,     0,  1166,     0,  1095,  1436,     0,
    82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
    84,    85,     0,     0,     0,     0,     0,     0,  1164,     0,
  1092,     0,    86,    87,    88,  2107,    89,     0,     0,    90,
     0,     0,     0,   281,     0,    91,   281,     0,   281,     0,
     0,     0,  2108,    92,   281,     0,     0,   281,  2107,     0,
    93,     0,     0,     0,     0,     0,     0,    94,   281,   281,
     0,     0,   281,     0,     0,  2108,   281,   281,  2107,  2109,
     0,   281,   281,   281,     0,     0,     0,  2110,  2111,  2112,
  2113,  2114,  2115,  2116,  2117,  2108,     0,    95,  1166,     0,
     0,     0,  2109,     0,  2118,     0,  1439,     0,     0,     0,
  2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,     0,
     0,  1164,  2109,  1440,     0,     0,     0,  2243,     0,     0,
  2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2367,     0,     0,
  1441,     0,     0,     0,     0,     0,     0,     0,   390,-32768,
-32768,  1445,  1446,  1447,  1448,  1449,     0,     0,     0,  1141,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   306,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1912,     0,  1912,  1912,  1912,  1912,  1912,     0,     0,
     0,     0,  1012,  1012,     0,     0,     0,     0,   306,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   390,
     0,     0,     0,     0,  1431,     0,     0,     0,     0,   306,
   464,     0,     0,  2157,     0,  1433,     0,     0,     0,     0,
     0,     0,     0,     0,  2166,     0,     0,     0,     0,     0,
     0,     0,  1166,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   281,     0,     0,     0,     0,  1164,     0,     0,     0,     0,
     0,     0,     0,     0,  1434,     0,     0,     0,     0,     0,
     0,  1435,   849,     0,   281,     0,     0,     0,   850,  1436,
     0,     0,     0,   851,     0,     0,     0,   281,   281,     0,
  1437,   281,   281,     0,   281,   281,     0,     0,     0,   281,
     0,     0,     0,   281,   281,     0,     0,   281,     0,   281,
   281,   281,     0,     0,     0,     0,   281,   281,     0,     0,
     0,   463,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   852,     0,     0,   281,     0,   390,     0,   853,
   498,     0,     0,     0,   390,     0,     0,   854,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   281,   855,     0,
   281,  1912,     0,     0,     0,     0,   856,   281,     0,  1912,
     0,     0,     0,  1912,     0,  1912,     0,  1439,  1912,  1912,
  1912,  1912,  1912,  1912,  1912,  1912,  1912,     0,  1912,     0,
     0,   281,     0,   464,  1440,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   306,   281,  1912,     0,   281,
     0,     0,   281,     0,     0,     0,   464,   464,   464,   464,
   464,  1441,     0,     0,     0,     0,     0,   281,  1166,  1442,
  1443,  1444,  1445,  1446,  1447,  1448,  1449,  1012,     0,     0,
     0,     0,     0,     0,   281,   857,     0,     0,   849,     0,
     0,  1164,     0,     0,   850,     0,   281,  1249,     0,   851,
     0,     0,   858,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   281,     0,     0,   281,
   281,     0,     0,     0,     0,     0,     0,  1250,     0,   859,
     0,     0,   390,     0,   390,     0,     0,   860,   861,   862,
   863,   864,   865,   866,   867,     0,     0,     0,   852,     0,
     0,     0,  1377,     0,   281,   853,     0,     0,     0,     0,
     0,     0,     0,   854,     0,  1912,   849,     0,     0,   780,
     0,     0,   850,     0,   855,     0,     0,   851,     0,     0,
     0,     0,   856,     0,     0,   831,     0,   306,     0,     0,
  1224,     0,     0,     0,   464,     0,     0,     0,     0,     0,
     0,     0,     0,   464,   464,   464,   464,   464,   464,   464,
   464,   464,   464,  1012,     0,     0,  1224,     0,     0,     0,
   306,  1251,     0,     0,   281,     0,   852,     0,     0,     0,
     0,     0,   281,   853,   281,     0,   281,     0,     0,     0,
     0,   854,     0,     0,     0,     0,   281,     0,     0,     0,
     0,     0,   855,     0,     0,     0,     0,     0,     0,     0,
   856,   857,     0,     0,     0,     0,     0,  1912,     0,  2407,
     0,     0,    54,     0,     0,    55,    56,     0,   858,    57,
     0,     0,     0,     0,   281,     0,     0,     0,    58,    59,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    60,    61,     0,   859,   281,  2426,     0,     0,
     0,     0,     0,   860,   861,   862,   863,   864,   865,   866,
   867,     0,   281,   464,     0,     0,     0,     0,   281,    62,
     0,     0,     0,     0,   418,   281,   281,     0,     0,   857,
     0,   281,     0,     0,    64,   281,   281,   849,    65,     0,
    66,     0,   281,   850,     0,  1355,   858,     0,   851,     0,
    67,     0,    68,  2426,     0,     0,    69,     0,    70,     0,
    71,     0,     0,  1030,    72,     0,     0,     0,     0,     0,
    73,     0,     0,   859,     0,     0,     0,    74,     0,     0,
     0,   860,   861,   862,   863,   864,   865,   866,   867,     0,
     0,     0,     0,     0,     0,     0,  -713,   852,     0,     0,
     0,     0,     0,     0,   853,     0,     0,     0,     0,  1054,
     0,     0,   854,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    75,   855,    76,     0,     0,    77,    78,   849,
     0,   856,     0,     0,     0,   850,     0,     0,   281,   831,
   851,     0,     0,     0,     0,    79,     0,     0,     0,     0,
     0,     0,     0,  1090,     0,     0,     0,     0,     0,    80,
    81,     0,   281,     0,   281,   281,     0,     0,    82,    83,
  1162,     0,     0,     0,     0,     0,   281,     0,    84,    85,
     0,     0,     0,  1407,     0,     0,     0,     0,     0,   852,
    86,    87,    88,     0,    89,     0,   853,    90,     0,     0,
     0,     0,     0,    91,   854,     0,     0,     0,     0,     0,
   857,    92,     0,     0,     0,   855,     0,     0,    93,     0,
   281,     0,   281,   856,     0,    94,     0,   858,     0,     0,
     0,     0,     0,     0,   849,     0,     0,     0,     0,     0,
   850,     0,     0,     0,     0,   851,     0,     0,     0,     0,
     0,     0,     0,     0,   859,    95,     0,     0,     0,     0,
     0,     0,   860,   861,   862,   863,   864,   865,   866,   867,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
     0,     0,     0,     0,     0,     0,   281,     0,     0,     0,
     0,     0,     0,     0,   852,     0,     0,   281,     0,     0,
     0,   853,   857,   281,     0,     0,     0,     0,   281,   854,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   858,
   855,     0,     0,     0,     0,     0,     0,     0,   856,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   859,     0,     0,     0,
     0,     0,     0,  1668,   860,   861,   862,   863,   864,   865,
   866,   867,     0,     0,     0,     0,  1054,  1054,  1054,  1054,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1090,     0,     0,     0,     0,     0,  1090,
  1090,  1090,  1090,  1090,     0,     0,     0,   857,     0,     0,
     0,     0,   795,   522,   796,   797,   798,   799,   527,   800,
   801,   802,     0,   803,   858,   804,   805,   806,   807,   808,
   809,   810,   811,   812,   813,   814,     0,   815,   816,   817,
   818,   819,   820,     0,   821,   822,   823,   824,   825,     0,
     0,   859,     0,     0,     0,     0,     0,   831,     0,   860,
   861,   862,   863,   864,   865,   866,   867,     0,     0,     0,
     0,     0,     0,  1162,  1162,  1162,  1162,  1162,     0,     0,
     0,     0,     0,     0,     0,     0,   556,   557,     0,     0,
     0,     0,  1162,     0,     0,     0,     0,     0,     0,     0,
   849,     0,     0,   205,   563,     0,   850,     0,  1975,   281,
   826,   851,     0,     0,     0,     0,     0,     0,     0,     0,
   568,   281,     0,     0,   281,     0,   281,     0,   207,     0,
     0,     0,     0,     0,   569,     0,   281,     0,     0,     0,
     0,     0,     0,   281,     0,     0,     0,   212,   213,     0,
   570,     0,   571,     0,     0,     0,     0,     0,   575,     0,
   852,     0,     0,     0,     0,     0,     0,   853,     0,     0,
     0,     0,     0,     0,     0,   854,     0,     0,     0,     0,
   281,   223,   281,   281,   281,   281,   855,     0,     0,   827,
   828,   281,     0,     0,   856,     0,     0,   281,     0,     0,
     0,   281,     0,     0,   583,     0,     0,     0,     0,     0,
   281,   228,     0,     0,   829,     0,     0,     0,   831,     0,
   281,   281,   281,   281,     0,     0,     0,     0,   281,     0,
   281,     0,   281,     0,     0,     0,     0,   281,     0,     0,
     0,     0,     0,     0,     0,   831,   281,   281,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1637,     0,   585,   857,     0,     0,     0,     0,     0,   831,
     0,     0,     0,     0,   277,     0,     0,   279,     0,     0,
   858,     0,     0,     0,     0,     0,     0,     0,     0,  1054,
  1054,     0,     0,  1030,     0,     0,     0,     0,     0,  1054,
  1054,  1054,  1054,  1054,  1054,  1054,     0,   859,     0,     0,
     0,   831,     0,     0,     0,   860,   861,   862,   863,   864,
   865,   866,   867,     0,     0,     0,  1054,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1090,  1162,     0,     0,  1090,     0,  1090,     0,     0,
  1090,  1090,  1090,  1090,  1090,  1090,  1090,  1090,  1090,     0,
     0,  1090,     0,     0,     0,     0,     0,     0,     0,   831,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1162,     0,   831,  1054,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1162,
  1162,  1162,  1162,  1162,  1162,  1162,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   281,     0,     0,
   281,     0,     0,     0,     0,   281,     0,     0,   281,     0,
     0,   795,   522,   796,   797,   798,   799,   527,   800,   801,
   802,     0,   803,     0,   804,   805,   806,   807,   808,   809,
   810,   811,   812,   813,   814,     0,   815,   816,   817,   818,
   819,   820,   281,   821,   822,   823,   824,   825,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   785,     0,
     0,     0,     0,     0,     0,   281,     0,   831,     0,     0,
     0,     0,   833,     0,   836,     0,   837,   838,   839,   843,
     0,     0,     0,     0,     0,   556,   557,     0,     0,     0,
     0,  1910,     0,   281,     0,   281,     0,     0,     0,     0,
     0,   281,   205,   563,     0,     0,     0,     0,     0,   826,
     0,     0,     0,     0,     0,     0,     0,   567,     0,   568,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
     0,     0,     0,   569,     0,     0,     0,  2099,   911,     0,
     0,     0,     0,  2100,     0,  2348,   212,   213,  2101,   570,
     0,   571,     0,     0,     0,     0,     0,   575,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   223,     0,   831,     0,     0,     0,     0,     0,   827,   828,
     0,     0,     0,     0,     0,     0,   581,  2102,     0,     0,
     0,     0,     0,   583,  2103,     0,     0,     0,     0,     0,
   228,     0,  2104,   829,     0,     0,     0,     0,  1162,   998,
  1090,     0,     0,  2105,     0,     0,     0,     0,     0,     0,
     0,  2106,     0,     0,     0,     0,     0,     0,   849,     0,
     0,     0,     0,     0,   850,     0,     0,     0,  1019,   851,
     0,     0,     0,     0,     0,     0,  1431,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1433,     0,     0,
     0,   585,  1040,  1041,     0,     0,     0,     0,     0,     0,
  1064,   831,     0,   277,   278,     0,   279,     0,     0,    25,
   587,    26,     0,     0,     0,     0,     0,     0,   852,     0,
     0,     0,     0,     0,     0,   853,     0,     0,     0,     0,
  2107,  1162,     0,   854,     0,     0,  1434,     0,     0,   281,
  1087,     0,     0,  1435,   855,     0,     0,  2108,     0,     0,
   281,  1436,   856,     0,     0,     0,  1144,     0,     0,     0,
  1172,     0,  1176,   281,     0,  1180,  1185,  1189,  1193,  1197,
  1201,  1205,  1209,  1213,  2109,     0,     0,     0,     0,     0,
     0,     0,  2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,
     0,     0,     0,   281,   281,     0,     0,     0,     0,   281,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   281,  1910,     0,  1910,  1910,  1910,  1910,  1910,     0,     0,
   281,     0,     0,     0,   281,     0,     0,     0,     0,     0,
     0,   857,     0,     0,     0,   281,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   831,     0,   858,  1439,
  2153,     0,     0,     0,     0,   831,     0,     0,     0,     0,
     0,     0,     0,     0,  2165,     0,  1440,     0,     0,     0,
     0,     0,   831,     0,     0,   859,     0,     0,  1055,     0,
     0,     0,     0,   860,   861,   862,   863,   864,   865,   866,
   867,     0,     0,  1441,     0,  1162,     0,     0,     0,     0,
     0,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,     0,
     0,     0,     0,   831,     0,     0,     0,     0,     0,     0,
  1351,     0,  1091,     0,     0,     0,   831,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1163,
     0,     0,     0,     0,     0,     0,     0,     0,   281,     0,
     0,     0,     0,     0,     0,   281,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1064,     0,  1064,  1064,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   831,
  1414,   831,     0,     0,     0,     0,  1420,  1422,  1424,  1426,
  1428,   843,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1910,     0,     0,  1466,     0,     0,     0,     0,  1910,
     0,     0,     0,  1910,     0,  1910,   281,     0,  1910,  1910,
  1910,  1910,  1910,  1910,  1910,  1910,  1910,     0,  1910,     0,
     0,     0,     0,  2153,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1910,   281,     0,
     0,     0,     0,     0,     0,     0,  2153,  2153,  2153,  2153,
  2153,     0,     0,     0,     0,  1488,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1509,     0,     0,     0,   843,     0,     0,     0,     0,
   843,  1162,     0,     0,   843,     0,     0,     0,   843,     0,
     0,     0,   843,   281,     0,   281,   843,     0,     0,     0,
   843,     0,     0,     0,   843,     0,     0,     0,   843,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   831,     0,
     0,     0,     0,     0,   831,  1055,  1055,  1055,  1055,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   911,     0,     0,     0,   281,     0,
     0,   281,  1091,     0,     0,  1910,     0,     0,  1091,  1091,
  1091,  1091,  1091,   831,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   281,     0,     0,   281,   831,   831,
     0,   281,     0,     0,  2153,     0,     0,     0,     0,     0,
     0,     0,     0,  2153,  2153,  2153,  2153,  2153,  2153,  2153,
  2153,  2153,  2153,  1431,     0,     0,     0,     0,     0,  1432,
     0,     0,     0,     0,  1433,     0,     0,     0,   831,   831,
     0,     0,     0,     0,     0,     0,   831,     0,     0,     0,
   281,     0,  1163,  1163,  1163,  1163,  1163,     0,     0,     0,
     0,     0,     0,     0,     0,  1502,     0,     0,     0,     0,
     0,  1163,     0,     0,     0,  1674,     0,  1910,     0,     0,
     0,     0,     0,  1434,  1677,     0,     0,     0,   281,     0,
  1435,     0,   831,  1678,   831,     0,     0,     0,  1436,  1064,
     0,   831,     0,     0,  1027,     0,     0,     0,     0,  1437,
     0,     0,     0,     0,     0,     0,     0,  1438,     0,     0,
     0,     0,     0,     0,     0,  1705,     0,     0,     0,     0,
     0,     0,  1710,  2153,  2099,  1064,     0,     0,     0,     0,
  2100,     0,     0,     0,   281,  2101,     0,     0,  1719,     0,
     0,     0,  1727,     0,  1732,     0,     0,  1737,  1743,  1748,
  1753,  1758,  1763,  1768,  1773,  1778,     0,     0,  1087,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2102,     0,  1439,     0,  1064,     0,
     0,  2103,     0,     0,     0,     0,     0,  2099,     0,  2104,
     0,     0,     0,  1440,     0,     0,     0,     0,  2101,     0,
  2105,     0,     0,     0,     0,     0,     0,     0,  2106,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1441,     0,     0,     0,     0,     0,     0,     0,  1442,  1443,
  1444,  1445,  1446,  1447,  1448,  1449,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2102,     0,     0,
     0,     0,     0,     0,  2103,     0,     0,     0,  1055,  1055,
     0,     0,  2104,     0,     0,     0,     0,     0,  1055,  1055,
  1055,  1055,  1055,  1055,  1055,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2107,     0,     0,
     0,     0,     0,     0,     0,  1055,     0,     0,     0,     0,
     0,     0,     0,     0,  2108,     0,     0,     0,     0,     0,
  1091,  1163,     0,     0,  1091,     0,  1091,     0,     0,  1091,
  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,     0,     0,
  1091,  2109,     0,     0,     0,     0,     0,     0,     0,  2110,
  2111,  2112,  2113,  2114,  2115,  2116,  2117,     0,     0,     0,
     0,     0,     0,     0,     0,  1163,     0,     0,  1055,     0,
  2107,     0,     0,     0,     0,     0,     0,     0,  1163,  1163,
  1163,  1163,  1163,  1163,  1163,     0,     0,  2108,     0,  1064,
  1064,  1064,     0,     0,     0,     0,  1826,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2109,     0,     0,     0,     0,  1064,
  1064,  1064,  2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,
     0,     0,     0,     0,     0,     0,     0,  1993,     0,     0,
     0,     0,   843,     0,     0,     0,     0,     0,   843,     0,
     0,     0,     0,   843,     0,     0,     0,     0,   843,     0,
     0,     0,     0,   843,     0,     0,     0,     0,   843,     0,
     0,     0,     0,   843,     0,     0,     0,     0,   843,     0,
     0,     0,     0,   843,     0,     0,     0,     0,     0,  1499,
  1911,     0,     0,     0,     0,  2029,     0,     0,     0,     0,
     0,  1512,     0,     0,     0,     0,  1515,     0,     0,     0,
  1518,  1064,  1064,  1064,  1521,     0,     0,     0,  1524,     0,
     0,  1431,  1527,     0,     0,     0,  1530,  1432,     0,     0,
  1533,     0,  1433,     0,  1536,     0,     0,   795,   522,   796,
   797,   798,   799,   527,   800,   801,   802,     0,   803,     0,
   804,   805,   806,   807,   808,   809,   810,   811,   812,   813,
   814,     0,   815,   816,   817,   818,   819,   820,     0,   821,
   822,   823,   824,   825,     0,     0,     0,     0,     0,     0,
     0,  1434,     0,     0,     0,     0,     0,     0,  1435,     0,
  2099,     0,     0,     0,     0,     0,  1436,     0,     0,     0,
     0,  2101,     0,     0,     0,     0,     0,  1437,     0,     0,
  1502,   556,   557,     0,     0,     0,     0,  1163,     0,  1091,
     0,     0,     0,     0,     0,     0,     0,     0,   205,   563,
     0,     0,     0,     0,     0,   826,     0,     0,  2099,     0,
     0,     0,     0,     0,  2100,   568,     0,     0,     0,  2101,
  2102,  1639,     0,   207,     0,     0,     0,  2103,     0,   569,
     0,     0,     0,     0,     0,  2104,     0,     0,     0,     0,
  2099,     0,   212,   213,     0,   570,  2105,   571,     0,     0,
     0,  2101,     0,   575,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1439,     0,     0,     0,  2102,     0,
     0,     0,     0,     0,     0,  2103,   223,     0,     0,  2043,
  1163,  1440,     0,  2104,   827,   828,     0,     0,     0,     0,
     0,     0,     0,     0,  2105,     0,     0,     0,     0,   583,
  2102,     0,     0,     0,  1708,     0,   228,  2103,  1441,   829,
     0,     0,     0,     0,     0,  2104,  1442,  1443,  1444,  1445,
  1446,  1447,  1448,  1449,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2107,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2108,     0,     0,     0,  2228,     0,     0,     0,     0,     0,
  1911,     0,  1911,  1911,  1911,  1911,  1911,   585,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2109,     0,   277,
     0,  2107,   279,     0,     0,  2110,  2111,  2112,  2113,  2114,
  2115,  2116,  2117,     0,     0,     0,     0,     0,  2108,  2154,
  1823,     0,  1827,  1828,     0,  1830,  1831,     0,  1833,  1834,
     0,  1836,  1837,  2107,  1839,  1840,     0,  1842,  1843,     0,
  1845,  1846,     0,  1848,  1849,  2109,  1851,  1852,     0,     0,
  2108,     0,     0,  2110,  2111,  2112,  2113,  2114,  2115,  2116,
  2117,     0,     0,     0,  1163,     0,     0,     0,     0,     0,
  1826,     0,     0,     0,     0,     0,     0,  2109,     0,     0,
     0,     0,     0,     0,     0,     0,-32768,-32768,  2113,  2114,
  2115,  2116,  2117,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2222,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1911,     0,     0,     0,     0,     0,     0,     0,  1911,  2247,
     0,     0,  1911,     0,  1911,     0,     0,  1911,  1911,  1911,
  1911,  1911,  1911,  1911,  1911,  1911,     0,  1911,     0,     0,
     0,     0,  2154,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1911,     0,     0,     0,
     0,     0,     0,     0,     0,  2154,  2154,  2154,  2154,  2154,
     0,     0,     0,     0,  1499,     0,     0,  2397,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1997,     0,
     0,     0,     0,     0,  2000,     0,     0,     0,     0,  2003,
  1163,     0,     0,     0,  2006,     0,     0,     0,     0,  2009,
     0,     0,     0,     0,  2012,     0,     0,     0,     0,  2015,
     0,     0,     0,     0,  2018,     0,     0,     0,     0,  2021,
     0,     0,     0,     0,     0,     0,     0,  2025,     0,     0,
     0,  2027,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  2247,     0,     0,     0,
     0,     0,  2247,     0,  1911,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2154,     0,     0,     0,     0,     0,     0,
     0,     0,  2154,  2154,  2154,  2154,  2154,  2154,  2154,  2154,
  2154,  2154,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2247,     0,     0,
     0,     0,     0,     0,  2247,     0,  1911,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2247,     0,  2247,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2154,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1823,     0,     0,  2184,  2185,     0,
  2187,  2188,     0,  2190,  2191,     0,  2193,  2194,     0,  2196,
  2197,     0,  2199,  2200,     0,  2202,  2203,     0,  2205,  2206,
     0,  2208,  2209,     0,     0,     0,     0,     0,  2213,     0,
     0,     0,  2216,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   554,   555,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,   559,
   560,   561,   562,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,   565,   566,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,   572,   573,   574,   575,
   215,     0,   216,   217,     0,     0,     0,     0,   576,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   577,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,   580,   581,     0,
     0,     0,   582,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,   586,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,   588,
  1225,     0,   590,   591,     0,   592,     0,     0,     0,     0,
     0,   593,  1226,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   554,   555,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,   559,
   560,   561,   562,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,   565,   566,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,   572,   573,   574,   575,
   215,     0,   216,   217,     0,     0,     0,     0,   576,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   577,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,   580,   581,     0,
     0,     0,   582,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,   586,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,   588,
  1780,     0,   590,   591,     0,   592,     0,     0,     0,     0,
     0,   593,  1781,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   554,   555,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,   559,
   560,   561,   562,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,   565,   566,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,   572,   573,   574,   575,
   215,     0,   216,   217,     0,     0,     0,     0,   576,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   577,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,   580,   581,     0,
     0,     0,   582,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,   586,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,   588,
     0,     0,   590,   591,     0,   592,     0,     0,     0,     0,
     0,   593,  1696,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   554,   555,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,   559,
   560,   561,   562,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,   565,   566,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,   572,   573,   574,   575,
   215,     0,   216,   217,     0,     0,     0,     0,   576,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   577,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,   580,   581,     0,
     0,     0,   582,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,   586,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,   588,
     0,     0,   590,   591,     0,   592,     0,     0,     0,     0,
     0,   593,  1818,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  2140,   556,   557,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  2141,
  2142,  2143,  2144,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,     0,     0,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,     0,     0,     0,   575,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,     0,   581,     0,
     0,     0,  2146,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,     0,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,  2147,   279,     0,
     0,    25,   587,    26,     0,     0,     0,     0,     0,  2148,
     0,     0,     0,  2149,     0,  2150,     0,     0,     0,     0,
     0,  2151,  2382,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1901,   556,   557,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,     0,     0,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,  1902,     0,  1903,   575,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,     0,   581,     0,
     0,     0,     0,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,     0,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,  1904,   279,     0,
     0,    25,   587,    26,     0,     0,     0,     0,     0,  1905,
     0,     0,     0,  1906,     0,  1907,     0,     0,     0,     0,
     0,  1908,  2267,   172,     0,   173,   174,   175,   176,     0,
   177,   178,   179,     0,   180,     0,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   191,     0,   192,   193,
   194,   195,   196,   197,     0,   198,   199,   200,   201,   202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   556,   557,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,   970,     0,     0,     0,     0,
     0,   971,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   972,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,     0,     0,     0,   973,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   224,   225,   226,   227,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,     0,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,     0,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,     0,     0,   279,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     0,   531,   974,   532,   533,   534,   535,   536,   537,   538,
   539,   540,   541,   542,     0,   543,   544,   545,   546,   547,
   548,     0,   549,   550,   551,   552,   553,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1060,
     0,     0,   554,   555,   556,   557,     0,     0,   558,     0,
     0,     0,     0,     0,     0,   387,   559,   560,   561,   562,
     0,   205,   563,     0,     0,     0,     0,     0,   564,     0,
     0,     0,     0,     0,   565,   566,   567,     0,   568,     0,
     0,  1061,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,   569,     0,     0,     0,     0,   209,   210,  1062,
     0,     0,     0,     0,   211,   212,   213,     0,   570,     0,
   571,   214,     0,   572,   573,   574,   575,   215,     0,   216,
   217,     0,     0,     0,     0,   576,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,   577,     0,     0,     0,     0,   578,   579,   226,
   227,     0,  1063,     0,   580,   581,     0,     0,     0,   582,
     0,     0,   583,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   584,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,   388,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
   585,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,   278,   586,   279,   280,     0,    25,   587,
    26,     0,     0,     0,     0,     0,   588,     0,     0,   590,
   591,     0,   592,     0,     0,     0,     0,     0,   593,   521,
   522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
   531,     0,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,   542,     0,   543,   544,   545,   546,   547,   548,
     0,   549,   550,   551,   552,   553,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1683,     0,
     0,   554,   555,   556,   557,     0,     0,   558,     0,     0,
     0,     0,     0,     0,   387,   559,   560,   561,   562,     0,
   205,   563,     0,     0,     0,     0,     0,   564,     0,     0,
     0,     0,     0,   565,   566,   567,     0,   568,     0,     0,
  1061,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   569,     0,     0,     0,     0,   209,   210,  1684,     0,
     0,     0,     0,   211,   212,   213,     0,   570,     0,   571,
   214,     0,   572,   573,   574,   575,   215,     0,   216,   217,
     0,     0,     0,     0,   576,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,   577,     0,     0,     0,     0,   578,   579,   226,   227,
     0,  1685,     0,   580,   581,     0,     0,     0,   582,     0,
     0,   583,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   584,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,   251,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
   388,   256,   257,     0,   258,     0,   259,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,   585,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,   278,   586,   279,   280,     0,    25,   587,    26,
     0,     0,     0,     0,     0,   588,     0,     0,   590,   591,
     0,   592,     0,     0,     0,     0,     0,   593,   521,   522,
   523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     0,   532,   533,   534,   535,   536,   537,   538,   539,   540,
   541,   542,     0,   543,   544,   545,   546,   547,   548,     0,
   549,   550,   551,   552,   553,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1713,     0,     0,
   554,   555,   556,   557,     0,     0,   558,     0,     0,     0,
     0,     0,     0,   387,   559,   560,   561,   562,     0,   205,
   563,     0,     0,     0,     0,     0,   564,     0,     0,     0,
     0,     0,   565,   566,   567,     0,   568,     0,     0,  1061,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
   569,     0,     0,     0,     0,   209,   210,  1714,     0,     0,
     0,     0,   211,   212,   213,     0,   570,     0,   571,   214,
     0,   572,   573,   574,   575,   215,     0,   216,   217,     0,
     0,     0,     0,   576,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
   577,     0,     0,     0,     0,   578,   579,   226,   227,     0,
  1715,     0,   580,   581,     0,     0,     0,   582,     0,     0,
   583,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   584,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,   388,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,   585,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,   278,   586,   279,   280,     0,    25,   587,    26,     0,
     0,     0,     0,     0,   588,     0,     0,   590,   591,     0,
   592,     0,     0,     0,     0,     0,   593,   521,   522,   523,
   524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
   542,     0,   543,   544,   545,   546,   547,   548,     0,   549,
   550,   551,   552,   553,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1805,     0,     0,   554,
   555,   556,   557,     0,     0,   558,     0,     0,     0,     0,
     0,     0,   387,   559,   560,   561,   562,     0,   205,   563,
     0,     0,     0,     0,     0,   564,     0,     0,     0,     0,
     0,   565,   566,   567,     0,   568,     0,     0,  1061,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   569,
     0,     0,     0,     0,   209,   210,  1806,     0,     0,     0,
     0,   211,   212,   213,     0,   570,     0,   571,   214,     0,
   572,   573,   574,   575,   215,     0,   216,   217,     0,     0,
     0,     0,   576,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,   577,
     0,     0,     0,     0,   578,   579,   226,   227,     0,  1807,
     0,   580,   581,     0,     0,     0,   582,     0,     0,   583,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   584,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,   388,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,   585,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
   278,   586,   279,   280,     0,    25,   587,    26,     0,     0,
     0,     0,     0,   588,     0,     0,   590,   591,     0,   592,
     0,     0,     0,     0,     0,   593,   521,   522,   523,   524,
   525,   526,   527,   528,   529,   530,     0,   531,     0,   532,
   533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     0,   543,   544,   545,   546,   547,   548,     0,   549,   550,
   551,   552,   553,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,  1181,     0,     0,
  1182,     0,     0,     0,     0,     0,     0,     0,   554,   555,
   556,   557,     0,     0,   558,     0,     0,     0,     0,     0,
     0,   387,   559,   560,   561,   562,     0,   205,   563,     0,
     0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
   565,   566,   567,     0,   568,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,   569,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,   570,     0,   571,   214,     0,   572,
   573,  1183,   575,   215,     0,   216,   217,     0,     0,     0,
     0,   576,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,   577,     0,
     0,     0,     0,   578,   579,   226,   227,     0,     0,     0,
   580,   581,     0,     0,     0,   582,     0,     0,   583,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   584,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,   388,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,   585,     0,   270,   271,
   272,   273,   274,     0,     0,   275,     0,   276,   277,   278,
   586,   279,   280,     0,    25,   587,    26,     0,     0,     0,
     0,     0,   588,     0,     0,   590,   591,     0,   592,     0,
     0,     0,     0,     0,  1184,   521,   522,   523,   524,   525,
   526,   527,   528,   529,   530,     0,   531,     0,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,   542,     0,
   543,   544,   545,   546,   547,   548,     0,   549,   550,   551,
   552,   553,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,  1186,     0,     0,  1187,
     0,     0,     0,     0,     0,     0,     0,   554,   555,   556,
   557,     0,     0,   558,     0,     0,     0,     0,     0,     0,
   387,   559,   560,   561,   562,     0,   205,   563,     0,     0,
     0,     0,     0,   564,     0,     0,     0,     0,     0,   565,
   566,   567,     0,   568,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   569,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   570,     0,   571,   214,     0,   572,   573,
   784,   575,   215,     0,   216,   217,     0,     0,     0,     0,
   576,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,   577,     0,     0,
     0,     0,   578,   579,   226,   227,     0,     0,     0,   580,
   581,     0,     0,     0,   582,     0,     0,   583,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   584,     0,   232,
   233,     0,   234,   235,     0,   236,     0,     0,   237,   238,
   239,   240,   241,     0,   242,   243,     0,     0,   244,   245,
   246,   247,   248,   249,   250,   251,   252,     0,     0,     0,
     0,   253,     0,   254,   255,     0,   388,   256,   257,     0,
   258,     0,   259,     0,   260,   261,   262,   263,   264,     0,
   265,   266,   267,   268,   269,   585,     0,   270,   271,   272,
   273,   274,     0,     0,   275,     0,   276,   277,   278,   586,
   279,   280,     0,    25,   587,    26,     0,     0,     0,     0,
     0,   588,     0,     0,   590,   591,     0,   592,     0,     0,
     0,     0,     0,  1188,   521,   522,   523,   524,   525,   526,
   527,   528,   529,   530,     0,   531,     0,   532,   533,   534,
   535,   536,   537,   538,   539,   540,   541,   542,     0,   543,
   544,   545,   546,   547,   548,     0,   549,   550,   551,   552,
   553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,  1190,     0,     0,  1191,     0,
     0,     0,     0,     0,     0,     0,   554,   555,   556,   557,
     0,     0,   558,     0,     0,     0,     0,     0,     0,   387,
   559,   560,   561,   562,     0,   205,   563,     0,     0,     0,
     0,     0,   564,     0,     0,     0,     0,     0,   565,   566,
   567,     0,   568,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,   569,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,   570,     0,   571,   214,     0,   572,   573,   784,
   575,   215,     0,   216,   217,     0,     0,     0,     0,   576,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,   577,     0,     0,     0,
     0,   578,   579,   226,   227,     0,     0,     0,   580,   581,
     0,     0,     0,   582,     0,     0,   583,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   584,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,   388,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,   585,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,   278,   586,   279,
   280,     0,    25,   587,    26,     0,     0,     0,     0,     0,
   588,     0,     0,   590,   591,     0,   592,     0,     0,     0,
     0,     0,  1192,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,  1194,     0,     0,  1195,     0,     0,
     0,     0,     0,     0,     0,   554,   555,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,   559,
   560,   561,   562,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,   565,   566,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,   572,   573,   784,   575,
   215,     0,   216,   217,     0,     0,     0,     0,   576,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   577,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,   580,   581,     0,
     0,     0,   582,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,   586,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,   588,
     0,     0,   590,   591,     0,   592,     0,     0,     0,     0,
     0,  1196,   521,   522,   523,   524,   525,   526,   527,   528,
   529,   530,     0,   531,     0,   532,   533,   534,   535,   536,
   537,   538,   539,   540,   541,   542,     0,   543,   544,   545,
   546,   547,   548,     0,   549,   550,   551,   552,   553,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1198,     0,     0,  1199,     0,     0,     0,
     0,     0,     0,     0,   554,   555,   556,   557,     0,     0,
   558,     0,     0,     0,     0,     0,     0,   387,   559,   560,
   561,   562,     0,   205,   563,     0,     0,     0,     0,     0,
   564,     0,     0,     0,     0,     0,   565,   566,   567,     0,
   568,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,   569,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
   570,     0,   571,   214,     0,   572,   573,   784,   575,   215,
     0,   216,   217,     0,     0,     0,     0,   576,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,   577,     0,     0,     0,     0,   578,
   579,   226,   227,     0,     0,     0,   580,   581,     0,     0,
     0,   582,     0,     0,   583,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   584,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,   388,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,   585,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,   278,   586,   279,   280,     0,
    25,   587,    26,     0,     0,     0,     0,     0,   588,     0,
     0,   590,   591,     0,   592,     0,     0,     0,     0,     0,
  1200,   521,   522,   523,   524,   525,   526,   527,   528,   529,
   530,     0,   531,     0,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,   542,     0,   543,   544,   545,   546,
   547,   548,     0,   549,   550,   551,   552,   553,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
   204,     0,  1202,     0,     0,  1203,     0,     0,     0,     0,
     0,     0,     0,   554,   555,   556,   557,     0,     0,   558,
     0,     0,     0,     0,     0,     0,   387,   559,   560,   561,
   562,     0,   205,   563,     0,     0,     0,     0,     0,   564,
     0,     0,     0,     0,     0,   565,   566,   567,     0,   568,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   569,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   570,
     0,   571,   214,     0,   572,   573,   784,   575,   215,     0,
   216,   217,     0,     0,     0,     0,   576,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,   577,     0,     0,     0,     0,   578,   579,
   226,   227,     0,     0,     0,   580,   581,     0,     0,     0,
   582,     0,     0,   583,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   584,     0,   232,   233,     0,   234,   235,
     0,   236,     0,     0,   237,   238,   239,   240,   241,     0,
   242,   243,     0,     0,   244,   245,   246,   247,   248,   249,
   250,   251,   252,     0,     0,     0,     0,   253,     0,   254,
   255,     0,   388,   256,   257,     0,   258,     0,   259,     0,
   260,   261,   262,   263,   264,     0,   265,   266,   267,   268,
   269,   585,     0,   270,   271,   272,   273,   274,     0,     0,
   275,     0,   276,   277,   278,   586,   279,   280,     0,    25,
   587,    26,     0,     0,     0,     0,     0,   588,     0,     0,
   590,   591,     0,   592,     0,     0,     0,     0,     0,  1204,
   521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     0,   531,     0,   532,   533,   534,   535,   536,   537,   538,
   539,   540,   541,   542,     0,   543,   544,   545,   546,   547,
   548,     0,   549,   550,   551,   552,   553,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,  1206,     0,     0,  1207,     0,     0,     0,     0,     0,
     0,     0,   554,   555,   556,   557,     0,     0,   558,     0,
     0,     0,     0,     0,     0,   387,   559,   560,   561,   562,
     0,   205,   563,     0,     0,     0,     0,     0,   564,     0,
     0,     0,     0,     0,   565,   566,   567,     0,   568,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,   569,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,   570,     0,
   571,   214,     0,   572,   573,   784,   575,   215,     0,   216,
   217,     0,     0,     0,     0,   576,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,   577,     0,     0,     0,     0,   578,   579,   226,
   227,     0,     0,     0,   580,   581,     0,     0,     0,   582,
     0,     0,   583,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   584,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,   388,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
   585,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,   278,   586,   279,   280,     0,    25,   587,
    26,     0,     0,     0,     0,     0,   588,     0,     0,   590,
   591,     0,   592,     0,     0,     0,     0,     0,  1208,   521,
   522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
   531,     0,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,   542,     0,   543,   544,   545,   546,   547,   548,
     0,   549,   550,   551,   552,   553,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
  1734,     0,     0,  1735,     0,     0,     0,     0,     0,     0,
     0,   554,  1067,   556,   557,     0,     0,   558,     0,     0,
     0,     0,     0,     0,   387,  1068,  1069,  1070,  1071,     0,
   205,   563,     0,     0,     0,     0,     0,   564,     0,     0,
     0,     0,     0,  1072,  1073,   567,     0,   568,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   569,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   570,     0,   571,
   214,     0,     0,   573,  1075,   575,   215,     0,   216,   217,
     0,     0,     0,     0,  1076,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,  1077,     0,     0,     0,     0,   578,   579,   226,   227,
     0,     0,     0,  1078,   581,     0,     0,     0,  1079,     0,
     0,   583,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   584,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,   251,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
   388,   256,   257,     0,   258,     0,   259,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,   585,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,   278,     0,   279,   280,     0,    25,   587,    26,
     0,     0,     0,     0,     0,  1081,     0,     0,  1082,  1083,
 -1274,  1084,     0,     0,     0, -1274,     0,  1736,   521,   522,
   523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     0,   532,   533,   534,   535,   536,   537,   538,   539,   540,
   541,   542,     0,   543,   544,   545,   546,   547,   548,     0,
   549,   550,   551,   552,   553,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,  1739,
     0,     0,  1740,     0,     0,     0,     0,     0,     0,     0,
   554,  1067,   556,   557,     0,     0,   558,     0,     0,     0,
     0,     0,     0,   387,  1068,  1069,  1070,  1071,     0,   205,
   563,     0,     0,     0,     0,     0,   564,     0,     0,     0,
     0,     0,  1072,  1073,   567,     0,   568,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
   569,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,   570,     0,   571,   214,
     0,  1074,   573,  1741,   575,   215,     0,   216,   217,     0,
     0,     0,     0,  1076,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
  1077,     0,     0,     0,     0,   578,   579,   226,   227,     0,
     0,     0,  1078,   581,     0,     0,     0,  1079,     0,     0,
   583,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   584,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,   388,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,   585,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,   278,  1080,   279,   280,     0,    25,   587,    26,     0,
     0,     0,     0,     0,  1081,     0,     0,  1082,  1083,     0,
  1084,     0,     0,     0,     0,     0,  1742,   521,   522,   523,
   524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
   542,     0,   543,   544,   545,   546,   547,   548,     0,   549,
   550,   551,   552,   553,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,  1745,     0,
     0,  1746,     0,     0,     0,     0,     0,     0,     0,   554,
  1067,   556,   557,     0,     0,   558,     0,     0,     0,     0,
     0,     0,   387,  1068,  1069,  1070,  1071,     0,   205,   563,
     0,     0,     0,     0,     0,   564,     0,     0,     0,     0,
     0,  1072,  1073,   567,     0,   568,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   569,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   570,     0,   571,   214,     0,
  1074,   573,  1075,   575,   215,     0,   216,   217,     0,     0,
     0,     0,  1076,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,  1077,
     0,     0,     0,     0,   578,   579,   226,   227,     0,     0,
     0,  1078,   581,     0,     0,     0,  1079,     0,     0,   583,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   584,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,   388,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,   585,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
   278,  1080,   279,   280,     0,    25,   587,    26,     0,     0,
     0,     0,     0,  1081,     0,     0,  1082,  1083,     0,  1084,
     0,     0,     0,     0,     0,  1747,   521,   522,   523,   524,
   525,   526,   527,   528,   529,   530,     0,   531,     0,   532,
   533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     0,   543,   544,   545,   546,   547,   548,     0,   549,   550,
   551,   552,   553,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,  1750,     0,     0,
  1751,     0,     0,     0,     0,     0,     0,     0,   554,  1067,
   556,   557,     0,     0,   558,     0,     0,     0,     0,     0,
     0,   387,  1068,  1069,  1070,  1071,     0,   205,   563,     0,
     0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
  1072,  1073,   567,     0,   568,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,   569,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,   570,     0,   571,   214,     0,  1074,
   573,  1075,   575,   215,     0,   216,   217,     0,     0,     0,
     0,  1076,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,  1077,     0,
     0,     0,     0,   578,   579,   226,   227,     0,     0,     0,
  1078,   581,     0,     0,     0,  1079,     0,     0,   583,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   584,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,   388,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,   585,     0,   270,   271,
   272,   273,   274,     0,     0,   275,     0,   276,   277,   278,
  1080,   279,   280,     0,    25,   587,    26,     0,     0,     0,
     0,     0,  1081,     0,     0,  1082,  1083,     0,  1084,     0,
     0,     0,     0,     0,  1752,   521,   522,   523,   524,   525,
   526,   527,   528,   529,   530,     0,   531,     0,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,   542,     0,
   543,   544,   545,   546,   547,   548,     0,   549,   550,   551,
   552,   553,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,  1755,     0,     0,  1756,
     0,     0,     0,     0,     0,     0,     0,   554,  1067,   556,
   557,     0,     0,   558,     0,     0,     0,     0,     0,     0,
   387,  1068,  1069,  1070,  1071,     0,   205,   563,     0,     0,
     0,     0,     0,   564,     0,     0,     0,     0,     0,  1072,
  1073,   567,     0,   568,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   569,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   570,     0,   571,   214,     0,  1074,   573,
  1075,   575,   215,     0,   216,   217,     0,     0,     0,     0,
  1076,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,  1077,     0,     0,
     0,     0,   578,   579,   226,   227,     0,     0,     0,  1078,
   581,     0,     0,     0,  1079,     0,     0,   583,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   584,     0,   232,
   233,     0,   234,   235,     0,   236,     0,     0,   237,   238,
   239,   240,   241,     0,   242,   243,     0,     0,   244,   245,
   246,   247,   248,   249,   250,   251,   252,     0,     0,     0,
     0,   253,     0,   254,   255,     0,   388,   256,   257,     0,
   258,     0,   259,     0,   260,   261,   262,   263,   264,     0,
   265,   266,   267,   268,   269,   585,     0,   270,   271,   272,
   273,   274,     0,     0,   275,     0,   276,   277,   278,  1080,
   279,   280,     0,    25,   587,    26,     0,     0,     0,     0,
     0,  1081,     0,     0,  1082,  1083,     0,  1084,     0,     0,
     0,     0,     0,  1757,   521,   522,   523,   524,   525,   526,
   527,   528,   529,   530,     0,   531,     0,   532,   533,   534,
   535,   536,   537,   538,   539,   540,   541,   542,     0,   543,
   544,   545,   546,   547,   548,     0,   549,   550,   551,   552,
   553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,  1760,     0,     0,  1761,     0,
     0,     0,     0,     0,     0,     0,   554,  1067,   556,   557,
     0,     0,   558,     0,     0,     0,     0,     0,     0,   387,
  1068,  1069,  1070,  1071,     0,   205,   563,     0,     0,     0,
     0,     0,   564,     0,     0,     0,     0,     0,  1072,  1073,
   567,     0,   568,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,   569,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,   570,     0,   571,   214,     0,  1074,   573,  1075,
   575,   215,     0,   216,   217,     0,     0,     0,     0,  1076,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,  1077,     0,     0,     0,
     0,   578,   579,   226,   227,     0,     0,     0,  1078,   581,
     0,     0,     0,  1079,     0,     0,   583,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   584,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,   388,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,   585,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,   278,  1080,   279,
   280,     0,    25,   587,    26,     0,     0,     0,     0,     0,
  1081,     0,     0,  1082,  1083,     0,  1084,     0,     0,     0,
     0,     0,  1762,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,  1765,     0,     0,  1766,     0,     0,
     0,     0,     0,     0,     0,   554,  1067,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,  1068,
  1069,  1070,  1071,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,  1072,  1073,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,  1074,   573,  1075,   575,
   215,     0,   216,   217,     0,     0,     0,     0,  1076,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,  1077,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,  1078,   581,     0,
     0,     0,  1079,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,  1080,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,  1081,
     0,     0,  1082,  1083,     0,  1084,     0,     0,     0,     0,
     0,  1767,   521,   522,   523,   524,   525,   526,   527,   528,
   529,   530,     0,   531,     0,   532,   533,   534,   535,   536,
   537,   538,   539,   540,   541,   542,     0,   543,   544,   545,
   546,   547,   548,     0,   549,   550,   551,   552,   553,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1770,     0,     0,  1771,     0,     0,     0,
     0,     0,     0,     0,   554,  1067,   556,   557,     0,     0,
   558,     0,     0,     0,     0,     0,     0,   387,  1068,  1069,
  1070,  1071,     0,   205,   563,     0,     0,     0,     0,     0,
   564,     0,     0,     0,     0,     0,  1072,  1073,   567,     0,
   568,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,   569,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
   570,     0,   571,   214,     0,  1074,   573,  1075,   575,   215,
     0,   216,   217,     0,     0,     0,     0,  1076,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,  1077,     0,     0,     0,     0,   578,
   579,   226,   227,     0,     0,     0,  1078,   581,     0,     0,
     0,  1079,     0,     0,   583,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   584,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,   388,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,   585,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,   278,  1080,   279,   280,     0,
    25,   587,    26,     0,     0,     0,     0,     0,  1081,     0,
     0,  1082,  1083,     0,  1084,     0,     0,     0,     0,     0,
  1772,   521,   522,   523,   524,   525,   526,   527,   528,   529,
   530,     0,   531,     0,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,   542,     0,   543,   544,   545,   546,
   547,   548,     0,   549,   550,   551,   552,   553,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
   204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   554,   555,   556,   557,     0,     0,   558,
     0,     0,     0,     0,     0,     0,   387,   559,   560,   561,
   562,     0,   205,   563,     0,     0,     0,     0,     0,   564,
     0,     0,     0,     0,     0,   565,   566,   567,     0,   568,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   569,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   570,
     0,   571,   214,     0,   572,   573,   574,   575,   215,     0,
   216,   217,     0,     0,     0,     0,   576,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,   577,     0,     0,     0,     0,   578,   579,
   226,   227,     0,     0,     0,   580,   581,     0,     0,     0,
   582,     0,     0,   583,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   584,     0,   232,   233,     0,   234,   235,
     0,   236,     0,     0,   237,   238,   239,   240,   241,     0,
   242,   243,     0,     0,   244,   245,   246,   247,   248,   249,
   250,   251,   252,     0,     0,     0,     0,   253,     0,   254,
   255,     0,   388,   256,   257,     0,   258,     0,   259,     0,
   260,   261,   262,   263,   264,     0,   265,   266,   267,   268,
   269,   585,     0,   270,   271,   272,   273,   274,     0,     0,
   275,     0,   276,   277,   278,   586,   279,   280,     0,    25,
   587,    26,     0,     0,     0,     0,     0,   588,   589,     0,
   590,   591,     0,   592,     0,     0,     0,     0,     0,   593,
   521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     0,   531,     0,   532,   533,   534,   535,   536,   537,   538,
   539,   540,   541,   542,     0,   543,   544,   545,   546,   547,
   548,     0,   549,   550,   551,   552,   553,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   554,   555,   556,   557,     0,     0,   558,     0,
     0,     0,     0,     0,     0,   387,   559,   560,   561,   562,
     0,   205,   563,     0,     0,     0,     0,     0,   564,     0,
     0,     0,     0,     0,   565,   566,   567,     0,   568,     0,
     0,  1061,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,   569,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,   570,     0,
   571,   214,     0,   572,   573,   574,   575,   215,     0,   216,
   217,     0,     0,     0,     0,   576,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,   577,     0,     0,     0,     0,   578,   579,   226,
   227,     0,     0,     0,   580,   581,     0,     0,     0,   582,
     0,     0,   583,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   584,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,   388,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
   585,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,   278,   586,   279,   280,     0,    25,   587,
    26,     0,     0,     0,     0,     0,   588,     0,     0,   590,
   591,     0,   592,     0,     0,     0,     0,     0,   593,   521,
   522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
   531,     0,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,   542,     0,   543,   544,   545,   546,   547,   548,
     0,   549,   550,   551,   552,   553,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   554,   555,   556,   557,     0,     0,   558,     0,     0,
     0,     0,     0,     0,   387,   559,   560,   561,   562,     0,
   205,   563,     0,     0,     0,     0,     0,   564,     0,     0,
     0,     0,     0,   565,   566,   567,     0,   568,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   569,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   570,     0,   571,
   214,     0,   572,   573,   574,   575,   215,     0,   216,   217,
     0,     0,     0,     0,   576,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,    77,
     0,   577,     0,     0,     0,     0,   578,   579,   226,   227,
     0,     0,     0,   580,   581,     0,     0,     0,   582,     0,
     0,   583,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   584,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,   251,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
   388,   256,   257,     0,   258,     0,   259,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,   585,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,   278,   586,   279,   280,     0,    25,   587,    26,
     0,     0,     0,     0,     0,   588,     0,     0,   590,   591,
     0,   592,     0,     0,     0,     0,     0,   593,   521,   522,
   523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     0,   532,   533,   534,   535,   536,   537,   538,   539,   540,
   541,   542,     0,   543,   544,   545,   546,   547,   548,     0,
   549,   550,   551,   552,   553,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   554,   555,   556,   557,     0,     0,   558,     0,     0,     0,
     0,     0,     0,   387,   559,   560,   561,   562,     0,   205,
   563,     0,     0,     0,     0,     0,   564,     0,     0,     0,
     0,     0,   565,   566,   567,     0,   568,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
   569,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,   570,     0,   571,   214,
     0,   572,   573,   784,   575,   215,     0,   216,   217,     0,
     0,     0,     0,   576,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,    77,     0,
   577,     0,     0,     0,     0,   578,   579,   226,   227,     0,
     0,     0,   580,   581,     0,     0,     0,   582,     0,     0,
   583,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   584,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,   388,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,   585,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,   278,   586,   279,   280,     0,    25,   587,    26,     0,
     0,     0,     0,     0,   588,     0,     0,   590,   591,     0,
   592,     0,     0,     0,     0,     0,   593,   521,   522,   523,
   524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
   542,     0,   543,   544,   545,   546,   547,   548,     0,   549,
   550,   551,   552,   553,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   554,
   555,   556,   557,     0,     0,   558,     0,     0,     0,     0,
     0,     0,   387,   559,   560,   561,   562,     0,   205,   563,
     0,     0,     0,     0,     0,   564,     0,     0,     0,     0,
     0,   565,   566,   567,     0,   568,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   569,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   570,     0,   571,   214,     0,
   572,   573,   784,   575,   215,     0,   216,   217,     0,     0,
     0,     0,   576,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,   577,
     0,     0,     0,     0,   578,   579,   226,   227,     0,     0,
     0,   580,   581,     0,     0,     0,   582,     0,     0,   583,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   584,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,   388,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,   585,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
   278,   586,   279,   280,     0,    25,   587,    26,     0,     0,
     0,     0,     0,   588,     0,     0,   590,   591,     0,   592,
     0,     0,     0,     0,     0,   593,   521,   522,   523,   524,
   525,   526,   527,   528,   529,   530,     0,   531,     0,   532,
   533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     0,   543,   544,   545,   546,   547,   548,     0,   549,   550,
   551,   552,   553,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   554,   555,
   556,   557,     0,     0,   558,     0,     0,     0,     0,     0,
     0,   387,   559,   560,   561,   562,     0,   205,   563,     0,
     0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
   565,   566,   567,     0,   568,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,   569,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,   570,     0,   571,   214,     0,   572,
   573,   574,   575,   215,     0,   216,   217,     0,     0,     0,
     0,   576,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,   577,     0,
     0,     0,     0,   578,   579,   226,   227,     0,     0,     0,
   580,   581,     0,     0,     0,   582,     0,     0,   583,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   584,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,   388,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,   585,     0,   270,   271,
   272,   273,   274,     0,     0,   275,     0,   276,   277,   278,
   586,   279,   280,     0,    25,   587,    26,     0,     0,     0,
     0,     0,   588,     0,     0,   590,   591,     0,   592,     0,
     0,     0,     0,     0,   593,   521,   522,   523,   524,   525,
   526,   527,   528,   529,   530,     0,   531,     0,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,   542,     0,
   543,   544,   545,   546,   547,   548,     0,   549,   550,   551,
   552,   553,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   554,  1067,   556,
   557,     0,     0,   558,     0,     0,     0,     0,     0,     0,
   387,  1068,  1069,  1070,  1071,     0,   205,   563,     0,     0,
     0,     0,     0,   564,     0,     0,     0,     0,     0,  1072,
  1073,   567,     0,   568,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   569,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   570,     0,   571,   214,     0,  1074,   573,
  1075,   575,   215,     0,   216,   217,     0,     0,     0,     0,
  1076,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,  1077,     0,     0,
     0,     0,   578,   579,   226,   227,     0,     0,     0,  1078,
   581,     0,     0,     0,  1079,     0,     0,   583,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   584,     0,   232,
   233,     0,   234,   235,     0,   236,     0,     0,   237,   238,
   239,   240,   241,     0,   242,   243,     0,     0,   244,   245,
   246,   247,   248,   249,   250,   251,   252,     0,     0,     0,
     0,   253,     0,   254,   255,     0,   388,   256,   257,     0,
   258,     0,   259,     0,   260,   261,   262,   263,   264,     0,
   265,   266,   267,   268,   269,   585,     0,   270,   271,   272,
   273,   274,     0,     0,   275,     0,   276,   277,   278,  1080,
   279,   280,     0,    25,   587,    26,     0,     0,     0,     0,
     0,  1081,     0,     0,  1082,  1083,     0,  1084,     0,     0,
     0,     0,     0,  1085,   521,   522,   523,   524,   525,   526,
   527,   528,   529,   530,     0,   531,     0,   532,   533,   534,
   535,   536,   537,   538,   539,   540,   541,   542,     0,   543,
   544,   545,   546,   547,   548,     0,   549,   550,   551,   552,
   553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,  1177,     0,     0,  1178,     0,
     0,     0,     0,     0,     0,     0,   554,   555,   556,   557,
     0,     0,   558,     0,     0,     0,     0,     0,     0,   387,
   559,   560,   561,   562,     0,   205,   563,     0,     0,     0,
     0,     0,   564,     0,     0,     0,     0,     0,   565,   566,
   567,     0,   568,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,   569,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,   570,     0,   571,   214,     0,     0,   573,   784,
   575,   215,     0,   216,   217,     0,     0,     0,     0,   576,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,   577,     0,     0,     0,
     0,   578,   579,   226,   227,     0,     0,     0,   580,   581,
     0,     0,     0,   582,     0,     0,   583,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   584,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,   388,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,   585,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,   278,     0,   279,
   280,     0,    25,   587,    26,     0,     0,     0,     0,     0,
   588,     0,     0,   590,   591,     0,   592,     0,     0,     0,
     0,     0,  1179,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,  1775,     0,     0,  1776,     0,     0,
     0,     0,     0,     0,     0,   554,  1067,   556,   557,     0,
     0,   558,     0,     0,     0,     0,     0,     0,   387,  1068,
  1069,  1070,  1071,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,  1072,  1073,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,     0,   573,  1075,   575,
   215,     0,   216,   217,     0,     0,     0,     0,  1076,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,  1077,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,  1078,   581,     0,
     0,     0,  1079,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,     0,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
     0,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,     0,   279,   280,
     0,    25,   587,    26,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1083, -1254,  1084,     0,     0,     0, -1254,
     0,  1777,   521,   522,   523,   524,   525,   526,   527,   528,
   529,   530,     0,   531,     0,   532,   533,   534,   535,   536,
   537,   538,   539,   540,   541,   542,     0,   543,   544,   545,
   546,   547,   548,     0,   549,   550,   551,   552,   553,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1210,     0,     0,  1211,     0,     0,     0,
     0,     0,     0,     0,   554,   555,   556,   557,     0,     0,
   558,     0,     0,     0,     0,     0,     0,   387,   559,   560,
   561,   562,     0,   205,   563,     0,     0,     0,     0,     0,
   564,     0,     0,     0,     0,     0,   565,   566,   567,     0,
   568,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,   569,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
   570,     0,   571,   214,     0,     0,   573,   784,   575,   215,
     0,   216,   217,     0,     0,     0,     0,   576,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,   577,     0,     0,     0,     0,   578,
   579,   226,   227,     0,     0,     0,   580,   581,     0,     0,
     0,   582,     0,     0,   583,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   584,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,     0,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,   388,   256,   257,     0,   258,     0,     0,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,   585,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,   278,     0,   279,   280,     0,
    25,   587,    26,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   591,     0,   592,     0,     0,     0,     0,     0,
  1212,   521,   522,   523,   524,   525,   526,   527,   528,   529,
   530,     0,   531,     0,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,   542,     0,   543,   544,   545,   546,
   547,   548,     0,   549,   550,   551,   552,   553,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
   204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1145,   556,   557,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   387,  1146,  1147,  1148,
  1149,     0,   205,   563,     0,     0,     0,     0,     0,   564,
     0,     0,     0,     0,     0,     0,     0,   567,     0,   568,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   569,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   570,
     0,   571,   214,     0,     0,     0,     0,   575,   215,     0,
   216,   217,     0,     0,     0,     0,  1150,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,  1151,     0,     0,     0,     0,   578,   579,
   226,   227,     0,     0,     0,  1152,   581,     0,     0,     0,
  1153,     0,     0,   583,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   584,     0,   232,   233,     0,   234,   235,
     0,   236,     0,     0,   237,   238,   239,   240,   241,     0,
   242,   243,     0,     0,   244,   245,   246,   247,   248,   249,
   250,   251,   252,     0,     0,     0,     0,   253,     0,   254,
   255,     0,   388,   256,   257,     0,   258,     0,   259,     0,
   260,   261,   262,   263,   264,     0,   265,   266,   267,   268,
   269,   585,     0,   270,   271,   272,   273,   274,     0,     0,
   275,     0,   276,   277,   278,  1154,   279,   280,     0,    25,
   587,    26,     0,     0,     0,     0,     0,  1155,     0,     0,
  1156,  1157,     0,  1158,     0,     0,     0,     0,     0,  1159,
   521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     0,   531,     0,   532,   533,   534,   535,   536,   537,   538,
   539,   540,   541,   542,     0,   543,   544,   545,   546,   547,
   548,     0,   549,   550,   551,   552,   553,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1145,   556,   557,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   387,  1146,  1147,  1148,  1149,
     0,   205,   563,     0,     0,     0,     0,     0,   564,     0,
     0,     0,     0,     0,     0,     0,   567,     0,   568,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,   569,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,   570,     0,
   571,   214,     0,     0,     0,     0,   575,   215,     0,   216,
   217,     0,     0,     0,     0,  1150,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,  1151,     0,     0,     0,     0,   578,   579,   226,
   227,     0,     0,     0,  1152,   581,     0,     0,     0,  1153,
     0,     0,   583,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   584,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,   388,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
   585,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,   278,     0,   279,   280,     0,    25,   587,
    26,     0,     0,     0,     0,     0,  1155,     0,     0,  1156,
  1157,     0,  1158,     0,     0,     0,     0,     0,  1159,   521,
   522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
   531,     0,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,   542,     0,   543,   544,   545,   546,   547,   548,
     0,   549,   550,   551,   552,   553,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1145,   556,   557,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   387,  1146,  1147,  1148,  1149,     0,
   205,   563,     0,     0,     0,     0,     0,   564,     0,     0,
     0,     0,     0,     0,     0,   567,     0,   568,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   569,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   570,     0,   571,
   214,     0,     0,     0,     0,   575,   215,     0,   216,   217,
     0,     0,     0,     0,  1150,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,  1151,     0,     0,     0,     0,   578,   579,   226,   227,
     0,     0,     0,  1152,   581,     0,     0,     0,  1153,     0,
     0,   583,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   584,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,     0,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
   388,   256,   257,     0,   258,     0,     0,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,   585,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,   278,     0,   279,   280,     0,    25,   587,    26,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1157,
     0,  1158,     0,     0,     0,     0,     0,  1159,   521,   522,
   523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     0,   532,   533,   534,   535,   536,   537,   538,   539,   540,
   541,   542,     0,   543,   544,   545,   546,   547,   548,     0,
   549,   550,   551,   552,   553,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  2140,   556,   557,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2141,  2142,  2143,  2144,     0,   205,
   563,     0,     0,     0,     0,     0,   564,     0,     0,     0,
     0,     0,     0,     0,   567,     0,   568,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
   569,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,   570,     0,   571,   214,
     0,     0,     0,  2145,   575,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   578,   579,   226,   227,     0,
     0,     0,     0,   581,     0,     0,     0,  2146,     0,     0,
   583,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   584,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,     0,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,   585,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,   278,  2147,   279,     0,     0,    25,   587,    26,     0,
     0,     0,     0,     0,  2148,     0,     0,     0,  2149,     0,
  2150,     0,     0,     0,     0,     0,  2151,   521,   522,   523,
   524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
   542,     0,   543,   544,   545,   546,   547,   548,     0,   549,
   550,   551,   552,   553,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2140,   556,   557,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2141,  2142,  2143,  2144,     0,   205,   563,
     0,     0,     0,     0,     0,   564,     0,     0,     0,     0,
     0,     0,     0,   567,     0,   568,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   569,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   570,     0,   571,   214,     0,
     0,     0,     0,   575,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   578,   579,   226,   227,     0,     0,
     0,     0,   581,     0,     0,     0,  2146,     0,     0,   583,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   584,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,   585,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
   278,  2147,   279,     0,     0,    25,   587,    26,     0,     0,
     0,     0,     0,  2148,     0,     0,     0,  2149,     0,  2150,
     0,     0,     0,     0,     0,  2151,   521,   522,   523,   524,
   525,   526,   527,   528,   529,   530,     0,   531,     0,   532,
   533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     0,   543,   544,   545,   546,   547,   548,     0,   549,   550,
   551,   552,   553,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1043,
   556,   557,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   387,     0,     0,     0,     0,     0,   205,   563,     0,
     0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
     0,     0,   567,     0,   568,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,   569,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,   570,     0,   571,   214,     0,     0,
     0,     0,   575,   215,     0,   216,   217,     0,     0,     0,
     0,  1044,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,  1045,     0,
     0,     0,     0,   578,   579,   226,   227,     0,     0,     0,
  1046,   581,     0,     0,     0,     0,     0,     0,   583,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   584,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,   388,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,   585,     0,   270,   271,
   272,   273,   274,     0,     0,   275,     0,   276,   277,   278,
  1047,   279,     0,     0,    25,   587,    26,     0,     0,     0,
     0,     0,  1048,     0,     0,     0,  1049,     0,     0,     0,
     0,     0,     0,     0,  1050,   521,   522,   523,   524,   525,
   526,   527,   528,   529,   530,     0,   531,     0,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,   542,     0,
   543,   544,   545,   546,   547,   548,     0,   549,   550,   551,
   552,   553,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2140,   556,
   557,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  2141,  2142,  2143,  2144,     0,   205,   563,     0,     0,
     0,     0,     0,   564,     0,     0,     0,     0,     0,     0,
     0,   567,     0,   568,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   569,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   570,     0,   571,   214,     0,     0,     0,
     0,   575,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   578,   579,   226,   227,     0,     0,     0,     0,
   581,     0,     0,     0,  2146,     0,     0,   583,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   584,     0,   232,
   233,     0,   234,   235,     0,   236,     0,     0,   237,   238,
   239,   240,   241,     0,   242,   243,     0,     0,   244,   245,
   246,   247,   248,   249,   250,   251,   252,     0,     0,     0,
     0,   253,     0,   254,   255,     0,     0,   256,   257,     0,
   258,     0,   259,     0,   260,   261,   262,   263,   264,     0,
   265,   266,   267,   268,   269,   585,     0,   270,   271,   272,
   273,   274,     0,     0,   275,     0,   276,   277,   278,     0,
   279,     0,     0,    25,   587,    26,     0,     0,     0,     0,
     0,  2148,     0,     0,     0,  2149,     0,  2150,     0,     0,
     0,     0,     0,  2151,   521,   522,   523,   524,   525,   526,
   527,   528,   529,   530,     0,   531,     0,   532,   533,   534,
   535,   536,   537,   538,   539,   540,   541,   542,     0,   543,
   544,   545,   546,   547,   548,     0,   549,   550,   551,   552,
   553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1043,   556,   557,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     0,     0,     0,     0,     0,   205,   563,     0,     0,     0,
     0,     0,   564,     0,     0,     0,     0,     0,     0,     0,
   567,     0,   568,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,   569,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,   570,     0,   571,   214,     0,     0,     0,     0,
   575,   215,     0,   216,   217,     0,     0,     0,     0,  1044,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,  1045,     0,     0,     0,
     0,   578,   579,   226,   227,     0,     0,     0,  1046,   581,
     0,     0,     0,     0,     0,     0,   583,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   584,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,   388,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,   585,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,   278,     0,   279,
     0,     0,    25,   587,    26,     0,     0,     0,     0,     0,
  1048,     0,     0,     0,  1049,     0,     0,     0,     0,     0,
     0,     0,  1050,   521,   522,   523,   524,   525,   526,   527,
   528,   529,   530,     0,   531,     0,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,   542,     0,   543,   544,
   545,   546,   547,   548,     0,   549,   550,   551,   552,   553,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1901,   556,   557,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,   563,     0,     0,     0,     0,
     0,   564,     0,     0,     0,     0,     0,     0,     0,   567,
     0,   568,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   569,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   570,     0,   571,   214,     0,  1902,     0,  1903,   575,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   578,   579,   226,   227,     0,     0,     0,     0,   581,     0,
     0,     0,     0,     0,     0,   583,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   584,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,     0,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,   585,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,   278,  1904,   279,     0,
     0,    25,   587,    26,     0,     0,     0,     0,     0,  1905,
     0,     0,     0,  1906,     0,  1907,     0,     0,     0,     0,
     0,  1908,   521,   522,   523,   524,   525,   526,   527,   528,
   529,   530,     0,   531,     0,   532,   533,   534,   535,   536,
   537,   538,   539,   540,   541,   542,     0,   543,   544,   545,
   546,   547,   548,     0,   549,   550,   551,   552,   553,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1901,   556,   557,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,   563,     0,     0,     0,     0,     0,
   564,     0,     0,     0,     0,     0,     0,     0,   567,     0,
   568,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,   569,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
   570,     0,   571,   214,     0,     0,     0,  1903,   575,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   578,
   579,   226,   227,     0,     0,     0,     0,   581,     0,     0,
     0,     0,     0,     0,   583,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   584,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,     0,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,   585,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,   278,     0,   279,     0,     0,
    25,   587,    26,     0,     0,     0,     0,     0,  1905,     0,
     0,     0,  1906,     0,  1907,     0,     0,     0,     0,   172,
  1908,   173,   174,   175,   176,     0,   177,   178,   179,     0,
   180,     0,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,     0,   192,   193,   194,   195,   196,   197,
     0,   198,   199,   200,   201,   202,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
   205,     0,     0,     0,     0,     0,     0,   206,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,     0,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,     0,     0,     0,
   214,     0,     0,     0,     0,     0,   215,     0,   216,   217,
     0,     0,     0,     0,     0,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,     0,     0,     0,     0,     0,   224,   225,   226,   227,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,   251,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
   388,   256,   257,     0,   258,     0,   259,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,     0,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,     0,   172,   279,   173,   174,   175,   176,     0,
   177,   178,   179,     0,   180,     0,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   191,  1540,   192,   193,
   194,   195,   196,   197,     0,   198,   199,   200,   201,   202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
     0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,    77,     0,     0,     0,     0,     0,     0,
   224,   225,   226,   227,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,     0,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,     0,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,     0,   172,   279,   173,
   174,   175,   176,     0,   177,   178,   179,     0,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,    95,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
     0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,     0,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,     0,     0,     0,   214,     0,
     0,     0,     0,     0,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   224,   225,   226,   227,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,  1641,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
   278,   499,   279,     0,     0,    25,     0,    26,     0,   472,
   473,   474,   475,  1642,   477,   478,   479,   172,     0,   173,
   174,   175,   176,     0,   177,   178,   179,     0,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,     0,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
     0,   992,     0,     0,     0,   206,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,     0,
     0,     0,     0,   469,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,     0,     0,     0,   214,     0,
     0,     0,     0,     0,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,   470,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   224,   225,   226,   227,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,     0,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
     0,   471,   279,     0,     0,     0,     0,     0,     0,   472,
   473,   474,   475,   476,   477,   478,   479,   172,     0,   173,
   174,   175,   176,     0,   177,   178,   179,     0,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,     0,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
     0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,     0,
     0,     0,     0,   469,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,     0,     0,     0,   214,     0,
     0,     0,     0,     0,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,   470,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   224,   225,   226,   227,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,     0,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
     0,   471,   279,     0,     0,     0,     0,     0,     0,   472,
   473,   474,   475,   476,   477,   478,   479,   172,     0,   173,
   174,   175,   176,     0,   177,   178,   179,     0,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,     0,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   387,     0,     0,     0,     0,     0,   205,     0,
     0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,     0,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,     0,     0,     0,   214,     0,
     0,     0,     0,     0,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   224,   225,   226,   227,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     0,   232,   233,     0,   234,   235,     0,   236,     0,     0,
   237,   238,   239,   240,   241,     0,   242,   243,     0,     0,
   244,   245,   246,   247,   248,   249,   250,   251,   252,     0,
     0,     0,     0,   253,     0,   254,   255,     0,   388,   256,
   257,     0,   258,     0,   259,     0,   260,   261,   262,   263,
   264,     0,   265,   266,   267,   268,   269,     0,     0,   270,
   271,   272,   273,   274,     0,     0,   275,     0,   276,   277,
     0,     0,   279,     0,     0,     0,   587,     0,   172,     0,
   173,   174,   175,   176,   891,   177,   178,   179,     0,   180,
     0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,     0,   192,   193,   194,   195,   196,   197,     0,
   198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   387,     0,     0,     0,     0,     0,   205,
     0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   224,   225,   226,   227,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,   388,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,     0,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,     0,     0,   279,     0,   172,     0,   173,   174,   175,
   176,     0,   177,   178,   179,   402,   180,     0,   181,   182,
   183,   184,   185,   186,   187,   188,   189,   190,   191,     0,
   192,   193,   194,   195,   196,   197,     0,   198,   199,   200,
   201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
     0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,     0,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,     0,     0,     0,   214,     0,     0,     0,
     0,     0,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   224,   225,   226,   227,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,     0,   232,
   233,     0,   234,   235,     0,   236,     0,     0,   237,   238,
   239,   240,   241,     0,   242,   243,     0,     0,   244,   245,
   246,   247,   248,   249,   250,   251,   252,     0,     0,     0,
     0,   253,     0,   254,   255,     0,     0,   256,   257,     0,
   258,     0,   259,     0,   260,   261,   262,   263,   264,     0,
   265,   266,   267,   268,   269,     0,     0,   270,   271,   272,
   273,   274,     0,     0,   275,     0,   276,   277,     0,     0,
   279,     0,   172,     0,   173,   174,   175,   176,     0,   177,
   178,   179,   737,   180,     0,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     0,   192,   193,   194,
   195,   196,   197,     0,   198,   199,   200,   201,   202,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
   206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,     0,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   224,
   225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   231,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,     0,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,     0,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,     0,     0,   279,     0,   172,
     0,   173,   174,   175,   176,     0,   177,   178,   179,  1221,
   180,     0,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,     0,   192,   193,   194,   195,   196,   197,
     0,   198,   199,   200,   201,   202,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   205,     0,     0,     0,     0,     0,     0,   206,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,     0,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,     0,     0,     0,
   214,     0,     0,     0,     0,     0,   215,     0,   216,   217,
     0,     0,     0,     0,     0,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,     0,     0,     0,     0,     0,   224,   225,   226,   227,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,   251,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
     0,   256,   257,     0,   258,     0,   259,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,     0,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,     0,     0,   279,     0,   172,     0,   173,   174,
   175,   176,     0,   177,   178,   179,  1554,   180,     0,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     0,   192,   193,   194,   195,   196,   197,     0,   198,   199,
   200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
     0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
     0,     0,     0,   215,     0,   216,   217,     0,     0,     0,
     0,     0,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,     0,
     0,     0,     0,   224,   225,   226,   227,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,     0,     0,   270,   271,
   272,   273,   274,     0,     0,   275,     0,   276,   277,     0,
     0,   279,     0,   172,     0,   173,   174,   175,   176,     0,
   177,   178,   179,  1875,   180,     0,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   191,     0,   192,   193,
   194,   195,   196,   197,     0,   198,   199,   200,   201,   202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   387,     0,
     0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
     0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   224,   225,   226,   227,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,     0,   232,   233,     0,
   234,   235,     0,   236,     0,     0,   237,   238,   239,   240,
   241,     0,   242,   243,     0,     0,   244,   245,   246,   247,
   248,   249,   250,   251,   252,     0,     0,     0,     0,   253,
     0,   254,   255,     0,   388,   256,   257,     0,   258,     0,
   259,     0,   260,   261,   262,   263,   264,     0,   265,   266,
   267,   268,   269,     0,     0,   270,   271,   272,   273,   274,
     0,     0,   275,     0,   276,   277,     0,     0,   279,     0,
     0,   172,   587,   173,   174,   175,   176,     0,   177,   178,
   179,     0,   180,     0,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,     0,   192,   193,   194,   195,
   196,   197,     0,   198,   199,   200,   201,   202,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
   204,     0,   298,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   299,     0,     0,     0,
     0,     0,   205,     0,     0,   300,     0,     0,     0,   206,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,     0,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,     0,
     0,     0,   214,     0,     0,     0,     0,     0,   215,     0,
   216,   217,     0,     0,     0,     0,     0,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,     0,     0,     0,     0,     0,   224,   225,
   226,   227,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,     0,   232,   233,     0,   234,   235,
     0,   236,     0,     0,   237,   238,   239,   240,   241,     0,
   242,   243,     0,     0,   244,   245,   246,   247,   248,   249,
   250,   251,   252,     0,     0,     0,     0,   253,     0,   254,
   255,     0,     0,   256,   257,     0,   258,     0,   259,     0,
   260,   261,   262,   263,   264,     0,   265,   266,   267,   268,
   269,     0,     0,   270,   271,   272,   273,   274,     0,     0,
   275,     0,   276,   277,   278,     0,   279,   280,   172,     0,
   173,   174,   175,   176,     0,   177,   178,   179,     0,   180,
     0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,     0,   192,   193,   194,   195,   196,   197,     0,
   198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     0,     0,   436,     0,     0,     0,   206,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   224,   225,   226,   227,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,     0,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,     0,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,   278,     0,   279,   280,   172,     0,   173,   174,   175,
   176,     0,   177,   178,   179,     0,   180,     0,   181,   182,
   183,   184,   185,   186,   187,   188,   189,   190,   191,     0,
   192,   193,   194,   195,   196,   197,     0,   198,   199,   200,
   201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   205,     0,     0,   300,
     0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,     0,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,     0,     0,     0,   214,     0,     0,     0,
     0,     0,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   224,   225,   226,   227,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,     0,   232,
   233,     0,   234,   235,     0,   236,     0,     0,   237,   238,
   239,   240,   241,     0,   242,   243,     0,     0,   244,   245,
   246,   247,   248,   249,   250,   251,   252,     0,     0,     0,
     0,   253,     0,   254,   255,     0,     0,   256,   257,     0,
   258,     0,   259,     0,   260,   261,   262,   263,   264,     0,
   265,   266,   267,   268,   269,     0,     0,   270,   271,   272,
   273,   274,     0,     0,   275,     0,   276,   277,   278,     0,
   279,   280,   172,     0,   173,   174,   175,   176,     0,   177,
   178,   179,     0,   180,     0,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     0,   192,   193,   194,
   195,   196,   197,     0,   198,   199,   200,   201,   202,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
   206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,     0,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   224,
   225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   231,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,     0,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,     0,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,   278,     0,   279,   280,   172,
     0,   173,   174,   175,   176,     0,   177,   178,   179,     0,
   180,     0,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,     0,   192,   193,   194,   195,   196,   197,
     0,   198,   199,   200,   201,   202,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   205,     0,     0,     0,     0,     0,     0,   206,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,     0,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,     0,     0,     0,
   214,     0,     0,     0,     0,     0,   215,     0,   216,   217,
     0,     0,     0,     0,     0,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,     0,     0,     0,     0,     0,   224,   225,   226,   227,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,     0,   232,   233,     0,   234,   235,     0,   236,
     0,     0,   237,   238,   239,   240,   241,     0,   242,   243,
     0,     0,   244,   245,   246,   247,   248,   249,   250,   251,
   252,     0,     0,     0,     0,   253,     0,   254,   255,     0,
     0,   256,   257,     0,   258,     0,   259,     0,   260,   261,
   262,   263,   264,     0,   265,   266,   267,   268,   269,     0,
     0,   270,   271,   272,   273,   274,     0,     0,   275,     0,
   276,   277,     0,     0,   279,   280,   172,     0,   173,   174,
   175,   176,     0,   177,   178,   179,     0,   180,     0,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     0,   192,   193,   194,   195,   196,   197,     0,   198,   199,
   200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1104,     0,
     0,     0,     0,     0,  1105,     0,     0,     0,  1106,     0,
     0,  1107,     0,     0,     0,     0,     0,   205,     0,     0,
     0,     0,     0,     0,   206,     0,  1108,  1109,     0,     0,
     0,     0,  1110,     0,     0,     0,  1111,     0,     0,     0,
  1112,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
  1113,     0,     0,   215,     0,   216,   217,     0,  1114,     0,
     0,  1115,  1116,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,  1117,
     0,     0,  1118,   224,   225,   226,   227,     0,     0,  1119,
     0,  1120,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1121,     0,     0,     0,   228,   229,   230,   231,  1122,
   232,   233,  1123,   234,   235,  1124,   236,  1125,  1126,   237,
   238,   239,   240,   241,  1127,   242,   243,  1128,  1129,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,  1130,
     0,  1131,   253,  1132,   254,   255,  1133,  1134,   256,   257,
  1135,   258,     0,   259,     0,   260,   261,   262,   263,   264,
  1136,   265,   266,   267,   268,   269,  1137,  1138,   270,   271,
   272,   273,   274,     0,  1139,   275,  1140,   276,   277,     0,
   172,   279,   173,   174,   175,   176,     0,   177,   178,   179,
     0,   180,     0,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,   191,     0,   192,   193,   194,   195,   196,
   197,     0,   198,   199,   200,   201,   202,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   556,   557,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,   970,     0,     0,     0,     0,     0,   971,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   972,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,     0,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,   570,     0,
   571,   214,     0,     0,     0,     0,   973,   215,     0,   216,
   217,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,     0,     0,     0,     0,     0,   224,   225,   226,
   227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   583,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,     0,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
     0,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,     0,   172,   279,   173,   174,   175,   176,
     0,   177,   178,   179,     0,   180,     0,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,     0,   192,
   193,   194,   195,   196,   197,     0,   198,   199,   200,   201,
   202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1285,     0,     0,     0,     0,     0,  1320,     0,     0,     0,
     0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1287,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     0,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,  1288,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,  1289,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,     0,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,     0,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,     0,     0,   279,
   172,   381,   173,   174,   175,   176,   382,   177,   178,   179,
     0,   180,     0,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,   191,     0,   192,   193,   194,   195,   196,
   197,     0,   198,   199,   200,   201,   202,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,     0,     0,     0,     0,     0,     0,   206,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,     0,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,   383,     0,     0,
     0,   214,     0,     0,     0,     0,     0,   215,     0,   216,
   217,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,     0,     0,     0,     0,     0,   384,   225,   226,
   227,     0,     0,   385,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,     0,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
     0,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,     0,   172,   279,   173,   174,   175,   176,
     0,   177,   178,   179,     0,   180,     0,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,     0,   192,
   193,   194,   195,   196,   197,     0,   198,   199,   200,   201,
   202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     0,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,   388,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,     0,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,     0,   172,   279,
   173,   174,   175,   176,     0,   177,   178,   179,     0,   180,
     0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,     0,   192,   193,   194,   195,   196,   197,     0,
   198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1342,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,  1343,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   224,   225,   226,   227,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,     0,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,     0,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,     0,   172,   279,   173,   174,   175,   176,     0,   177,
   178,   179,     0,   180,     0,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     0,   192,   193,   194,
   195,   196,   197,     0,   198,   199,   200,   201,   202,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
   206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,     0,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   410,
   225,   226,   227,     0,     0,   411,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   231,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,     0,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,     0,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,     0,   172,   279,   173,   174,
   175,   176,     0,   177,   178,   179,     0,   180,     0,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     0,   192,   193,   194,   195,   196,   197,     0,   198,   199,
   200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
     0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
     0,     0,     0,   215,     0,   216,   217,     0,     0,     0,
     0,     0,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,     0,
     0,     0,     0,   413,   225,   226,   227,     0,     0,   414,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,     0,     0,   270,   271,
   272,   273,   274,     0,     0,   275,     0,   276,   277,     0,
   172,   279,   173,   174,   175,   176,     0,   177,   178,   179,
     0,   180,     0,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,   191,     0,   192,   193,   194,   195,   196,
   197,     0,   198,   199,   200,   201,   202,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,     0,     0,     0,     0,     0,     0,   206,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,     0,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,     0,     0,
     0,   214,     0,     0,     0,     0,     0,   215,     0,   216,
   217,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,     0,     0,     0,     0,     0,   224,   225,   226,
   227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,     0,   256,   257,  1001,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
     0,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,     0,   172,   279,   173,   174,   175,   176,
     0,   177,   178,   179,     0,   180,     0,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,     0,   192,
   193,   194,   195,   196,   197,     0,   198,   199,   200,   201,
   202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     0,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,     0,   256,   257,  1659,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,     0,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,     0,   172,   279,
   173,   174,   175,   176,     0,   177,   178,   179,     0,   180,
     0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,     0,   192,   193,   194,   195,   196,   197,     0,
   198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,  1870,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   224,   225,   226,   227,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,     0,   232,   233,     0,   234,   235,     0,   236,     0,
     0,   237,   238,   239,   240,   241,     0,   242,   243,     0,
     0,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     0,     0,     0,     0,   253,     0,   254,   255,     0,     0,
   256,   257,     0,   258,     0,   259,     0,   260,   261,   262,
   263,   264,     0,   265,   266,   267,   268,   269,     0,     0,
   270,   271,   272,   273,   274,     0,     0,   275,     0,   276,
   277,     0,   172,   279,   173,   174,   175,   176,     0,   177,
   178,   179,     0,   180,     0,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     0,   192,   193,   194,
   195,   196,   197,     0,   198,   199,   200,   201,   202,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
   206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,     0,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   224,
   225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   231,     0,   232,   233,     0,   234,
   235,     0,   236,     0,     0,   237,   238,   239,   240,   241,
     0,   242,   243,     0,     0,   244,   245,   246,   247,   248,
   249,   250,   251,   252,     0,     0,     0,     0,   253,     0,
   254,   255,     0,     0,   256,   257,     0,   258,     0,   259,
     0,   260,   261,   262,   263,   264,     0,   265,   266,   267,
   268,   269,     0,     0,   270,   271,   272,   273,   274,     0,
     0,   275,     0,   276,   277,     0,   172,   279,   173,   174,
   175,   176,     0,   177,   178,   179,     0,   180,     0,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     0,   192,   193,   194,   195,   196,   197,     0,   198,   199,
   200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
     0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
     0,     0,     0,   215,     0,   216,   217,     0,     0,     0,
     0,     0,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,     0,
     0,     0,     0,   224,   225,   226,   227,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,     0,
   232,   233,     0,   234,   235,     0,   236,     0,     0,   237,
   238,   239,   240,   241,     0,   242,   243,     0,     0,   244,
   245,   246,   247,   248,   249,   250,   251,   252,     0,     0,
     0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
     0,   258,     0,   259,     0,   260,   261,   262,   263,   264,
     0,   265,   266,   267,   268,   269,     0,     0,   270,   341,
   272,   273,   274,     0,     0,   275,     0,   276,   277,     0,
   172,   279,   173,   708,   175,   176,     0,   177,   178,   179,
     0,   180,     0,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,   191,     0,   192,   193,   194,   195,   196,
   197,     0,   198,   199,   200,   201,   202,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,     0,     0,     0,     0,     0,     0,   206,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,     0,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,     0,     0,
     0,   214,     0,     0,     0,     0,     0,   215,     0,   216,
   217,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,     0,     0,     0,     0,     0,   224,   225,   226,
   227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,     0,   232,   233,     0,   234,   235,     0,
   236,     0,     0,   237,   238,   239,   240,   241,     0,   242,
   243,     0,     0,   244,   245,   246,   247,   248,   249,   250,
   251,   252,     0,     0,     0,     0,   253,     0,   254,   255,
     0,     0,   256,   257,     0,   258,     0,   259,     0,   260,
   261,   262,   263,   264,     0,   265,   266,   267,   268,   269,
     0,     0,   270,   271,   272,   273,   274,     0,     0,   275,
     0,   276,   277,     0,   172,   279,   173,   174,   175,   176,
     0,   177,   178,   179,     0,   180,     0,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,     0,   192,
   193,   194,   195,   196,   197,     0,   198,   199,   200,   201,
   202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     0,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,  1231,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,     0,   232,   233,
     0,   234,   235,     0,   236,     0,     0,   237,   238,   239,
   240,   241,     0,   242,   243,     0,     0,   244,   245,   246,
   247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
   253,     0,   254,   255,     0,     0,   256,   257,     0,   258,
     0,   259,     0,   260,   261,   262,   263,   264,     0,   265,
   266,   267,   268,   269,     0,     0,   270,   271,   272,   273,
   274,     0,     0,   275,     0,   276,   277,     0,     0,   279
};

static const short yycheck[] = {     1,
    53,     1,    95,    56,    60,     1,   356,   315,    58,   518,
   638,   607,   339,   353,  1009,  1548,   442,    67,   326,   170,
  1279,   952,   943,   944,    80,   766,  1540,  1605,  1577,   331,
  1154,  1155,  1156,  1157,  1158,    88,   722,   345,  1302,    53,
    46,  1276,   849,  1475,  1891,    46,    18,    46,   350,  1173,
   791,    54,    46,    34,    19,    64,    20,  2101,   112,    20,
    41,   439,   440,    44,    41,   126,    47,    44,   105,    64,
    47,    52,    67,    54,    55,    52,   312,    54,    55,   851,
   445,   184,   103,    61,    97,   114,    96,   124,   173,   173,
    96,   193,    79,    79,    60,    96,    83,    96,   173,   114,
    86,    87,    96,     5,    97,    91,    42,    43,     5,    45,
    46,    13,    48,    49,   184,    51,    13,    53,   109,   194,
    56,    57,    58,    59,    97,   251,   113,    64,    30,   557,
    74,   193,   873,    30,    36,    37,    98,    97,    97,    36,
    37,   217,    31,   571,    33,    60,   102,   177,   178,    60,
    98,    25,   189,    63,    23,    65,  2410,   148,    64,   216,
   173,   123,   758,   136,   193,   275,   516,   400,   176,   519,
   246,   151,    97,   160,   300,    77,   186,   198,    60,  1100,
    77,   194,   114,   834,   192,   115,   114,    60,   245,   167,
   275,   201,   102,   278,   100,  1381,    60,   188,   300,   101,
   302,   145,   305,   190,   101,   126,  2460,   144,   717,   111,
  2254,    98,    60,   193,   111,   285,   301,   301,   174,   455,
    79,   193,    60,   148,   161,     7,   301,   157,    10,   191,
   174,  1417,   210,   273,    16,    17,   123,   290,   300,   300,
   294,    53,    54,   191,    56,    57,    58,    59,   226,   279,
    32,   484,    64,    35,   113,    67,   184,   146,  1902,    71,
  1904,  1905,  1906,  1907,  1908,   302,    78,    79,   633,   380,
    82,   300,   281,   282,    86,    87,   290,   327,   328,    91,
    92,    93,   151,   276,   334,   300,   173,   189,   301,   127,
   212,    71,   189,   195,  1480,   165,   892,   347,   195,   349,
   896,   160,   281,   276,   191,  2349,   301,   357,   686,  1433,
   275,   109,   230,   278,   301,   279,   276,   276,   279,   291,
  1061,   191,   301,   304,   290,   291,   292,   304,   314,   422,
   383,   190,  1591,   294,  1593,  1913,  1914,  1307,   299,   275,
   120,  1311,   276,   276,   281,  1859,   256,   773,   146,   335,
   148,  1586,   289,  1477,   782,   135,   359,   343,  2402,  1791,
  2404,    26,   249,   365,   298,   298,  1490,  1491,  1492,  1493,
  1494,  1495,  1496,   275,   430,   290,   291,   292,   275,   290,
   291,   292,  1154,  1155,  1156,  1157,  1158,   295,   193,   375,
   188,   193,  2239,   399,   380,   233,   446,   114,   399,   449,
   399,  1173,   452,   120,   834,   399,   408,   304,   290,   291,
   292,   397,   250,   277,   301,    98,  1012,   290,   291,   292,
   186,   407,  1955,  1074,   288,   289,   290,   291,   292,  1080,
  1081,  1082,  1083,  1084,   276,   201,   439,   440,   302,   221,
   123,   444,   290,   291,   292,   138,   496,   235,  2092,   502,
   288,   289,   290,   291,   292,   193,  2100,  1053,   200,   294,
  2104,   276,  2106,   251,   299,  2109,  2110,  2111,  2112,  2113,
  2114,  2115,  2116,  2117,   193,  2119,    34,   119,   290,   172,
   259,   467,   593,   298,    64,   297,   275,   266,   997,   278,
   105,   276,  1382,  1089,  2138,   300,   138,   302,   300,    60,
   302,    98,   314,   315,  1047,  1048,  1049,  1050,   191,   124,
   512,   937,   176,   298,   326,   327,   328,   193,    98,   331,
   332,  1328,   334,   335,    60,   276,   123,   339,  1418,   341,
   172,   343,   344,   345,   276,   347,   277,   349,   350,   351,
   155,   594,   279,   123,   356,   357,  1467,   298,  1355,  1470,
  1471,  1472,  1473,  1474,  2068,   207,   298,   193,   651,   211,
   653,  2075,   300,   375,   302,  1161,   249,  1060,    71,  1062,
  1063,   624,    21,    22,   189,   628,   173,   630,   631,    60,
    29,   300,  1389,   302,   276,   397,   636,    60,   400,   114,
  2168,  1481,  1220,   173,   191,   407,   109,   297,    94,   275,
  2032,   301,   278,   127,   660,  1729,   298,  1235,   184,   665,
   666,   191,  2256,   267,   268,   294,    14,   120,   281,   431,
   299,  1307,   276,   119,  1431,  1311,   289,   439,   440,    71,
   932,   684,   135,   146,   446,   148,  1895,   449,  1897,    60,
   452,  1382,   138,   139,  1074,   176,   632,   120,   634,   957,
  1080,  1081,  1082,  1083,  1084,   467,   706,  1398,  1399,   752,
   646,  1433,  1926,   260,   278,   279,  1407,  1588,  1589,    98,
   684,    60,   484,    28,   727,   188,   172,  1418,   120,   681,
   260,   255,  1489,   686,   496,   735,   182,   183,  2237,   298,
   122,   741,   301,   135,   123,   745,   746,   109,  1822,   275,
   276,  1632,   278,   279,   516,  1477,   202,   519,   520,  2223,
  1451,  2225,   294,   276,  2358,    60,   277,   299,  1490,  1491,
  1492,  1493,  1494,  1495,  1496,   281,  2304,   288,   289,   290,
   291,   292,   294,   294,   146,   298,   148,   299,   299,   171,
  1481,   277,   554,   299,   173,   301,   276,    60,  2281,   109,
   736,   277,   288,   289,   290,   291,   292,  1498,   294,   870,
   286,   287,   191,   299,   230,   767,   768,   769,   298,    60,
   297,   298,   774,   585,  2307,    66,   188,   928,   929,   131,
   212,  1432,   127,   279,   276,  1436,   788,  1438,   148,   162,
  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,   109,
  1607,  1452,   281,   282,   277,   276,   298,   288,   289,   290,
   291,   292,   624,    60,   127,   288,   289,   290,   291,   292,
   632,    68,   634,    60,   636,   875,   281,   298,   188,   151,
  2089,   294,  2091,   300,   646,   294,   299,  1380,   148,  1348,
   299,   203,   301,   845,   299,   847,   301,  1390,  1391,  1392,
  1393,  1394,  1395,  1396,   276,   275,   277,  1453,   278,   151,
   276,   281,  1986,   283,   285,   286,   287,   288,   289,   290,
   291,   292,   684,   300,   686,   302,   298,   151,   188,    21,
    22,   302,   298,   303,   870,   128,   276,    29,   233,   298,
  1383,   174,   301,   276,   706,    96,    60,    98,  1009,   288,
   289,   290,   291,   292,    60,   250,   276,    71,   298,   127,
   722,   275,   914,   915,   278,   298,   728,   281,   151,   283,
   233,    60,   123,   735,   736,   927,  1419,   927,   298,   741,
   276,   934,    71,   745,   746,   203,   300,   250,   302,   276,
   752,   943,   944,   288,   289,   290,   291,   292,   276,   281,
    60,   276,   298,   300,    43,   302,   120,  1729,  1699,   128,
    49,   298,    51,   127,    53,  1960,   300,   299,   302,   301,
   298,   135,   173,   298,  1085,   288,   289,   290,   291,   292,
   982,   120,   984,   985,   986,   987,   277,  1413,   127,  1482,
   191,  1331,  1332,   290,   291,   292,   135,   288,   289,   290,
   291,   292,  1432,  1330,   276,   276,  1436,   276,  1438,   203,
   996,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,
  1571,  1572,  1452,  1009,   276,  1074,   298,   298,   128,   298,
   277,  1080,  1081,  1082,  1083,  1084,   848,   849,   285,   286,
   287,   288,   289,   290,   291,   292,   298,   209,   249,   276,
  1822,   288,   289,   290,   291,   292,   276,   295,  2182,   294,
   872,   115,   874,   875,   299,   276,   276,   121,  1179,   233,
   300,   298,   302,  1184,   886,   281,    64,  1188,   298,   133,
  1731,  1192,  2124,   281,    73,  1196,   250,   298,   298,  1200,
   276,   112,    60,  1204,   233,   301,   302,  1208,  1100,   104,
   301,  1212,   156,   301,   302,  2147,  2148,  2149,  2150,  2151,
    60,   250,   298,   277,   294,   169,    66,    60,   930,    94,
   932,   277,   934,    66,   288,   289,   290,   291,   292,   285,
   286,   287,   288,   289,   290,   291,   292,   294,   277,   276,
   276,    73,   299,   276,   119,   957,   285,   286,   287,   288,
   289,   290,   291,   292,  1863,   294,   300,  1866,   302,  1966,
   299,   298,   298,   138,   139,   298,    68,   277,  1975,   295,
   294,   213,   276,   184,   300,   299,   218,   989,   288,   289,
   290,   291,   292,   294,   996,   997,   200,   229,   299,  1242,
  1683,  1684,  1685,   276,   298,  1007,  1246,   172,   290,   241,
   242,  1013,   276,  1253,   294,   275,  1018,   276,   278,   299,
  1266,   281,   294,   283,  1986,   298,   281,   299,   295,   301,
  1713,  1714,  1715,   265,   298,    68,  2033,   202,   200,   298,
   300,    60,   302,  1219,   299,    65,   301,    66,   301,   294,
    70,  1352,    71,  2285,   299,  1295,    76,    68,  1234,  1360,
  1303,    81,  2294,  2295,  2296,  2297,  2298,  2299,  2300,  2301,
  2302,  2303,    60,   301,   294,  1267,   131,  1267,    66,   299,
  1320,  1267,   288,   289,   290,   291,   292,   171,  1331,  1332,
   199,  1283,  1284,  1283,  1284,    98,   302,    34,  1338,    93,
  1340,   120,  2099,   300,    41,   302,   300,    44,   127,   294,
    47,  1731,   665,   666,   299,    52,   135,    54,    55,   277,
   123,  1313,  1805,  1806,  1807,  1301,   151,   146,   286,   287,
   288,   289,   290,   291,   292,   154,   281,   277,   294,  1331,
  1332,  1331,  1332,   299,   277,    60,  2077,   554,   288,   289,
   290,   291,   292,    68,    60,   288,   289,   290,   291,   292,
   275,   276,    68,   278,   294,  1167,   281,   297,   283,   299,
   173,   301,  1364,    60,   300,   294,   302,   301,    60,    66,
   299,  1880,  2414,   300,    71,   302,  1378,   982,   191,   984,
   985,   986,   987,  1432,   301,   294,   294,  1436,   196,  1438,
   299,   299,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,
  1449,   294,   301,  1452,   233,   301,   299,  1219,  1410,  1411,
  2182,   294,   294,   294,   301,   632,   299,   299,   299,  1231,
   294,   250,  1234,   120,  1236,   299,   294,   294,  2024,   301,
   127,   299,   299,   159,  1246,   248,   249,   294,   135,   301,
    60,  1253,   299,   301,  1555,   294,   301,   294,   277,   146,
   299,    71,   299,   953,   954,   955,   285,   286,   287,   288,
   289,   290,   291,   292,   300,  1467,   302,    78,  1470,  1471,
  1472,  1473,  1474,   302,   301,   285,  1478,  1479,  1290,   277,
  1292,  1293,  1294,  1295,   301,   298,  2293,   301,   301,  1301,
   288,   289,   290,   291,   292,  1307,   301,   298,   294,  1311,
   120,  2308,  2309,   299,   301,   298,  2134,   127,  1320,   288,
   289,   290,   291,   292,   301,   135,  1328,   294,  1330,  1331,
  1332,  1333,   299,   302,   295,    68,  1338,   294,  1340,   300,
  1342,   297,   299,   294,   294,  1347,   233,   554,   299,   299,
   297,  2348,    79,  1355,  1356,  1357,   301,   300,    85,   302,
   294,  1537,   277,   250,  1540,   299,   134,  1668,   200,   120,
    97,   277,   191,   288,   289,   290,   291,   292,  1621,  1571,
  1572,  1573,   288,   289,   290,   291,   292,  1389,   134,   294,
   277,   281,   134,   283,   299,   277,  1588,  1589,   285,   286,
   287,   288,   289,   290,   291,   292,   288,   289,   290,   291,
   292,   294,    96,   294,  2411,   294,   299,   303,   299,   146,
   299,   294,  1920,   233,   300,   632,   299,   294,   300,  1431,
   302,   294,   299,   160,   303,  1736,   299,   294,   294,   166,
   250,  1742,   299,   299,   294,   300,  1747,   302,   294,   299,
  1642,  1752,  1642,   299,   294,   294,  1757,   294,   303,   299,
   299,  1762,   299,   190,   294,   294,  1767,   277,   294,   299,
   299,  1772,   294,   299,   297,   291,  1777,   299,   288,   289,
   290,   291,   292,   294,   192,   294,   294,  1489,   299,   301,
   299,   299,  1731,   295,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,   301,    14,  1508,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,   254,    28,
    29,    30,    31,    32,    33,   239,    35,    36,    37,    38,
    39,   294,   294,   258,   301,  1537,   299,   299,  1540,    79,
   294,    34,    87,  1545,   151,   299,  1548,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    97,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    87,   112,   126,
   115,   288,   289,   290,   291,   292,   121,   300,   184,   302,
  1582,   194,   299,   790,   129,    94,    95,   114,   133,   294,
   301,   297,   101,   294,   299,   115,  2136,   142,   299,   294,
   198,   121,   111,  1605,   299,  1607,   146,   294,   297,   294,
   119,   156,   299,   133,   299,    78,   125,   300,   173,   302,
   160,   300,   142,   302,   169,   184,   166,   834,   184,   138,
   139,  1633,   184,  1635,   275,   276,   156,   278,   279,  1641,
   149,   184,   180,  1883,   851,   300,   300,   302,   302,   169,
   190,  1653,   288,   289,   290,   291,   292,    60,   300,  1960,
   302,   200,   300,   172,   302,   300,   302,   302,   300,   189,
   302,   180,   181,   288,   289,   290,   291,   292,   300,  1919,
   302,   302,   302,  1859,   299,   301,  1929,   288,   289,   290,
   291,   292,   300,   202,   114,   297,   205,   275,   299,   252,
  1940,   301,   150,   300,    28,    60,   290,  1950,   303,   303,
    27,  2410,    83,   151,   154,   285,    71,   223,   151,    68,
  1722,   263,   159,   228,   285,   285,   300,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,   120,    51,    52,
    53,    54,    55,    56,    57,    58,    59,   288,   289,   290,
   291,   292,   302,   300,  1930,   174,    82,   114,   299,   172,
  1167,   139,   298,   146,   301,   120,   275,   302,   302,   278,
   302,   302,   127,   302,   302,  2273,   301,   301,   301,   301,
   135,   302,   275,   302,  1960,   278,   203,   280,   281,   301,
   283,   146,   285,   301,   301,   288,   289,   290,   291,   292,
   285,   301,   295,   301,   301,   298,   299,   300,   301,   302,
   303,   304,   301,   300,   302,   301,    93,   301,   301,  1821,
   301,   301,    60,   301,   301,   301,   301,  1234,   301,   301,
   301,   301,   301,    71,   301,   301,   277,  2080,   297,  2085,
  1047,  1048,  1049,  1050,   285,   286,   287,   288,   289,   290,
   291,   292,   301,   275,   301,   301,   301,  1859,   301,   301,
   285,   259,   301,   235,   130,   301,   301,  1074,  1870,   301,
   304,   302,   295,  1080,  1081,  1082,  1083,  1084,   233,   130,
   304,  1883,   120,   277,   120,  2128,   301,   301,   285,   127,
   200,  2083,  2068,  2083,   277,   250,   193,   135,   112,  2075,
   200,   104,   285,   286,   287,   288,   289,   290,   291,   292,
    60,  1913,  1914,   112,   302,   302,   302,  1919,  1920,    60,
   302,   301,   277,   120,   301,    60,   302,   300,  1930,   117,
   285,   286,   287,   288,   289,   290,   291,   292,  1940,   302,
   302,   302,  1944,   302,   302,   290,   302,  1154,  1155,  1156,
  1157,  1158,   302,  1955,   302,   302,   300,   112,   193,   275,
   275,   300,   275,   304,  1966,   278,  1173,   304,   281,   301,
   283,   301,   285,  1975,   184,   288,   289,   290,   291,   292,
   117,   272,   112,   154,    68,   298,   299,   300,   301,   302,
  1992,   304,   184,   160,   231,   233,   301,   116,   301,   301,
   234,   302,   129,   302,   302,   156,   302,   302,   302,   302,
   302,   301,   250,   302,   302,   302,   302,   302,   301,   301,
   301,   301,   301,   301,   129,   301,   301,  1234,   301,   301,
   301,  2033,   301,   301,   301,   300,  2279,   301,  2278,   277,
  2232,   301,  2232,  2235,  2046,  2235,   301,  2223,   302,  2225,
   288,   289,   290,   291,   292,   299,   301,    73,   301,    53,
    54,   302,    56,   302,   118,   285,  2068,   220,   275,   302,
   302,   302,   302,  2075,   302,   302,   302,   302,   302,   302,
   302,   302,    53,   302,   302,    56,   302,    58,    97,   302,
   302,   302,   301,    64,  2286,  2287,    67,  2099,   302,  2101,
   302,  1508,   302,   106,   302,    97,   302,    78,    79,   270,
   301,    82,   301,   222,   301,    86,    87,   176,   130,   301,
    91,    92,    93,   148,   130,   152,   150,   153,   302,   302,
   302,   129,   302,   192,  2136,    60,   302,   302,   197,   302,
   302,   129,   302,   302,   302,   204,   205,   131,   302,   208,
   302,    66,  2344,   302,  2344,   302,   302,  2440,  2344,   302,
   219,   163,   302,   302,   302,  2408,  2168,   301,   227,   302,
   302,   230,   300,  1380,  1381,   297,   301,   301,   301,   166,
   301,   301,   300,  1390,  1391,  1392,  1393,  1394,  1395,  1396,
   302,   301,   221,    60,   253,  1602,   255,    60,   302,   302,
   302,   260,   302,   262,    71,   302,   302,   302,   302,   302,
  1417,   302,   302,   302,  2457,   302,  2408,   302,  2408,   302,
   302,  2223,   302,  2225,   302,  1432,  1433,   302,   302,  1436,
   302,  1438,   302,   302,  1441,  1442,  1443,  1444,  1445,  1446,
  1447,  1448,  1449,   137,   302,  1452,  2248,   302,   301,   300,
    66,   301,  2254,   120,   301,   232,   302,   302,   151,   302,
   127,   302,   299,   295,   302,  2457,    62,  2457,   135,     0,
  1477,  2273,   295,  1480,     0,    96,  2278,  1300,   459,  2281,
   961,   869,  1615,  1490,  1491,  1492,  1493,  1494,  1495,  1496,
   716,  2293,  1633,   631,  1290,   289,   290,  1947,  2139,  1292,
  2356,  2431,  2304,  2456,  2421,  2307,  2308,  2309,  2310,  2311,
  2451,  1635,  2457,  1623,  1332,  1722,    90,  1333,   640,   290,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    75,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   408,   517,  1013,   314,  2307,  2423,  2348,  2349,  2306,  2453,
   498,  2440,   353,  1621,  2356,    94,   327,   328,  2360,  1253,
   331,   332,  2407,   334,   335,   359,   233,  1347,   339,   399,
  1214,   901,   343,   344,  1337,  1573,   347,   425,   349,   350,
   351,  2311,  1248,   250,  1867,   356,   357,  1540,  1864,   893,
  2392,   585,  2454,  1234,  1789,  1992,  2398,  1722,  1413,  2392,
  2402,  1015,  2404,  1870,   375,   870,  2408,   286,   934,  2411,
   277,   444,   874,   930,  1821,   434,  1576,   382,   285,   286,
   287,   288,   289,   290,   291,   292,   397,   508,  2239,   400,
  1006,   624,  1238,   897,   177,   178,   407,   169,   937,  1217,
   951,  1538,  2232,  2235,    -1,   439,   440,   190,    -1,   192,
   444,  2453,  2454,    -1,   197,  2457,    -1,    -1,    -1,    -1,
   431,   204,   205,    -1,    -1,   208,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   446,   219,    -1,   449,    -1,
    -1,   452,    -1,    -1,   227,    -1,    -1,   230,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1902,   467,  1904,  1905,  1906,
  1907,  1908,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   253,    -1,   255,   484,    -1,    -1,    -1,   260,    -1,   262,
    -1,    -1,  1729,    -1,  1731,   496,   269,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1941,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,   519,   520,
    -1,    -1,    -1,    -1,    -1,   275,    60,    -1,   278,    -1,
    -1,   281,    -1,   283,    -1,   285,    -1,    71,   288,   289,
   290,   291,   292,    -1,    -1,    -1,    -1,    -1,   298,   299,
   300,   301,   302,   554,   304,  1992,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    -1,  1822,   120,    -1,    -1,    -1,
    -1,    -1,    -1,   127,    -1,   619,    -1,    -1,    -1,    -1,
   624,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2046,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   624,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   632,    -1,   634,    -1,   636,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   646,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2092,    -1,    -1,    -1,    -1,
   684,    -1,   686,  2100,  2101,    -1,    -1,  2104,    -1,  2106,
    -1,    -1,  2109,  2110,  2111,  2112,  2113,  2114,  2115,  2116,
  2117,    -1,  2119,   684,    -1,    -1,    -1,  2124,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
    -1,  2138,    -1,    -1,    -1,   706,    -1,    -1,    -1,    60,
  2147,  2148,  2149,  2150,  2151,    66,   250,    -1,    -1,    -1,
    71,   722,    -1,    -1,    -1,    -1,    -1,   728,    -1,    -1,
    -1,    -1,    -1,    -1,   735,   736,    -1,    -1,    -1,    -1,
   741,    -1,    -1,   277,   745,   746,    -1,    -1,    -1,  1986,
    -1,   752,   286,   287,   288,   289,   290,   291,   292,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   790,
    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,   275,
    -1,    -1,   278,   154,    -1,   281,    -1,   283,    -1,   285,
   834,  2248,   288,   289,   290,   291,   292,  2254,    -1,  2256,
    -1,    -1,   298,   299,   300,   301,   302,   851,    -1,    -1,
    -1,    -1,    -1,   834,    -1,    -1,    -1,    -1,    60,    -1,
    -1,    -1,    -1,    -1,    66,   869,    -1,   848,  2285,    71,
   851,   875,    -1,    -1,    -1,    -1,    -1,  2294,  2295,  2296,
  2297,  2298,  2299,  2300,  2301,  2302,  2303,    -1,    -1,    -1,
    -1,   872,    -1,   874,   875,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   233,    -1,    -1,   886,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   250,
    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
   934,    -1,  2349,   135,    -1,    -1,    -1,    -1,    -1,  2356,
    -1,  2358,    -1,    -1,   146,    -1,   277,    -1,    -1,   930,
    -1,   932,   154,    -1,   285,   286,   287,   288,   289,   290,
   291,   292,    -1,    -1,    -1,  2182,    -1,    -1,    -1,    -1,
    -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2402,    -1,  2404,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2414,    -1,    -1,
    -1,    -1,  1006,    -1,    -1,    -1,    -1,    -1,   989,    -1,
    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1007,    -1,    -1,    -1,
    -1,   233,  1013,    -1,    -1,    -1,    -1,  1018,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1047,  1048,  1049,  1050,
  1074,    -1,    -1,    -1,    -1,   277,  1080,  1081,  1082,  1083,
  1084,    -1,    -1,   285,   286,   287,   288,   289,   290,   291,
   292,  1095,    -1,  1074,    -1,    -1,    -1,    -1,   300,  1080,
  1081,  1082,  1083,  1084,    -1,    -1,    -1,    -1,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
  1154,  1155,  1156,  1157,  1158,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1173,
    -1,    -1,    -1,  1154,  1155,  1156,  1157,  1158,    -1,    -1,
    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1173,    -1,    -1,    -1,    -1,    -1,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,  1217,   109,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1219,    -1,
    -1,    -1,    -1,   138,   139,    -1,   141,    -1,   143,    -1,
  1231,    -1,    -1,  1234,   149,  1236,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1246,    -1,    -1,    -1,    -1,
    -1,    -1,  1253,    -1,    -1,    -1,    -1,   172,   173,    -1,
    -1,    -1,    -1,    -1,    -1,   180,   181,    -1,    -1,    -1,
    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,  1290,
   205,  1292,  1293,  1294,  1295,    -1,    -1,    -1,    -1,    -1,
  1301,    -1,    -1,    -1,    -1,    -1,  1307,    -1,    -1,    -1,
  1311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1320,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1330,
  1331,  1332,  1333,    -1,    -1,    -1,    -1,  1338,    -1,  1340,
    -1,  1342,    -1,    -1,    -1,    -1,  1347,    -1,   263,    -1,
    -1,    -1,    -1,    -1,    -1,  1356,  1357,    -1,    -1,    -1,
   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1380,
  1381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1390,
  1391,  1392,  1393,  1394,  1395,  1396,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1432,  1433,
    -1,    -1,  1436,    -1,  1438,    -1,  1417,  1441,  1442,  1443,
  1444,  1445,  1446,  1447,  1448,  1449,    -1,    -1,  1452,    -1,
    -1,  1432,  1433,    -1,    -1,  1436,    -1,  1438,    -1,    -1,
  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,    -1,
    -1,  1452,    -1,  1477,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1490,  1491,  1492,  1493,
  1494,  1495,  1496,    -1,    -1,    -1,  1477,    -1,    -1,  1480,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1490,
  1491,  1492,  1493,  1494,  1495,  1496,    -1,    -1,    -1,     3,
    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    12,    -1,
    -1,    15,    -1,    -1,  1538,    -1,    -1,    -1,    -1,    -1,
    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    38,    39,  1537,    -1,    -1,  1540,
    -1,    -1,    -1,    -1,  1545,    -1,    -1,  1548,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    65,    60,    -1,    -1,    -1,    70,    -1,    66,    -1,
    -1,    -1,    -1,    71,    -1,    -1,    80,    -1,    -1,    -1,
    84,  1582,    86,    -1,    -1,    60,    -1,    -1,    -1,    -1,
    -1,    66,    96,    -1,    98,    -1,    71,    -1,   102,    -1,
   104,  1602,   106,    -1,  1605,    60,   110,    -1,    -1,    -1,
    -1,    66,   116,    -1,    -1,    -1,    71,    -1,    -1,   123,
    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,
    -1,    -1,  1633,    60,  1635,    -1,    -1,   135,    -1,    -1,
  1641,    -1,    -1,    -1,    71,   120,    -1,    -1,   146,    -1,
    -1,    -1,   127,    -1,    -1,    -1,   154,    -1,    -1,    -1,
   135,    -1,    -1,    -1,   168,   120,   170,    -1,    -1,   173,
   174,   146,   127,    -1,    -1,    -1,    -1,    -1,    -1,   154,
   135,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,
    -1,   146,    -1,   120,    -1,    -1,    -1,    -1,    -1,   154,
   127,   205,   206,    -1,    -1,  1729,    -1,  1731,   135,    -1,
   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   224,   225,    -1,    -1,    -1,    -1,    -1,    -1,  1729,    -1,
  1731,    -1,   236,   237,   238,   233,   240,    -1,    -1,   243,
    -1,    -1,    -1,    53,    -1,   249,    56,    -1,    58,    -1,
    -1,    -1,   250,   257,    64,    -1,    -1,    67,   233,    -1,
   264,    -1,    -1,    -1,    -1,    -1,    -1,   271,    78,    79,
    -1,    -1,    82,    -1,    -1,   250,    86,    87,   233,   277,
    -1,    91,    92,    93,    -1,    -1,    -1,   285,   286,   287,
   288,   289,   290,   291,   292,   250,    -1,   301,  1822,    -1,
    -1,    -1,   277,    -1,   302,    -1,   233,    -1,    -1,    -1,
   285,   286,   287,   288,   289,   290,   291,   292,    -1,    -1,
    -1,  1822,   277,   250,    -1,    -1,    -1,   302,    -1,    -1,
   285,   286,   287,   288,   289,   290,   291,   292,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,
   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1859,   286,
   287,   288,   289,   290,   291,   292,    -1,    -1,    -1,  1870,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1902,    -1,  1904,  1905,  1906,  1907,  1908,    -1,    -1,
    -1,    -1,  1913,  1914,    -1,    -1,    -1,    -1,  1919,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1930,
    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,  1940,
  1941,    -1,    -1,  1944,    -1,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1955,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1986,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   290,    -1,    -1,    -1,    -1,  1986,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
    -1,   127,    60,    -1,   314,    -1,    -1,    -1,    66,   135,
    -1,    -1,    -1,    71,    -1,    -1,    -1,   327,   328,    -1,
   146,   331,   332,    -1,   334,   335,    -1,    -1,    -1,   339,
    -1,    -1,    -1,   343,   344,    -1,    -1,   347,    -1,   349,
   350,   351,    -1,    -1,    -1,    -1,   356,   357,    -1,    -1,
    -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   120,    -1,    -1,   375,    -1,  2068,    -1,   127,
   351,    -1,    -1,    -1,  2075,    -1,    -1,   135,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   397,   146,    -1,
   400,  2092,    -1,    -1,    -1,    -1,   154,   407,    -1,  2100,
    -1,    -1,    -1,  2104,    -1,  2106,    -1,   233,  2109,  2110,
  2111,  2112,  2113,  2114,  2115,  2116,  2117,    -1,  2119,    -1,
    -1,   431,    -1,  2124,   250,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2136,   446,  2138,    -1,   449,
    -1,    -1,   452,    -1,    -1,    -1,  2147,  2148,  2149,  2150,
  2151,   277,    -1,    -1,    -1,    -1,    -1,   467,  2182,   285,
   286,   287,   288,   289,   290,   291,   292,  2168,    -1,    -1,
    -1,    -1,    -1,    -1,   484,   233,    -1,    -1,    60,    -1,
    -1,  2182,    -1,    -1,    66,    -1,   496,    69,    -1,    71,
    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,   519,
   520,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,   277,
    -1,    -1,  2223,    -1,  2225,    -1,    -1,   285,   286,   287,
   288,   289,   290,   291,   292,    -1,    -1,    -1,   120,    -1,
    -1,    -1,   300,    -1,   554,   127,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   135,    -1,  2256,    60,    -1,    -1,   569,
    -1,    -1,    66,    -1,   146,    -1,    -1,    71,    -1,    -1,
    -1,    -1,   154,    -1,    -1,   585,    -1,  2278,    -1,    -1,
  2281,    -1,    -1,    -1,  2285,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2294,  2295,  2296,  2297,  2298,  2299,  2300,
  2301,  2302,  2303,  2304,    -1,    -1,  2307,    -1,    -1,    -1,
  2311,   193,    -1,    -1,   624,    -1,   120,    -1,    -1,    -1,
    -1,    -1,   632,   127,   634,    -1,   636,    -1,    -1,    -1,
    -1,   135,    -1,    -1,    -1,    -1,   646,    -1,    -1,    -1,
    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   154,   233,    -1,    -1,    -1,    -1,    -1,  2358,    -1,  2360,
    -1,    -1,     8,    -1,    -1,    11,    12,    -1,   250,    15,
    -1,    -1,    -1,    -1,   684,    -1,    -1,    -1,    24,    25,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    38,    39,    -1,   277,   706,  2398,    -1,    -1,
    -1,    -1,    -1,   285,   286,   287,   288,   289,   290,   291,
   292,    -1,   722,  2414,    -1,    -1,    -1,    -1,   728,    65,
    -1,    -1,    -1,    -1,    70,   735,   736,    -1,    -1,   233,
    -1,   741,    -1,    -1,    80,   745,   746,    60,    84,    -1,
    86,    -1,   752,    66,    -1,    68,   250,    -1,    71,    -1,
    96,    -1,    98,  2454,    -1,    -1,   102,    -1,   104,    -1,
   106,    -1,    -1,   773,   110,    -1,    -1,    -1,    -1,    -1,
   116,    -1,    -1,   277,    -1,    -1,    -1,   123,    -1,    -1,
    -1,   285,   286,   287,   288,   289,   290,   291,   292,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   300,   120,    -1,    -1,
    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   790,
    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   168,   146,   170,    -1,    -1,   173,   174,    60,
    -1,   154,    -1,    -1,    -1,    66,    -1,    -1,   848,   849,
    71,    -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   834,    -1,    -1,    -1,    -1,    -1,   205,
   206,    -1,   872,    -1,   874,   875,    -1,    -1,   214,   215,
   851,    -1,    -1,    -1,    -1,    -1,   886,    -1,   224,   225,
    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,   120,
   236,   237,   238,    -1,   240,    -1,   127,   243,    -1,    -1,
    -1,    -1,    -1,   249,   135,    -1,    -1,    -1,    -1,    -1,
   233,   257,    -1,    -1,    -1,   146,    -1,    -1,   264,    -1,
   930,    -1,   932,   154,    -1,   271,    -1,   250,    -1,    -1,
    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   277,   301,    -1,    -1,    -1,    -1,
    -1,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   989,
    -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   120,    -1,    -1,  1007,    -1,    -1,
    -1,   127,   233,  1013,    -1,    -1,    -1,    -1,  1018,   135,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,
   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
    -1,    -1,    -1,   179,   285,   286,   287,   288,   289,   290,
   291,   292,    -1,    -1,    -1,    -1,  1047,  1048,  1049,  1050,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1074,    -1,    -1,    -1,    -1,    -1,  1080,
  1081,  1082,  1083,  1084,    -1,    -1,    -1,   233,    -1,    -1,
    -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,   250,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,   277,    -1,    -1,    -1,    -1,    -1,  1167,    -1,   285,
   286,   287,   288,   289,   290,   291,   292,    -1,    -1,    -1,
    -1,    -1,    -1,  1154,  1155,  1156,  1157,  1158,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
    -1,    -1,  1173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    60,    -1,    -1,    94,    95,    -1,    66,    -1,    68,  1219,
   101,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,  1231,    -1,    -1,  1234,    -1,  1236,    -1,   119,    -1,
    -1,    -1,    -1,    -1,   125,    -1,  1246,    -1,    -1,    -1,
    -1,    -1,    -1,  1253,    -1,    -1,    -1,   138,   139,    -1,
   141,    -1,   143,    -1,    -1,    -1,    -1,    -1,   149,    -1,
   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
  1290,   172,  1292,  1293,  1294,  1295,   146,    -1,    -1,   180,
   181,  1301,    -1,    -1,   154,    -1,    -1,  1307,    -1,    -1,
    -1,  1311,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
  1320,   202,    -1,    -1,   205,    -1,    -1,    -1,  1328,    -1,
  1330,  1331,  1332,  1333,    -1,    -1,    -1,    -1,  1338,    -1,
  1340,    -1,  1342,    -1,    -1,    -1,    -1,  1347,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1355,  1356,  1357,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   261,    -1,   263,   233,    -1,    -1,    -1,    -1,    -1,  1389,
    -1,    -1,    -1,    -1,   275,    -1,    -1,   278,    -1,    -1,
   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1380,
  1381,    -1,    -1,  1413,    -1,    -1,    -1,    -1,    -1,  1390,
  1391,  1392,  1393,  1394,  1395,  1396,    -1,   277,    -1,    -1,
    -1,  1431,    -1,    -1,    -1,   285,   286,   287,   288,   289,
   290,   291,   292,    -1,    -1,    -1,  1417,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1432,  1433,    -1,    -1,  1436,    -1,  1438,    -1,    -1,
  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,    -1,
    -1,  1452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1489,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1477,    -1,  1508,  1480,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1490,
  1491,  1492,  1493,  1494,  1495,  1496,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1537,    -1,    -1,
  1540,    -1,    -1,    -1,    -1,  1545,    -1,    -1,  1548,    -1,
    -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,  1582,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   572,    -1,
    -1,    -1,    -1,    -1,    -1,  1605,    -1,  1607,    -1,    -1,
    -1,    -1,   586,    -1,   588,    -1,   590,   591,   592,   593,
    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
    -1,  1602,    -1,  1633,    -1,  1635,    -1,    -1,    -1,    -1,
    -1,  1641,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
    -1,    -1,    -1,   125,    -1,    -1,    -1,    60,   652,    -1,
    -1,    -1,    -1,    66,    -1,    68,   138,   139,    71,   141,
    -1,   143,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   172,    -1,  1722,    -1,    -1,    -1,    -1,    -1,   180,   181,
    -1,    -1,    -1,    -1,    -1,    -1,   188,   120,    -1,    -1,
    -1,    -1,    -1,   195,   127,    -1,    -1,    -1,    -1,    -1,
   202,    -1,   135,   205,    -1,    -1,    -1,    -1,  1729,   733,
  1731,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,   762,    71,
    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
    -1,   263,   786,   787,    -1,    -1,    -1,    -1,    -1,    -1,
   794,  1821,    -1,   275,   276,    -1,   278,    -1,    -1,   281,
   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
   233,  1822,    -1,   135,    -1,    -1,   120,    -1,    -1,  1859,
   834,    -1,    -1,   127,   146,    -1,    -1,   250,    -1,    -1,
  1870,   135,   154,    -1,    -1,    -1,   850,    -1,    -1,    -1,
   854,    -1,   856,  1883,    -1,   859,   860,   861,   862,   863,
   864,   865,   866,   867,   277,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
    -1,    -1,    -1,  1913,  1914,    -1,    -1,    -1,    -1,  1919,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1930,  1902,    -1,  1904,  1905,  1906,  1907,  1908,    -1,    -1,
  1940,    -1,    -1,    -1,  1944,    -1,    -1,    -1,    -1,    -1,
    -1,   233,    -1,    -1,    -1,  1955,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1966,    -1,   250,   233,
  1941,    -1,    -1,    -1,    -1,  1975,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1955,    -1,   250,    -1,    -1,    -1,
    -1,    -1,  1992,    -1,    -1,   277,    -1,    -1,   790,    -1,
    -1,    -1,    -1,   285,   286,   287,   288,   289,   290,   291,
   292,    -1,    -1,   277,    -1,  1986,    -1,    -1,    -1,    -1,
    -1,   285,   286,   287,   288,   289,   290,   291,   292,    -1,
    -1,    -1,    -1,  2033,    -1,    -1,    -1,    -1,    -1,    -1,
  1014,    -1,   834,    -1,    -1,    -1,  2046,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   851,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2068,    -1,
    -1,    -1,    -1,    -1,    -1,  2075,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1060,    -1,  1062,  1063,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2099,
  1074,  2101,    -1,    -1,    -1,    -1,  1080,  1081,  1082,  1083,
  1084,  1085,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2092,    -1,    -1,  1098,    -1,    -1,    -1,    -1,  2100,
    -1,    -1,    -1,  2104,    -1,  2106,  2136,    -1,  2109,  2110,
  2111,  2112,  2113,  2114,  2115,  2116,  2117,    -1,  2119,    -1,
    -1,    -1,    -1,  2124,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2138,  2168,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  2147,  2148,  2149,  2150,
  2151,    -1,    -1,    -1,    -1,  1159,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1175,    -1,    -1,    -1,  1179,    -1,    -1,    -1,    -1,
  1184,  2182,    -1,    -1,  1188,    -1,    -1,    -1,  1192,    -1,
    -1,    -1,  1196,  2223,    -1,  2225,  1200,    -1,    -1,    -1,
  1204,    -1,    -1,    -1,  1208,    -1,    -1,    -1,  1212,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2248,    -1,
    -1,    -1,    -1,    -1,  2254,  1047,  1048,  1049,  1050,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1248,    -1,    -1,    -1,  2278,    -1,
    -1,  2281,  1074,    -1,    -1,  2256,    -1,    -1,  1080,  1081,
  1082,  1083,  1084,  2293,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2304,    -1,    -1,  2307,  2308,  2309,
    -1,  2311,    -1,    -1,  2285,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2294,  2295,  2296,  2297,  2298,  2299,  2300,
  2301,  2302,  2303,    60,    -1,    -1,    -1,    -1,    -1,    66,
    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,  2348,  2349,
    -1,    -1,    -1,    -1,    -1,    -1,  2356,    -1,    -1,    -1,
  2360,    -1,  1154,  1155,  1156,  1157,  1158,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1167,    -1,    -1,    -1,    -1,
    -1,  1173,    -1,    -1,    -1,  1359,    -1,  2358,    -1,    -1,
    -1,    -1,    -1,   120,  1368,    -1,    -1,    -1,  2398,    -1,
   127,    -1,  2402,  1377,  2404,    -1,    -1,    -1,   135,  1383,
    -1,  2411,    -1,    -1,   772,    -1,    -1,    -1,    -1,   146,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1409,    -1,    -1,    -1,    -1,
    -1,    -1,  1416,  2414,    60,  1419,    -1,    -1,    -1,    -1,
    66,    -1,    -1,    -1,  2454,    71,    -1,    -1,  1432,    -1,
    -1,    -1,  1436,    -1,  1438,    -1,    -1,  1441,  1442,  1443,
  1444,  1445,  1446,  1447,  1448,  1449,    -1,    -1,  1452,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   120,    -1,   233,    -1,  1482,    -1,
    -1,   127,    -1,    -1,    -1,    -1,    -1,    60,    -1,   135,
    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    71,    -1,
   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
   287,   288,   289,   290,   291,   292,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,  1380,  1381,
    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,  1390,  1391,
  1392,  1393,  1394,  1395,  1396,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1417,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,
  1432,  1433,    -1,    -1,  1436,    -1,  1438,    -1,    -1,  1441,
  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,    -1,    -1,
  1452,   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
   286,   287,   288,   289,   290,   291,   292,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1477,    -1,    -1,  1480,    -1,
   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1490,  1491,
  1492,  1493,  1494,  1495,  1496,    -1,    -1,   250,    -1,  1683,
  1684,  1685,    -1,    -1,    -1,    -1,  1508,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,  1713,
  1714,  1715,   285,   286,   287,   288,   289,   290,   291,   292,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1731,    -1,    -1,
    -1,    -1,  1736,    -1,    -1,    -1,    -1,    -1,  1742,    -1,
    -1,    -1,    -1,  1747,    -1,    -1,    -1,    -1,  1752,    -1,
    -1,    -1,    -1,  1757,    -1,    -1,    -1,    -1,  1762,    -1,
    -1,    -1,    -1,  1767,    -1,    -1,    -1,    -1,  1772,    -1,
    -1,    -1,    -1,  1777,    -1,    -1,    -1,    -1,    -1,  1167,
  1602,    -1,    -1,    -1,    -1,  1789,    -1,    -1,    -1,    -1,
    -1,  1179,    -1,    -1,    -1,    -1,  1184,    -1,    -1,    -1,
  1188,  1805,  1806,  1807,  1192,    -1,    -1,    -1,  1196,    -1,
    -1,    60,  1200,    -1,    -1,    -1,  1204,    66,    -1,    -1,
  1208,    -1,    71,    -1,  1212,    -1,    -1,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,
    60,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
    -1,    71,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
  1722,    77,    78,    -1,    -1,    -1,    -1,  1729,    -1,  1731,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    60,    -1,
    -1,    -1,    -1,    -1,    66,   111,    -1,    -1,    -1,    71,
   120,  1329,    -1,   119,    -1,    -1,    -1,   127,    -1,   125,
    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
    60,    -1,   138,   139,    -1,   141,   146,   143,    -1,    -1,
    -1,    71,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,   120,    -1,
    -1,    -1,    -1,    -1,    -1,   127,   172,    -1,    -1,  1821,
  1822,   250,    -1,   135,   180,   181,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   195,
   120,    -1,    -1,    -1,  1412,    -1,   202,   127,   277,   205,
    -1,    -1,    -1,    -1,    -1,   135,   285,   286,   287,   288,
   289,   290,   291,   292,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   250,    -1,    -1,    -1,  2078,    -1,    -1,    -1,    -1,    -1,
  1902,    -1,  1904,  1905,  1906,  1907,  1908,   263,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,   275,
    -1,   233,   278,    -1,    -1,   285,   286,   287,   288,   289,
   290,   291,   292,    -1,    -1,    -1,    -1,    -1,   250,  1941,
  1508,    -1,  1510,  1511,    -1,  1513,  1514,    -1,  1516,  1517,
    -1,  1519,  1520,   233,  1522,  1523,    -1,  1525,  1526,    -1,
  1528,  1529,    -1,  1531,  1532,   277,  1534,  1535,    -1,    -1,
   250,    -1,    -1,   285,   286,   287,   288,   289,   290,   291,
   292,    -1,    -1,    -1,  1986,    -1,    -1,    -1,    -1,    -1,
  1992,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
   290,   291,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2046,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2092,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2100,  2101,
    -1,    -1,  2104,    -1,  2106,    -1,    -1,  2109,  2110,  2111,
  2112,  2113,  2114,  2115,  2116,  2117,    -1,  2119,    -1,    -1,
    -1,    -1,  2124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  2138,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2147,  2148,  2149,  2150,  2151,
    -1,    -1,    -1,    -1,  1722,    -1,    -1,  2341,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1736,    -1,
    -1,    -1,    -1,    -1,  1742,    -1,    -1,    -1,    -1,  1747,
  2182,    -1,    -1,    -1,  1752,    -1,    -1,    -1,    -1,  1757,
    -1,    -1,    -1,    -1,  1762,    -1,    -1,    -1,    -1,  1767,
    -1,    -1,    -1,    -1,  1772,    -1,    -1,    -1,    -1,  1777,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1785,    -1,    -1,
    -1,  1789,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  2248,    -1,    -1,    -1,
    -1,    -1,  2254,    -1,  2256,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2285,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2294,  2295,  2296,  2297,  2298,  2299,  2300,  2301,
  2302,  2303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2349,    -1,    -1,
    -1,    -1,    -1,    -1,  2356,    -1,  2358,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2402,    -1,  2404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1992,    -1,    -1,  1995,  1996,    -1,
  1998,  1999,    -1,  2001,  2002,    -1,  2004,  2005,    -1,  2007,
  2008,    -1,  2010,  2011,    -1,  2013,  2014,    -1,  2016,  2017,
    -1,  2019,  2020,    -1,    -1,    -1,    -1,    -1,  2026,    -1,
    -1,    -1,  2030,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
   290,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,   302,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
   290,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,   302,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,   302,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,   302,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,    -1,    -1,    -1,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,    -1,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,    -1,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,   302,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,    -1,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,    -1,   188,    -1,
    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,    -1,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,   302,     3,    -1,     5,     6,     7,     8,    -1,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,    -1,    -1,    -1,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,    -1,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,    -1,    -1,   278,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,   302,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
    -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,
    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,
    -1,   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,   132,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,
   143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,   185,    -1,   187,   188,    -1,    -1,    -1,   192,
    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,   276,   277,   278,   279,    -1,   281,   282,
   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,
   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,    -1,
   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,   125,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,
   144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,
    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,   185,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,
    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,   233,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,   276,   277,   278,   279,    -1,   281,   282,   283,
    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,   293,
    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,   107,   108,   109,    -1,   111,    -1,    -1,   114,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
   125,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,
    -1,   146,   147,   148,   149,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
   185,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,   263,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,   276,   277,   278,   279,    -1,   281,   282,   283,    -1,
    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,   293,    -1,
   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    95,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,    -1,   111,    -1,    -1,   114,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,
    -1,    -1,    -1,    -1,   130,   131,   132,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,
   146,   147,   148,   149,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,   185,
    -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,   263,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
   276,   277,   278,   279,    -1,   281,   282,   283,    -1,    -1,
    -1,    -1,    -1,   289,    -1,    -1,   292,   293,    -1,   295,
    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,    -1,
    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
    -1,    88,    89,    90,    91,    92,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
   107,   108,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,   146,
   147,   148,   149,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,   263,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,
   277,   278,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
    -1,    -1,   289,    -1,    -1,   292,   293,    -1,   295,    -1,
    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    -1,    14,    -1,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    64,    -1,    -1,    67,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
    88,    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,
    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,
   108,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,
    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
   138,   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,
   148,   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,
   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,
    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,
    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,
    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,
   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,
   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,
   228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,
   248,    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,
   258,   259,   260,   261,   262,   263,    -1,   265,   266,   267,
   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,   277,
   278,   279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,
    -1,   289,    -1,    -1,   292,   293,    -1,   295,    -1,    -1,
    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,
   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,   263,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,
   279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
   289,    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,
    -1,    -1,   301,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
   141,    -1,   143,   144,    -1,   146,   147,   148,   149,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,
    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,   263,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,   276,   277,   278,   279,    -1,
   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,
    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,
   301,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,
    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,
    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,
    -1,   143,   144,    -1,   146,   147,   148,   149,   150,    -1,
   152,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,
   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
   202,   203,   204,   205,    -1,   207,   208,    -1,   210,   211,
    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,
   222,   223,    -1,    -1,   226,   227,   228,   229,   230,   231,
   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,
   242,    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,
   252,   253,   254,   255,   256,    -1,   258,   259,   260,   261,
   262,   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,
   272,    -1,   274,   275,   276,   277,   278,   279,    -1,   281,
   282,   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,
   292,   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,
    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,
   143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   192,
    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,   276,   277,   278,   279,    -1,   281,   282,
   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,
   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,
   144,    -1,    -1,   147,   148,   149,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,
    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,
    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,   233,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,   276,    -1,   278,   279,    -1,   281,   282,   283,
    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,   293,
   294,   295,    -1,    -1,    -1,   299,    -1,   301,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,
    -1,   146,   147,   148,   149,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,   263,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,   276,   277,   278,   279,    -1,   281,   282,   283,    -1,
    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,   293,    -1,
   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,
    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    95,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,
    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,
   146,   147,   148,   149,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,   263,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
   276,   277,   278,   279,    -1,   281,   282,   283,    -1,    -1,
    -1,    -1,    -1,   289,    -1,    -1,   292,   293,    -1,   295,
    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,    -1,
    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
    -1,    88,    89,    90,    91,    92,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
   107,   108,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,   146,
   147,   148,   149,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,   263,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,
   277,   278,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
    -1,    -1,   289,    -1,    -1,   292,   293,    -1,   295,    -1,
    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    -1,    14,    -1,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    64,    -1,    -1,    67,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
    88,    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,
    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,
   108,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,
    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
   138,   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,
   148,   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,
   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,
    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,
    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,
    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,
   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,
   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,
   228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,
   248,    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,
   258,   259,   260,   261,   262,   263,    -1,   265,   266,   267,
   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,   277,
   278,   279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,
    -1,   289,    -1,    -1,   292,   293,    -1,   295,    -1,    -1,
    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,
   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,   263,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,
   279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
   289,    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,
    -1,    -1,   301,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
   141,    -1,   143,   144,    -1,   146,   147,   148,   149,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,
    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,   263,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,   276,   277,   278,   279,    -1,
   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,
    -1,   292,   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,
   301,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,
    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,
    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,
    -1,   143,   144,    -1,   146,   147,   148,   149,   150,    -1,
   152,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,
   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
   202,   203,   204,   205,    -1,   207,   208,    -1,   210,   211,
    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,
   222,   223,    -1,    -1,   226,   227,   228,   229,   230,   231,
   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,
   242,    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,
   252,   253,   254,   255,   256,    -1,   258,   259,   260,   261,
   262,   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,
   272,    -1,   274,   275,   276,   277,   278,   279,    -1,   281,
   282,   283,    -1,    -1,    -1,    -1,    -1,   289,   290,    -1,
   292,   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,
    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,
    -1,   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,
   143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   192,
    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,   276,   277,   278,   279,    -1,   281,   282,
   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,
   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,
   144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,   173,
    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,
    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,   233,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,   276,   277,   278,   279,    -1,   281,   282,   283,
    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,   293,
    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,
    -1,   146,   147,   148,   149,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,   173,    -1,
   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,   263,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,   276,   277,   278,   279,    -1,   281,   282,   283,    -1,
    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,   293,    -1,
   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    95,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,
    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,
   146,   147,   148,   149,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,   263,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
   276,   277,   278,   279,    -1,   281,   282,   283,    -1,    -1,
    -1,    -1,    -1,   289,    -1,    -1,   292,   293,    -1,   295,
    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
    -1,    88,    89,    90,    91,    92,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
   107,   108,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,   146,
   147,   148,   149,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,   263,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,
   277,   278,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
    -1,    -1,   289,    -1,    -1,   292,   293,    -1,   295,    -1,
    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    -1,    14,    -1,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
    88,    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,
    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,
   108,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,
    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
   138,   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,
   148,   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,
   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,
    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,
    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,
    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,
   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,
   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,
   228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,
   248,    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,
   258,   259,   260,   261,   262,   263,    -1,   265,   266,   267,
   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,   277,
   278,   279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,
    -1,   289,    -1,    -1,   292,   293,    -1,   295,    -1,    -1,
    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,   141,    -1,   143,   144,    -1,    -1,   147,   148,
   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,   263,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,   276,    -1,   278,
   279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
   289,    -1,    -1,   292,   293,    -1,   295,    -1,    -1,    -1,
    -1,    -1,   301,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,    -1,   147,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,    -1,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
    -1,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,    -1,   278,   279,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   293,   294,   295,    -1,    -1,    -1,   299,
    -1,   301,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
   141,    -1,   143,   144,    -1,    -1,   147,   148,   149,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,
    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,    -1,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,    -1,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,   263,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,   276,    -1,   278,   279,    -1,
   281,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,
   301,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,
    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,
    -1,   143,   144,    -1,    -1,    -1,    -1,   149,   150,    -1,
   152,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,
   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
   202,   203,   204,   205,    -1,   207,   208,    -1,   210,   211,
    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,
   222,   223,    -1,    -1,   226,   227,   228,   229,   230,   231,
   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,
   242,    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,
   252,   253,   254,   255,   256,    -1,   258,   259,   260,   261,
   262,   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,
   272,    -1,   274,   275,   276,   277,   278,   279,    -1,   281,
   282,   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,
   292,   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,
   143,   144,    -1,    -1,    -1,    -1,   149,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   192,
    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
   263,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,   276,    -1,   278,   279,    -1,   281,   282,
   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,
   293,    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,
   144,    -1,    -1,    -1,    -1,   149,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,
    -1,   175,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   192,    -1,
    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,    -1,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
   244,   245,   246,    -1,   248,    -1,    -1,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,   276,    -1,   278,   279,    -1,   281,   282,   283,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
    -1,   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    89,    90,    91,    92,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,
    -1,    -1,    -1,   148,   149,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,    -1,   188,    -1,    -1,    -1,   192,    -1,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,   263,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,   276,   277,   278,    -1,    -1,   281,   282,   283,    -1,
    -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,   293,    -1,
   295,    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    89,    90,    91,    92,    -1,    94,    95,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,
    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,
    -1,    -1,    -1,   149,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,    -1,   188,    -1,    -1,    -1,   192,    -1,    -1,   195,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,   263,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
   276,   277,   278,    -1,    -1,   281,   282,   283,    -1,    -1,
    -1,    -1,    -1,   289,    -1,    -1,    -1,   293,    -1,   295,
    -1,    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,    -1,
    -1,    -1,   149,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,   158,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,   263,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,
   277,   278,    -1,    -1,   281,   282,   283,    -1,    -1,    -1,
    -1,    -1,   289,    -1,    -1,    -1,   293,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    -1,    14,    -1,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,
    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,
    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
   138,   139,    -1,   141,    -1,   143,   144,    -1,    -1,    -1,
    -1,   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,
    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,
   188,    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,
    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,
   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,
   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,
   228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
    -1,   239,    -1,   241,   242,    -1,    -1,   245,   246,    -1,
   248,    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,
   258,   259,   260,   261,   262,   263,    -1,   265,   266,   267,
   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,    -1,
   278,    -1,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,
    -1,   289,    -1,    -1,    -1,   293,    -1,   295,    -1,    -1,
    -1,    -1,    -1,   301,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    -1,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,   141,    -1,   143,   144,    -1,    -1,    -1,    -1,
   149,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,   158,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,   263,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,   276,    -1,   278,
    -1,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
   289,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   301,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,   141,    -1,   143,   144,    -1,   146,    -1,   148,   149,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,    -1,   188,    -1,
    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,   263,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,   276,   277,   278,    -1,
    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,
    -1,    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    -1,
    -1,   301,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
   141,    -1,   143,   144,    -1,    -1,    -1,   148,   149,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,    -1,   188,    -1,    -1,
    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,   263,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,   276,    -1,   278,    -1,    -1,
   281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,
    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    -1,     3,
   301,     5,     6,     7,     8,    -1,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,   233,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
   244,   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,    -1,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,    -1,     3,   278,     5,     6,     7,     8,    -1,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,   301,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,    -1,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,    -1,     3,   278,     5,
     6,     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,   301,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,   263,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
   276,   277,   278,    -1,    -1,   281,    -1,   283,    -1,   285,
   286,   287,   288,   289,   290,   291,   292,     3,    -1,     5,
     6,     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,
    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   161,   162,   163,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
    -1,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,   285,
   286,   287,   288,   289,   290,   291,   292,     3,    -1,     5,
     6,     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,
    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   161,   162,   163,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
    -1,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,   285,
   286,   287,   288,   289,   290,   291,   292,     3,    -1,     5,
     6,     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,   165,
    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,
   216,   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,
   226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,   245,
   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,
   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,   265,
   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,
    -1,    -1,   278,    -1,    -1,    -1,   282,    -1,     3,    -1,
     5,     6,     7,     8,   290,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,
    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,   244,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,    -1,    -1,   278,    -1,     3,    -1,     5,     6,     7,
     8,    -1,    10,    11,    12,   290,    14,    -1,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
   138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
    -1,    -1,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,
    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,
   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,
   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,
   228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
    -1,   239,    -1,   241,   242,    -1,    -1,   245,   246,    -1,
   248,    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,
   258,   259,   260,   261,   262,    -1,    -1,   265,   266,   267,
   268,   269,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
   278,    -1,     3,    -1,     5,     6,     7,     8,    -1,    10,
    11,    12,   290,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,    -1,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,    -1,    -1,   278,    -1,     3,
    -1,     5,     6,     7,     8,    -1,    10,    11,    12,   290,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,   233,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
    -1,   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,    -1,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,    -1,    -1,   278,    -1,     3,    -1,     5,     6,
     7,     8,    -1,    10,    11,    12,   290,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,
    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,    -1,
    -1,   278,    -1,     3,    -1,     5,     6,     7,     8,    -1,
    10,    11,    12,   290,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,
    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,
   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,
   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,
   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,
    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,    -1,
   250,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
   260,   261,   262,    -1,    -1,   265,   266,   267,   268,   269,
    -1,    -1,   272,    -1,   274,   275,    -1,    -1,   278,    -1,
    -1,     3,   282,     5,     6,     7,     8,    -1,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,    -1,
    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,
   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,
   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,
   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   202,   203,   204,   205,    -1,   207,   208,    -1,   210,   211,
    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,
   222,   223,    -1,    -1,   226,   227,   228,   229,   230,   231,
   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,
   242,    -1,    -1,   245,   246,    -1,   248,    -1,   250,    -1,
   252,   253,   254,   255,   256,    -1,   258,   259,   260,   261,
   262,    -1,    -1,   265,   266,   267,   268,   269,    -1,    -1,
   272,    -1,   274,   275,   276,    -1,   278,   279,     3,    -1,
     5,     6,     7,     8,    -1,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
    -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,
    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,   276,    -1,   278,   279,     3,    -1,     5,     6,     7,
     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,
    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
   138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
    -1,    -1,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,
    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,
   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,
   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,
   228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
    -1,   239,    -1,   241,   242,    -1,    -1,   245,   246,    -1,
   248,    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,
   258,   259,   260,   261,   262,    -1,    -1,   265,   266,   267,
   268,   269,    -1,    -1,   272,    -1,   274,   275,   276,    -1,
   278,   279,     3,    -1,     5,     6,     7,     8,    -1,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,    -1,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,   276,    -1,   278,   279,     3,
    -1,     5,     6,     7,     8,    -1,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
    -1,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,
    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,
    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,   223,
    -1,    -1,   226,   227,   228,   229,   230,   231,   232,   233,
   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,
    -1,   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,
   254,   255,   256,    -1,   258,   259,   260,   261,   262,    -1,
    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,
   274,   275,    -1,    -1,   278,   279,     3,    -1,     5,     6,
     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
    -1,    -1,    -1,    -1,   101,    -1,   103,   104,    -1,    -1,
    -1,    -1,   109,    -1,    -1,    -1,   113,    -1,    -1,    -1,
   117,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,
   147,    -1,    -1,   150,    -1,   152,   153,    -1,   155,    -1,
    -1,   158,   159,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,   176,
    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,   186,
    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   198,    -1,    -1,    -1,   202,   203,   204,   205,   206,
   207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
   217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,   236,
    -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
   247,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
   257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
   267,   268,   269,    -1,   271,   272,   273,   274,   275,    -1,
     3,   278,     5,     6,     7,     8,    -1,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,   141,    -1,
   143,   144,    -1,    -1,    -1,    -1,   149,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,    -1,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
    -1,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,    -1,     3,   278,     5,     6,     7,     8,
    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
    -1,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,
    -1,   160,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,
    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,    -1,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,   278,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,   140,    -1,    -1,
    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,    -1,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
    -1,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,    -1,     3,   278,     5,     6,     7,     8,
    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
    -1,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,   244,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,    -1,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,    -1,     3,   278,
     5,     6,     7,     8,    -1,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,
    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,   164,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,    -1,     3,   278,     5,     6,     7,     8,    -1,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,   186,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,    -1,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,    -1,     3,   278,     5,     6,
     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,
    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,   186,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,    -1,
     3,   278,     5,     6,     7,     8,    -1,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,
    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,    -1,   245,   246,   247,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
    -1,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,    -1,     3,   278,     5,     6,     7,     8,
    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
    -1,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,    -1,   245,   246,   247,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,    -1,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,    -1,     3,   278,
     5,     6,     7,     8,    -1,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,
    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,   153,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,
   165,    -1,   167,    -1,    -1,    -1,   171,   172,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
   205,    -1,   207,   208,    -1,   210,   211,    -1,   213,    -1,
    -1,   216,   217,   218,   219,   220,    -1,   222,   223,    -1,
    -1,   226,   227,   228,   229,   230,   231,   232,   233,   234,
    -1,    -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,
   245,   246,    -1,   248,    -1,   250,    -1,   252,   253,   254,
   255,   256,    -1,   258,   259,   260,   261,   262,    -1,    -1,
   265,   266,   267,   268,   269,    -1,    -1,   272,    -1,   274,
   275,    -1,     3,   278,     5,     6,     7,     8,    -1,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,    -1,
    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,
    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   161,   162,    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,
   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   202,   203,   204,   205,    -1,   207,   208,    -1,   210,
   211,    -1,   213,    -1,    -1,   216,   217,   218,   219,   220,
    -1,   222,   223,    -1,    -1,   226,   227,   228,   229,   230,
   231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
   241,   242,    -1,    -1,   245,   246,    -1,   248,    -1,   250,
    -1,   252,   253,   254,   255,   256,    -1,   258,   259,   260,
   261,   262,    -1,    -1,   265,   266,   267,   268,   269,    -1,
    -1,   272,    -1,   274,   275,    -1,     3,   278,     5,     6,
     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,
    -1,    -1,    -1,   150,    -1,   152,   153,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,   165,    -1,
   167,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,    -1,
   207,   208,    -1,   210,   211,    -1,   213,    -1,    -1,   216,
   217,   218,   219,   220,    -1,   222,   223,    -1,    -1,   226,
   227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
    -1,    -1,   239,    -1,   241,   242,    -1,    -1,   245,   246,
    -1,   248,    -1,   250,    -1,   252,   253,   254,   255,   256,
    -1,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
   267,   268,   269,    -1,    -1,   272,    -1,   274,   275,    -1,
     3,   278,     5,     6,     7,     8,    -1,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,
    -1,    -1,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,
    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,   152,
   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,
    -1,    -1,   165,    -1,   167,    -1,    -1,    -1,   171,   172,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
   203,   204,   205,    -1,   207,   208,    -1,   210,   211,    -1,
   213,    -1,    -1,   216,   217,   218,   219,   220,    -1,   222,
   223,    -1,    -1,   226,   227,   228,   229,   230,   231,   232,
   233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
    -1,    -1,   245,   246,    -1,   248,    -1,   250,    -1,   252,
   253,   254,   255,   256,    -1,   258,   259,   260,   261,   262,
    -1,    -1,   265,   266,   267,   268,   269,    -1,    -1,   272,
    -1,   274,   275,    -1,     3,   278,     5,     6,     7,     8,
    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
    -1,   150,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   161,   162,    -1,    -1,   165,    -1,   167,    -1,
    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   180,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   203,   204,   205,    -1,   207,   208,
    -1,   210,   211,    -1,   213,    -1,    -1,   216,   217,   218,
   219,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,    -1,
   239,    -1,   241,   242,    -1,    -1,   245,   246,    -1,   248,
    -1,   250,    -1,   252,   253,   254,   255,   256,    -1,   258,
   259,   260,   261,   262,    -1,    -1,   265,   266,   267,   268,
   269,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,   278
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
#line 852 "preproc.y"
{ connection = NULL; ;
    break;}
case 7:
#line 855 "preproc.y"
{ fprintf(yyout, "%s", yyvsp[0].str); free(yyvsp[0].str); ;
    break;}
case 8:
#line 856 "preproc.y"
{ fprintf(yyout, "%s", yyvsp[0].str); free(yyvsp[0].str); ;
    break;}
case 9:
#line 857 "preproc.y"
{ fputs(yyvsp[0].str, yyout); free(yyvsp[0].str); ;
    break;}
case 10:
#line 858 "preproc.y"
{ fputs(yyvsp[0].str, yyout); free(yyvsp[0].str); ;
    break;}
case 11:
#line 860 "preproc.y"
{ connection = yyvsp[0].str; ;
    break;}
case 12:
#line 862 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 13:
#line 863 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 14:
#line 864 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 15:
#line 865 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 16:
#line 866 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 17:
#line 867 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 18:
#line 868 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 19:
#line 869 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 20:
#line 870 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 21:
#line 871 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 22:
#line 872 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 23:
#line 873 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 24:
#line 874 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 25:
#line 875 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 26:
#line 876 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 27:
#line 877 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 28:
#line 878 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 29:
#line 879 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 30:
#line 880 "preproc.y"
{ output_statement(yyvsp[0].str, 1); ;
    break;}
case 31:
#line 881 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 32:
#line 882 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 33:
#line 883 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 34:
#line 884 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 35:
#line 885 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 36:
#line 886 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 37:
#line 887 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 38:
#line 888 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 39:
#line 889 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 40:
#line 890 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 41:
#line 891 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 42:
#line 892 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 43:
#line 893 "preproc.y"
{
						if (strncmp(yyvsp[0].str, "/* " , sizeof("/* ")-1) == 0)
							output_simple_statement(yyvsp[0].str);
						else
							output_statement(yyvsp[0].str, 1);
					;
    break;}
case 44:
#line 899 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 45:
#line 900 "preproc.y"
{
						fprintf(yyout, "ECPGtrans(__LINE__, %s, \"%s\");", connection ? connection : "NULL", yyvsp[0].str);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 46:
#line 905 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 47:
#line 906 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 48:
#line 907 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 49:
#line 908 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 50:
#line 909 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 51:
#line 910 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 52:
#line 911 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 53:
#line 912 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 54:
#line 913 "preproc.y"
{
						if (connection)
							yyerror("no at option for connect statement.\n");

						fprintf(yyout, "ECPGconnect(__LINE__, %s, %d);", yyvsp[0].str, autocommit);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 55:
#line 921 "preproc.y"
{
						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 56:
#line 924 "preproc.y"
{
						if (connection)
							yyerror("no at option for connect statement.\n");

						fputs(yyvsp[0].str, yyout);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 57:
#line 932 "preproc.y"
{
						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 58:
#line 935 "preproc.y"
{
						if (connection)
							yyerror("no at option for disconnect statement.\n");

						fprintf(yyout, "ECPGdisconnect(__LINE__, \"%s\");", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 59:
#line 943 "preproc.y"
{
						output_statement(yyvsp[0].str, 0);
					;
    break;}
case 60:
#line 946 "preproc.y"
{
						fprintf(yyout, "ECPGdeallocate(__LINE__, %s, \"%s\");", connection ? connection : "NULL", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 61:
#line 951 "preproc.y"
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
#line 976 "preproc.y"
{
						if (connection)
							yyerror("no at option for set connection statement.\n");

						fprintf(yyout, "ECPGprepare(__LINE__, %s);", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 63:
#line 984 "preproc.y"
{ /* output already done */ ;
    break;}
case 64:
#line 985 "preproc.y"
{
						fprintf(yyout, "ECPGsetcommit(__LINE__, \"%s\", %s);", yyvsp[0].str, connection ? connection : "NULL");
						whenever_action(0);
                                       		free(yyvsp[0].str);
					;
    break;}
case 65:
#line 990 "preproc.y"
{
						if (connection)
							yyerror("no at option for set connection statement.\n");

						fprintf(yyout, "ECPGsetconn(__LINE__, %s);", yyvsp[0].str);
						whenever_action(0);
                                       		free(yyvsp[0].str);
					;
    break;}
case 66:
#line 998 "preproc.y"
{
						if (connection)
							yyerror("no at option for typedef statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 67:
#line 1004 "preproc.y"
{
						if (connection)
							yyerror("no at option for var statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 68:
#line 1010 "preproc.y"
{
						if (connection)
							yyerror("no at option for whenever statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 69:
#line 1032 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("create user"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 70:
#line 1046 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("alter user"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 71:
#line 1059 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop user"), yyvsp[0].str);
				;
    break;}
case 72:
#line 1064 "preproc.y"
{ yyval.str = cat2_str(make1_str("with password") , yyvsp[0].str); ;
    break;}
case 73:
#line 1065 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 74:
#line 1069 "preproc.y"
{
					yyval.str = make1_str("createdb");
				;
    break;}
case 75:
#line 1073 "preproc.y"
{
					yyval.str = make1_str("nocreatedb");
				;
    break;}
case 76:
#line 1076 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 77:
#line 1080 "preproc.y"
{
					yyval.str = make1_str("createuser");
				;
    break;}
case 78:
#line 1084 "preproc.y"
{
					yyval.str = make1_str("nocreateuser");
				;
    break;}
case 79:
#line 1087 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 80:
#line 1091 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 81:
#line 1095 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 82:
#line 1100 "preproc.y"
{ yyval.str = cat2_str(make1_str("in group"), yyvsp[0].str); ;
    break;}
case 83:
#line 1101 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 84:
#line 1104 "preproc.y"
{ yyval.str = cat2_str(make1_str("valid until"), yyvsp[0].str); ;
    break;}
case 85:
#line 1105 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 86:
#line 1118 "preproc.y"
{
					yyval.str = cat4_str(make1_str("set"), yyvsp[-2].str, make1_str("to"), yyvsp[0].str);
				;
    break;}
case 87:
#line 1122 "preproc.y"
{
					yyval.str = cat4_str(make1_str("set"), yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 88:
#line 1126 "preproc.y"
{
					yyval.str = cat2_str(make1_str("set time zone"), yyvsp[0].str);
				;
    break;}
case 89:
#line 1130 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "COMMITTED"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
						yyerror(errortext);
					}

					yyval.str = cat2_str(make1_str("set transaction isolation level read"), yyvsp[0].str);
				;
    break;}
case 90:
#line 1140 "preproc.y"
{
					if (strcasecmp(yyvsp[0].str, "SERIALIZABLE"))
					{
                                                sprintf(errortext, "syntax error at or near \"%s\"", yyvsp[0].str);
                                                yyerror(errortext);
					}

					yyval.str = cat2_str(make1_str("set transaction isolation level read"), yyvsp[0].str);
				;
    break;}
case 91:
#line 1150 "preproc.y"
{
#ifdef MB
					yyval.str = cat2_str(make1_str("set names"), yyvsp[0].str);
#else
                                        yyerror("SET NAMES is not supported");
#endif
                                ;
    break;}
case 92:
#line 1159 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 93:
#line 1160 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 94:
#line 1163 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 95:
#line 1164 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 96:
#line 1165 "preproc.y"
{ yyval.str = make1_str("local"); ;
    break;}
case 97:
#line 1169 "preproc.y"
{
					yyval.str = cat2_str(make1_str("show"), yyvsp[0].str);
				;
    break;}
case 98:
#line 1173 "preproc.y"
{
					yyval.str = make1_str("show time zone");
				;
    break;}
case 99:
#line 1177 "preproc.y"
{
					yyval.str = make1_str("show transaction isolation level");
				;
    break;}
case 100:
#line 1183 "preproc.y"
{
					yyval.str = cat2_str(make1_str("reset"), yyvsp[0].str);
				;
    break;}
case 101:
#line 1187 "preproc.y"
{
					yyval.str = make1_str("reset time zone");
				;
    break;}
case 102:
#line 1191 "preproc.y"
{
					yyval.str = make1_str("reset transaction isolation level");
				;
    break;}
case 103:
#line 1205 "preproc.y"
{
					yyval.str = cat4_str(make1_str("alter table"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 104:
#line 1211 "preproc.y"
{
					yyval.str = cat3_str(make1_str("add"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 105:
#line 1215 "preproc.y"
{
					yyval.str = make3_str(make1_str("add("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 106:
#line 1219 "preproc.y"
{	yyerror("ALTER TABLE/DROP COLUMN not yet implemented"); ;
    break;}
case 107:
#line 1221 "preproc.y"
{	yyerror("ALTER TABLE/ALTER COLUMN/SET DEFAULT not yet implemented"); ;
    break;}
case 108:
#line 1223 "preproc.y"
{	yyerror("ALTER TABLE/ALTER COLUMN/DROP DEFAULT not yet implemented"); ;
    break;}
case 109:
#line 1225 "preproc.y"
{	yyerror("ALTER TABLE/ADD CONSTRAINT not yet implemented"); ;
    break;}
case 110:
#line 1236 "preproc.y"
{
					yyval.str = cat2_str(make1_str("close"), yyvsp[0].str);
				;
    break;}
case 111:
#line 1251 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("copy"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 112:
#line 1257 "preproc.y"
{ yyval.str = make1_str("to"); ;
    break;}
case 113:
#line 1259 "preproc.y"
{ yyval.str = make1_str("from"); ;
    break;}
case 114:
#line 1267 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 115:
#line 1268 "preproc.y"
{ yyval.str = make1_str("stdin"); ;
    break;}
case 116:
#line 1269 "preproc.y"
{ yyval.str = make1_str("stdout"); ;
    break;}
case 117:
#line 1272 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 118:
#line 1273 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 119:
#line 1276 "preproc.y"
{ yyval.str = make1_str("with oids"); ;
    break;}
case 120:
#line 1277 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 121:
#line 1283 "preproc.y"
{ yyval.str = cat2_str(make1_str("using delimiters"), yyvsp[0].str); ;
    break;}
case 122:
#line 1284 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 123:
#line 1298 "preproc.y"
{
					yyval.str = cat3_str(cat4_str(make1_str("create"), yyvsp[-6].str, make1_str("table"), yyvsp[-4].str), make3_str(make1_str("("), yyvsp[-2].str, make1_str(")")), yyvsp[0].str);
				;
    break;}
case 124:
#line 1303 "preproc.y"
{ yyval.str = make1_str("temp"); ;
    break;}
case 125:
#line 1304 "preproc.y"
{ yyval.str = make1_str("temporary"); ;
    break;}
case 126:
#line 1305 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 127:
#line 1309 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 128:
#line 1313 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 129:
#line 1316 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 130:
#line 1319 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 131:
#line 1320 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 132:
#line 1324 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 133:
#line 1328 "preproc.y"
{
			yyval.str = make3_str(yyvsp[-2].str, make1_str(" serial "), yyvsp[0].str);
		;
    break;}
case 134:
#line 1333 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 135:
#line 1334 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 136:
#line 1337 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str,yyvsp[0].str); ;
    break;}
case 137:
#line 1338 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 138:
#line 1342 "preproc.y"
{
			yyval.str = make1_str("primary key");
                ;
    break;}
case 139:
#line 1346 "preproc.y"
{
			yyval.str = make1_str("");
		;
    break;}
case 140:
#line 1353 "preproc.y"
{
					yyval.str = cat3_str(make1_str("constraint"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 141:
#line 1357 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 142:
#line 1371 "preproc.y"
{
					yyval.str = make3_str(make1_str("check("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 143:
#line 1375 "preproc.y"
{
					yyval.str = make1_str("default null");
				;
    break;}
case 144:
#line 1379 "preproc.y"
{
					yyval.str = cat2_str(make1_str("default"), yyvsp[0].str);
				;
    break;}
case 145:
#line 1383 "preproc.y"
{
					yyval.str = make1_str("not null");
				;
    break;}
case 146:
#line 1387 "preproc.y"
{
					yyval.str = make1_str("unique");
				;
    break;}
case 147:
#line 1391 "preproc.y"
{
					yyval.str = make1_str("primary key");
				;
    break;}
case 148:
#line 1395 "preproc.y"
{
					fprintf(stderr, "CREATE TABLE/FOREIGN KEY clause ignored; not yet implemented");
					yyval.str = make1_str("");
				;
    break;}
case 149:
#line 1402 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 150:
#line 1406 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 151:
#line 1420 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 152:
#line 1422 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 153:
#line 1424 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 154:
#line 1426 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 155:
#line 1428 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 156:
#line 1430 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 157:
#line 1432 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 158:
#line 1434 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 159:
#line 1436 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 160:
#line 1438 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 161:
#line 1444 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 162:
#line 1446 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 163:
#line 1448 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str); ;
    break;}
case 164:
#line 1450 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str) , make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 165:
#line 1454 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 166:
#line 1456 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); ;
    break;}
case 167:
#line 1458 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); ;
    break;}
case 168:
#line 1460 "preproc.y"
{
					if (!strcmp("<=", yyvsp[-1].str) || !strcmp(">=", yyvsp[-1].str))
						yyerror("boolean expressions not supported in DEFAULT");
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 169:
#line 1466 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 170:
#line 1468 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 171:
#line 1471 "preproc.y"
{	yyval.str = make1_str("current_date"); ;
    break;}
case 172:
#line 1473 "preproc.y"
{	yyval.str = make1_str("current_time"); ;
    break;}
case 173:
#line 1475 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr, "CURRENT_TIME(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = "current_time";
				;
    break;}
case 174:
#line 1481 "preproc.y"
{	yyval.str = make1_str("current_timestamp"); ;
    break;}
case 175:
#line 1483 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr, "CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = "current_timestamp";
				;
    break;}
case 176:
#line 1489 "preproc.y"
{	yyval.str = make1_str("current_user"); ;
    break;}
case 177:
#line 1491 "preproc.y"
{       yyval.str = make1_str("user"); ;
    break;}
case 178:
#line 1499 "preproc.y"
{
						yyval.str = cat3_str(make1_str("constraint"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 179:
#line 1503 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 180:
#line 1507 "preproc.y"
{
					yyval.str = make3_str(make1_str("check("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 181:
#line 1511 "preproc.y"
{
					yyval.str = make3_str(make1_str("unique("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 182:
#line 1515 "preproc.y"
{
					yyval.str = make3_str(make1_str("primary key("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 183:
#line 1519 "preproc.y"
{
					fprintf(stderr, "CREATE TABLE/FOREIGN KEY clause ignored; not yet implemented");
					yyval.str = "";
				;
    break;}
case 184:
#line 1526 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 185:
#line 1530 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 186:
#line 1536 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 187:
#line 1538 "preproc.y"
{	yyval.str = make1_str("null"); ;
    break;}
case 188:
#line 1540 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 189:
#line 1544 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 190:
#line 1546 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 191:
#line 1548 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 192:
#line 1550 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 193:
#line 1552 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 194:
#line 1554 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 195:
#line 1556 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 196:
#line 1558 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 197:
#line 1560 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 198:
#line 1566 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 199:
#line 1568 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 200:
#line 1570 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 201:
#line 1574 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 202:
#line 1578 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 203:
#line 1580 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); }
				;
    break;}
case 204:
#line 1584 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 205:
#line 1588 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 206:
#line 1590 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 207:
#line 1592 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 208:
#line 1594 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 209:
#line 1596 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 210:
#line 1598 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 211:
#line 1600 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 212:
#line 1602 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 213:
#line 1604 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 214:
#line 1606 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 215:
#line 1608 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 216:
#line 1610 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 217:
#line 1612 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); ;
    break;}
case 218:
#line 1614 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); ;
    break;}
case 219:
#line 1616 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); ;
    break;}
case 220:
#line 1618 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); ;
    break;}
case 221:
#line 1620 "preproc.y"
{	yyval.str = cat4_str(yyvsp[-4].str, make1_str("in ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 222:
#line 1622 "preproc.y"
{	yyval.str = cat4_str(yyvsp[-5].str, make1_str("not in ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 223:
#line 1624 "preproc.y"
{	yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 224:
#line 1626 "preproc.y"
{	yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 225:
#line 1629 "preproc.y"
{
		yyval.str = make3_str(yyvsp[-2].str, make1_str(", "), yyvsp[0].str);
	;
    break;}
case 226:
#line 1633 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 227:
#line 1638 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 228:
#line 1642 "preproc.y"
{ yyval.str = make1_str("match full"); ;
    break;}
case 229:
#line 1643 "preproc.y"
{ yyval.str = make1_str("match partial"); ;
    break;}
case 230:
#line 1644 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 231:
#line 1647 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 232:
#line 1648 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 233:
#line 1649 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 234:
#line 1652 "preproc.y"
{ yyval.str = cat2_str(make1_str("on delete"), yyvsp[0].str); ;
    break;}
case 235:
#line 1653 "preproc.y"
{ yyval.str = cat2_str(make1_str("on update"), yyvsp[0].str); ;
    break;}
case 236:
#line 1656 "preproc.y"
{ yyval.str = make1_str("no action"); ;
    break;}
case 237:
#line 1657 "preproc.y"
{ yyval.str = make1_str("cascade"); ;
    break;}
case 238:
#line 1658 "preproc.y"
{ yyval.str = make1_str("set default"); ;
    break;}
case 239:
#line 1659 "preproc.y"
{ yyval.str = make1_str("set null"); ;
    break;}
case 240:
#line 1662 "preproc.y"
{ yyval.str = make3_str(make1_str("inherits ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 241:
#line 1663 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 242:
#line 1667 "preproc.y"
{
			yyval.str = cat5_str(cat3_str(make1_str("create"), yyvsp[-5].str, make1_str("table")), yyvsp[-3].str, yyvsp[-2].str, make1_str("as"), yyvsp[0].str); 
		;
    break;}
case 243:
#line 1672 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 244:
#line 1673 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 245:
#line 1676 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 246:
#line 1677 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 247:
#line 1680 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 248:
#line 1691 "preproc.y"
{
					yyval.str = cat3_str(make1_str("create sequence"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 249:
#line 1697 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 250:
#line 1698 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 251:
#line 1702 "preproc.y"
{
					yyval.str = cat2_str(make1_str("cache"), yyvsp[0].str);
				;
    break;}
case 252:
#line 1706 "preproc.y"
{
					yyval.str = make1_str("cycle");
				;
    break;}
case 253:
#line 1710 "preproc.y"
{
					yyval.str = cat2_str(make1_str("increment"), yyvsp[0].str);
				;
    break;}
case 254:
#line 1714 "preproc.y"
{
					yyval.str = cat2_str(make1_str("maxvalue"), yyvsp[0].str);
				;
    break;}
case 255:
#line 1718 "preproc.y"
{
					yyval.str = cat2_str(make1_str("minvalue"), yyvsp[0].str);
				;
    break;}
case 256:
#line 1722 "preproc.y"
{
					yyval.str = cat2_str(make1_str("start"), yyvsp[0].str);
				;
    break;}
case 257:
#line 1727 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 258:
#line 1728 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 259:
#line 1731 "preproc.y"
{
                                       yyval.str = yyvsp[0].str;
                               ;
    break;}
case 260:
#line 1735 "preproc.y"
{
                                       yyval.str = cat2_str(make1_str("-"), yyvsp[0].str);
                               ;
    break;}
case 261:
#line 1742 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 262:
#line 1746 "preproc.y"
{
					yyval.str = cat2_str(make1_str("-"), yyvsp[0].str);
				;
    break;}
case 263:
#line 1761 "preproc.y"
{
				yyval.str = cat4_str(cat5_str(make1_str("create"), yyvsp[-7].str, make1_str("precedural language"), yyvsp[-4].str, make1_str("handler")), yyvsp[-2].str, make1_str("langcompiler"), yyvsp[0].str);
			;
    break;}
case 264:
#line 1766 "preproc.y"
{ yyval.str = make1_str("trusted"); ;
    break;}
case 265:
#line 1767 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 266:
#line 1770 "preproc.y"
{
				yyval.str = cat2_str(make1_str("drop procedural language"), yyvsp[0].str);
			;
    break;}
case 267:
#line 1786 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create trigger"), yyvsp[-11].str, yyvsp[-10].str, yyvsp[-9].str, make1_str("on")), yyvsp[-7].str, yyvsp[-6].str, make1_str("execute procedure"), yyvsp[-3].str), make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 268:
#line 1791 "preproc.y"
{ yyval.str = make1_str("before"); ;
    break;}
case 269:
#line 1792 "preproc.y"
{ yyval.str = make1_str("after"); ;
    break;}
case 270:
#line 1796 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 271:
#line 1800 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str);
				;
    break;}
case 272:
#line 1804 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("or"), yyvsp[-2].str, make1_str("or"), yyvsp[0].str);
				;
    break;}
case 273:
#line 1809 "preproc.y"
{ yyval.str = make1_str("insert"); ;
    break;}
case 274:
#line 1810 "preproc.y"
{ yyval.str = make1_str("delete"); ;
    break;}
case 275:
#line 1811 "preproc.y"
{ yyval.str = make1_str("update"); ;
    break;}
case 276:
#line 1815 "preproc.y"
{
					yyval.str = cat3_str(make1_str("for"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 277:
#line 1820 "preproc.y"
{ yyval.str = make1_str("each"); ;
    break;}
case 278:
#line 1821 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 279:
#line 1824 "preproc.y"
{ yyval.str = make1_str("row"); ;
    break;}
case 280:
#line 1825 "preproc.y"
{ yyval.str = make1_str("statement"); ;
    break;}
case 281:
#line 1829 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 282:
#line 1831 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 283:
#line 1833 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 284:
#line 1837 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 285:
#line 1841 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 286:
#line 1844 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 287:
#line 1845 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 288:
#line 1849 "preproc.y"
{
					yyval.str = cat4_str(make1_str("drop trigger"), yyvsp[-2].str, make1_str("on"), yyvsp[0].str);
				;
    break;}
case 289:
#line 1862 "preproc.y"
{
					yyval.str = cat3_str(make1_str("create"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 290:
#line 1868 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 291:
#line 1873 "preproc.y"
{ yyval.str = make1_str("operator"); ;
    break;}
case 292:
#line 1874 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 293:
#line 1875 "preproc.y"
{ yyval.str = make1_str("aggregate"); ;
    break;}
case 294:
#line 1878 "preproc.y"
{ yyval.str = make1_str("procedure"); ;
    break;}
case 295:
#line 1879 "preproc.y"
{ yyval.str = make1_str("join"); ;
    break;}
case 296:
#line 1880 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 297:
#line 1881 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 298:
#line 1882 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 299:
#line 1885 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 300:
#line 1888 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 301:
#line 1889 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 302:
#line 1892 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 303:
#line 1896 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 304:
#line 1900 "preproc.y"
{
					yyval.str = cat2_str(make1_str("default ="), yyvsp[0].str);
				;
    break;}
case 305:
#line 1905 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 306:
#line 1906 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 307:
#line 1907 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 308:
#line 1908 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 309:
#line 1910 "preproc.y"
{
					yyval.str = cat2_str(make1_str("setof"), yyvsp[0].str);
				;
    break;}
case 310:
#line 1923 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop table"), yyvsp[0].str);
				;
    break;}
case 311:
#line 1927 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop sequence"), yyvsp[0].str);
				;
    break;}
case 312:
#line 1944 "preproc.y"
{
					if (strncmp(yyvsp[-4].str, "relative", strlen("relative")) == 0 && atol(yyvsp[-3].str) == 0L)
						yyerror("FETCH/RELATIVE at current position is not supported");

					yyval.str = cat4_str(make1_str("fetch"), yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str);
				;
    break;}
case 313:
#line 1951 "preproc.y"
{
					yyval.str = cat4_str(make1_str("fetch"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 314:
#line 1956 "preproc.y"
{ yyval.str = make1_str("forward"); ;
    break;}
case 315:
#line 1957 "preproc.y"
{ yyval.str = make1_str("backward"); ;
    break;}
case 316:
#line 1958 "preproc.y"
{ yyval.str = make1_str("relative"); ;
    break;}
case 317:
#line 1960 "preproc.y"
{
					fprintf(stderr, "FETCH/ABSOLUTE not supported, using RELATIVE");
					yyval.str = make1_str("absolute");
				;
    break;}
case 318:
#line 1964 "preproc.y"
{ yyval.str = make1_str(""); /* default */ ;
    break;}
case 319:
#line 1967 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 320:
#line 1968 "preproc.y"
{ yyval.str = make2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 321:
#line 1969 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 322:
#line 1970 "preproc.y"
{ yyval.str = make1_str("next"); ;
    break;}
case 323:
#line 1971 "preproc.y"
{ yyval.str = make1_str("prior"); ;
    break;}
case 324:
#line 1972 "preproc.y"
{ yyval.str = make1_str(""); /*default*/ ;
    break;}
case 325:
#line 1975 "preproc.y"
{ yyval.str = cat2_str(make1_str("in"), yyvsp[0].str); ;
    break;}
case 326:
#line 1976 "preproc.y"
{ yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 327:
#line 1978 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 328:
#line 1990 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("grant"), yyvsp[-5].str, make1_str("on"), yyvsp[-3].str, make1_str("to")), yyvsp[-1].str);
				;
    break;}
case 329:
#line 1996 "preproc.y"
{
				 yyval.str = make1_str("all privileges");
				;
    break;}
case 330:
#line 2000 "preproc.y"
{
				 yyval.str = make1_str("all");
				;
    break;}
case 331:
#line 2004 "preproc.y"
{
				 yyval.str = yyvsp[0].str;
				;
    break;}
case 332:
#line 2010 "preproc.y"
{
						yyval.str = yyvsp[0].str;
				;
    break;}
case 333:
#line 2014 "preproc.y"
{
						yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 334:
#line 2020 "preproc.y"
{
						yyval.str = make1_str("select");
				;
    break;}
case 335:
#line 2024 "preproc.y"
{
						yyval.str = make1_str("insert");
				;
    break;}
case 336:
#line 2028 "preproc.y"
{
						yyval.str = make1_str("update");
				;
    break;}
case 337:
#line 2032 "preproc.y"
{
						yyval.str = make1_str("delete");
				;
    break;}
case 338:
#line 2036 "preproc.y"
{
						yyval.str = make1_str("rule");
				;
    break;}
case 339:
#line 2042 "preproc.y"
{
						yyval.str = make1_str("public");
				;
    break;}
case 340:
#line 2046 "preproc.y"
{
						yyval.str = cat2_str(make1_str("group"), yyvsp[0].str);
				;
    break;}
case 341:
#line 2050 "preproc.y"
{
						yyval.str = yyvsp[0].str;
				;
    break;}
case 342:
#line 2056 "preproc.y"
{
					yyerror("WITH GRANT OPTION is not supported.  Only relation owners can set privileges");
				 ;
    break;}
case 344:
#line 2071 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("revoke"), yyvsp[-4].str, make1_str("on"), yyvsp[-2].str, make1_str("from")), yyvsp[0].str);
				;
    break;}
case 345:
#line 2090 "preproc.y"
{
					/* should check that access_method is valid,
					   etc ... but doesn't */
					yyval.str = cat5_str(cat5_str(make1_str("create"), yyvsp[-9].str, make1_str("index"), yyvsp[-7].str, make1_str("on")), yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("("), yyvsp[-2].str, make1_str(")")), yyvsp[0].str);
				;
    break;}
case 346:
#line 2097 "preproc.y"
{ yyval.str = make1_str("unique"); ;
    break;}
case 347:
#line 2098 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 348:
#line 2101 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 349:
#line 2102 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 350:
#line 2105 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 351:
#line 2106 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 352:
#line 2109 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 353:
#line 2110 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 354:
#line 2114 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-5].str, make3_str(make1_str("("), yyvsp[-3].str, ")"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 355:
#line 2120 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 356:
#line 2125 "preproc.y"
{ yyval.str = cat2_str(make1_str(":"), yyvsp[0].str); ;
    break;}
case 357:
#line 2126 "preproc.y"
{ yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 358:
#line 2127 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 359:
#line 2136 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 360:
#line 2137 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 361:
#line 2138 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 362:
#line 2149 "preproc.y"
{
					yyval.str = cat3_str(make1_str("extend index"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 363:
#line 2186 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create function"), yyvsp[-8].str, yyvsp[-7].str, make1_str("returns"), yyvsp[-5].str), yyvsp[-4].str, make1_str("as"), yyvsp[-2].str, make1_str("language")), yyvsp[0].str);
				;
    break;}
case 364:
#line 2190 "preproc.y"
{ yyval.str = cat2_str(make1_str("with"), yyvsp[0].str); ;
    break;}
case 365:
#line 2191 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 366:
#line 2194 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 367:
#line 2195 "preproc.y"
{ yyval.str = make1_str("()"); ;
    break;}
case 368:
#line 2198 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 369:
#line 2200 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 370:
#line 2204 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 371:
#line 2209 "preproc.y"
{ yyval.str = make1_str("setof"); ;
    break;}
case 372:
#line 2210 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 373:
#line 2232 "preproc.y"
{
					yyval.str = cat3_str(make1_str("drop"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 374:
#line 2237 "preproc.y"
{  yyval.str = make1_str("type"); ;
    break;}
case 375:
#line 2238 "preproc.y"
{  yyval.str = make1_str("index"); ;
    break;}
case 376:
#line 2239 "preproc.y"
{  yyval.str = make1_str("rule"); ;
    break;}
case 377:
#line 2240 "preproc.y"
{  yyval.str = make1_str("view"); ;
    break;}
case 378:
#line 2245 "preproc.y"
{
						yyval.str = cat3_str(make1_str("drop aggregate"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 379:
#line 2250 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 380:
#line 2251 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 381:
#line 2256 "preproc.y"
{
						yyval.str = cat3_str(make1_str("drop function"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 382:
#line 2263 "preproc.y"
{
					yyval.str = cat3_str(make1_str("drop operator"), yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 385:
#line 2270 "preproc.y"
{ yyval.str = make1_str("+"); ;
    break;}
case 386:
#line 2271 "preproc.y"
{ yyval.str = make1_str("-"); ;
    break;}
case 387:
#line 2272 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 388:
#line 2273 "preproc.y"
{ yyval.str = make1_str("%"); ;
    break;}
case 389:
#line 2274 "preproc.y"
{ yyval.str = make1_str("/"); ;
    break;}
case 390:
#line 2275 "preproc.y"
{ yyval.str = make1_str("<"); ;
    break;}
case 391:
#line 2276 "preproc.y"
{ yyval.str = make1_str(">"); ;
    break;}
case 392:
#line 2277 "preproc.y"
{ yyval.str = make1_str("="); ;
    break;}
case 393:
#line 2281 "preproc.y"
{
				   yyerror("parser: argument type missing (use NONE for unary operators)");
				;
    break;}
case 394:
#line 2285 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 395:
#line 2287 "preproc.y"
{ yyval.str = cat2_str(make1_str("none,"), yyvsp[0].str); ;
    break;}
case 396:
#line 2289 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-2].str, make1_str(", none")); ;
    break;}
case 397:
#line 2303 "preproc.y"
{
					yyval.str = cat4_str(cat5_str(make1_str("alter table"), yyvsp[-6].str, yyvsp[-5].str, make1_str("rename"), yyvsp[-3].str), yyvsp[-2].str, make1_str("to"), yyvsp[0].str);
				;
    break;}
case 398:
#line 2308 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 399:
#line 2309 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 400:
#line 2312 "preproc.y"
{ yyval.str = make1_str("colmunn"); ;
    break;}
case 401:
#line 2313 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 402:
#line 2327 "preproc.y"
{ QueryIsRule=1; ;
    break;}
case 403:
#line 2330 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create rule"), yyvsp[-10].str, make1_str("as on"), yyvsp[-6].str, make1_str("to")), yyvsp[-4].str, yyvsp[-3].str, make1_str("do"), yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 404:
#line 2335 "preproc.y"
{ yyval.str = make1_str("nothing"); ;
    break;}
case 405:
#line 2336 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 406:
#line 2337 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 407:
#line 2338 "preproc.y"
{ yyval.str = cat3_str(make1_str("["), yyvsp[-1].str, make1_str("]")); ;
    break;}
case 408:
#line 2339 "preproc.y"
{ yyval.str = cat3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 409:
#line 2342 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 410:
#line 2343 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 411:
#line 2347 "preproc.y"
{  yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 412:
#line 2349 "preproc.y"
{  yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, make1_str(";")); ;
    break;}
case 413:
#line 2351 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, make1_str(";")); ;
    break;}
case 418:
#line 2361 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 419:
#line 2365 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 420:
#line 2371 "preproc.y"
{ yyval.str = make1_str("select"); ;
    break;}
case 421:
#line 2372 "preproc.y"
{ yyval.str = make1_str("update"); ;
    break;}
case 422:
#line 2373 "preproc.y"
{ yyval.str = make1_str("delete"); ;
    break;}
case 423:
#line 2374 "preproc.y"
{ yyval.str = make1_str("insert"); ;
    break;}
case 424:
#line 2377 "preproc.y"
{ yyval.str = make1_str("instead"); ;
    break;}
case 425:
#line 2378 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 426:
#line 2391 "preproc.y"
{
					yyval.str = cat2_str(make1_str("notify"), yyvsp[0].str);
				;
    break;}
case 427:
#line 2397 "preproc.y"
{
					yyval.str = cat2_str(make1_str("listen"), yyvsp[0].str);
                                ;
    break;}
case 428:
#line 2403 "preproc.y"
{
					yyval.str = cat2_str(make1_str("unlisten"), yyvsp[0].str);
                                ;
    break;}
case 429:
#line 2407 "preproc.y"
{
					yyval.str = make1_str("unlisten *");
                                ;
    break;}
case 430:
#line 2424 "preproc.y"
{ yyval.str = make1_str("rollback"); ;
    break;}
case 431:
#line 2425 "preproc.y"
{ yyval.str = make1_str("begin transaction"); ;
    break;}
case 432:
#line 2426 "preproc.y"
{ yyval.str = make1_str("commit"); ;
    break;}
case 433:
#line 2427 "preproc.y"
{ yyval.str = make1_str("commit"); ;
    break;}
case 434:
#line 2428 "preproc.y"
{ yyval.str = make1_str("rollback"); ;
    break;}
case 435:
#line 2430 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 436:
#line 2431 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 437:
#line 2432 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 438:
#line 2443 "preproc.y"
{
					yyval.str = cat4_str(make1_str("create view"), yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
				;
    break;}
case 439:
#line 2457 "preproc.y"
{
					yyval.str = cat2_str(make1_str("load"), yyvsp[0].str);
				;
    break;}
case 440:
#line 2471 "preproc.y"
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
case 441:
#line 2481 "preproc.y"
{
					yyval.str = cat2_str(make1_str("create database"), yyvsp[0].str);
				;
    break;}
case 442:
#line 2486 "preproc.y"
{ yyval.str = cat2_str(make1_str("location ="), yyvsp[0].str); ;
    break;}
case 443:
#line 2487 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 444:
#line 2490 "preproc.y"
{ yyval.str = cat2_str(make1_str("encoding ="), yyvsp[0].str); ;
    break;}
case 445:
#line 2491 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 446:
#line 2494 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 447:
#line 2495 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 448:
#line 2496 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 449:
#line 2499 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 450:
#line 2500 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 451:
#line 2501 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 452:
#line 2512 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop database"), yyvsp[0].str);
				;
    break;}
case 453:
#line 2526 "preproc.y"
{
				   yyval.str = cat4_str(make1_str("cluster"), yyvsp[-2].str, make1_str("on"), yyvsp[0].str);
				;
    break;}
case 454:
#line 2540 "preproc.y"
{
					yyval.str = cat3_str(make1_str("vacuum"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 455:
#line 2544 "preproc.y"
{
					if ( strlen(yyvsp[0].str) > 0 && strlen(yyvsp[-1].str) == 0 )
						yyerror("parser: syntax error at or near \"(\"");
					yyval.str = cat5_str(make1_str("vacuum"), yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 456:
#line 2551 "preproc.y"
{ yyval.str = make1_str("verbose"); ;
    break;}
case 457:
#line 2552 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 458:
#line 2555 "preproc.y"
{ yyval.str = make1_str("analyse"); ;
    break;}
case 459:
#line 2556 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 460:
#line 2559 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 461:
#line 2560 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 462:
#line 2564 "preproc.y"
{ yyval.str=yyvsp[0].str; ;
    break;}
case 463:
#line 2566 "preproc.y"
{ yyval.str=cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 464:
#line 2578 "preproc.y"
{
					yyval.str = cat3_str(make1_str("explain"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 471:
#line 2618 "preproc.y"
{
					yyval.str = cat3_str(make1_str("insert into"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 472:
#line 2624 "preproc.y"
{
					yyval.str = make3_str(make1_str("values("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 473:
#line 2628 "preproc.y"
{
					yyval.str = make1_str("default values");
				;
    break;}
case 474:
#line 2632 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 475:
#line 2636 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-5].str, make1_str(") values ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 476:
#line 2640 "preproc.y"
{
					yyval.str = make4_str(make1_str("("), yyvsp[-2].str, make1_str(")"), yyvsp[0].str);
				;
    break;}
case 477:
#line 2645 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 478:
#line 2646 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 479:
#line 2651 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 480:
#line 2653 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 481:
#line 2657 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 482:
#line 2672 "preproc.y"
{
					yyval.str = cat3_str(make1_str("delete from"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 483:
#line 2678 "preproc.y"
{
					yyval.str = cat3_str(make1_str("lock"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 484:
#line 2682 "preproc.y"
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
case 485:
#line 2713 "preproc.y"
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
case 486:
#line 2733 "preproc.y"
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
case 487:
#line 2749 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 488:
#line 2750 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 489:
#line 2767 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("update"), yyvsp[-4].str, make1_str("set"), yyvsp[-2].str, yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 490:
#line 2780 "preproc.y"
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
case 491:
#line 2810 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 492:
#line 2811 "preproc.y"
{ yyval.str = make1_str("insensitive"); ;
    break;}
case 493:
#line 2812 "preproc.y"
{ yyval.str = make1_str("scroll"); ;
    break;}
case 494:
#line 2813 "preproc.y"
{ yyval.str = make1_str("insensitive scroll"); ;
    break;}
case 495:
#line 2814 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 496:
#line 2817 "preproc.y"
{ yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 497:
#line 2818 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 498:
#line 2822 "preproc.y"
{ yyval.str = make1_str("read only"); ;
    break;}
case 499:
#line 2824 "preproc.y"
{
                               yyerror("DECLARE/UPDATE not supported; Cursors must be READ ONLY.");
                       ;
    break;}
case 500:
#line 2829 "preproc.y"
{ yyval.str = make2_str(make1_str("of"), yyvsp[0].str); ;
    break;}
case 501:
#line 2846 "preproc.y"
{
					if (strlen(yyvsp[-1].str) > 0 && ForUpdateNotAllowed != 0)
							yyerror("SELECT FOR UPDATE is not allowed in this context");

					ForUpdateNotAllowed = 0;
					yyval.str = cat4_str(yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 502:
#line 2863 "preproc.y"
{
                               yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); 
                        ;
    break;}
case 503:
#line 2867 "preproc.y"
{
                               yyval.str = yyvsp[0].str; 
                        ;
    break;}
case 504:
#line 2871 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-2].str, make1_str("except"), yyvsp[0].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 505:
#line 2876 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-3].str, make1_str("union"), yyvsp[-1].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 506:
#line 2881 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-3].str, make1_str("intersect"), yyvsp[-1].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 507:
#line 2891 "preproc.y"
{
					yyval.str = cat4_str(cat5_str(make1_str("select"), yyvsp[-6].str, yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
					if (strlen(yyvsp[-1].str) > 0 || strlen(yyvsp[0].str) > 0)
						ForUpdateNotAllowed = 1;
				;
    break;}
case 508:
#line 2898 "preproc.y"
{ yyval.str= cat4_str(make1_str("into"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 509:
#line 2899 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 510:
#line 2900 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 511:
#line 2903 "preproc.y"
{ yyval.str = make1_str("table"); ;
    break;}
case 512:
#line 2904 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 513:
#line 2907 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 514:
#line 2908 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 515:
#line 2911 "preproc.y"
{ yyval.str = make1_str("distinct"); ;
    break;}
case 516:
#line 2912 "preproc.y"
{ yyval.str = cat2_str(make1_str("distinct on"), yyvsp[0].str); ;
    break;}
case 517:
#line 2913 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 518:
#line 2914 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 519:
#line 2917 "preproc.y"
{ yyval.str = cat2_str(make1_str("order by"), yyvsp[0].str); ;
    break;}
case 520:
#line 2918 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 521:
#line 2921 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 522:
#line 2922 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 523:
#line 2926 "preproc.y"
{
					 yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 524:
#line 2931 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 525:
#line 2932 "preproc.y"
{ yyval.str = make1_str("using <"); ;
    break;}
case 526:
#line 2933 "preproc.y"
{ yyval.str = make1_str("using >"); ;
    break;}
case 527:
#line 2934 "preproc.y"
{ yyval.str = make1_str("asc"); ;
    break;}
case 528:
#line 2935 "preproc.y"
{ yyval.str = make1_str("desc"); ;
    break;}
case 529:
#line 2936 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 530:
#line 2940 "preproc.y"
{ yyval.str = cat4_str(make1_str("limit"), yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 531:
#line 2942 "preproc.y"
{ yyval.str = cat4_str(make1_str("limit"), yyvsp[-2].str, make1_str("offset"), yyvsp[0].str); ;
    break;}
case 532:
#line 2944 "preproc.y"
{ yyval.str = cat2_str(make1_str("limit"), yyvsp[0].str); ;
    break;}
case 533:
#line 2946 "preproc.y"
{ yyval.str = cat4_str(make1_str("offset"), yyvsp[-2].str, make1_str("limit"), yyvsp[0].str); ;
    break;}
case 534:
#line 2948 "preproc.y"
{ yyval.str = cat2_str(make1_str("offset"), yyvsp[0].str); ;
    break;}
case 535:
#line 2950 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 536:
#line 2953 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 537:
#line 2954 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 538:
#line 2955 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 539:
#line 2958 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 540:
#line 2959 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 541:
#line 2969 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 542:
#line 2970 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 543:
#line 2973 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 544:
#line 2976 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 545:
#line 2978 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 546:
#line 2981 "preproc.y"
{ yyval.str = cat2_str(make1_str("groub by"), yyvsp[0].str); ;
    break;}
case 547:
#line 2982 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 548:
#line 2986 "preproc.y"
{
					yyval.str = cat2_str(make1_str("having"), yyvsp[0].str);
				;
    break;}
case 549:
#line 2989 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 550:
#line 2993 "preproc.y"
{
                	yyval.str = make1_str("for update"); 
		;
    break;}
case 551:
#line 2997 "preproc.y"
{
                        yyval.str = make1_str("");
                ;
    break;}
case 552:
#line 3002 "preproc.y"
{
			yyval.str = cat2_str(make1_str("of"), yyvsp[0].str);
	      ;
    break;}
case 553:
#line 3006 "preproc.y"
{
                        yyval.str = make1_str("");
              ;
    break;}
case 554:
#line 3020 "preproc.y"
{
			yyval.str = cat2_str(make1_str("from"), yyvsp[0].str);
		;
    break;}
case 555:
#line 3024 "preproc.y"
{
			yyval.str = make1_str("");
		;
    break;}
case 556:
#line 3030 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 557:
#line 3032 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 558:
#line 3034 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 559:
#line 3038 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 560:
#line 3040 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 561:
#line 3044 "preproc.y"
{
                                        yyval.str = cat3_str(yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
                                ;
    break;}
case 562:
#line 3048 "preproc.y"
{
                                        yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 563:
#line 3052 "preproc.y"
{
                                        yyval.str = yyvsp[0].str;
                                ;
    break;}
case 564:
#line 3062 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 565:
#line 3064 "preproc.y"
{       yyerror("UNION JOIN not yet implemented"); ;
    break;}
case 566:
#line 3068 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 567:
#line 3074 "preproc.y"
{
                                        yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 568:
#line 3078 "preproc.y"
{
                                        yyval.str = yyvsp[0].str;
                                ;
    break;}
case 569:
#line 3091 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-3].str, make1_str("join"), yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 570:
#line 3095 "preproc.y"
{
					yyval.str = cat4_str(make1_str("natural"), yyvsp[-2].str, make1_str("join"), yyvsp[0].str);
                                ;
    break;}
case 571:
#line 3099 "preproc.y"
{ 	yyval.str = cat2_str(make1_str("cross join"), yyvsp[0].str); ;
    break;}
case 572:
#line 3104 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("full"), yyvsp[0].str);
                                        fprintf(stderr,"FULL OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 573:
#line 3109 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("left"), yyvsp[0].str);
                                        fprintf(stderr,"LEFT OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 574:
#line 3114 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("right"), yyvsp[0].str);
                                        fprintf(stderr,"RIGHT OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 575:
#line 3119 "preproc.y"
{
                                        yyval.str = make1_str("outer");
                                        fprintf(stderr,"OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 576:
#line 3124 "preproc.y"
{
                                        yyval.str = make1_str("inner");
				;
    break;}
case 577:
#line 3128 "preproc.y"
{
                                        yyval.str = make1_str("");
				;
    break;}
case 578:
#line 3133 "preproc.y"
{ yyval.str = make1_str("outer"); ;
    break;}
case 579:
#line 3134 "preproc.y"
{ yyval.str = make1_str("");  /* no qualifiers */ ;
    break;}
case 580:
#line 3145 "preproc.y"
{ yyval.str = make3_str(make1_str("using ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 581:
#line 3146 "preproc.y"
{ yyval.str = cat2_str(make1_str("on"), yyvsp[0].str); ;
    break;}
case 582:
#line 3149 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 583:
#line 3150 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 584:
#line 3154 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 585:
#line 3159 "preproc.y"
{ yyval.str = cat2_str(make1_str("where"), yyvsp[0].str); ;
    break;}
case 586:
#line 3160 "preproc.y"
{ yyval.str = make1_str("");  /* no qualifiers */ ;
    break;}
case 587:
#line 3164 "preproc.y"
{
					/* normal relations */
					yyval.str = yyvsp[0].str;
				;
    break;}
case 588:
#line 3169 "preproc.y"
{
					/* inheritance query */
					yyval.str = cat2_str(yyvsp[-1].str, make1_str("*"));
				;
    break;}
case 589:
#line 3175 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 590:
#line 3181 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 591:
#line 3190 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 592:
#line 3198 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 593:
#line 3204 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 594:
#line 3213 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 595:
#line 3220 "preproc.y"
{ yyval.ival = atol(yyvsp[0].str); ;
    break;}
case 596:
#line 3221 "preproc.y"
{ yyval.ival = yyvsp[-1].ival; ;
    break;}
case 597:
#line 3222 "preproc.y"
{ yyval.ival = yyvsp[-2].ival + yyvsp[0].ival; ;
    break;}
case 598:
#line 3223 "preproc.y"
{ yyval.ival = yyvsp[-2].ival - yyvsp[0].ival; ;
    break;}
case 599:
#line 3224 "preproc.y"
{ yyval.ival = yyvsp[-2].ival * yyvsp[0].ival; ;
    break;}
case 600:
#line 3225 "preproc.y"
{ yyval.ival = yyvsp[-2].ival / yyvsp[0].ival; ;
    break;}
case 601:
#line 3226 "preproc.y"
{ yyval.ival = yyvsp[-2].ival % yyvsp[0].ival; ;
    break;}
case 602:
#line 3241 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].index.str);
				;
    break;}
case 603:
#line 3244 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 604:
#line 3246 "preproc.y"
{
					yyval.str = cat2_str(make1_str("setof"), yyvsp[0].str);
				;
    break;}
case 606:
#line 3252 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 607:
#line 3253 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 608:
#line 3257 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 609:
#line 3262 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 610:
#line 3263 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 611:
#line 3264 "preproc.y"
{ yyval.str = make1_str("at"); ;
    break;}
case 612:
#line 3265 "preproc.y"
{ yyval.str = make1_str("autocommit"); ;
    break;}
case 613:
#line 3266 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 614:
#line 3267 "preproc.y"
{ yyval.str = make1_str("break"); ;
    break;}
case 615:
#line 3268 "preproc.y"
{ yyval.str = make1_str("call"); ;
    break;}
case 616:
#line 3269 "preproc.y"
{ yyval.str = make1_str("connect"); ;
    break;}
case 617:
#line 3270 "preproc.y"
{ yyval.str = make1_str("connection"); ;
    break;}
case 618:
#line 3271 "preproc.y"
{ yyval.str = make1_str("continue"); ;
    break;}
case 619:
#line 3272 "preproc.y"
{ yyval.str = make1_str("deallocate"); ;
    break;}
case 620:
#line 3273 "preproc.y"
{ yyval.str = make1_str("disconnect"); ;
    break;}
case 621:
#line 3274 "preproc.y"
{ yyval.str = make1_str("found"); ;
    break;}
case 622:
#line 3275 "preproc.y"
{ yyval.str = make1_str("go"); ;
    break;}
case 623:
#line 3276 "preproc.y"
{ yyval.str = make1_str("goto"); ;
    break;}
case 624:
#line 3277 "preproc.y"
{ yyval.str = make1_str("identified"); ;
    break;}
case 625:
#line 3278 "preproc.y"
{ yyval.str = make1_str("immediate"); ;
    break;}
case 626:
#line 3279 "preproc.y"
{ yyval.str = make1_str("indicator"); ;
    break;}
case 627:
#line 3280 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 628:
#line 3281 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 629:
#line 3282 "preproc.y"
{ yyval.str = make1_str("off"); ;
    break;}
case 630:
#line 3283 "preproc.y"
{ yyval.str = make1_str("open"); ;
    break;}
case 631:
#line 3284 "preproc.y"
{ yyval.str = make1_str("prepare"); ;
    break;}
case 632:
#line 3285 "preproc.y"
{ yyval.str = make1_str("release"); ;
    break;}
case 633:
#line 3286 "preproc.y"
{ yyval.str = make1_str("section"); ;
    break;}
case 634:
#line 3287 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 635:
#line 3288 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 636:
#line 3289 "preproc.y"
{ yyval.str = make1_str("sqlerror"); ;
    break;}
case 637:
#line 3290 "preproc.y"
{ yyval.str = make1_str("sqlprint"); ;
    break;}
case 638:
#line 3291 "preproc.y"
{ yyval.str = make1_str("sqlwarning"); ;
    break;}
case 639:
#line 3292 "preproc.y"
{ yyval.str = make1_str("stop"); ;
    break;}
case 640:
#line 3293 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 641:
#line 3294 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 642:
#line 3295 "preproc.y"
{ yyval.str = make1_str("var"); ;
    break;}
case 643:
#line 3296 "preproc.y"
{ yyval.str = make1_str("whenever"); ;
    break;}
case 644:
#line 3305 "preproc.y"
{
					yyval.str = cat2_str(make1_str("float"), yyvsp[0].str);
				;
    break;}
case 645:
#line 3309 "preproc.y"
{
					yyval.str = make1_str("double precision");
				;
    break;}
case 646:
#line 3313 "preproc.y"
{
					yyval.str = cat2_str(make1_str("decimal"), yyvsp[0].str);
				;
    break;}
case 647:
#line 3317 "preproc.y"
{
					yyval.str = cat2_str(make1_str("numeric"), yyvsp[0].str);
				;
    break;}
case 648:
#line 3323 "preproc.y"
{	yyval.str = make1_str("float"); ;
    break;}
case 649:
#line 3325 "preproc.y"
{	yyval.str = make1_str("double precision"); ;
    break;}
case 650:
#line 3327 "preproc.y"
{	yyval.str = make1_str("decimal"); ;
    break;}
case 651:
#line 3329 "preproc.y"
{	yyval.str = make1_str("numeric"); ;
    break;}
case 652:
#line 3333 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1)
						yyerror("precision for FLOAT must be at least 1");
					else if (atol(yyvsp[-1].str) >= 16)
						yyerror("precision for FLOAT must be less than 16");
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 653:
#line 3341 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 654:
#line 3347 "preproc.y"
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
case 655:
#line 3359 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1 || atol(yyvsp[-1].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-1].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 656:
#line 3367 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 657:
#line 3373 "preproc.y"
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
case 658:
#line 3385 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1 || atol(yyvsp[-1].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-1].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 659:
#line 3393 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 660:
#line 3406 "preproc.y"
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
case 661:
#line 3426 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 662:
#line 3432 "preproc.y"
{
					if (strlen(yyvsp[0].str) > 0) 
						fprintf(stderr, "COLLATE %s not yet implemented",yyvsp[0].str);

					yyval.str = cat4_str(make1_str("character"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 663:
#line 3438 "preproc.y"
{ yyval.str = cat2_str(make1_str("char"), yyvsp[0].str); ;
    break;}
case 664:
#line 3439 "preproc.y"
{ yyval.str = make1_str("varchar"); ;
    break;}
case 665:
#line 3440 "preproc.y"
{ yyval.str = cat2_str(make1_str("national character"), yyvsp[0].str); ;
    break;}
case 666:
#line 3441 "preproc.y"
{ yyval.str = cat2_str(make1_str("nchar"), yyvsp[0].str); ;
    break;}
case 667:
#line 3444 "preproc.y"
{ yyval.str = make1_str("varying"); ;
    break;}
case 668:
#line 3445 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 669:
#line 3448 "preproc.y"
{ yyval.str = cat2_str(make1_str("character set"), yyvsp[0].str); ;
    break;}
case 670:
#line 3449 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 671:
#line 3452 "preproc.y"
{ yyval.str = cat2_str(make1_str("collate"), yyvsp[0].str); ;
    break;}
case 672:
#line 3453 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 673:
#line 3457 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 674:
#line 3461 "preproc.y"
{
					yyval.str = cat2_str(make1_str("timestamp"), yyvsp[0].str);
				;
    break;}
case 675:
#line 3465 "preproc.y"
{
					yyval.str = make1_str("time");
				;
    break;}
case 676:
#line 3469 "preproc.y"
{
					yyval.str = cat2_str(make1_str("interval"), yyvsp[0].str);
				;
    break;}
case 677:
#line 3474 "preproc.y"
{ yyval.str = make1_str("year"); ;
    break;}
case 678:
#line 3475 "preproc.y"
{ yyval.str = make1_str("month"); ;
    break;}
case 679:
#line 3476 "preproc.y"
{ yyval.str = make1_str("day"); ;
    break;}
case 680:
#line 3477 "preproc.y"
{ yyval.str = make1_str("hour"); ;
    break;}
case 681:
#line 3478 "preproc.y"
{ yyval.str = make1_str("minute"); ;
    break;}
case 682:
#line 3479 "preproc.y"
{ yyval.str = make1_str("second"); ;
    break;}
case 683:
#line 3482 "preproc.y"
{ yyval.str = make1_str("with time zone"); ;
    break;}
case 684:
#line 3483 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 685:
#line 3486 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 686:
#line 3487 "preproc.y"
{ yyval.str = make1_str("year to #month"); ;
    break;}
case 687:
#line 3488 "preproc.y"
{ yyval.str = make1_str("day to hour"); ;
    break;}
case 688:
#line 3489 "preproc.y"
{ yyval.str = make1_str("day to minute"); ;
    break;}
case 689:
#line 3490 "preproc.y"
{ yyval.str = make1_str("day to second"); ;
    break;}
case 690:
#line 3491 "preproc.y"
{ yyval.str = make1_str("hour to minute"); ;
    break;}
case 691:
#line 3492 "preproc.y"
{ yyval.str = make1_str("minute to second"); ;
    break;}
case 692:
#line 3493 "preproc.y"
{ yyval.str = make1_str("hour to second"); ;
    break;}
case 693:
#line 3494 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 694:
#line 3505 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 695:
#line 3507 "preproc.y"
{
					yyval.str = make1_str("null");
				;
    break;}
case 696:
#line 3522 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-5].str, make1_str(") in ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 697:
#line 3526 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-6].str, make1_str(") not in ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 698:
#line 3530 "preproc.y"
{
					yyval.str = make4_str(make5_str(make1_str("("), yyvsp[-6].str, make1_str(")"), yyvsp[-4].str, yyvsp[-3].str), make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 699:
#line 3534 "preproc.y"
{
					yyval.str = make3_str(make5_str(make1_str("("), yyvsp[-5].str, make1_str(")"), yyvsp[-3].str, make1_str("(")), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 700:
#line 3538 "preproc.y"
{
					yyval.str = cat3_str(make3_str(make1_str("("), yyvsp[-5].str, make1_str(")")), yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 701:
#line 3544 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 702:
#line 3549 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 703:
#line 3550 "preproc.y"
{ yyval.str = "<"; ;
    break;}
case 704:
#line 3551 "preproc.y"
{ yyval.str = "="; ;
    break;}
case 705:
#line 3552 "preproc.y"
{ yyval.str = ">"; ;
    break;}
case 706:
#line 3553 "preproc.y"
{ yyval.str = "+"; ;
    break;}
case 707:
#line 3554 "preproc.y"
{ yyval.str = "-"; ;
    break;}
case 708:
#line 3555 "preproc.y"
{ yyval.str = "*"; ;
    break;}
case 709:
#line 3556 "preproc.y"
{ yyval.str = "%"; ;
    break;}
case 710:
#line 3557 "preproc.y"
{ yyval.str = "/"; ;
    break;}
case 711:
#line 3560 "preproc.y"
{ yyval.str = make1_str("ANY"); ;
    break;}
case 712:
#line 3561 "preproc.y"
{ yyval.str = make1_str("ALL"); ;
    break;}
case 713:
#line 3566 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 714:
#line 3570 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 715:
#line 3585 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 716:
#line 3589 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 717:
#line 3591 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 718:
#line 3593 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 719:
#line 3597 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 720:
#line 3599 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 721:
#line 3601 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 722:
#line 3603 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 723:
#line 3605 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 724:
#line 3607 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 725:
#line 3609 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 726:
#line 3611 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 727:
#line 3613 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 728:
#line 3615 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 729:
#line 3617 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-2].str, make1_str("= NULL")); ;
    break;}
case 730:
#line 3619 "preproc.y"
{       yyval.str = cat2_str(make1_str("= NULL"), yyvsp[0].str); ;
    break;}
case 731:
#line 3621 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 732:
#line 3626 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 733:
#line 3628 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 734:
#line 3630 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 735:
#line 3634 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 736:
#line 3638 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 737:
#line 3640 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 738:
#line 3642 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 739:
#line 3644 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 740:
#line 3646 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 741:
#line 3648 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 742:
#line 3650 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make1_str("(*)")); 
				;
    break;}
case 743:
#line 3654 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 744:
#line 3658 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 745:
#line 3662 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 746:
#line 3666 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 747:
#line 3670 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 748:
#line 3676 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 749:
#line 3680 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 750:
#line 3686 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 751:
#line 3690 "preproc.y"
{
  		     		        yyval.str = make1_str("user");
			     	;
    break;}
case 752:
#line 3694 "preproc.y"
{
					yyval.str = make3_str(make1_str("exists("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 753:
#line 3698 "preproc.y"
{
					yyval.str = make3_str(make1_str("extract("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 754:
#line 3702 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 755:
#line 3706 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 756:
#line 3711 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 757:
#line 3715 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 758:
#line 3719 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 759:
#line 3723 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 760:
#line 3727 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 761:
#line 3729 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 762:
#line 3731 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 763:
#line 3733 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 764:
#line 3740 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); }
				;
    break;}
case 765:
#line 3744 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); }
				;
    break;}
case 766:
#line 3748 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); }
				;
    break;}
case 767:
#line 3752 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); }
				;
    break;}
case 768:
#line 3756 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 769:
#line 3760 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 770:
#line 3764 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(" in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 771:
#line 3768 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str(" not in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 772:
#line 3772 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-4].str, yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 773:
#line 3776 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("+("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 774:
#line 3780 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("-("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 775:
#line 3784 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("/("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 776:
#line 3788 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("%("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 777:
#line 3792 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("*("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 778:
#line 3796 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("<("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 779:
#line 3800 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(">("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 780:
#line 3804 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("=("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 781:
#line 3808 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("any("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 782:
#line 3812 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 783:
#line 3816 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 784:
#line 3820 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 785:
#line 3824 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 786:
#line 3828 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 787:
#line 3832 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 788:
#line 3836 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 789:
#line 3840 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 790:
#line 3844 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("all ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 791:
#line 3848 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 792:
#line 3852 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 793:
#line 3856 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 794:
#line 3860 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 795:
#line 3864 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 796:
#line 3868 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 797:
#line 3872 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 798:
#line 3876 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 799:
#line 3880 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 800:
#line 3882 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 801:
#line 3884 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 802:
#line 3886 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 803:
#line 3888 "preproc.y"
{ yyval.str = make1_str("?"); ;
    break;}
case 804:
#line 3897 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 805:
#line 3901 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 806:
#line 3903 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 807:
#line 3907 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 808:
#line 3909 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 809:
#line 3911 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 810:
#line 3913 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 811:
#line 3915 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 812:
#line 3917 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 813:
#line 3919 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 814:
#line 3921 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 815:
#line 3926 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 816:
#line 3928 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 817:
#line 3930 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 818:
#line 3934 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 819:
#line 3938 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 820:
#line 3940 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 821:
#line 3942 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 822:
#line 3944 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 823:
#line 3946 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 824:
#line 3950 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 825:
#line 3954 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 826:
#line 3958 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 827:
#line 3962 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 828:
#line 3968 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 829:
#line 3972 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 830:
#line 3978 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 831:
#line 3982 "preproc.y"
{
					yyval.str = make1_str("user");
				;
    break;}
case 832:
#line 3986 "preproc.y"
{
					yyval.str = make3_str(make1_str("position ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 833:
#line 3990 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 834:
#line 3995 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 835:
#line 3999 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 836:
#line 4003 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 837:
#line 4007 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 838:
#line 4011 "preproc.y"
{ 	yyval.str = yyvsp[0].str; ;
    break;}
case 839:
#line 4015 "preproc.y"
{
					yyval.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].str);
				;
    break;}
case 840:
#line 4019 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("["), yyvsp[-4].str, make1_str(":"), yyvsp[-2].str, make1_str("]")), yyvsp[0].str);
				;
    break;}
case 841:
#line 4023 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 842:
#line 4027 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 843:
#line 4029 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 844:
#line 4031 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str("using"), yyvsp[0].str); ;
    break;}
case 845:
#line 4035 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("from"), yyvsp[0].str);
				;
    break;}
case 846:
#line 4039 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 847:
#line 4041 "preproc.y"
{ yyval.str = make1_str("?"); ;
    break;}
case 848:
#line 4044 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 849:
#line 4045 "preproc.y"
{ yyval.str = make1_str("timezone_hour"); ;
    break;}
case 850:
#line 4046 "preproc.y"
{ yyval.str = make1_str("timezone_minute"); ;
    break;}
case 851:
#line 4050 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("in"), yyvsp[0].str); ;
    break;}
case 852:
#line 4052 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 853:
#line 4056 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 854:
#line 4060 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 855:
#line 4062 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 856:
#line 4064 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 857:
#line 4066 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 858:
#line 4068 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 859:
#line 4070 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 860:
#line 4072 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 861:
#line 4074 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 862:
#line 4076 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 863:
#line 4080 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 864:
#line 4084 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 865:
#line 4086 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 866:
#line 4088 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 867:
#line 4090 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 868:
#line 4092 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 869:
#line 4096 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()"));
				;
    break;}
case 870:
#line 4100 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 871:
#line 4104 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 872:
#line 4108 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 873:
#line 4113 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 874:
#line 4117 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 875:
#line 4121 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 876:
#line 4125 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 877:
#line 4131 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 878:
#line 4135 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 879:
#line 4139 "preproc.y"
{	yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 880:
#line 4141 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 881:
#line 4147 "preproc.y"
{	yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 882:
#line 4149 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 883:
#line 4153 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str("from"), yyvsp[0].str); ;
    break;}
case 884:
#line 4155 "preproc.y"
{ yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 885:
#line 4157 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 886:
#line 4161 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 887:
#line 4165 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 888:
#line 4169 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 889:
#line 4171 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);;
    break;}
case 890:
#line 4175 "preproc.y"
{
					yyval.str = yyvsp[0].str; 
				;
    break;}
case 891:
#line 4179 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 892:
#line 4183 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 893:
#line 4185 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);;
    break;}
case 894:
#line 4204 "preproc.y"
{ yyval.str = cat5_str(make1_str("case"), yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, make1_str("end")); ;
    break;}
case 895:
#line 4206 "preproc.y"
{
					yyval.str = cat5_str(make1_str("nullif("), yyvsp[-3].str, make1_str(","), yyvsp[-1].str, make1_str(")"));

					fprintf(stderr, "NULLIF() not yet fully implemented");
                                ;
    break;}
case 896:
#line 4212 "preproc.y"
{
					yyval.str = cat3_str(make1_str("coalesce("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 897:
#line 4218 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 898:
#line 4220 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 899:
#line 4224 "preproc.y"
{
					yyval.str = cat4_str(make1_str("when"), yyvsp[-2].str, make1_str("then"), yyvsp[0].str);
                               ;
    break;}
case 900:
#line 4229 "preproc.y"
{ yyval.str = cat2_str(make1_str("else"), yyvsp[0].str); ;
    break;}
case 901:
#line 4230 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 902:
#line 4234 "preproc.y"
{
                                       yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                               ;
    break;}
case 903:
#line 4238 "preproc.y"
{
                                       yyval.str = yyvsp[0].str;
                               ;
    break;}
case 904:
#line 4242 "preproc.y"
{       yyval.str = make1_str(""); ;
    break;}
case 905:
#line 4246 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 906:
#line 4250 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 907:
#line 4256 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 908:
#line 4258 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str); ;
    break;}
case 909:
#line 4260 "preproc.y"
{ yyval.str = make2_str(yyvsp[-2].str, make1_str(".*")); ;
    break;}
case 910:
#line 4271 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","),yyvsp[0].str);  ;
    break;}
case 911:
#line 4273 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 912:
#line 4274 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 913:
#line 4278 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-3].str, yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 914:
#line 4282 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 915:
#line 4286 "preproc.y"
{
					yyval.str = make2_str(yyvsp[-2].str, make1_str(".*"));
				;
    break;}
case 916:
#line 4297 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);  ;
    break;}
case 917:
#line 4299 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 918:
#line 4304 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
				;
    break;}
case 919:
#line 4308 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 920:
#line 4312 "preproc.y"
{
					yyval.str = make2_str(yyvsp[-2].str, make1_str(".*"));
				;
    break;}
case 921:
#line 4316 "preproc.y"
{
					yyval.str = make1_str("*");
				;
    break;}
case 922:
#line 4321 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 923:
#line 4322 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 924:
#line 4326 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 925:
#line 4330 "preproc.y"
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
case 926:
#line 4342 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 927:
#line 4343 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 928:
#line 4344 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 929:
#line 4345 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 930:
#line 4346 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 931:
#line 4352 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 932:
#line 4353 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 933:
#line 4355 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 934:
#line 4362 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 935:
#line 4366 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 936:
#line 4370 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 937:
#line 4374 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 938:
#line 4378 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 939:
#line 4380 "preproc.y"
{
					yyval.str = make1_str("true");
				;
    break;}
case 940:
#line 4384 "preproc.y"
{
					yyval.str = make1_str("false");
				;
    break;}
case 941:
#line 4390 "preproc.y"
{
					yyval.str = cat2_str(make_name(), yyvsp[0].str);
				;
    break;}
case 942:
#line 4395 "preproc.y"
{ yyval.str = make_name();;
    break;}
case 943:
#line 4396 "preproc.y"
{ yyval.str = make_name();;
    break;}
case 944:
#line 4397 "preproc.y"
{
							yyval.str = (char *)mm_alloc(strlen(yyvsp[0].str) + 3);
							yyval.str[0]='\'';
				     		        strcpy(yyval.str+1, yyvsp[0].str);
							yyval.str[strlen(yyvsp[0].str)+2]='\0';
							yyval.str[strlen(yyvsp[0].str)+1]='\'';
							free(yyvsp[0].str);
						;
    break;}
case 945:
#line 4405 "preproc.y"
{ yyval.str = yyvsp[0].str;;
    break;}
case 946:
#line 4413 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 947:
#line 4415 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 948:
#line 4417 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 949:
#line 4427 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 950:
#line 4428 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 951:
#line 4429 "preproc.y"
{ yyval.str = make1_str("absolute"); ;
    break;}
case 952:
#line 4430 "preproc.y"
{ yyval.str = make1_str("action"); ;
    break;}
case 953:
#line 4431 "preproc.y"
{ yyval.str = make1_str("after"); ;
    break;}
case 954:
#line 4432 "preproc.y"
{ yyval.str = make1_str("aggregate"); ;
    break;}
case 955:
#line 4433 "preproc.y"
{ yyval.str = make1_str("backward"); ;
    break;}
case 956:
#line 4434 "preproc.y"
{ yyval.str = make1_str("before"); ;
    break;}
case 957:
#line 4435 "preproc.y"
{ yyval.str = make1_str("cache"); ;
    break;}
case 958:
#line 4436 "preproc.y"
{ yyval.str = make1_str("createdb"); ;
    break;}
case 959:
#line 4437 "preproc.y"
{ yyval.str = make1_str("createuser"); ;
    break;}
case 960:
#line 4438 "preproc.y"
{ yyval.str = make1_str("cycle"); ;
    break;}
case 961:
#line 4439 "preproc.y"
{ yyval.str = make1_str("database"); ;
    break;}
case 962:
#line 4440 "preproc.y"
{ yyval.str = make1_str("delimiters"); ;
    break;}
case 963:
#line 4441 "preproc.y"
{ yyval.str = make1_str("double"); ;
    break;}
case 964:
#line 4442 "preproc.y"
{ yyval.str = make1_str("each"); ;
    break;}
case 965:
#line 4443 "preproc.y"
{ yyval.str = make1_str("encoding"); ;
    break;}
case 966:
#line 4444 "preproc.y"
{ yyval.str = make1_str("forward"); ;
    break;}
case 967:
#line 4445 "preproc.y"
{ yyval.str = make1_str("function"); ;
    break;}
case 968:
#line 4446 "preproc.y"
{ yyval.str = make1_str("handler"); ;
    break;}
case 969:
#line 4447 "preproc.y"
{ yyval.str = make1_str("increment"); ;
    break;}
case 970:
#line 4448 "preproc.y"
{ yyval.str = make1_str("index"); ;
    break;}
case 971:
#line 4449 "preproc.y"
{ yyval.str = make1_str("inherits"); ;
    break;}
case 972:
#line 4450 "preproc.y"
{ yyval.str = make1_str("insensitive"); ;
    break;}
case 973:
#line 4451 "preproc.y"
{ yyval.str = make1_str("instead"); ;
    break;}
case 974:
#line 4452 "preproc.y"
{ yyval.str = make1_str("isnull"); ;
    break;}
case 975:
#line 4453 "preproc.y"
{ yyval.str = make1_str("key"); ;
    break;}
case 976:
#line 4454 "preproc.y"
{ yyval.str = make1_str("language"); ;
    break;}
case 977:
#line 4455 "preproc.y"
{ yyval.str = make1_str("lancompiler"); ;
    break;}
case 978:
#line 4456 "preproc.y"
{ yyval.str = make1_str("location"); ;
    break;}
case 979:
#line 4457 "preproc.y"
{ yyval.str = make1_str("match"); ;
    break;}
case 980:
#line 4458 "preproc.y"
{ yyval.str = make1_str("maxvalue"); ;
    break;}
case 981:
#line 4459 "preproc.y"
{ yyval.str = make1_str("minvalue"); ;
    break;}
case 982:
#line 4460 "preproc.y"
{ yyval.str = make1_str("next"); ;
    break;}
case 983:
#line 4461 "preproc.y"
{ yyval.str = make1_str("nocreatedb"); ;
    break;}
case 984:
#line 4462 "preproc.y"
{ yyval.str = make1_str("nocreateuser"); ;
    break;}
case 985:
#line 4463 "preproc.y"
{ yyval.str = make1_str("nothing"); ;
    break;}
case 986:
#line 4464 "preproc.y"
{ yyval.str = make1_str("notnull"); ;
    break;}
case 987:
#line 4465 "preproc.y"
{ yyval.str = make1_str("of"); ;
    break;}
case 988:
#line 4466 "preproc.y"
{ yyval.str = make1_str("oids"); ;
    break;}
case 989:
#line 4467 "preproc.y"
{ yyval.str = make1_str("only"); ;
    break;}
case 990:
#line 4468 "preproc.y"
{ yyval.str = make1_str("operator"); ;
    break;}
case 991:
#line 4469 "preproc.y"
{ yyval.str = make1_str("option"); ;
    break;}
case 992:
#line 4470 "preproc.y"
{ yyval.str = make1_str("password"); ;
    break;}
case 993:
#line 4471 "preproc.y"
{ yyval.str = make1_str("prior"); ;
    break;}
case 994:
#line 4472 "preproc.y"
{ yyval.str = make1_str("privileges"); ;
    break;}
case 995:
#line 4473 "preproc.y"
{ yyval.str = make1_str("procedural"); ;
    break;}
case 996:
#line 4474 "preproc.y"
{ yyval.str = make1_str("read"); ;
    break;}
case 997:
#line 4476 "preproc.y"
{ yyval.str = make1_str("relative"); ;
    break;}
case 998:
#line 4477 "preproc.y"
{ yyval.str = make1_str("rename"); ;
    break;}
case 999:
#line 4478 "preproc.y"
{ yyval.str = make1_str("returns"); ;
    break;}
case 1000:
#line 4479 "preproc.y"
{ yyval.str = make1_str("row"); ;
    break;}
case 1001:
#line 4480 "preproc.y"
{ yyval.str = make1_str("rule"); ;
    break;}
case 1002:
#line 4481 "preproc.y"
{ yyval.str = make1_str("scroll"); ;
    break;}
case 1003:
#line 4482 "preproc.y"
{ yyval.str = make1_str("sequence"); ;
    break;}
case 1004:
#line 4483 "preproc.y"
{ yyval.str = make1_str("serial"); ;
    break;}
case 1005:
#line 4484 "preproc.y"
{ yyval.str = make1_str("start"); ;
    break;}
case 1006:
#line 4485 "preproc.y"
{ yyval.str = make1_str("statement"); ;
    break;}
case 1007:
#line 4486 "preproc.y"
{ yyval.str = make1_str("stdin"); ;
    break;}
case 1008:
#line 4487 "preproc.y"
{ yyval.str = make1_str("stdout"); ;
    break;}
case 1009:
#line 4488 "preproc.y"
{ yyval.str = make1_str("time"); ;
    break;}
case 1010:
#line 4489 "preproc.y"
{ yyval.str = make1_str("timestamp"); ;
    break;}
case 1011:
#line 4490 "preproc.y"
{ yyval.str = make1_str("timezone_hour"); ;
    break;}
case 1012:
#line 4491 "preproc.y"
{ yyval.str = make1_str("timezone_minute"); ;
    break;}
case 1013:
#line 4492 "preproc.y"
{ yyval.str = make1_str("trigger"); ;
    break;}
case 1014:
#line 4493 "preproc.y"
{ yyval.str = make1_str("trusted"); ;
    break;}
case 1015:
#line 4494 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 1016:
#line 4495 "preproc.y"
{ yyval.str = make1_str("valid"); ;
    break;}
case 1017:
#line 4496 "preproc.y"
{ yyval.str = make1_str("version"); ;
    break;}
case 1018:
#line 4497 "preproc.y"
{ yyval.str = make1_str("zone"); ;
    break;}
case 1019:
#line 4498 "preproc.y"
{ yyval.str = make1_str("at"); ;
    break;}
case 1020:
#line 4499 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 1021:
#line 4500 "preproc.y"
{ yyval.str = make1_str("break"); ;
    break;}
case 1022:
#line 4501 "preproc.y"
{ yyval.str = make1_str("call"); ;
    break;}
case 1023:
#line 4502 "preproc.y"
{ yyval.str = make1_str("connect"); ;
    break;}
case 1024:
#line 4503 "preproc.y"
{ yyval.str = make1_str("continue"); ;
    break;}
case 1025:
#line 4504 "preproc.y"
{ yyval.str = make1_str("deallocate"); ;
    break;}
case 1026:
#line 4505 "preproc.y"
{ yyval.str = make1_str("disconnect"); ;
    break;}
case 1027:
#line 4506 "preproc.y"
{ yyval.str = make1_str("found"); ;
    break;}
case 1028:
#line 4507 "preproc.y"
{ yyval.str = make1_str("go"); ;
    break;}
case 1029:
#line 4508 "preproc.y"
{ yyval.str = make1_str("goto"); ;
    break;}
case 1030:
#line 4509 "preproc.y"
{ yyval.str = make1_str("identified"); ;
    break;}
case 1031:
#line 4510 "preproc.y"
{ yyval.str = make1_str("immediate"); ;
    break;}
case 1032:
#line 4511 "preproc.y"
{ yyval.str = make1_str("indicator"); ;
    break;}
case 1033:
#line 4512 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 1034:
#line 4513 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 1035:
#line 4514 "preproc.y"
{ yyval.str = make1_str("off"); ;
    break;}
case 1036:
#line 4515 "preproc.y"
{ yyval.str = make1_str("open"); ;
    break;}
case 1037:
#line 4516 "preproc.y"
{ yyval.str = make1_str("prepare"); ;
    break;}
case 1038:
#line 4517 "preproc.y"
{ yyval.str = make1_str("release"); ;
    break;}
case 1039:
#line 4518 "preproc.y"
{ yyval.str = make1_str("section"); ;
    break;}
case 1040:
#line 4519 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 1041:
#line 4520 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1042:
#line 4521 "preproc.y"
{ yyval.str = make1_str("sqlerror"); ;
    break;}
case 1043:
#line 4522 "preproc.y"
{ yyval.str = make1_str("sqlprint"); ;
    break;}
case 1044:
#line 4523 "preproc.y"
{ yyval.str = make1_str("sqlwarning"); ;
    break;}
case 1045:
#line 4524 "preproc.y"
{ yyval.str = make1_str("stop"); ;
    break;}
case 1046:
#line 4525 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 1047:
#line 4526 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 1048:
#line 4527 "preproc.y"
{ yyval.str = make1_str("var"); ;
    break;}
case 1049:
#line 4528 "preproc.y"
{ yyval.str = make1_str("whenever"); ;
    break;}
case 1050:
#line 4540 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1051:
#line 4541 "preproc.y"
{ yyval.str = make1_str("abort"); ;
    break;}
case 1052:
#line 4542 "preproc.y"
{ yyval.str = make1_str("analyze"); ;
    break;}
case 1053:
#line 4543 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 1054:
#line 4544 "preproc.y"
{ yyval.str = make1_str("case"); ;
    break;}
case 1055:
#line 4545 "preproc.y"
{ yyval.str = make1_str("cluster"); ;
    break;}
case 1056:
#line 4546 "preproc.y"
{ yyval.str = make1_str("coalesce"); ;
    break;}
case 1057:
#line 4547 "preproc.y"
{ yyval.str = make1_str("constraint"); ;
    break;}
case 1058:
#line 4548 "preproc.y"
{ yyval.str = make1_str("copy"); ;
    break;}
case 1059:
#line 4549 "preproc.y"
{ yyval.str = make1_str("current"); ;
    break;}
case 1060:
#line 4550 "preproc.y"
{ yyval.str = make1_str("do"); ;
    break;}
case 1061:
#line 4551 "preproc.y"
{ yyval.str = make1_str("else"); ;
    break;}
case 1062:
#line 4552 "preproc.y"
{ yyval.str = make1_str("end"); ;
    break;}
case 1063:
#line 4553 "preproc.y"
{ yyval.str = make1_str("explain"); ;
    break;}
case 1064:
#line 4554 "preproc.y"
{ yyval.str = make1_str("extend"); ;
    break;}
case 1065:
#line 4555 "preproc.y"
{ yyval.str = make1_str("false"); ;
    break;}
case 1066:
#line 4556 "preproc.y"
{ yyval.str = make1_str("foreign"); ;
    break;}
case 1067:
#line 4557 "preproc.y"
{ yyval.str = make1_str("group"); ;
    break;}
case 1068:
#line 4558 "preproc.y"
{ yyval.str = make1_str("listen"); ;
    break;}
case 1069:
#line 4559 "preproc.y"
{ yyval.str = make1_str("load"); ;
    break;}
case 1070:
#line 4560 "preproc.y"
{ yyval.str = make1_str("lock"); ;
    break;}
case 1071:
#line 4561 "preproc.y"
{ yyval.str = make1_str("move"); ;
    break;}
case 1072:
#line 4562 "preproc.y"
{ yyval.str = make1_str("new"); ;
    break;}
case 1073:
#line 4563 "preproc.y"
{ yyval.str = make1_str("none"); ;
    break;}
case 1074:
#line 4564 "preproc.y"
{ yyval.str = make1_str("nullif"); ;
    break;}
case 1075:
#line 4565 "preproc.y"
{ yyval.str = make1_str("order"); ;
    break;}
case 1076:
#line 4566 "preproc.y"
{ yyval.str = make1_str("position"); ;
    break;}
case 1077:
#line 4567 "preproc.y"
{ yyval.str = make1_str("precision"); ;
    break;}
case 1078:
#line 4568 "preproc.y"
{ yyval.str = make1_str("reset"); ;
    break;}
case 1079:
#line 4569 "preproc.y"
{ yyval.str = make1_str("setof"); ;
    break;}
case 1080:
#line 4570 "preproc.y"
{ yyval.str = make1_str("show"); ;
    break;}
case 1081:
#line 4571 "preproc.y"
{ yyval.str = make1_str("table"); ;
    break;}
case 1082:
#line 4572 "preproc.y"
{ yyval.str = make1_str("then"); ;
    break;}
case 1083:
#line 4573 "preproc.y"
{ yyval.str = make1_str("transaction"); ;
    break;}
case 1084:
#line 4574 "preproc.y"
{ yyval.str = make1_str("true"); ;
    break;}
case 1085:
#line 4575 "preproc.y"
{ yyval.str = make1_str("vacuum"); ;
    break;}
case 1086:
#line 4576 "preproc.y"
{ yyval.str = make1_str("verbose"); ;
    break;}
case 1087:
#line 4577 "preproc.y"
{ yyval.str = make1_str("when"); ;
    break;}
case 1088:
#line 4581 "preproc.y"
{
					if (QueryIsRule)
						yyval.str = make1_str("current");
					else
						yyerror("CURRENT used in non-rule query");
				;
    break;}
case 1089:
#line 4588 "preproc.y"
{
					if (QueryIsRule)
						yyval.str = make1_str("new");
					else
						yyerror("NEW used in non-rule query");
				;
    break;}
case 1090:
#line 4604 "preproc.y"
{
			yyval.str = make5_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str, make1_str(","), yyvsp[-1].str);
                ;
    break;}
case 1091:
#line 4608 "preproc.y"
{
                	yyval.str = make1_str("NULL,NULL,NULL,\"DEFAULT\"");
                ;
    break;}
case 1092:
#line 4613 "preproc.y"
{
		       yyval.str = make3_str(make1_str("NULL,"), yyvsp[0].str, make1_str(",NULL"));
		;
    break;}
case 1093:
#line 4618 "preproc.y"
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
case 1094:
#line 4629 "preproc.y"
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
case 1095:
#line 4652 "preproc.y"
{
		  yyval.str = yyvsp[0].str;
		;
    break;}
case 1096:
#line 4656 "preproc.y"
{
		  yyval.str = mm_strdup(yyvsp[0].str);
		  yyval.str[0] = '\"';
		  yyval.str[strlen(yyval.str) - 1] = '\"';
		  free(yyvsp[0].str);
		;
    break;}
case 1097:
#line 4664 "preproc.y"
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
case 1098:
#line 4681 "preproc.y"
{
		  if (strcmp(yyvsp[-1].str, "@") != 0 && strcmp(yyvsp[-1].str, "://") != 0)
		  {
		    sprintf(errortext, "parse error at or near '%s'", yyvsp[-1].str);
		    yyerror(errortext);
		  }

		  yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str);
	        ;
    break;}
case 1099:
#line 4691 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1100:
#line 4692 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1101:
#line 4694 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1102:
#line 4695 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str); ;
    break;}
case 1103:
#line 4697 "preproc.y"
{ yyval.str = make2_str(make1_str(":"), yyvsp[0].str); ;
    break;}
case 1104:
#line 4698 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1105:
#line 4700 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1106:
#line 4701 "preproc.y"
{ yyval.str = make1_str("NULL"); ;
    break;}
case 1107:
#line 4703 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1108:
#line 4704 "preproc.y"
{ yyval.str = make1_str("NULL,NULL"); ;
    break;}
case 1109:
#line 4707 "preproc.y"
{
                        yyval.str = make2_str(yyvsp[0].str, make1_str(",NULL"));
	        ;
    break;}
case 1110:
#line 4711 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1111:
#line 4715 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-3].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1112:
#line 4719 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1113:
#line 4723 "preproc.y"
{ if (yyvsp[0].str[0] == '\"')
				yyval.str = yyvsp[0].str;
			  else
				yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\""));
			;
    break;}
case 1114:
#line 4728 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1115:
#line 4729 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1116:
#line 4732 "preproc.y"
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
case 1117:
#line 4756 "preproc.y"
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
case 1118:
#line 4768 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1119:
#line 4775 "preproc.y"
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
case 1120:
#line 4817 "preproc.y"
{ yyval.str = make3_str(make1_str("ECPGdeallocate(__LINE__, \""), yyvsp[0].str, make1_str("\");")); ;
    break;}
case 1121:
#line 4823 "preproc.y"
{
		fputs("/* exec sql begin declare section */", yyout);
	        output_line_number();
	;
    break;}
case 1122:
#line 4828 "preproc.y"
{
		fprintf(yyout, "%s/* exec sql end declare section */", yyvsp[-1].str);
		free(yyvsp[-1].str);
		output_line_number();
	;
    break;}
case 1123:
#line 4834 "preproc.y"
{;
    break;}
case 1124:
#line 4836 "preproc.y"
{;
    break;}
case 1125:
#line 4839 "preproc.y"
{
		yyval.str = make1_str("");
	;
    break;}
case 1126:
#line 4843 "preproc.y"
{
		yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
	;
    break;}
case 1127:
#line 4848 "preproc.y"
{
		actual_storage[struct_level] = mm_strdup(yyvsp[0].str);
	;
    break;}
case 1128:
#line 4852 "preproc.y"
{
		actual_type[struct_level].type_enum = yyvsp[0].type.type_enum;
		actual_type[struct_level].type_dimension = yyvsp[0].type.type_dimension;
		actual_type[struct_level].type_index = yyvsp[0].type.type_index;
	;
    break;}
case 1129:
#line 4858 "preproc.y"
{
 		yyval.str = cat4_str(yyvsp[-5].str, yyvsp[-3].type.type_str, yyvsp[-1].str, make1_str(";\n"));
	;
    break;}
case 1130:
#line 4862 "preproc.y"
{ yyval.str = make1_str("extern"); ;
    break;}
case 1131:
#line 4863 "preproc.y"
{ yyval.str = make1_str("static"); ;
    break;}
case 1132:
#line 4864 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1133:
#line 4865 "preproc.y"
{ yyval.str = make1_str("const"); ;
    break;}
case 1134:
#line 4866 "preproc.y"
{ yyval.str = make1_str("register"); ;
    break;}
case 1135:
#line 4867 "preproc.y"
{ yyval.str = make1_str("auto"); ;
    break;}
case 1136:
#line 4868 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1137:
#line 4871 "preproc.y"
{
			yyval.type.type_enum = yyvsp[0].type_enum;
			yyval.type.type_str = mm_strdup(ECPGtype_name(yyvsp[0].type_enum));
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1138:
#line 4878 "preproc.y"
{
			yyval.type.type_enum = ECPGt_varchar;
			yyval.type.type_str = make1_str("");
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1139:
#line 4885 "preproc.y"
{
			yyval.type.type_enum = ECPGt_struct;
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1140:
#line 4892 "preproc.y"
{
			yyval.type.type_enum = ECPGt_union;
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1141:
#line 4899 "preproc.y"
{
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_enum = ECPGt_int;
		
	yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1142:
#line 4907 "preproc.y"
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
case 1143:
#line 4919 "preproc.y"
{
		yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1144:
#line 4923 "preproc.y"
{ yyval.str = cat2_str(make1_str("enum"), yyvsp[0].str); ;
    break;}
case 1145:
#line 4926 "preproc.y"
{
	    ECPGfree_struct_member(struct_member_list[struct_level]);
	    free(actual_storage[struct_level--]);
	    yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1146:
#line 4933 "preproc.y"
{
	    ECPGfree_struct_member(struct_member_list[struct_level]);
	    free(actual_storage[struct_level--]);
	    yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1147:
#line 4940 "preproc.y"
{
            struct_member_list[struct_level++] = NULL;
            if (struct_level >= STRUCT_DEPTH)
                 yyerror("Too many levels in nested structure definition");
	    yyval.str = cat2_str(make1_str("struct"), yyvsp[0].str);
	;
    break;}
case 1148:
#line 4948 "preproc.y"
{
            struct_member_list[struct_level++] = NULL;
            if (struct_level >= STRUCT_DEPTH)
                 yyerror("Too many levels in nested structure definition");
	    yyval.str = cat2_str(make1_str("union"), yyvsp[0].str);
	;
    break;}
case 1149:
#line 4955 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1150:
#line 4956 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1151:
#line 4958 "preproc.y"
{ yyval.type_enum = ECPGt_short; ;
    break;}
case 1152:
#line 4959 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_short; ;
    break;}
case 1153:
#line 4960 "preproc.y"
{ yyval.type_enum = ECPGt_int; ;
    break;}
case 1154:
#line 4961 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_int; ;
    break;}
case 1155:
#line 4962 "preproc.y"
{ yyval.type_enum = ECPGt_long; ;
    break;}
case 1156:
#line 4963 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_long; ;
    break;}
case 1157:
#line 4964 "preproc.y"
{ yyval.type_enum = ECPGt_float; ;
    break;}
case 1158:
#line 4965 "preproc.y"
{ yyval.type_enum = ECPGt_double; ;
    break;}
case 1159:
#line 4966 "preproc.y"
{ yyval.type_enum = ECPGt_bool; ;
    break;}
case 1160:
#line 4967 "preproc.y"
{ yyval.type_enum = ECPGt_char; ;
    break;}
case 1161:
#line 4968 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_char; ;
    break;}
case 1162:
#line 4970 "preproc.y"
{ yyval.type_enum = ECPGt_varchar; ;
    break;}
case 1163:
#line 4973 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 1164:
#line 4977 "preproc.y"
{
		yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
	;
    break;}
case 1165:
#line 4982 "preproc.y"
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
case 1166:
#line 5056 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1167:
#line 5057 "preproc.y"
{ yyval.str = make2_str(make1_str("="), yyvsp[0].str); ;
    break;}
case 1168:
#line 5059 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1169:
#line 5060 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 1170:
#line 5067 "preproc.y"
{
		/* this is only supported for compatibility */
		yyval.str = cat3_str(make1_str("/* declare statement"), yyvsp[0].str, make1_str("*/"));
	;
    break;}
case 1171:
#line 5074 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1172:
#line 5076 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1173:
#line 5077 "preproc.y"
{ yyval.str = make1_str("CURRENT"); ;
    break;}
case 1174:
#line 5078 "preproc.y"
{ yyval.str = make1_str("ALL"); ;
    break;}
case 1175:
#line 5079 "preproc.y"
{ yyval.str = make1_str("CURRENT"); ;
    break;}
case 1176:
#line 5081 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1177:
#line 5082 "preproc.y"
{ yyval.str = make1_str("DEFAULT"); ;
    break;}
case 1178:
#line 5088 "preproc.y"
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
case 1179:
#line 5101 "preproc.y"
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
case 1180:
#line 5112 "preproc.y"
{
		yyval.str = make1_str("?");
	;
    break;}
case 1182:
#line 5117 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1183:
#line 5123 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1184:
#line 5128 "preproc.y"
{
		yyval.str = yyvsp[-1].str;
;
    break;}
case 1185:
#line 5132 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1186:
#line 5133 "preproc.y"
{
					/* yyerror ("open cursor with variables not implemented yet"); */
					yyval.str = make1_str("");
				;
    break;}
case 1189:
#line 5145 "preproc.y"
{
		yyval.str = make4_str(make1_str("\""), yyvsp[-2].str, make1_str("\", "), yyvsp[0].str);
	;
    break;}
case 1190:
#line 5155 "preproc.y"
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
case 1191:
#line 5171 "preproc.y"
{
				yyval.str = yyvsp[0].str;
                        ;
    break;}
case 1192:
#line 5175 "preproc.y"
{ yyval.str = make1_str("on"); ;
    break;}
case 1193:
#line 5176 "preproc.y"
{ yyval.str = make1_str("off"); ;
    break;}
case 1196:
#line 5185 "preproc.y"
{
				yyval.str = yyvsp[0].str;
                        ;
    break;}
case 1197:
#line 5193 "preproc.y"
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
case 1198:
#line 5235 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1199:
#line 5241 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1200:
#line 5247 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1201:
#line 5256 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1202:
#line 5265 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 1203:
#line 5273 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1204:
#line 5279 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1205:
#line 5285 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1206:
#line 5294 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1207:
#line 5303 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 1208:
#line 5309 "preproc.y"
{ yyval.str = make1_str("reference"); ;
    break;}
case 1209:
#line 5310 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1210:
#line 5313 "preproc.y"
{
		yyval.type.type_str = make1_str("char");
                yyval.type.type_enum = ECPGt_char;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1211:
#line 5320 "preproc.y"
{
		yyval.type.type_str = make1_str("varchar");
                yyval.type.type_enum = ECPGt_varchar;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1212:
#line 5327 "preproc.y"
{
		yyval.type.type_str = make1_str("float");
                yyval.type.type_enum = ECPGt_float;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1213:
#line 5334 "preproc.y"
{
		yyval.type.type_str = make1_str("double");
                yyval.type.type_enum = ECPGt_double;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1214:
#line 5341 "preproc.y"
{
		yyval.type.type_str = make1_str("int");
       	        yyval.type.type_enum = ECPGt_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1215:
#line 5348 "preproc.y"
{
		yyval.type.type_str = make1_str("int");
       	        yyval.type.type_enum = ECPGt_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1216:
#line 5355 "preproc.y"
{
		yyval.type.type_str = make1_str("short");
       	        yyval.type.type_enum = ECPGt_short;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1217:
#line 5362 "preproc.y"
{
		yyval.type.type_str = make1_str("long");
       	        yyval.type.type_enum = ECPGt_long;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1218:
#line 5369 "preproc.y"
{
		yyval.type.type_str = make1_str("bool");
       	        yyval.type.type_enum = ECPGt_bool;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1219:
#line 5376 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned int");
       	        yyval.type.type_enum = ECPGt_unsigned_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1220:
#line 5383 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned short");
       	        yyval.type.type_enum = ECPGt_unsigned_short;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1221:
#line 5390 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned long");
       	        yyval.type.type_enum = ECPGt_unsigned_long;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1222:
#line 5397 "preproc.y"
{
		struct_member_list[struct_level++] = NULL;
		if (struct_level >= STRUCT_DEPTH)
        		yyerror("Too many levels in nested structure definition");
	;
    break;}
case 1223:
#line 5402 "preproc.y"
{
		ECPGfree_struct_member(struct_member_list[struct_level--]);
		yyval.type.type_str = cat3_str(make1_str("struct {"), yyvsp[-1].str, make1_str("}"));
		yyval.type.type_enum = ECPGt_struct;
                yyval.type.type_index = -1;
                yyval.type.type_dimension = -1;
	;
    break;}
case 1224:
#line 5410 "preproc.y"
{
		struct_member_list[struct_level++] = NULL;
		if (struct_level >= STRUCT_DEPTH)
        		yyerror("Too many levels in nested structure definition");
	;
    break;}
case 1225:
#line 5415 "preproc.y"
{
		ECPGfree_struct_member(struct_member_list[struct_level--]);
		yyval.type.type_str = cat3_str(make1_str("union {"), yyvsp[-1].str, make1_str("}"));
		yyval.type.type_enum = ECPGt_union;
                yyval.type.type_index = -1;
                yyval.type.type_dimension = -1;
	;
    break;}
case 1226:
#line 5423 "preproc.y"
{
		struct typedefs *this = get_typedef(yyvsp[0].str);

		yyval.type.type_str = mm_strdup(yyvsp[0].str);
		yyval.type.type_enum = this->type->type_enum;
		yyval.type.type_dimension = this->type->type_dimension;
		yyval.type.type_index = this->type->type_index;
		struct_member_list[struct_level] = this->struct_member_list;
	;
    break;}
case 1229:
#line 5436 "preproc.y"
{
		yyval.str = make1_str("");
	;
    break;}
case 1230:
#line 5440 "preproc.y"
{
		yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
	;
    break;}
case 1231:
#line 5446 "preproc.y"
{
		actual_type[struct_level].type_enum = yyvsp[0].type.type_enum;
		actual_type[struct_level].type_dimension = yyvsp[0].type.type_dimension;
		actual_type[struct_level].type_index = yyvsp[0].type.type_index;
	;
    break;}
case 1232:
#line 5452 "preproc.y"
{
		yyval.str = cat3_str(yyvsp[-3].type.type_str, yyvsp[-1].str, make1_str(";"));
	;
    break;}
case 1233:
#line 5457 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 1234:
#line 5461 "preproc.y"
{
		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
	;
    break;}
case 1235:
#line 5466 "preproc.y"
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
case 1236:
#line 5537 "preproc.y"
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
case 1237:
#line 5591 "preproc.y"
{
	when_error.code = yyvsp[0].action.code;
	when_error.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever sqlerror "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1238:
#line 5596 "preproc.y"
{
	when_nf.code = yyvsp[0].action.code;
	when_nf.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever not found "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1239:
#line 5601 "preproc.y"
{
	when_warn.code = yyvsp[0].action.code;
	when_warn.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever sql_warning "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1240:
#line 5607 "preproc.y"
{
	yyval.action.code = W_NOTHING;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("continue");
;
    break;}
case 1241:
#line 5612 "preproc.y"
{
	yyval.action.code = W_SQLPRINT;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("sqlprint");
;
    break;}
case 1242:
#line 5617 "preproc.y"
{
	yyval.action.code = W_STOP;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("stop");
;
    break;}
case 1243:
#line 5622 "preproc.y"
{
        yyval.action.code = W_GOTO;
        yyval.action.command = strdup(yyvsp[0].str);
	yyval.action.str = cat2_str(make1_str("goto "), yyvsp[0].str);
;
    break;}
case 1244:
#line 5627 "preproc.y"
{
        yyval.action.code = W_GOTO;
        yyval.action.command = strdup(yyvsp[0].str);
	yyval.action.str = cat2_str(make1_str("goto "), yyvsp[0].str);
;
    break;}
case 1245:
#line 5632 "preproc.y"
{
	yyval.action.code = W_DO;
	yyval.action.command = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
	yyval.action.str = cat2_str(make1_str("do"), mm_strdup(yyval.action.command));
;
    break;}
case 1246:
#line 5637 "preproc.y"
{
        yyval.action.code = W_BREAK;
        yyval.action.command = NULL;
        yyval.action.str = make1_str("break");
;
    break;}
case 1247:
#line 5642 "preproc.y"
{
	yyval.action.code = W_DO;
	yyval.action.command = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
	yyval.action.str = cat2_str(make1_str("call"), mm_strdup(yyval.action.command));
;
    break;}
case 1248:
#line 5650 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 1249:
#line 5654 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 1250:
#line 5656 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 1251:
#line 5658 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 1252:
#line 5662 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 1253:
#line 5664 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 1254:
#line 5666 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 1255:
#line 5668 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 1256:
#line 5670 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 1257:
#line 5672 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 1258:
#line 5674 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 1259:
#line 5676 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 1260:
#line 5678 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 1261:
#line 5680 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 1262:
#line 5682 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-2].str, make1_str("= NULL")); ;
    break;}
case 1263:
#line 5684 "preproc.y"
{       yyval.str = cat2_str(make1_str("= NULL"), yyvsp[0].str); ;
    break;}
case 1264:
#line 5686 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 1265:
#line 5690 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 1266:
#line 5692 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 1267:
#line 5694 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 1268:
#line 5698 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 1269:
#line 5702 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 1270:
#line 5704 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 1271:
#line 5706 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 1272:
#line 5708 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 1273:
#line 5710 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1274:
#line 5712 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1275:
#line 5714 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make1_str("(*)")); 
				;
    break;}
case 1276:
#line 5718 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 1277:
#line 5722 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1278:
#line 5726 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 1279:
#line 5730 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 1280:
#line 5734 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 1281:
#line 5740 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 1282:
#line 5744 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 1283:
#line 5750 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 1284:
#line 5754 "preproc.y"
{
  		     		        yyval.str = make1_str("user");
			     	;
    break;}
case 1285:
#line 5758 "preproc.y"
{
					yyval.str = make3_str(make1_str("exists("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1286:
#line 5762 "preproc.y"
{
					yyval.str = make3_str(make1_str("extract("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1287:
#line 5766 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1288:
#line 5770 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1289:
#line 5775 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1290:
#line 5779 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1291:
#line 5783 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1292:
#line 5787 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1293:
#line 5791 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 1294:
#line 5793 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 1295:
#line 5795 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 1296:
#line 5797 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 1297:
#line 5804 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); }
				;
    break;}
case 1298:
#line 5808 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); }
				;
    break;}
case 1299:
#line 5812 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); }
				;
    break;}
case 1300:
#line 5816 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); }
				;
    break;}
case 1301:
#line 5820 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 1302:
#line 5824 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 1303:
#line 5828 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(" in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1304:
#line 5832 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str(" not in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1305:
#line 5836 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-4].str, yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1306:
#line 5840 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("+("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1307:
#line 5844 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("-("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1308:
#line 5848 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("/("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1309:
#line 5852 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("%("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1310:
#line 5856 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("*("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1311:
#line 5860 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("<("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1312:
#line 5864 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(">("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1313:
#line 5868 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("=("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1314:
#line 5872 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("any ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1315:
#line 5876 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1316:
#line 5880 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1317:
#line 5884 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1318:
#line 5888 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1319:
#line 5892 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1320:
#line 5896 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1321:
#line 5900 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1322:
#line 5904 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1323:
#line 5908 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("all ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1324:
#line 5912 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1325:
#line 5916 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1326:
#line 5920 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1327:
#line 5924 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1328:
#line 5928 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1329:
#line 5932 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1330:
#line 5936 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1331:
#line 5940 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("=all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1332:
#line 5944 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 1333:
#line 5946 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 1334:
#line 5948 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 1335:
#line 5950 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 1336:
#line 5952 "preproc.y"
{ 	yyval.str = yyvsp[0].str; ;
    break;}
case 1339:
#line 5957 "preproc.y"
{ reset_variables();;
    break;}
case 1340:
#line 5959 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1341:
#line 5960 "preproc.y"
{ yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1342:
#line 5962 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1343:
#line 5963 "preproc.y"
{ yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1344:
#line 5965 "preproc.y"
{
		add_variable(&argsresult, find_variable(yyvsp[-1].str), (yyvsp[0].str == NULL) ? &no_indicator : find_variable(yyvsp[0].str)); 
;
    break;}
case 1345:
#line 5969 "preproc.y"
{
		add_variable(&argsinsert, find_variable(yyvsp[-1].str), (yyvsp[0].str == NULL) ? &no_indicator : find_variable(yyvsp[0].str)); 
;
    break;}
case 1346:
#line 5973 "preproc.y"
{
		add_variable(&argsinsert, find_variable(yyvsp[0].str), &no_indicator); 
		yyval.str = make1_str("?");
;
    break;}
case 1347:
#line 5978 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1348:
#line 5980 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 1349:
#line 5981 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1350:
#line 5982 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1351:
#line 5983 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1352:
#line 5985 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1353:
#line 5986 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1354:
#line 5991 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1355:
#line 5993 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1356:
#line 5995 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1357:
#line 5997 "preproc.y"
{
			yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str);
		;
    break;}
case 1359:
#line 6001 "preproc.y"
{ yyval.str = make1_str(";"); ;
    break;}
case 1360:
#line 6003 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1361:
#line 6004 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1362:
#line 6005 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1363:
#line 6006 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1364:
#line 6007 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 1365:
#line 6008 "preproc.y"
{ yyval.str = make1_str("+"); ;
    break;}
case 1366:
#line 6009 "preproc.y"
{ yyval.str = make1_str("-"); ;
    break;}
case 1367:
#line 6010 "preproc.y"
{ yyval.str = make1_str("/"); ;
    break;}
case 1368:
#line 6011 "preproc.y"
{ yyval.str = make1_str("%"); ;
    break;}
case 1369:
#line 6012 "preproc.y"
{ yyval.str = make1_str("auto"); ;
    break;}
case 1370:
#line 6013 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 1371:
#line 6014 "preproc.y"
{ yyval.str = make1_str("char"); ;
    break;}
case 1372:
#line 6015 "preproc.y"
{ yyval.str = make1_str("const"); ;
    break;}
case 1373:
#line 6016 "preproc.y"
{ yyval.str = make1_str("double"); ;
    break;}
case 1374:
#line 6017 "preproc.y"
{ yyval.str = make1_str("enum"); ;
    break;}
case 1375:
#line 6018 "preproc.y"
{ yyval.str = make1_str("extern"); ;
    break;}
case 1376:
#line 6019 "preproc.y"
{ yyval.str = make1_str("float"); ;
    break;}
case 1377:
#line 6020 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 1378:
#line 6021 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 1379:
#line 6022 "preproc.y"
{ yyval.str = make1_str("register"); ;
    break;}
case 1380:
#line 6023 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 1381:
#line 6024 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1382:
#line 6025 "preproc.y"
{ yyval.str = make1_str("static"); ;
    break;}
case 1383:
#line 6026 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 1384:
#line 6027 "preproc.y"
{ yyval.str = make1_str("union"); ;
    break;}
case 1385:
#line 6028 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 1386:
#line 6029 "preproc.y"
{ yyval.str = make1_str("varchar"); ;
    break;}
case 1387:
#line 6030 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 1388:
#line 6031 "preproc.y"
{ yyval.str = make1_str("["); ;
    break;}
case 1389:
#line 6032 "preproc.y"
{ yyval.str = make1_str("]"); ;
    break;}
case 1390:
#line 6033 "preproc.y"
{ yyval.str = make1_str("("); ;
    break;}
case 1391:
#line 6034 "preproc.y"
{ yyval.str = make1_str(")"); ;
    break;}
case 1392:
#line 6035 "preproc.y"
{ yyval.str = make1_str("="); ;
    break;}
case 1393:
#line 6036 "preproc.y"
{ yyval.str = make1_str(","); ;
    break;}
case 1394:
#line 6038 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1395:
#line 6039 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\""));;
    break;}
case 1396:
#line 6040 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1397:
#line 6041 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1398:
#line 6042 "preproc.y"
{ yyval.str = make1_str(","); ;
    break;}
case 1399:
#line 6044 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1400:
#line 6045 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1401:
#line 6046 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1402:
#line 6047 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1403:
#line 6048 "preproc.y"
{ yyval.str = make3_str(make1_str("{"), yyvsp[-1].str, make1_str("}")); ;
    break;}
case 1404:
#line 6050 "preproc.y"
{
    braces_open++;
    yyval.str = make1_str("{");
;
    break;}
case 1405:
#line 6055 "preproc.y"
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
#line 6060 "preproc.y"


void yyerror(char * error)
{
    fprintf(stderr, "%s:%d: %s\n", input_filename, yylineno, error);
    exit(PARSE_ERROR);
}
