
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
#define	GLOBAL	371
#define	GRANT	372
#define	GROUP	373
#define	HAVING	374
#define	HOUR_P	375
#define	IN	376
#define	INNER_P	377
#define	INSENSITIVE	378
#define	INSERT	379
#define	INTERSECT	380
#define	INTERVAL	381
#define	INTO	382
#define	IS	383
#define	ISOLATION	384
#define	JOIN	385
#define	KEY	386
#define	LANGUAGE	387
#define	LEADING	388
#define	LEFT	389
#define	LEVEL	390
#define	LIKE	391
#define	LOCAL	392
#define	MATCH	393
#define	MINUTE_P	394
#define	MONTH_P	395
#define	NAMES	396
#define	NATIONAL	397
#define	NATURAL	398
#define	NCHAR	399
#define	NEXT	400
#define	NO	401
#define	NOT	402
#define	NULLIF	403
#define	NULL_P	404
#define	NUMERIC	405
#define	OF	406
#define	ON	407
#define	ONLY	408
#define	OPTION	409
#define	OR	410
#define	ORDER	411
#define	OUTER_P	412
#define	PARTIAL	413
#define	POSITION	414
#define	PRECISION	415
#define	PRIMARY	416
#define	PRIOR	417
#define	PRIVILEGES	418
#define	PROCEDURE	419
#define	PUBLIC	420
#define	READ	421
#define	REFERENCES	422
#define	RELATIVE	423
#define	REVOKE	424
#define	RIGHT	425
#define	ROLLBACK	426
#define	SCROLL	427
#define	SECOND_P	428
#define	SELECT	429
#define	SET	430
#define	SUBSTRING	431
#define	TABLE	432
#define	TEMP	433
#define	TEMPORARY	434
#define	THEN	435
#define	TIME	436
#define	TIMESTAMP	437
#define	TIMEZONE_HOUR	438
#define	TIMEZONE_MINUTE	439
#define	TO	440
#define	TRAILING	441
#define	TRANSACTION	442
#define	TRIM	443
#define	TRUE_P	444
#define	UNION	445
#define	UNIQUE	446
#define	UPDATE	447
#define	USER	448
#define	USING	449
#define	VALUES	450
#define	VARCHAR	451
#define	VARYING	452
#define	VIEW	453
#define	WHEN	454
#define	WHERE	455
#define	WITH	456
#define	WORK	457
#define	YEAR_P	458
#define	ZONE	459
#define	TRIGGER	460
#define	COMMITTED	461
#define	SERIALIZABLE	462
#define	TYPE_P	463
#define	ABORT_TRANS	464
#define	ACCESS	465
#define	AFTER	466
#define	AGGREGATE	467
#define	ANALYZE	468
#define	BACKWARD	469
#define	BEFORE	470
#define	BINARY	471
#define	CACHE	472
#define	CLUSTER	473
#define	COPY	474
#define	CREATEDB	475
#define	CREATEUSER	476
#define	CYCLE	477
#define	DATABASE	478
#define	DELIMITERS	479
#define	DO	480
#define	EACH	481
#define	ENCODING	482
#define	EXCLUSIVE	483
#define	EXPLAIN	484
#define	EXTEND	485
#define	FORWARD	486
#define	FUNCTION	487
#define	HANDLER	488
#define	INCREMENT	489
#define	INDEX	490
#define	INHERITS	491
#define	INSTEAD	492
#define	ISNULL	493
#define	LANCOMPILER	494
#define	LIMIT	495
#define	LISTEN	496
#define	UNLISTEN	497
#define	LOAD	498
#define	LOCATION	499
#define	LOCK_P	500
#define	MAXVALUE	501
#define	MINVALUE	502
#define	MODE	503
#define	MOVE	504
#define	NEW	505
#define	NOCREATEDB	506
#define	NOCREATEUSER	507
#define	NONE	508
#define	NOTHING	509
#define	NOTIFY	510
#define	NOTNULL	511
#define	OFFSET	512
#define	OIDS	513
#define	OPERATOR	514
#define	PASSWORD	515
#define	PROCEDURAL	516
#define	RENAME	517
#define	RESET	518
#define	RETURNS	519
#define	ROW	520
#define	RULE	521
#define	SERIAL	522
#define	SEQUENCE	523
#define	SETOF	524
#define	SHARE	525
#define	SHOW	526
#define	START	527
#define	STATEMENT	528
#define	STDIN	529
#define	STDOUT	530
#define	TRUSTED	531
#define	UNTIL	532
#define	VACUUM	533
#define	VALID	534
#define	VERBOSE	535
#define	VERSION	536
#define	IDENT	537
#define	SCONST	538
#define	Op	539
#define	CSTRING	540
#define	CVARIABLE	541
#define	CPP_LINE	542
#define	ICONST	543
#define	PARAM	544
#define	FCONST	545
#define	OP	546
#define	UMINUS	547

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



#define	YYFINAL		2494
#define	YYFLAG		-32768
#define	YYNTBASE	313

#define YYTRANSLATE(x) ((unsigned)(x) <= 548 ? yytranslate[x] : 683)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,   299,     2,     2,   308,
   309,   297,   295,   307,   296,   304,   298,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,   301,   302,   293,
   292,   294,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   305,     2,   306,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   310,   300,   311,     2,     2,     2,     2,     2,
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
   276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
   286,   287,   288,   289,   290,   291,   303,   312
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
   183,   185,   189,   190,   194,   195,   200,   205,   210,   216,
   220,   223,   225,   227,   229,   231,   233,   235,   238,   242,
   247,   250,   254,   259,   265,   269,   274,   278,   285,   291,
   294,   297,   305,   307,   309,   311,   313,   315,   317,   318,
   321,   322,   326,   327,   336,   338,   341,   343,   345,   346,
   348,   350,   354,   356,   357,   359,   361,   365,   369,   371,
   372,   375,   377,   380,   381,   385,   387,   392,   395,   398,
   401,   403,   406,   412,   416,   418,   420,   423,   427,   431,
   435,   439,   443,   447,   451,   455,   458,   461,   465,   472,
   476,   480,   485,   489,   492,   495,   497,   499,   504,   506,
   511,   513,   515,   519,   521,   526,   531,   537,   548,   552,
   554,   556,   558,   560,   563,   567,   571,   575,   579,   583,
   587,   591,   595,   598,   601,   605,   612,   616,   620,   625,
   629,   633,   638,   642,   646,   649,   652,   655,   658,   662,
   665,   670,   674,   678,   683,   688,   694,   701,   707,   714,
   718,   720,   722,   725,   728,   729,   732,   734,   735,   739,
   743,   746,   748,   751,   754,   759,   760,   768,   772,   773,
   777,   779,   781,   786,   789,   790,   793,   795,   798,   801,
   804,   807,   809,   811,   813,   816,   818,   821,   831,   833,
   834,   839,   854,   856,   858,   860,   864,   870,   872,   874,
   876,   880,   882,   883,   885,   887,   889,   893,   894,   896,
   898,   900,   902,   908,   912,   915,   917,   919,   921,   923,
   925,   927,   929,   931,   935,   937,   941,   945,   947,   951,
   953,   955,   957,   959,   962,   966,   970,   977,   982,   984,
   986,   988,   990,   991,   993,   996,   998,  1000,  1002,  1003,
  1006,  1009,  1010,  1018,  1021,  1023,  1025,  1027,  1031,  1033,
  1035,  1037,  1039,  1041,  1043,  1046,  1048,  1052,  1053,  1060,
  1072,  1074,  1075,  1078,  1079,  1081,  1083,  1087,  1089,  1096,
  1100,  1103,  1106,  1107,  1109,  1112,  1113,  1118,  1130,  1133,
  1134,  1138,  1141,  1143,  1147,  1150,  1152,  1153,  1157,  1159,
  1161,  1163,  1165,  1170,  1172,  1174,  1179,  1186,  1188,  1190,
  1192,  1194,  1196,  1198,  1200,  1202,  1204,  1206,  1208,  1212,
  1216,  1220,  1230,  1232,  1233,  1235,  1236,  1237,  1251,  1253,
  1255,  1257,  1261,  1265,  1267,  1269,  1272,  1276,  1279,  1281,
  1283,  1285,  1287,  1291,  1293,  1295,  1297,  1299,  1301,  1303,
  1304,  1307,  1310,  1313,  1316,  1319,  1322,  1325,  1328,  1331,
  1333,  1335,  1336,  1342,  1345,  1352,  1356,  1360,  1361,  1365,
  1366,  1368,  1370,  1371,  1373,  1375,  1376,  1380,  1385,  1389,
  1395,  1397,  1398,  1400,  1401,  1405,  1406,  1408,  1412,  1416,
  1418,  1420,  1422,  1424,  1426,  1428,  1433,  1438,  1441,  1443,
  1451,  1456,  1460,  1461,  1465,  1467,  1470,  1475,  1480,  1484,
  1485,  1489,  1492,  1495,  1497,  1499,  1501,  1508,  1509,  1517,
  1519,  1521,  1523,  1526,  1527,  1532,  1536,  1538,  1542,  1547,
  1552,  1561,  1566,  1569,  1570,  1572,  1573,  1575,  1576,  1578,
  1582,  1584,  1585,  1589,  1590,  1592,  1596,  1599,  1602,  1605,
  1608,  1610,  1612,  1613,  1618,  1623,  1626,  1631,  1634,  1635,
  1637,  1639,  1641,  1643,  1645,  1647,  1648,  1650,  1652,  1656,
  1660,  1661,  1664,  1665,  1669,  1673,  1674,  1677,  1678,  1681,
  1682,  1686,  1688,  1690,  1694,  1696,  1700,  1703,  1705,  1707,
  1712,  1715,  1718,  1720,  1725,  1730,  1734,  1737,  1740,  1743,
  1745,  1747,  1748,  1750,  1751,  1756,  1759,  1763,  1765,  1767,
  1770,  1771,  1773,  1776,  1780,  1785,  1786,  1790,  1795,  1796,
  1798,  1802,  1806,  1810,  1814,  1818,  1822,  1825,  1828,  1830,
  1832,  1834,  1836,  1838,  1840,  1842,  1844,  1846,  1848,  1850,
  1852,  1854,  1856,  1858,  1860,  1862,  1864,  1866,  1868,  1870,
  1872,  1874,  1876,  1878,  1880,  1882,  1884,  1886,  1888,  1890,
  1892,  1894,  1896,  1898,  1900,  1902,  1904,  1906,  1908,  1911,
  1914,  1917,  1920,  1922,  1925,  1927,  1929,  1933,  1934,  1940,
  1944,  1945,  1951,  1955,  1956,  1961,  1963,  1968,  1971,  1973,
  1977,  1980,  1982,  1983,  1987,  1988,  1991,  1992,  1994,  1997,
  1999,  2002,  2004,  2006,  2008,  2010,  2012,  2014,  2018,  2019,
  2021,  2025,  2029,  2033,  2037,  2041,  2045,  2049,  2050,  2052,
  2054,  2062,  2071,  2080,  2088,  2096,  2100,  2102,  2104,  2106,
  2108,  2110,  2112,  2114,  2116,  2118,  2120,  2122,  2126,  2128,
  2131,  2133,  2135,  2137,  2140,  2143,  2146,  2150,  2154,  2158,
  2162,  2166,  2170,  2174,  2178,  2182,  2186,  2189,  2192,  2196,
  2203,  2207,  2211,  2215,  2220,  2223,  2226,  2231,  2235,  2240,
  2242,  2244,  2249,  2251,  2256,  2258,  2260,  2265,  2270,  2275,
  2280,  2286,  2292,  2298,  2303,  2306,  2310,  2313,  2318,  2322,
  2327,  2331,  2336,  2342,  2349,  2355,  2362,  2368,  2374,  2380,
  2386,  2392,  2398,  2404,  2410,  2416,  2423,  2430,  2437,  2444,
  2451,  2458,  2465,  2472,  2479,  2486,  2493,  2500,  2507,  2514,
  2521,  2528,  2535,  2542,  2546,  2550,  2553,  2555,  2557,  2560,
  2562,  2564,  2567,  2570,  2573,  2577,  2581,  2585,  2589,  2593,
  2596,  2599,  2603,  2610,  2614,  2618,  2621,  2624,  2628,  2633,
  2635,  2637,  2642,  2644,  2649,  2651,  2653,  2658,  2663,  2669,
  2675,  2681,  2686,  2688,  2693,  2700,  2701,  2703,  2707,  2711,
  2715,  2716,  2718,  2720,  2722,  2724,  2728,  2729,  2732,  2734,
  2737,  2741,  2745,  2749,  2753,  2757,  2760,  2764,  2771,  2775,
  2779,  2782,  2785,  2787,  2791,  2796,  2801,  2806,  2812,  2818,
  2824,  2829,  2833,  2834,  2837,  2838,  2841,  2842,  2846,  2849,
  2851,  2853,  2855,  2857,  2861,  2863,  2865,  2867,  2871,  2877,
  2884,  2889,  2892,  2894,  2899,  2902,  2903,  2906,  2908,  2909,
  2913,  2917,  2919,  2923,  2927,  2931,  2933,  2935,  2940,  2943,
  2947,  2951,  2953,  2957,  2959,  2963,  2965,  2967,  2968,  2970,
  2972,  2974,  2976,  2978,  2980,  2982,  2984,  2986,  2988,  2990,
  2992,  2994,  2997,  2999,  3001,  3003,  3006,  3008,  3010,  3012,
  3014,  3016,  3018,  3020,  3022,  3024,  3026,  3028,  3030,  3032,
  3034,  3036,  3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,
  3054,  3056,  3058,  3060,  3062,  3064,  3066,  3068,  3070,  3072,
  3074,  3076,  3078,  3080,  3082,  3084,  3086,  3088,  3090,  3092,
  3094,  3096,  3098,  3100,  3102,  3104,  3106,  3108,  3110,  3112,
  3114,  3116,  3118,  3120,  3122,  3124,  3126,  3128,  3130,  3132,
  3134,  3136,  3138,  3140,  3142,  3144,  3146,  3148,  3150,  3152,
  3154,  3156,  3158,  3160,  3162,  3164,  3166,  3168,  3170,  3172,
  3174,  3176,  3178,  3180,  3182,  3184,  3186,  3188,  3190,  3192,
  3194,  3196,  3198,  3200,  3202,  3204,  3206,  3208,  3210,  3212,
  3214,  3216,  3218,  3220,  3222,  3224,  3226,  3228,  3230,  3232,
  3234,  3236,  3238,  3240,  3242,  3244,  3246,  3248,  3250,  3252,
  3254,  3256,  3258,  3260,  3262,  3264,  3266,  3268,  3270,  3272,
  3274,  3276,  3278,  3280,  3282,  3284,  3286,  3288,  3290,  3292,
  3294,  3296,  3298,  3300,  3302,  3304,  3306,  3308,  3310,  3312,
  3314,  3320,  3324,  3327,  3331,  3338,  3340,  3342,  3345,  3348,
  3350,  3351,  3353,  3357,  3360,  3361,  3364,  3365,  3368,  3369,
  3371,  3375,  3380,  3384,  3386,  3388,  3390,  3392,  3395,  3396,
  3403,  3407,  3408,  3413,  3419,  3425,  3426,  3429,  3430,  3431,
  3438,  3440,  3442,  3444,  3446,  3448,  3450,  3451,  3453,  3455,
  3457,  3459,  3461,  3463,  3468,  3471,  3476,  3481,  3484,  3487,
  3488,  3490,  3492,  3495,  3497,  3500,  3502,  3505,  3507,  3509,
  3511,  3513,  3516,  3518,  3520,  3524,  3529,  3530,  3533,  3534,
  3536,  3540,  3543,  3545,  3547,  3549,  3550,  3552,  3554,  3558,
  3559,  3564,  3566,  3568,  3571,  3575,  3576,  3579,  3581,  3585,
  3590,  3593,  3598,  3600,  3602,  3604,  3606,  3611,  3618,  3622,
  3626,  3631,  3636,  3637,  3641,  3645,  3650,  3655,  3656,  3658,
  3659,  3661,  3663,  3665,  3667,  3670,  3672,  3675,  3678,  3680,
  3683,  3686,  3689,  3690,  3696,  3697,  3703,  3705,  3707,  3708,
  3709,  3712,  3713,  3718,  3720,  3724,  3728,  3735,  3739,  3744,
  3748,  3750,  3752,  3754,  3757,  3761,  3767,  3770,  3776,  3779,
  3781,  3783,  3785,  3788,  3791,  3794,  3798,  3802,  3806,  3810,
  3814,  3818,  3822,  3826,  3830,  3834,  3837,  3840,  3844,  3851,
  3855,  3859,  3863,  3868,  3871,  3874,  3879,  3883,  3888,  3890,
  3892,  3897,  3899,  3904,  3906,  3908,  3913,  3918,  3923,  3928,
  3934,  3940,  3946,  3951,  3954,  3958,  3961,  3966,  3970,  3975,
  3979,  3984,  3990,  3997,  4003,  4010,  4016,  4022,  4028,  4034,
  4040,  4046,  4052,  4058,  4064,  4071,  4078,  4085,  4092,  4099,
  4106,  4113,  4120,  4127,  4134,  4141,  4148,  4155,  4162,  4169,
  4176,  4183,  4190,  4194,  4198,  4201,  4203,  4205,  4207,  4211,
  4213,  4214,  4217,  4219,  4222,  4225,  4228,  4230,  4232,  4233,
  4235,  4238,  4241,  4243,  4245,  4247,  4249,  4251,  4254,  4256,
  4258,  4260,  4262,  4264,  4266,  4268,  4270,  4272,  4274,  4276,
  4278,  4280,  4282,  4284,  4286,  4288,  4290,  4292,  4294,  4296,
  4298,  4300,  4302,  4304,  4306,  4308,  4310,  4312,  4314,  4316,
  4318,  4320,  4322,  4324,  4326,  4328,  4330,  4332,  4334,  4336,
  4338,  4340,  4342,  4344,  4348,  4350
};

static const short yyrhs[] = {   314,
     0,     0,   314,   315,     0,   665,   316,   317,   302,     0,
   665,   317,   302,     0,   607,     0,   677,     0,   675,     0,
   681,     0,   682,     0,     3,   593,     0,   333,     0,   319,
     0,   335,     0,   336,     0,   342,     0,   367,     0,   371,
     0,   377,     0,   380,     0,   318,     0,   460,     0,   390,
     0,   398,     0,   379,     0,   389,     0,   320,     0,   419,
     0,   466,     0,   399,     0,   403,     0,   410,     0,   448,
     0,   449,     0,   474,     0,   420,     0,   428,     0,   431,
     0,   430,     0,   426,     0,   435,     0,   409,     0,   467,
     0,   438,     0,   450,     0,   452,     0,   453,     0,   454,
     0,   459,     0,   461,     0,   327,     0,   331,     0,   332,
     0,   592,     0,   605,     0,   606,     0,   630,     0,   631,
     0,   634,     0,   637,     0,   638,     0,   641,     0,   642,
     0,   643,     0,   646,     0,   647,     0,   660,     0,   661,
     0,    86,   193,   587,   321,   322,   323,   325,   326,     0,
    65,   193,   587,   321,   322,   323,   325,   326,     0,   102,
   193,   587,     0,   201,   260,   587,     0,     0,   220,     0,
   251,     0,     0,   221,     0,   252,     0,     0,   324,   307,
   587,     0,   587,     0,   121,   118,   324,     0,     0,   279,
   277,   586,     0,     0,   175,   589,   185,   329,     0,   175,
   589,   292,   329,     0,   175,   181,   204,   330,     0,   175,
   187,   129,   135,   328,     0,   175,   141,   458,     0,   166,
   206,     0,   207,     0,   586,     0,    97,     0,   586,     0,
    97,     0,   137,     0,   271,   589,     0,   271,   181,   204,
     0,   271,   187,   129,   135,     0,   263,   589,     0,   263,
   181,   204,     0,   263,   187,   129,   135,     0,    65,   177,
   573,   496,   334,     0,    63,   437,   348,     0,    63,   308,
   346,   309,     0,   102,   437,   589,     0,    65,   437,   589,
   175,    97,   355,     0,    65,   437,   589,   102,    97,     0,
    63,   357,     0,    80,   572,     0,   219,   339,   573,   340,
   337,   338,   341,     0,   185,     0,   114,     0,   586,     0,
   274,     0,   275,     0,   216,     0,     0,   201,   258,     0,
     0,   194,   224,   586,     0,     0,    86,   343,   177,   573,
   308,   346,   309,   366,     0,   344,     0,   345,   344,     0,
   178,     0,   179,     0,     0,   116,     0,   137,     0,   346,
   307,   347,     0,   347,     0,     0,   348,     0,   356,     0,
   589,   521,   349,     0,   589,   267,   351,     0,   350,     0,
     0,   350,   352,     0,   352,     0,   161,   131,     0,     0,
    85,   579,   353,     0,   353,     0,    79,   308,   359,   309,
     0,    97,   149,     0,    97,   355,     0,   147,   149,     0,
   191,     0,   161,   131,     0,   167,   589,   470,   362,   363,
     0,   354,   307,   355,     0,   355,     0,   582,     0,   296,
   355,     0,   355,   295,   355,     0,   355,   296,   355,     0,
   355,   298,   355,     0,   355,   299,   355,     0,   355,   297,
   355,     0,   355,   292,   355,     0,   355,   293,   355,     0,
   355,   294,   355,     0,   302,   355,     0,   300,   355,     0,
   355,    60,   521,     0,    76,   308,   355,    68,   521,   309,
     0,   308,   355,   309,     0,   580,   308,   309,     0,   580,
   308,   354,   309,     0,   355,   284,   355,     0,   284,   355,
     0,   355,   284,     0,    89,     0,    90,     0,    90,   308,
   584,   309,     0,    91,     0,    91,   308,   584,   309,     0,
    92,     0,   193,     0,    85,   579,   357,     0,   357,     0,
    79,   308,   359,   309,     0,   191,   308,   471,   309,     0,
   161,   131,   308,   471,   309,     0,   113,   131,   308,   471,
   309,   167,   589,   470,   362,   363,     0,   358,   307,   359,
     0,   359,     0,   582,     0,   149,     0,   589,     0,   296,
   359,     0,   359,   295,   359,     0,   359,   296,   359,     0,
   359,   298,   359,     0,   359,   299,   359,     0,   359,   297,
   359,     0,   359,   292,   359,     0,   359,   293,   359,     0,
   359,   294,   359,     0,   302,   359,     0,   300,   359,     0,
   359,    60,   521,     0,    76,   308,   359,    68,   521,   309,
     0,   308,   359,   309,     0,   580,   308,   309,     0,   580,
   308,   358,   309,     0,   359,   284,   359,     0,   359,   136,
   359,     0,   359,   147,   136,   359,     0,   359,    66,   359,
     0,   359,   155,   359,     0,   147,   359,     0,   284,   359,
     0,   359,   284,     0,   359,   238,     0,   359,   128,   149,
     0,   359,   256,     0,   359,   128,   147,   149,     0,   359,
   128,   189,     0,   359,   128,   109,     0,   359,   128,   147,
   189,     0,   359,   128,   147,   109,     0,   359,   121,   308,
   360,   309,     0,   359,   147,   121,   308,   360,   309,     0,
   359,    71,   361,    66,   361,     0,   359,   147,    71,   361,
    66,   361,     0,   360,   307,   361,     0,   361,     0,   582,
     0,   138,   115,     0,   138,   158,     0,     0,   364,   364,
     0,   364,     0,     0,   152,    98,   365,     0,   152,   192,
   365,     0,   146,    62,     0,    74,     0,   175,    97,     0,
   175,   149,     0,   236,   308,   497,   309,     0,     0,    86,
   343,   177,   573,   368,    68,   484,     0,   308,   369,   309,
     0,     0,   369,   307,   370,     0,   370,     0,   589,     0,
    86,   268,   573,   372,     0,   372,   373,     0,     0,   217,
   376,     0,   222,     0,   234,   376,     0,   246,   376,     0,
   247,   376,     0,   272,   376,     0,   375,     0,   376,     0,
   585,     0,   296,   585,     0,   584,     0,   296,   584,     0,
    86,   378,   261,   132,   586,   233,   393,   239,   586,     0,
   276,     0,     0,   102,   261,   132,   586,     0,    86,   205,
   579,   381,   382,   152,   573,   384,   106,   164,   579,   308,
   387,   309,     0,   215,     0,   211,     0,   383,     0,   383,
   155,   383,     0,   383,   155,   383,   155,   383,     0,   124,
     0,    98,     0,   192,     0,   112,   385,   386,     0,   226,
     0,     0,   265,     0,   273,     0,   388,     0,   387,   307,
   388,     0,     0,   584,     0,   585,     0,   586,     0,   673,
     0,   102,   205,   579,   152,   573,     0,    86,   392,   391,
     0,   393,   394,     0,   259,     0,   208,     0,   212,     0,
   164,     0,   130,     0,   589,     0,   433,     0,   284,     0,
   308,   395,   309,     0,   396,     0,   395,   307,   396,     0,
   393,   292,   397,     0,   393,     0,    97,   292,   397,     0,
   589,     0,   432,     0,   374,     0,   586,     0,   269,   589,
     0,   102,   177,   497,     0,   102,   268,   497,     0,   110,
   400,   401,   402,   127,   664,     0,   249,   400,   401,   402,
     0,   231,     0,   214,     0,   168,     0,    61,     0,     0,
   584,     0,   296,   584,     0,    64,     0,   145,     0,   162,
     0,     0,   121,   579,     0,   114,   579,     0,     0,   117,
   404,   152,   497,   185,   407,   408,     0,    64,   163,     0,
    64,     0,   405,     0,   406,     0,   405,   307,   406,     0,
   174,     0,   124,     0,   192,     0,    98,     0,   266,     0,
   165,     0,   118,   589,     0,   589,     0,   201,   117,   154,
     0,     0,   169,   404,   152,   497,   114,   407,     0,    86,
   411,   235,   578,   152,   573,   412,   308,   413,   309,   421,
     0,   191,     0,     0,   194,   575,     0,     0,   414,     0,
   415,     0,   414,   307,   416,     0,   416,     0,   580,   308,
   498,   309,   417,   418,     0,   576,   417,   418,     0,   301,
   521,     0,   112,   521,     0,     0,   577,     0,   194,   577,
     0,     0,   230,   235,   578,   516,     0,    86,   232,   580,
   422,   264,   424,   421,    68,   586,   132,   586,     0,   201,
   394,     0,     0,   308,   423,   309,     0,   308,   309,     0,
   588,     0,   423,   307,   588,     0,   425,   588,     0,   269,
     0,     0,   102,   427,   579,     0,   208,     0,   235,     0,
   266,     0,   198,     0,   102,   212,   579,   429,     0,   579,
     0,   297,     0,   102,   232,   580,   422,     0,   102,   259,
   432,   308,   434,   309,     0,   284,     0,   433,     0,   295,
     0,   296,     0,   297,     0,   299,     0,   298,     0,   293,
     0,   294,     0,   292,     0,   579,     0,   579,   307,   579,
     0,   253,   307,   579,     0,   579,   307,   253,     0,    65,
   177,   573,   496,   262,   437,   436,   185,   579,     0,   579,
     0,     0,    83,     0,     0,     0,    86,   266,   579,    68,
   439,   152,   445,   185,   444,   516,   225,   446,   440,     0,
   254,     0,   482,     0,   443,     0,   305,   441,   306,     0,
   308,   441,   309,     0,   442,     0,   443,     0,   442,   443,
     0,   442,   443,   302,     0,   443,   302,     0,   468,     0,
   478,     0,   473,     0,   447,     0,   573,   304,   576,     0,
   573,     0,   174,     0,   192,     0,    98,     0,   124,     0,
   237,     0,     0,   255,   573,     0,   241,   573,     0,   242,
   573,     0,   242,   297,     0,   209,   451,     0,    70,   451,
     0,    84,   451,     0,   104,   451,     0,   171,   451,     0,
   202,     0,   187,     0,     0,    86,   198,   579,    68,   482,
     0,   243,   581,     0,    86,   223,   574,   201,   455,   456,
     0,    86,   223,   574,     0,   244,   292,   457,     0,     0,
   227,   292,   458,     0,     0,   586,     0,    97,     0,     0,
   586,     0,    97,     0,     0,   102,   223,   574,     0,   218,
   578,   152,   573,     0,   278,   462,   463,     0,   278,   462,
   463,   573,   464,     0,   280,     0,     0,   213,     0,     0,
   308,   465,   309,     0,     0,   579,     0,   465,   307,   579,
     0,   229,   462,   467,     0,   482,     0,   479,     0,   478,
     0,   468,     0,   447,     0,   473,     0,   124,   127,   573,
   469,     0,   195,   308,   570,   309,     0,    97,   195,     0,
   482,     0,   308,   471,   309,   195,   308,   570,   309,     0,
   308,   471,   309,   482,     0,   308,   471,   309,     0,     0,
   471,   307,   472,     0,   472,     0,   589,   547,     0,    98,
   114,   573,   516,     0,   245,   486,   573,   475,     0,   121,
   476,   248,     0,     0,   270,   265,   228,     0,   265,   477,
     0,   210,   477,     0,   477,     0,   270,     0,   228,     0,
   192,   573,   175,   568,   503,   516,     0,     0,    96,   579,
   481,    93,   112,   480,   482,     0,   216,     0,   123,     0,
   172,     0,   123,   172,     0,     0,   483,   489,   501,   493,
     0,   308,   483,   309,     0,   484,     0,   483,   105,   483,
     0,   483,   190,   487,   483,     0,   483,   125,   487,   483,
     0,   174,   488,   570,   485,   503,   516,   499,   500,     0,
   127,   343,   486,   573,     0,   127,   664,     0,     0,   177,
     0,     0,    64,     0,     0,   100,     0,   100,   152,   589,
     0,    64,     0,     0,   156,    73,   490,     0,     0,   491,
     0,   490,   307,   491,     0,   545,   492,     0,   194,   284,
     0,   194,   293,     0,   194,   294,     0,    69,     0,    99,
     0,     0,   240,   494,   307,   495,     0,   240,   494,   257,
   495,     0,   240,   494,     0,   257,   495,   240,   494,     0,
   257,   495,     0,     0,   584,     0,    64,     0,   289,     0,
   584,     0,   289,     0,   297,     0,     0,   498,     0,   579,
     0,   498,   307,   579,     0,   118,    73,   548,     0,     0,
   119,   545,     0,     0,   112,   192,   502,     0,   112,   166,
   153,     0,     0,   151,   465,     0,     0,   114,   504,     0,
     0,   308,   507,   309,     0,   508,     0,   505,     0,   505,
   307,   506,     0,   506,     0,   517,    68,   590,     0,   517,
   589,     0,   517,     0,   508,     0,   506,   190,   130,   506,
     0,   506,   509,     0,   509,   510,     0,   510,     0,   511,
   130,   506,   513,     0,   143,   511,   130,   506,     0,    87,
   130,   506,     0,   115,   512,     0,   134,   512,     0,   170,
   512,     0,   157,     0,   122,     0,     0,   157,     0,     0,
   194,   308,   514,   309,     0,   152,   545,     0,   514,   307,
   515,     0,   515,     0,   589,     0,   200,   545,     0,     0,
   573,     0,   573,   297,     0,   305,   306,   519,     0,   305,
   520,   306,   519,     0,     0,   305,   306,   519,     0,   305,
   520,   306,   519,     0,     0,   584,     0,   308,   520,   309,
     0,   520,   295,   520,     0,   520,   296,   520,     0,   520,
   297,   520,     0,   520,   298,   520,     0,   520,   299,   520,
     0,   522,   518,     0,   269,   522,     0,   523,     0,   535,
     0,   525,     0,   530,     0,   524,     0,   673,     0,   208,
     0,     3,     0,     4,     0,     5,     0,     6,     0,     7,
     0,     8,     0,     9,     0,    10,     0,    11,     0,    12,
     0,    14,     0,    16,     0,    17,     0,    18,     0,    19,
     0,    20,     0,    21,     0,    22,     0,    23,     0,    24,
     0,    25,     0,    26,     0,    28,     0,    29,     0,    30,
     0,    31,     0,    32,     0,    33,     0,    35,     0,    36,
     0,    37,     0,    38,     0,    39,     0,   111,   527,     0,
   101,   160,     0,    95,   529,     0,   150,   528,     0,   111,
     0,   101,   160,     0,    95,     0,   150,     0,   308,   584,
   309,     0,     0,   308,   584,   307,   584,   309,     0,   308,
   584,   309,     0,     0,   308,   584,   307,   584,   309,     0,
   308,   584,   309,     0,     0,   531,   308,   584,   309,     0,
   531,     0,    78,   532,   533,   534,     0,    77,   532,     0,
   196,     0,   142,    78,   532,     0,   144,   532,     0,   197,
     0,     0,    78,   175,   589,     0,     0,    82,   589,     0,
     0,   536,     0,   182,   537,     0,   181,     0,   126,   538,
     0,   203,     0,   140,     0,    94,     0,   120,     0,   139,
     0,   173,     0,   201,   181,   204,     0,     0,   536,     0,
   203,   185,   140,     0,    94,   185,   120,     0,    94,   185,
   139,     0,    94,   185,   173,     0,   120,   185,   139,     0,
   139,   185,   173,     0,   120,   185,   173,     0,     0,   545,
     0,   149,     0,   308,   541,   309,   121,   308,   484,   309,
     0,   308,   541,   309,   147,   121,   308,   484,   309,     0,
   308,   541,   309,   542,   543,   308,   484,   309,     0,   308,
   541,   309,   542,   308,   484,   309,     0,   308,   541,   309,
   542,   308,   541,   309,     0,   544,   307,   545,     0,   284,
     0,   293,     0,   292,     0,   294,     0,   295,     0,   296,
     0,   297,     0,   299,     0,   298,     0,    67,     0,    64,
     0,   544,   307,   545,     0,   545,     0,   566,   547,     0,
   540,     0,   582,     0,   589,     0,   296,   545,     0,   299,
   545,     0,   545,   299,     0,   545,   295,   545,     0,   545,
   296,   545,     0,   545,   298,   545,     0,   545,   299,   545,
     0,   545,   297,   545,     0,   545,   293,   545,     0,   545,
   294,   545,     0,   545,   292,   149,     0,   149,   292,   545,
     0,   545,   292,   545,     0,   302,   545,     0,   300,   545,
     0,   545,    60,   521,     0,    76,   308,   545,    68,   521,
   309,     0,   308,   539,   309,     0,   545,   284,   545,     0,
   545,   136,   545,     0,   545,   147,   136,   545,     0,   284,
   545,     0,   545,   284,     0,   580,   308,   297,   309,     0,
   580,   308,   309,     0,   580,   308,   548,   309,     0,    89,
     0,    90,     0,    90,   308,   584,   309,     0,    91,     0,
    91,   308,   584,   309,     0,    92,     0,   193,     0,   107,
   308,   484,   309,     0,   108,   308,   549,   309,     0,   159,
   308,   551,   309,     0,   176,   308,   553,   309,     0,   188,
   308,    72,   556,   309,     0,   188,   308,   133,   556,   309,
     0,   188,   308,   186,   556,   309,     0,   188,   308,   556,
   309,     0,   545,   238,     0,   545,   128,   149,     0,   545,
   256,     0,   545,   128,   147,   149,     0,   545,   128,   189,
     0,   545,   128,   147,   109,     0,   545,   128,   109,     0,
   545,   128,   147,   189,     0,   545,    71,   546,    66,   546,
     0,   545,   147,    71,   546,    66,   546,     0,   545,   121,
   308,   557,   309,     0,   545,   147,   121,   308,   559,   309,
     0,   545,   284,   308,   484,   309,     0,   545,   295,   308,
   484,   309,     0,   545,   296,   308,   484,   309,     0,   545,
   298,   308,   484,   309,     0,   545,   299,   308,   484,   309,
     0,   545,   297,   308,   484,   309,     0,   545,   293,   308,
   484,   309,     0,   545,   294,   308,   484,   309,     0,   545,
   292,   308,   484,   309,     0,   545,   284,    67,   308,   484,
   309,     0,   545,   295,    67,   308,   484,   309,     0,   545,
   296,    67,   308,   484,   309,     0,   545,   298,    67,   308,
   484,   309,     0,   545,   299,    67,   308,   484,   309,     0,
   545,   297,    67,   308,   484,   309,     0,   545,   293,    67,
   308,   484,   309,     0,   545,   294,    67,   308,   484,   309,
     0,   545,   292,    67,   308,   484,   309,     0,   545,   284,
    64,   308,   484,   309,     0,   545,   295,    64,   308,   484,
   309,     0,   545,   296,    64,   308,   484,   309,     0,   545,
   298,    64,   308,   484,   309,     0,   545,   299,    64,   308,
   484,   309,     0,   545,   297,    64,   308,   484,   309,     0,
   545,   293,    64,   308,   484,   309,     0,   545,   294,    64,
   308,   484,   309,     0,   545,   292,    64,   308,   484,   309,
     0,   545,    66,   545,     0,   545,   155,   545,     0,   147,
   545,     0,   561,     0,   669,     0,   566,   547,     0,   582,
     0,   589,     0,   296,   546,     0,   299,   546,     0,   546,
   299,     0,   546,   295,   546,     0,   546,   296,   546,     0,
   546,   298,   546,     0,   546,   299,   546,     0,   546,   297,
   546,     0,   302,   546,     0,   300,   546,     0,   546,    60,
   521,     0,    76,   308,   546,    68,   521,   309,     0,   308,
   545,   309,     0,   546,   284,   546,     0,   284,   546,     0,
   546,   284,     0,   580,   308,   309,     0,   580,   308,   548,
   309,     0,    89,     0,    90,     0,    90,   308,   584,   309,
     0,    91,     0,    91,   308,   584,   309,     0,    92,     0,
   193,     0,   159,   308,   551,   309,     0,   176,   308,   553,
   309,     0,   188,   308,    72,   556,   309,     0,   188,   308,
   133,   556,   309,     0,   188,   308,   186,   556,   309,     0,
   188,   308,   556,   309,     0,   670,     0,   305,   663,   306,
   547,     0,   305,   663,   301,   663,   306,   547,     0,     0,
   539,     0,   548,   307,   539,     0,   548,   194,   545,     0,
   550,   114,   545,     0,     0,   669,     0,   536,     0,   183,
     0,   184,     0,   552,   121,   552,     0,     0,   566,   547,
     0,   582,     0,   296,   552,     0,   552,   295,   552,     0,
   552,   296,   552,     0,   552,   298,   552,     0,   552,   299,
   552,     0,   552,   297,   552,     0,   300,   552,     0,   552,
    60,   521,     0,    76,   308,   552,    68,   521,   309,     0,
   308,   552,   309,     0,   552,   284,   552,     0,   284,   552,
     0,   552,   284,     0,   589,     0,   580,   308,   309,     0,
   580,   308,   548,   309,     0,   159,   308,   551,   309,     0,
   176,   308,   553,   309,     0,   188,   308,    72,   556,   309,
     0,   188,   308,   133,   556,   309,     0,   188,   308,   186,
   556,   309,     0,   188,   308,   556,   309,     0,   548,   554,
   555,     0,     0,   114,   548,     0,     0,   112,   548,     0,
     0,   545,   114,   548,     0,   114,   548,     0,   548,     0,
   484,     0,   558,     0,   582,     0,   558,   307,   582,     0,
   484,     0,   560,     0,   582,     0,   560,   307,   582,     0,
    75,   565,   562,   564,   104,     0,   148,   308,   545,   307,
   545,   309,     0,    81,   308,   548,   309,     0,   562,   563,
     0,   563,     0,   199,   545,   180,   539,     0,   103,   539,
     0,     0,   566,   547,     0,   589,     0,     0,   573,   304,
   567,     0,   583,   304,   567,     0,   576,     0,   567,   304,
   576,     0,   567,   304,   297,     0,   568,   307,   569,     0,
   569,     0,   297,     0,   589,   547,   292,   539,     0,   566,
   547,     0,   573,   304,   297,     0,   570,   307,   571,     0,
   571,     0,   539,    68,   590,     0,   539,     0,   573,   304,
   297,     0,   297,     0,   589,     0,     0,   591,     0,   589,
     0,   589,     0,   673,     0,   589,     0,   673,     0,   589,
     0,   589,     0,   589,     0,   586,     0,   584,     0,   585,
     0,   586,     0,   521,   586,     0,   583,     0,   189,     0,
   109,     0,   289,   547,     0,   288,     0,   290,     0,   283,
     0,   673,     0,   589,     0,   526,     0,   531,     0,   673,
     0,   536,     0,    61,     0,   210,     0,    62,     0,   211,
     0,   212,     0,   214,     0,   215,     0,   217,     0,   206,
     0,   220,     0,   221,     0,   222,     0,   223,     0,   224,
     0,   101,     0,   226,     0,   227,     0,   228,     0,   231,
     0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
     0,   123,     0,   237,     0,   238,     0,   131,     0,   132,
     0,   239,     0,   244,     0,   138,     0,   246,     0,   247,
     0,   248,     0,   145,     0,   251,     0,   252,     0,   254,
     0,   256,     0,   151,     0,   258,     0,   153,     0,   259,
     0,   154,     0,   260,     0,   162,     0,   163,     0,   261,
     0,   166,     0,   168,     0,   262,     0,   264,     0,   265,
     0,   266,     0,   172,     0,   268,     0,   267,     0,   207,
     0,   270,     0,   272,     0,   273,     0,   274,     0,   275,
     0,   181,     0,   182,     0,   183,     0,   184,     0,   205,
     0,   276,     0,   208,     0,   279,     0,   281,     0,   204,
     0,     3,     0,     5,     0,     6,     0,     7,     0,     8,
     0,    10,     0,    11,     0,    12,     0,    14,     0,    16,
     0,    17,     0,    18,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    35,     0,    36,     0,    37,     0,    38,
     0,    39,     0,   589,     0,   209,     0,   213,     0,   216,
     0,    75,     0,   218,     0,    81,     0,    85,     0,   219,
     0,    88,     0,   225,     0,   103,     0,   104,     0,   229,
     0,   230,     0,   109,     0,   113,     0,   118,     0,   241,
     0,   243,     0,   245,     0,   249,     0,   250,     0,   253,
     0,   148,     0,   156,     0,   159,     0,   160,     0,   263,
     0,   269,     0,   271,     0,   177,     0,   180,     0,   187,
     0,   189,     0,   278,     0,   280,     0,   199,     0,    88,
     0,   250,     0,     8,   185,   593,   599,   600,     0,     8,
   185,    97,     0,     8,   601,     0,   574,   596,   598,     0,
   594,   595,   598,   298,   574,   604,     0,   603,     0,   586,
     0,   673,   671,     0,   284,   597,     0,   595,     0,     0,
   589,     0,   589,   304,   597,     0,   301,   584,     0,     0,
    68,   593,     0,     0,   193,   601,     0,     0,   602,     0,
   602,   298,   602,     0,   602,    18,    73,   602,     0,   602,
   194,   602,     0,   587,     0,   603,     0,   283,     0,   671,
     0,   284,   589,     0,     0,    96,   579,   481,    93,   112,
   673,     0,    11,    25,   673,     0,     0,   609,   608,   611,
   610,     0,   665,    70,    96,    28,   302,     0,   665,   104,
    96,    28,   302,     0,     0,   612,   611,     0,     0,     0,
   615,   613,   616,   614,   626,   302,     0,    47,     0,    55,
     0,    54,     0,    44,     0,    52,     0,    41,     0,     0,
   624,     0,   625,     0,   619,     0,   620,     0,   617,     0,
   674,     0,   618,   310,   676,   311,     0,    46,   623,     0,
   621,   310,   611,   311,     0,   622,   310,   611,   311,     0,
    56,   623,     0,    57,   623,     0,     0,   674,     0,    53,
     0,    58,    53,     0,    49,     0,    58,    49,     0,    51,
     0,    58,    51,     0,    48,     0,    45,     0,    42,     0,
    43,     0,    58,    43,     0,    59,     0,   627,     0,   626,
   307,   627,     0,   629,   674,   518,   628,     0,     0,   292,
   667,     0,     0,   297,     0,    96,   273,   673,     0,    12,
   632,     0,   633,     0,    88,     0,    64,     0,     0,   593,
     0,    97,     0,   106,    19,   636,     0,     0,   106,   673,
   635,   639,     0,   603,     0,   285,     0,    15,   673,     0,
    24,   579,   639,     0,     0,   194,   640,     0,   669,     0,
   669,   307,   640,     0,    25,   673,   114,   636,     0,   450,
    26,     0,   175,     4,   645,   644,     0,   152,     0,    23,
     0,   185,     0,   312,     0,   175,     9,   645,   633,     0,
   208,   674,   128,   651,   648,   650,     0,   305,   306,   649,
     0,   308,   309,   649,     0,   305,   520,   306,   649,     0,
   308,   520,   309,   649,     0,     0,   305,   306,   649,     0,
   308,   309,   649,     0,   305,   520,   306,   649,     0,   308,
   520,   309,   649,     0,     0,    27,     0,     0,    77,     0,
   196,     0,   111,     0,   101,     0,   654,    21,     0,    13,
     0,   654,    29,     0,   654,    22,     0,     5,     0,    37,
    21,     0,    37,    29,     0,    37,    22,     0,     0,    36,
   652,   310,   655,   311,     0,     0,   190,   653,   310,   655,
   311,     0,   674,     0,    30,     0,     0,     0,   656,   655,
     0,     0,   651,   657,   658,   302,     0,   659,     0,   658,
   307,   659,     0,   629,   674,   518,     0,    38,   674,   128,
   651,   648,   650,     0,    39,    31,   662,     0,    39,   147,
    14,   662,     0,    39,    33,   662,     0,    10,     0,    32,
     0,    35,     0,    17,   579,     0,    16,   185,   579,     0,
   225,   579,   308,   666,   309,     0,   225,     6,     0,     7,
   579,   308,   666,   309,     0,   566,   547,     0,   540,     0,
   582,     0,   589,     0,   296,   663,     0,   299,   663,     0,
   545,   299,     0,   545,   295,   663,     0,   545,   296,   663,
     0,   545,   298,   663,     0,   545,   299,   663,     0,   545,
   297,   663,     0,   545,   293,   663,     0,   545,   294,   663,
     0,   545,   292,   149,     0,   149,   292,   545,     0,   545,
   292,   663,     0,   302,   663,     0,   300,   663,     0,   545,
    60,   521,     0,    76,   308,   545,    68,   521,   309,     0,
   308,   539,   309,     0,   545,   284,   663,     0,   545,   136,
   663,     0,   545,   147,   136,   663,     0,   284,   663,     0,
   545,   284,     0,   580,   308,   297,   309,     0,   580,   308,
   309,     0,   580,   308,   548,   309,     0,    89,     0,    90,
     0,    90,   308,   584,   309,     0,    91,     0,    91,   308,
   584,   309,     0,    92,     0,   193,     0,   107,   308,   484,
   309,     0,   108,   308,   549,   309,     0,   159,   308,   551,
   309,     0,   176,   308,   553,   309,     0,   188,   308,    72,
   556,   309,     0,   188,   308,   133,   556,   309,     0,   188,
   308,   186,   556,   309,     0,   188,   308,   556,   309,     0,
   545,   238,     0,   545,   128,   149,     0,   545,   256,     0,
   545,   128,   147,   149,     0,   545,   128,   189,     0,   545,
   128,   147,   109,     0,   545,   128,   109,     0,   545,   128,
   147,   189,     0,   545,    71,   546,    66,   546,     0,   545,
   147,    71,   546,    66,   546,     0,   545,   121,   308,   557,
   309,     0,   545,   147,   121,   308,   559,   309,     0,   545,
   284,   308,   484,   309,     0,   545,   295,   308,   484,   309,
     0,   545,   296,   308,   484,   309,     0,   545,   298,   308,
   484,   309,     0,   545,   299,   308,   484,   309,     0,   545,
   297,   308,   484,   309,     0,   545,   293,   308,   484,   309,
     0,   545,   294,   308,   484,   309,     0,   545,   292,   308,
   484,   309,     0,   545,   284,    67,   308,   484,   309,     0,
   545,   295,    67,   308,   484,   309,     0,   545,   296,    67,
   308,   484,   309,     0,   545,   298,    67,   308,   484,   309,
     0,   545,   299,    67,   308,   484,   309,     0,   545,   297,
    67,   308,   484,   309,     0,   545,   293,    67,   308,   484,
   309,     0,   545,   294,    67,   308,   484,   309,     0,   545,
   292,    67,   308,   484,   309,     0,   545,   284,    64,   308,
   484,   309,     0,   545,   295,    64,   308,   484,   309,     0,
   545,   296,    64,   308,   484,   309,     0,   545,   298,    64,
   308,   484,   309,     0,   545,   299,    64,   308,   484,   309,
     0,   545,   297,    64,   308,   484,   309,     0,   545,   293,
    64,   308,   484,   309,     0,   545,   294,    64,   308,   484,
   309,     0,   545,   292,    64,   308,   484,   309,     0,   545,
    66,   663,     0,   545,   155,   663,     0,   147,   663,     0,
   561,     0,   670,     0,   668,     0,   664,   307,   668,     0,
    34,     0,     0,   666,   679,     0,   680,     0,   667,   680,
     0,   671,   672,     0,   671,   672,     0,   671,     0,   286,
     0,     0,   671,     0,    20,   671,     0,    20,   579,     0,
   282,     0,   285,     0,   282,     0,   287,     0,   678,     0,
   676,   678,     0,   678,     0,   302,     0,   282,     0,   285,
     0,   584,     0,   585,     0,   297,     0,   295,     0,   296,
     0,   298,     0,   299,     0,    41,     0,    42,     0,    43,
     0,    44,     0,    45,     0,    46,     0,    47,     0,    48,
     0,    49,     0,    51,     0,    52,     0,    53,     0,    54,
     0,    55,     0,    56,     0,    57,     0,    58,     0,    59,
     0,    40,     0,   305,     0,   306,     0,   308,     0,   309,
     0,   292,     0,   307,     0,   282,     0,   285,     0,   584,
     0,   585,     0,   307,     0,   282,     0,   285,     0,   584,
     0,   585,     0,   310,   676,   311,     0,   310,     0,   311,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   852,   854,   855,   857,   858,   859,   860,   861,   862,   863,
   865,   867,   868,   869,   870,   871,   872,   873,   874,   875,
   876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
   886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
   896,   897,   898,   904,   905,   910,   911,   912,   913,   914,
   915,   916,   917,   918,   926,   929,   937,   940,   948,   951,
   956,   981,   989,   990,   995,  1003,  1009,  1015,  1035,  1049,
  1063,  1069,  1070,  1073,  1077,  1081,  1084,  1088,  1092,  1095,
  1099,  1105,  1106,  1109,  1110,  1122,  1126,  1130,  1134,  1138,
  1148,  1149,  1153,  1154,  1157,  1158,  1159,  1162,  1166,  1170,
  1176,  1180,  1184,  1198,  1204,  1208,  1212,  1214,  1216,  1218,
  1229,  1244,  1250,  1252,  1261,  1262,  1263,  1266,  1267,  1270,
  1271,  1277,  1278,  1290,  1297,  1298,  1301,  1302,  1303,  1306,
  1311,  1315,  1319,  1323,  1326,  1327,  1330,  1334,  1340,  1341,
  1344,  1345,  1348,  1352,  1358,  1363,  1377,  1381,  1385,  1389,
  1393,  1397,  1401,  1408,  1412,  1426,  1428,  1430,  1432,  1434,
  1436,  1438,  1440,  1442,  1444,  1450,  1452,  1454,  1456,  1460,
  1462,  1464,  1466,  1472,  1474,  1477,  1479,  1481,  1487,  1489,
  1495,  1497,  1505,  1509,  1513,  1517,  1521,  1525,  1532,  1536,
  1542,  1544,  1546,  1550,  1552,  1554,  1556,  1558,  1560,  1562,
  1564,  1566,  1572,  1574,  1576,  1580,  1584,  1586,  1590,  1594,
  1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,  1612,  1614,
  1616,  1618,  1620,  1622,  1624,  1626,  1628,  1630,  1632,  1635,
  1639,  1644,  1649,  1650,  1651,  1654,  1655,  1656,  1659,  1660,
  1663,  1664,  1665,  1666,  1669,  1670,  1673,  1679,  1680,  1683,
  1684,  1687,  1697,  1703,  1705,  1708,  1712,  1716,  1720,  1724,
  1728,  1734,  1735,  1737,  1741,  1748,  1752,  1766,  1773,  1774,
  1776,  1790,  1798,  1799,  1802,  1806,  1810,  1816,  1817,  1818,
  1821,  1827,  1828,  1831,  1832,  1835,  1837,  1839,  1843,  1847,
  1851,  1852,  1855,  1868,  1874,  1880,  1881,  1882,  1885,  1886,
  1887,  1888,  1889,  1892,  1895,  1896,  1899,  1902,  1906,  1912,
  1913,  1914,  1915,  1916,  1929,  1933,  1950,  1957,  1963,  1964,
  1965,  1966,  1971,  1974,  1975,  1976,  1977,  1978,  1979,  1982,
  1983,  1985,  1996,  2002,  2006,  2010,  2016,  2020,  2026,  2030,
  2034,  2038,  2042,  2048,  2052,  2056,  2062,  2066,  2077,  2095,
  2104,  2105,  2108,  2109,  2112,  2113,  2116,  2117,  2120,  2126,
  2132,  2133,  2134,  2143,  2144,  2145,  2155,  2191,  2197,  2198,
  2201,  2202,  2205,  2206,  2210,  2216,  2217,  2238,  2244,  2245,
  2246,  2247,  2251,  2257,  2258,  2262,  2269,  2275,  2275,  2277,
  2278,  2279,  2280,  2281,  2282,  2283,  2284,  2287,  2291,  2293,
  2295,  2308,  2315,  2316,  2319,  2320,  2333,  2335,  2342,  2343,
  2344,  2345,  2346,  2349,  2350,  2353,  2355,  2357,  2361,  2362,
  2363,  2364,  2367,  2371,  2378,  2379,  2380,  2381,  2384,  2385,
  2397,  2403,  2409,  2413,  2431,  2432,  2433,  2434,  2435,  2437,
  2438,  2439,  2449,  2463,  2477,  2487,  2493,  2494,  2497,  2498,
  2501,  2502,  2503,  2506,  2507,  2508,  2518,  2532,  2546,  2550,
  2558,  2559,  2562,  2563,  2566,  2567,  2570,  2572,  2584,  2602,
  2603,  2604,  2605,  2606,  2607,  2624,  2630,  2634,  2638,  2642,
  2646,  2652,  2653,  2656,  2659,  2663,  2677,  2684,  2690,  2691,
  2694,  2695,  2696,  2697,  2700,  2701,  2711,  2727,  2730,  2760,
  2761,  2762,  2763,  2764,  2781,  2798,  2802,  2806,  2811,  2816,
  2824,  2834,  2835,  2836,  2839,  2840,  2843,  2844,  2847,  2848,
  2849,  2850,  2853,  2854,  2857,  2858,  2861,  2867,  2868,  2869,
  2870,  2871,  2872,  2875,  2877,  2879,  2881,  2883,  2885,  2889,
  2890,  2891,  2894,  2895,  2905,  2906,  2909,  2911,  2913,  2917,
  2918,  2921,  2925,  2928,  2932,  2936,  2941,  2945,  2959,  2963,
  2969,  2971,  2973,  2977,  2979,  2983,  2987,  2991,  3001,  3003,
  3007,  3013,  3017,  3030,  3034,  3038,  3043,  3048,  3053,  3058,
  3063,  3067,  3073,  3074,  3085,  3086,  3089,  3090,  3093,  3099,
  3100,  3103,  3108,  3114,  3120,  3129,  3137,  3143,  3152,  3160,
  3161,  3162,  3163,  3164,  3165,  3166,  3180,  3184,  3190,  3191,
  3192,  3193,  3196,  3202,  3203,  3204,  3205,  3206,  3207,  3208,
  3209,  3210,  3211,  3212,  3213,  3214,  3215,  3216,  3217,  3218,
  3219,  3220,  3221,  3222,  3223,  3224,  3225,  3226,  3227,  3228,
  3229,  3230,  3231,  3232,  3233,  3234,  3235,  3236,  3244,  3248,
  3252,  3256,  3262,  3264,  3266,  3268,  3272,  3280,  3286,  3298,
  3306,  3312,  3324,  3332,  3342,  3357,  3363,  3370,  3371,  3372,
  3373,  3376,  3377,  3380,  3381,  3384,  3385,  3388,  3392,  3396,
  3400,  3406,  3407,  3408,  3409,  3410,  3411,  3414,  3415,  3418,
  3419,  3420,  3421,  3422,  3423,  3424,  3425,  3426,  3436,  3438,
  3453,  3457,  3461,  3465,  3469,  3475,  3481,  3482,  3483,  3484,
  3485,  3486,  3487,  3488,  3489,  3492,  3493,  3497,  3501,  3516,
  3520,  3522,  3524,  3528,  3530,  3532,  3534,  3536,  3538,  3540,
  3542,  3544,  3546,  3548,  3550,  3552,  3557,  3559,  3561,  3565,
  3569,  3571,  3573,  3575,  3577,  3579,  3581,  3585,  3589,  3593,
  3597,  3601,  3607,  3611,  3617,  3621,  3625,  3629,  3633,  3637,
  3642,  3646,  3650,  3654,  3658,  3660,  3662,  3664,  3671,  3675,
  3679,  3683,  3687,  3691,  3695,  3699,  3703,  3707,  3711,  3715,
  3719,  3723,  3727,  3731,  3735,  3739,  3743,  3747,  3751,  3755,
  3759,  3763,  3767,  3771,  3775,  3779,  3783,  3787,  3791,  3795,
  3799,  3803,  3807,  3811,  3813,  3815,  3817,  3819,  3828,  3832,
  3834,  3838,  3840,  3842,  3844,  3846,  3848,  3850,  3852,  3857,
  3859,  3861,  3865,  3869,  3871,  3873,  3875,  3877,  3881,  3885,
  3889,  3893,  3899,  3903,  3909,  3913,  3917,  3921,  3926,  3930,
  3934,  3938,  3942,  3946,  3950,  3954,  3958,  3960,  3962,  3966,
  3970,  3972,  3976,  3977,  3978,  3981,  3983,  3987,  3991,  3993,
  3995,  3997,  3999,  4001,  4003,  4005,  4007,  4011,  4015,  4017,
  4019,  4021,  4023,  4027,  4031,  4035,  4039,  4044,  4048,  4052,
  4056,  4062,  4066,  4070,  4072,  4078,  4080,  4084,  4086,  4088,
  4092,  4096,  4100,  4102,  4106,  4110,  4114,  4116,  4135,  4137,
  4143,  4149,  4151,  4155,  4161,  4162,  4165,  4169,  4173,  4177,
  4181,  4187,  4189,  4191,  4202,  4204,  4206,  4209,  4213,  4217,
  4228,  4230,  4235,  4239,  4243,  4247,  4253,  4254,  4257,  4261,
  4274,  4275,  4276,  4277,  4278,  4284,  4285,  4287,  4293,  4297,
  4301,  4305,  4309,  4311,  4315,  4321,  4327,  4328,  4329,  4337,
  4344,  4346,  4348,  4359,  4360,  4361,  4362,  4363,  4364,  4365,
  4366,  4367,  4368,  4369,  4370,  4371,  4372,  4373,  4374,  4375,
  4376,  4377,  4378,  4379,  4380,  4381,  4382,  4383,  4384,  4385,
  4386,  4387,  4388,  4389,  4390,  4391,  4392,  4393,  4394,  4395,
  4396,  4397,  4398,  4399,  4400,  4401,  4402,  4403,  4404,  4405,
  4406,  4407,  4408,  4409,  4410,  4412,  4413,  4414,  4415,  4416,
  4417,  4418,  4419,  4420,  4421,  4422,  4423,  4424,  4425,  4426,
  4427,  4428,  4429,  4430,  4431,  4432,  4433,  4434,  4435,  4436,
  4437,  4438,  4439,  4440,  4441,  4442,  4443,  4444,  4445,  4446,
  4447,  4448,  4449,  4450,  4451,  4452,  4453,  4454,  4455,  4456,
  4457,  4458,  4459,  4460,  4461,  4462,  4463,  4464,  4465,  4466,
  4478,  4479,  4480,  4481,  4482,  4483,  4484,  4485,  4486,  4487,
  4488,  4489,  4490,  4491,  4492,  4493,  4494,  4495,  4496,  4497,
  4498,  4499,  4500,  4501,  4502,  4503,  4504,  4505,  4506,  4507,
  4508,  4509,  4510,  4511,  4512,  4513,  4514,  4515,  4518,  4525,
  4541,  4545,  4550,  4555,  4566,  4589,  4593,  4601,  4618,  4629,
  4630,  4632,  4633,  4635,  4636,  4638,  4639,  4641,  4642,  4644,
  4648,  4652,  4656,  4661,  4666,  4667,  4669,  4693,  4706,  4712,
  4755,  4760,  4765,  4772,  4774,  4776,  4780,  4785,  4790,  4795,
  4800,  4801,  4802,  4803,  4804,  4805,  4806,  4808,  4815,  4822,
  4829,  4836,  4844,  4856,  4861,  4863,  4870,  4877,  4885,  4893,
  4894,  4896,  4897,  4898,  4899,  4900,  4901,  4902,  4903,  4904,
  4905,  4906,  4908,  4910,  4914,  4919,  4994,  4995,  4997,  4998,
  5004,  5012,  5014,  5015,  5016,  5017,  5019,  5020,  5025,  5038,
  5050,  5054,  5054,  5061,  5066,  5070,  5071,  5076,  5076,  5082,
  5092,  5108,  5113,  5114,  5116,  5116,  5122,  5130,  5172,  5178,
  5184,  5193,  5202,  5210,  5216,  5222,  5231,  5240,  5247,  5248,
  5250,  5257,  5264,  5271,  5278,  5285,  5292,  5299,  5306,  5313,
  5320,  5327,  5334,  5339,  5347,  5352,  5360,  5371,  5371,  5373,
  5377,  5383,  5389,  5394,  5398,  5403,  5474,  5529,  5534,  5539,
  5545,  5550,  5555,  5560,  5565,  5570,  5575,  5580,  5587,  5591,
  5593,  5595,  5599,  5601,  5603,  5605,  5607,  5609,  5611,  5613,
  5615,  5617,  5619,  5621,  5623,  5627,  5629,  5631,  5635,  5639,
  5641,  5643,  5645,  5647,  5649,  5651,  5655,  5659,  5663,  5667,
  5671,  5677,  5681,  5687,  5691,  5695,  5699,  5703,  5707,  5712,
  5716,  5720,  5724,  5728,  5730,  5732,  5734,  5741,  5745,  5749,
  5753,  5757,  5761,  5765,  5769,  5773,  5777,  5781,  5785,  5789,
  5793,  5797,  5801,  5805,  5809,  5813,  5817,  5821,  5825,  5829,
  5833,  5837,  5841,  5845,  5849,  5853,  5857,  5861,  5865,  5869,
  5873,  5877,  5881,  5883,  5885,  5887,  5889,  5893,  5893,  5895,
  5897,  5898,  5900,  5901,  5903,  5907,  5911,  5916,  5918,  5919,
  5920,  5921,  5923,  5924,  5929,  5931,  5933,  5934,  5939,  5939,
  5941,  5942,  5943,  5944,  5945,  5946,  5947,  5948,  5949,  5950,
  5951,  5952,  5953,  5954,  5955,  5956,  5957,  5958,  5959,  5960,
  5961,  5962,  5963,  5964,  5965,  5966,  5967,  5968,  5969,  5970,
  5971,  5972,  5973,  5974,  5976,  5977,  5978,  5979,  5980,  5982,
  5983,  5984,  5985,  5986,  5988,  5993
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
"EXISTS","EXTRACT","FALSE_P","FETCH","FLOAT","FOR","FOREIGN","FROM","FULL","GLOBAL",
"GRANT","GROUP","HAVING","HOUR_P","IN","INNER_P","INSENSITIVE","INSERT","INTERSECT",
"INTERVAL","INTO","IS","ISOLATION","JOIN","KEY","LANGUAGE","LEADING","LEFT",
"LEVEL","LIKE","LOCAL","MATCH","MINUTE_P","MONTH_P","NAMES","NATIONAL","NATURAL",
"NCHAR","NEXT","NO","NOT","NULLIF","NULL_P","NUMERIC","OF","ON","ONLY","OPTION",
"OR","ORDER","OUTER_P","PARTIAL","POSITION","PRECISION","PRIMARY","PRIOR","PRIVILEGES",
"PROCEDURE","PUBLIC","READ","REFERENCES","RELATIVE","REVOKE","RIGHT","ROLLBACK",
"SCROLL","SECOND_P","SELECT","SET","SUBSTRING","TABLE","TEMP","TEMPORARY","THEN",
"TIME","TIMESTAMP","TIMEZONE_HOUR","TIMEZONE_MINUTE","TO","TRAILING","TRANSACTION",
"TRIM","TRUE_P","UNION","UNIQUE","UPDATE","USER","USING","VALUES","VARCHAR",
"VARYING","VIEW","WHEN","WHERE","WITH","WORK","YEAR_P","ZONE","TRIGGER","COMMITTED",
"SERIALIZABLE","TYPE_P","ABORT_TRANS","ACCESS","AFTER","AGGREGATE","ANALYZE",
"BACKWARD","BEFORE","BINARY","CACHE","CLUSTER","COPY","CREATEDB","CREATEUSER",
"CYCLE","DATABASE","DELIMITERS","DO","EACH","ENCODING","EXCLUSIVE","EXPLAIN",
"EXTEND","FORWARD","FUNCTION","HANDLER","INCREMENT","INDEX","INHERITS","INSTEAD",
"ISNULL","LANCOMPILER","LIMIT","LISTEN","UNLISTEN","LOAD","LOCATION","LOCK_P",
"MAXVALUE","MINVALUE","MODE","MOVE","NEW","NOCREATEDB","NOCREATEUSER","NONE",
"NOTHING","NOTIFY","NOTNULL","OFFSET","OIDS","OPERATOR","PASSWORD","PROCEDURAL",
"RENAME","RESET","RETURNS","ROW","RULE","SERIAL","SEQUENCE","SETOF","SHARE",
"SHOW","START","STATEMENT","STDIN","STDOUT","TRUSTED","UNTIL","VACUUM","VALID",
"VERBOSE","VERSION","IDENT","SCONST","Op","CSTRING","CVARIABLE","CPP_LINE","ICONST",
"PARAM","FCONST","OP","'='","'<'","'>'","'+'","'-'","'*'","'/'","'%'","'|'",
"':'","';'","UMINUS","'.'","'['","']'","','","'('","')'","'{'","'}'","\"=\"",
"prog","statements","statement","opt_at","stmt","CreateUserStmt","AlterUserStmt",
"DropUserStmt","user_passwd_clause","user_createdb_clause","user_createuser_clause",
"user_group_list","user_group_clause","user_valid_clause","VariableSetStmt",
"opt_level","var_value","zone_value","VariableShowStmt","VariableResetStmt",
"AddAttrStmt","alter_clause","ClosePortalStmt","CopyStmt","copy_dirn","copy_file_name",
"opt_binary","opt_with_copy","copy_delimiter","CreateStmt","OptTemp","OptTempType",
"OptTempScope","OptTableElementList","OptTableElement","columnDef","ColQualifier",
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
"columnElem","DeleteStmt","LockStmt","opt_lock","lock_type","opt_lmode","UpdateStmt",
"CursorStmt","@2","opt_cursor","SelectStmt","select_clause","SubSelect","result",
"opt_table","opt_union","opt_unique","sort_clause","sortby_list","sortby","OptUseOp",
"opt_select_limit","select_limit_value","select_offset_value","opt_inh_star",
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
"opt_options","ECPGCursorStmt","ECPGDeallocate","ECPGDeclaration","@3","sql_startdeclare",
"sql_enddeclare","variable_declarations","declaration","@4","@5","storage_clause",
"type","enum_type","s_enum","struct_type","union_type","s_struct","s_union",
"opt_symbol","simple_type","varchar_type","variable_list","variable","opt_initializer",
"opt_pointer","ECPGDeclare","ECPGDisconnect","dis_name","connection_object",
"ECPGExecute","@6","execstring","ECPGFree","ECPGOpen","opt_using","variablelist",
"ECPGPrepare","ECPGRelease","ECPGSetAutocommit","on_off","to_equal","ECPGSetConnection",
"ECPGTypedef","opt_type_array_bounds","nest_type_array_bounds","opt_reference",
"ctype","@7","@8","opt_signed","sql_variable_declarations","sql_declaration",
"@9","sql_variable_list","sql_variable","ECPGVar","ECPGWhenever","action","ecpg_expr",
"into_list","ecpgstart","dotext","vartext","coutputvariable","cinputvariable",
"civariableonly","cvariable","indicator","ident","symbol","cpp_line","c_line",
"c_thing","c_anything","do_anything","var_anything","blockstart","blockend", NULL
};
#endif

static const short yyr1[] = {     0,
   313,   314,   314,   315,   315,   315,   315,   315,   315,   315,
   316,   317,   317,   317,   317,   317,   317,   317,   317,   317,
   317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
   317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
   317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
   317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
   317,   317,   317,   317,   317,   317,   317,   317,   318,   319,
   320,   321,   321,   322,   322,   322,   323,   323,   323,   324,
   324,   325,   325,   326,   326,   327,   327,   327,   327,   327,
   328,   328,   329,   329,   330,   330,   330,   331,   331,   331,
   332,   332,   332,   333,   334,   334,   334,   334,   334,   334,
   335,   336,   337,   337,   338,   338,   338,   339,   339,   340,
   340,   341,   341,   342,   343,   343,   344,   344,   344,   345,
   345,   346,   346,   346,   347,   347,   348,   348,   349,   349,
   350,   350,   351,   351,   352,   352,   353,   353,   353,   353,
   353,   353,   353,   354,   354,   355,   355,   355,   355,   355,
   355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
   355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
   355,   355,   356,   356,   357,   357,   357,   357,   358,   358,
   359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
   359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
   359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
   359,   359,   359,   359,   359,   359,   359,   359,   359,   360,
   360,   361,   362,   362,   362,   363,   363,   363,   364,   364,
   365,   365,   365,   365,   366,   366,   367,   368,   368,   369,
   369,   370,   371,   372,   372,   373,   373,   373,   373,   373,
   373,   374,   374,   375,   375,   376,   376,   377,   378,   378,
   379,   380,   381,   381,   382,   382,   382,   383,   383,   383,
   384,   385,   385,   386,   386,   387,   387,   387,   388,   388,
   388,   388,   389,   390,   391,   392,   392,   392,   393,   393,
   393,   393,   393,   394,   395,   395,   396,   396,   396,   397,
   397,   397,   397,   397,   398,   398,   399,   399,   400,   400,
   400,   400,   400,   401,   401,   401,   401,   401,   401,   402,
   402,   402,   403,   404,   404,   404,   405,   405,   406,   406,
   406,   406,   406,   407,   407,   407,   408,   408,   409,   410,
   411,   411,   412,   412,   413,   413,   414,   414,   415,   416,
   417,   417,   417,   418,   418,   418,   419,   420,   421,   421,
   422,   422,   423,   423,   424,   425,   425,   426,   427,   427,
   427,   427,   428,   429,   429,   430,   431,   432,   432,   433,
   433,   433,   433,   433,   433,   433,   433,   434,   434,   434,
   434,   435,   436,   436,   437,   437,   439,   438,   440,   440,
   440,   440,   440,   441,   441,   442,   442,   442,   443,   443,
   443,   443,   444,   444,   445,   445,   445,   445,   446,   446,
   447,   448,   449,   449,   450,   450,   450,   450,   450,   451,
   451,   451,   452,   453,   454,   454,   455,   455,   456,   456,
   457,   457,   457,   458,   458,   458,   459,   460,   461,   461,
   462,   462,   463,   463,   464,   464,   465,   465,   466,   467,
   467,   467,   467,   467,   467,   468,   469,   469,   469,   469,
   469,   470,   470,   471,   471,   472,   473,   474,   475,   475,
   476,   476,   476,   476,   477,   477,   478,   480,   479,   481,
   481,   481,   481,   481,   482,   483,   483,   483,   483,   483,
   484,   485,   485,   485,   486,   486,   487,   487,   488,   488,
   488,   488,   489,   489,   490,   490,   491,   492,   492,   492,
   492,   492,   492,   493,   493,   493,   493,   493,   493,   494,
   494,   494,   495,   495,   496,   496,   497,   498,   498,   499,
   499,   500,   500,   501,   501,   501,   502,   502,   503,   503,
   504,   504,   504,   505,   505,   506,   506,   506,   507,   507,
   508,   509,   509,   510,   510,   510,   511,   511,   511,   511,
   511,   511,   512,   512,   513,   513,   514,   514,   515,   516,
   516,   517,   517,   518,   518,   518,   519,   519,   519,   520,
   520,   520,   520,   520,   520,   520,   521,   521,   522,   522,
   522,   522,   523,   524,   524,   524,   524,   524,   524,   524,
   524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
   524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
   524,   524,   524,   524,   524,   524,   524,   524,   525,   525,
   525,   525,   526,   526,   526,   526,   527,   527,   528,   528,
   528,   529,   529,   529,   530,   530,   531,   531,   531,   531,
   531,   532,   532,   533,   533,   534,   534,   535,   535,   535,
   535,   536,   536,   536,   536,   536,   536,   537,   537,   538,
   538,   538,   538,   538,   538,   538,   538,   538,   539,   539,
   540,   540,   540,   540,   540,   541,   542,   542,   542,   542,
   542,   542,   542,   542,   542,   543,   543,   544,   544,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
   545,   545,   545,   545,   545,   545,   545,   545,   546,   546,
   546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
   546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
   546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
   546,   546,   546,   547,   547,   547,   548,   548,   548,   549,
   549,   549,   550,   550,   550,   551,   551,   552,   552,   552,
   552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
   552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
   552,   553,   553,   554,   554,   555,   555,   556,   556,   556,
   557,   557,   558,   558,   559,   559,   560,   560,   561,   561,
   561,   562,   562,   563,   564,   564,   565,   565,   565,   566,
   566,   567,   567,   567,   568,   568,   568,   569,   569,   569,
   570,   570,   571,   571,   571,   571,   572,   572,   573,   573,
   574,   575,   576,   577,   578,   579,   580,   581,   582,   582,
   582,   582,   582,   582,   582,   583,   584,   585,   586,   587,
   588,   588,   588,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
   590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
   590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
   590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
   590,   590,   590,   590,   590,   590,   590,   590,   591,   591,
   592,   592,   592,   593,   593,   593,   593,   594,   595,   596,
   596,   597,   597,   598,   598,   599,   599,   600,   600,   601,
   601,   601,   601,   602,   602,   602,   603,   604,   604,   605,
   606,   608,   607,   609,   610,   611,   611,   613,   614,   612,
   615,   615,   615,   615,   615,   615,   615,   616,   616,   616,
   616,   616,   616,   617,   618,   619,   620,   621,   622,   623,
   623,   624,   624,   624,   624,   624,   624,   624,   624,   624,
   624,   624,   625,   626,   626,   627,   628,   628,   629,   629,
   630,   631,   632,   632,   632,   632,   633,   633,   634,   635,
   634,   636,   636,   637,   638,   639,   639,   640,   640,   641,
   642,   643,   644,   644,   645,   645,   646,   647,   648,   648,
   648,   648,   648,   649,   649,   649,   649,   649,   650,   650,
   651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
   651,   651,   652,   651,   653,   651,   651,   654,   654,   655,
   655,   657,   656,   658,   658,   659,   660,   661,   661,   661,
   662,   662,   662,   662,   662,   662,   662,   662,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
   663,   663,   663,   663,   663,   663,   663,   664,   664,   665,
   666,   666,   667,   667,   668,   669,   670,   671,   672,   672,
   672,   672,   673,   673,   674,   675,   676,   676,   677,   677,
   678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
   678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
   678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
   678,   678,   678,   678,   679,   679,   679,   679,   679,   680,
   680,   680,   680,   680,   681,   682
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
     1,     3,     0,     3,     0,     4,     4,     4,     5,     3,
     2,     1,     1,     1,     1,     1,     1,     2,     3,     4,
     2,     3,     4,     5,     3,     4,     3,     6,     5,     2,
     2,     7,     1,     1,     1,     1,     1,     1,     0,     2,
     0,     3,     0,     8,     1,     2,     1,     1,     0,     1,
     1,     3,     1,     0,     1,     1,     3,     3,     1,     0,
     2,     1,     2,     0,     3,     1,     4,     2,     2,     2,
     1,     2,     5,     3,     1,     1,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     2,     2,     3,     6,     3,
     3,     4,     3,     2,     2,     1,     1,     4,     1,     4,
     1,     1,     3,     1,     4,     4,     5,    10,     3,     1,
     1,     1,     1,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     2,     2,     3,     6,     3,     3,     4,     3,
     3,     4,     3,     3,     2,     2,     2,     2,     3,     2,
     4,     3,     3,     4,     4,     5,     6,     5,     6,     3,
     1,     1,     2,     2,     0,     2,     1,     0,     3,     3,
     2,     1,     2,     2,     4,     0,     7,     3,     0,     3,
     1,     1,     4,     2,     0,     2,     1,     2,     2,     2,
     2,     1,     1,     1,     2,     1,     2,     9,     1,     0,
     4,    14,     1,     1,     1,     3,     5,     1,     1,     1,
     3,     1,     0,     1,     1,     1,     3,     0,     1,     1,
     1,     1,     5,     3,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     1,     3,     3,     1,     3,     1,
     1,     1,     1,     2,     3,     3,     6,     4,     1,     1,
     1,     1,     0,     1,     2,     1,     1,     1,     0,     2,
     2,     0,     7,     2,     1,     1,     1,     3,     1,     1,
     1,     1,     1,     1,     2,     1,     3,     0,     6,    11,
     1,     0,     2,     0,     1,     1,     3,     1,     6,     3,
     2,     2,     0,     1,     2,     0,     4,    11,     2,     0,
     3,     2,     1,     3,     2,     1,     0,     3,     1,     1,
     1,     1,     4,     1,     1,     4,     6,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
     3,     9,     1,     0,     1,     0,     0,    13,     1,     1,
     1,     3,     3,     1,     1,     2,     3,     2,     1,     1,
     1,     1,     3,     1,     1,     1,     1,     1,     1,     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
     1,     0,     5,     2,     6,     3,     3,     0,     3,     0,
     1,     1,     0,     1,     1,     0,     3,     4,     3,     5,
     1,     0,     1,     0,     3,     0,     1,     3,     3,     1,
     1,     1,     1,     1,     1,     4,     4,     2,     1,     7,
     4,     3,     0,     3,     1,     2,     4,     4,     3,     0,
     3,     2,     2,     1,     1,     1,     6,     0,     7,     1,
     1,     1,     2,     0,     4,     3,     1,     3,     4,     4,
     8,     4,     2,     0,     1,     0,     1,     0,     1,     3,
     1,     0,     3,     0,     1,     3,     2,     2,     2,     2,
     1,     1,     0,     4,     4,     2,     4,     2,     0,     1,
     1,     1,     1,     1,     1,     0,     1,     1,     3,     3,
     0,     2,     0,     3,     3,     0,     2,     0,     2,     0,
     3,     1,     1,     3,     1,     3,     2,     1,     1,     4,
     2,     2,     1,     4,     4,     3,     2,     2,     2,     1,
     1,     0,     1,     0,     4,     2,     3,     1,     1,     2,
     0,     1,     2,     3,     4,     0,     3,     4,     0,     1,
     3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
     2,     2,     1,     2,     1,     1,     3,     0,     5,     3,
     0,     5,     3,     0,     4,     1,     4,     2,     1,     3,
     2,     1,     0,     3,     0,     2,     0,     1,     2,     1,
     2,     1,     1,     1,     1,     1,     1,     3,     0,     1,
     3,     3,     3,     3,     3,     3,     3,     0,     1,     1,
     7,     8,     8,     7,     7,     3,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
     1,     1,     1,     2,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     6,
     3,     3,     3,     4,     2,     2,     4,     3,     4,     1,
     1,     4,     1,     4,     1,     1,     4,     4,     4,     4,
     5,     5,     5,     4,     2,     3,     2,     4,     3,     4,
     3,     4,     5,     6,     5,     6,     5,     5,     5,     5,
     5,     5,     5,     5,     5,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     3,     3,     2,     1,     1,     2,     1,
     1,     2,     2,     2,     3,     3,     3,     3,     3,     2,
     2,     3,     6,     3,     3,     2,     2,     3,     4,     1,
     1,     4,     1,     4,     1,     1,     4,     4,     5,     5,
     5,     4,     1,     4,     6,     0,     1,     3,     3,     3,
     0,     1,     1,     1,     1,     3,     0,     2,     1,     2,
     3,     3,     3,     3,     3,     2,     3,     6,     3,     3,
     2,     2,     1,     3,     4,     4,     4,     5,     5,     5,
     4,     3,     0,     2,     0,     2,     0,     3,     2,     1,
     1,     1,     1,     3,     1,     1,     1,     3,     5,     6,
     4,     2,     1,     4,     2,     0,     2,     1,     0,     3,
     3,     1,     3,     3,     3,     1,     1,     4,     2,     3,
     3,     1,     3,     1,     3,     1,     1,     0,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
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
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     5,     3,     2,     3,     6,     1,     1,     2,     2,     1,
     0,     1,     3,     2,     0,     2,     0,     2,     0,     1,
     3,     4,     3,     1,     1,     1,     1,     2,     0,     6,
     3,     0,     4,     5,     5,     0,     2,     0,     0,     6,
     1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
     1,     1,     1,     4,     2,     4,     4,     2,     2,     0,
     1,     1,     2,     1,     2,     1,     2,     1,     1,     1,
     1,     2,     1,     1,     3,     4,     0,     2,     0,     1,
     3,     2,     1,     1,     1,     0,     1,     1,     3,     0,
     4,     1,     1,     2,     3,     0,     2,     1,     3,     4,
     2,     4,     1,     1,     1,     1,     4,     6,     3,     3,
     4,     4,     0,     3,     3,     4,     4,     0,     1,     0,
     1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
     2,     2,     0,     5,     0,     5,     1,     1,     0,     0,
     2,     0,     4,     1,     3,     3,     6,     3,     4,     3,
     1,     1,     1,     2,     3,     5,     2,     5,     2,     1,
     1,     1,     2,     2,     2,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     2,     2,     3,     6,     3,
     3,     3,     4,     2,     2,     4,     3,     4,     1,     1,
     4,     1,     4,     1,     1,     4,     4,     4,     4,     5,
     5,     5,     4,     2,     3,     2,     4,     3,     4,     3,
     4,     5,     6,     5,     6,     5,     5,     5,     5,     5,
     5,     5,     5,     5,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     3,     3,     2,     1,     1,     1,     3,     1,
     0,     2,     1,     2,     2,     2,     1,     1,     0,     1,
     2,     2,     1,     1,     1,     1,     1,     2,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     1,     1
};

static const short yydefact[] = {     2,
     1,  1350,  1398,  1380,  1381,  1382,  1383,  1384,  1385,  1386,
  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,
  1397,  1371,  1372,  1366,   947,   948,  1403,  1376,  1377,  1375,
  1378,  1379,  1370,  1399,  1400,  1404,  1401,  1402,  1415,  1416,
     3,  1373,  1374,     6,  1132,     0,     8,     7,  1369,     9,
    10,  1147,     0,     0,     0,  1186,     0,     0,     0,     0,
     0,     0,   442,   928,   442,   129,     0,     0,     0,   442,
     0,   323,     0,     0,     0,   442,   522,     0,     0,     0,
   442,     0,   119,   462,     0,     0,     0,     0,   516,   323,
     0,     0,     0,   462,     0,     0,     0,    21,    13,    27,
    51,    52,    53,    12,    14,    15,    16,    17,    18,    19,
    25,    20,    26,    23,    24,    30,    31,    42,    32,    28,
    36,    40,    37,    39,    38,    41,    44,   474,    33,    34,
    45,    46,    47,    48,    49,    22,    50,    29,    43,   473,
   475,    35,   472,   471,   470,   524,   507,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,  1146,  1144,  1141,  1145,  1143,  1142,     0,  1147,
  1138,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,
  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
  1059,  1060,   956,   958,   684,   970,   685,   980,   983,   984,
   987,   686,   683,   991,   996,   998,  1000,  1002,  1003,  1005,
  1006,  1011,   687,  1020,  1021,  1022,  1023,   682,  1029,  1024,
   964,  1014,  1026,   957,   959,   960,   961,   962,   963,   965,
   966,   967,   968,   969,   971,   972,   973,   974,   975,   976,
   977,   978,   979,   981,   982,   985,   986,   988,   989,   990,
   992,   993,   994,   995,   997,   999,  1001,  1004,  1007,  1008,
  1009,  1010,  1013,  1012,  1015,  1016,  1017,  1018,  1019,  1025,
  1027,  1028,  1363,   949,  1364,  1358,   955,  1111,  1107,   931,
    11,     0,  1106,  1127,   954,     0,  1126,  1124,  1103,  1120,
  1125,   950,     0,  1185,  1184,  1188,  1187,  1182,  1183,  1194,
  1196,   936,   954,     0,  1365,     0,     0,     0,     0,     0,
     0,     0,   441,   440,   436,   111,   927,   437,   130,   131,
   127,   128,   351,     0,     0,     0,   297,   298,     0,     0,
   296,     0,     0,   269,     0,   125,   129,     0,     0,     0,
  1017,   504,     0,     0,     0,   382,     0,   379,     0,     0,
     0,   380,     0,     0,   381,     0,     0,   438,     0,  1190,
   322,   321,   320,   319,   329,   335,   342,   340,   339,   341,
   343,     0,   336,   337,     0,     0,   439,   521,   519,     0,
     0,     0,   456,  1020,     0,     0,  1099,  1100,     0,   930,
   929,     0,   435,     0,   935,   118,     0,   461,     0,     0,
   432,   434,   433,   444,   938,   515,     0,   329,   431,  1020,
     0,   101,  1020,     0,    98,   464,     0,   442,     0,     5,
  1201,     0,   518,     0,   518,   556,  1133,     0,  1137,     0,
     0,  1110,  1115,  1115,  1108,  1102,  1117,     0,     0,     0,
  1131,     0,  1195,     0,  1239,     0,  1251,     0,     0,  1252,
  1253,     0,  1248,  1250,     0,   546,    73,     0,    73,     0,
     0,   446,     0,   937,     0,   255,     0,   126,     0,   300,
   299,   303,   397,   395,   396,   390,   391,   392,   394,   393,
   294,     0,   302,   301,     0,  1181,   501,   502,   500,     0,
   591,   315,   547,   548,    71,     0,     0,   457,     0,   388,
     0,   389,     0,   316,   378,  1193,  1192,  1189,  1196,   326,
   327,   328,     0,   332,   324,   334,     0,     0,     0,     0,
     0,  1030,   617,  1031,  1032,  1033,  1034,   622,  1035,  1036,
  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,
  1057,  1058,  1059,  1060,   909,     0,   673,   673,     0,   750,
   751,   753,   755,   664,   970,     0,     0,   945,   658,   698,
     0,   673,     0,     0,   700,   661,     0,     0,  1020,  1021,
     0,   944,   756,   669,  1026,     0,     0,   846,     0,   926,
     0,     0,     0,     0,     0,   596,   609,   613,   611,   612,
   666,   610,   955,   924,   721,   699,   807,   846,   514,   922,
     0,     0,   722,   943,   939,   940,   941,   723,   808,  1359,
   954,  1205,  1206,     0,     0,   455,    90,   454,     0,     0,
     0,     0,     0,  1239,     0,   121,     0,   469,   591,   490,
   332,   102,     0,    99,     0,   463,   459,   506,     4,   508,
   517,     0,     0,     0,     0,   539,     0,  1170,  1171,  1169,
  1160,  1168,  1164,  1166,  1162,  1160,  1160,     0,  1173,  1139,
  1152,     0,  1150,  1151,     0,     0,  1148,  1149,  1153,  1112,
  1109,     0,  1104,     0,     0,  1119,     0,  1123,  1121,  1197,
  1198,  1200,  1229,  1226,  1238,  1233,     0,  1221,  1224,  1223,
  1235,  1222,  1213,     0,  1237,     0,     0,  1254,  1032,     0,
  1249,   545,     0,     0,    76,  1134,    76,     0,   274,   273,
     0,   448,     0,     0,   407,   253,   249,     0,     0,   295,
     0,   503,     0,     0,   487,     0,     0,   385,   383,   384,
   386,     0,   271,  1191,   325,     0,     0,     0,     0,   338,
     0,     0,     0,   476,   479,     0,   520,     0,   846,     0,
     0,   908,     0,   672,   668,   675,     0,     0,     0,     0,
   651,   650,     0,   851,     0,   649,   684,   685,   686,   682,
   690,   681,   673,   671,     0,   806,     0,     0,     0,   652,
   857,   883,     0,   679,     0,   616,   618,   619,   620,   621,
   623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
   633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
   643,   644,   645,   646,   647,   648,     0,   680,   689,   615,
   608,   678,   614,   745,     0,   946,   724,   725,   738,   737,
     0,     0,     0,   699,   942,     0,   607,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   765,   767,   746,
     0,     0,     0,     0,     0,     0,     0,   726,   720,   129,
     0,   560,     0,     0,     0,     0,  1360,  1356,  1204,  1203,
  1202,  1207,    96,    97,    88,    95,     0,    94,    86,    93,
    87,   917,   846,   560,   916,     0,   846,  1213,   458,     0,
     0,   504,   367,     0,   488,   318,   103,   100,   466,   510,
   523,   525,   533,   509,     0,   558,     0,     0,   505,     0,
  1155,  1161,  1158,  1159,  1172,  1165,  1167,  1163,  1179,     0,
  1147,  1147,     0,  1114,     0,  1116,     0,  1101,  1122,     0,
     0,  1230,  1232,  1231,     0,     0,     0,  1220,  1225,  1228,
  1227,  1351,  1255,  1351,   406,   406,   406,   406,   104,     0,
    74,    75,    79,    79,   443,   279,   278,   280,     0,   275,
     0,   450,   655,   970,   653,   656,   372,     0,   952,   953,
   373,   951,   377,     0,     0,   257,     0,     0,     0,     0,
   254,   134,     0,     0,     0,   308,     0,   305,     0,   498,
   590,   549,   293,     0,     0,   398,   331,   330,     0,     0,
   478,     0,     0,   485,   846,     0,     0,   906,   903,   907,
     0,     0,     0,   677,   847,     0,     0,     0,     0,     0,
   854,   855,   853,     0,     0,   852,     0,     0,     0,     0,
     0,   670,     0,   735,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   846,     0,   859,   873,   885,
     0,     0,     0,     0,     0,     0,   699,   890,     0,     0,
   750,   751,   753,   755,     0,     0,     0,     0,     0,     0,
     0,   756,     0,     0,     0,     0,     0,     0,   721,     0,
   807,   846,     0,   722,   723,     0,  1347,  1359,   741,     0,
     0,   599,     0,     0,   600,     0,  1065,  1067,  1068,  1070,
  1072,  1073,  1076,  1077,  1078,  1085,  1086,  1087,  1088,  1092,
  1093,  1094,  1095,  1098,  1062,  1063,  1064,  1066,  1069,  1071,
  1074,  1075,  1079,  1080,  1081,  1082,  1083,  1084,  1089,  1090,
  1091,  1096,  1097,  1061,   923,   739,   804,     0,   830,   831,
   833,   835,     0,     0,     0,   836,     0,     0,     0,     0,
     0,     0,     0,   846,     0,   810,   811,   843,  1357,     0,
   771,     0,   766,   769,   743,     0,     0,     0,   805,     0,
     0,     0,   742,     0,     0,   734,     0,   736,     0,     0,
     0,   732,     0,     0,     0,   733,     0,     0,     0,   727,
     0,     0,     0,   728,     0,     0,     0,   731,     0,     0,
     0,   729,     0,     0,     0,   730,   516,   513,  1348,  1359,
   921,     0,   591,   925,   910,   912,   933,     0,   748,     0,
   911,  1362,  1361,     0,    92,    89,   919,     0,   591,     0,
     0,  1220,   120,   114,   113,     0,     0,     0,   496,     0,
   495,     0,   494,     0,   460,     0,   531,   532,     0,   527,
   555,     0,   554,   541,   542,   536,   540,   544,   538,   543,
     0,  1180,     0,  1174,     0,     0,  1367,     0,     0,  1113,
  1129,  1118,  1199,  1239,  1239,  1218,     0,  1218,     0,  1219,
  1247,     0,     0,     0,   405,     0,     0,     0,   134,   110,
     0,     0,     0,   404,    72,    77,    78,    83,    83,     0,
     0,   453,     0,   445,   654,     0,   371,   376,   370,     0,
     0,     0,   256,   266,   258,   259,   260,   261,     0,     0,
   133,   135,   136,   184,     0,   251,   252,     0,     0,     0,
     0,     0,   304,   354,     0,  1130,     0,   387,     0,   317,
     0,   344,   348,   346,     0,     0,     0,   486,   349,     0,
     0,   902,     0,     0,     0,     0,   667,     0,     0,   901,
   752,   754,     0,   663,   757,   758,     0,   657,   692,   693,
   694,   695,   697,   696,   691,     0,     0,   660,     0,   857,
   883,     0,   871,   860,   866,     0,   759,     0,     0,   872,
     0,     0,     0,     0,     0,   858,     0,     0,   887,   760,
   688,     0,   889,     0,     0,     0,   764,     0,     0,     0,
     0,   851,   806,  1345,     0,   857,   883,     0,   745,  1284,
   724,  1263,   725,  1264,   738,  1277,   737,  1276,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   765,   767,   746,
     0,     0,     0,     0,     0,     0,     0,   726,   720,     0,
     0,   846,     0,     0,   707,   709,   708,   710,   711,   712,
   713,   715,   714,     0,   706,     0,   594,     0,     0,     0,
     0,     0,     0,   599,   665,     0,     0,     0,   857,   883,
     0,   826,   812,   813,   821,   820,     0,     0,     0,   827,
     0,     0,     0,     0,   814,   809,     0,   891,     0,   892,
   893,   943,   770,   768,   772,     0,     0,   744,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1355,     0,   559,
   563,   565,   562,   568,   592,   551,     0,   747,   749,    91,
   915,   497,   920,     0,  1208,   116,   117,   123,   115,     0,
   495,   493,   492,     0,   489,     0,   467,   526,   528,   529,
   530,   557,     0,     0,     0,  1135,  1140,  1179,   596,  1154,
  1368,  1156,  1157,     0,  1105,  1242,     0,  1239,     0,     0,
     0,  1209,  1218,  1210,  1218,  1405,  1406,  1409,  1258,  1407,
  1408,  1352,  1256,     0,     0,     0,     0,     0,     0,   105,
     0,   107,     0,   403,     0,    85,    85,     0,   276,   452,
   447,   451,   456,   374,     0,     0,   375,   427,   428,   425,
   426,     0,   267,     0,     0,   246,     0,   248,   144,   140,
   247,     0,     0,   391,   312,   262,   263,   309,   311,   264,
   313,   310,   307,   306,     0,     0,   499,   400,   401,   399,
   345,     0,   333,   477,   484,     0,   481,     0,   905,   899,
     0,   674,   676,   849,   848,     0,   850,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   869,   867,   856,   870,
   861,   862,   865,   863,   864,   874,     0,   884,     0,   882,
   761,   762,   763,   888,     0,     0,     0,     0,     0,   735,
     0,     0,     0,     0,     0,     0,   741,   739,   804,  1343,
     0,     0,   771,     0,   766,   769,   743,  1282,     0,     0,
     0,   805,  1344,     0,     0,     0,   742,  1281,     0,     0,
   734,     0,   736,  1275,     0,     0,     0,   732,  1271,     0,
     0,     0,   733,  1272,     0,     0,     0,   727,  1266,     0,
     0,     0,   728,  1267,     0,     0,     0,   731,  1270,     0,
     0,     0,   729,  1268,     0,     0,     0,   730,  1269,     0,
   748,     0,     0,   844,     0,     0,   717,   716,     0,     0,
   599,     0,   601,   602,   603,   604,   605,   606,   595,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   824,   822,
   773,   825,   815,   816,   819,   817,   818,   828,     0,   775,
     0,     0,   895,     0,   896,   897,     0,     0,   777,     0,
     0,   785,     0,     0,   783,     0,     0,   784,     0,     0,
   778,     0,     0,   779,     0,     0,   782,     0,     0,   780,
     0,     0,   781,   512,  1349,   582,     0,   569,     0,     0,
   584,   581,   584,   582,   580,   584,   571,   573,     0,     0,
   567,   593,     0,   553,   914,   913,   918,     0,   112,   498,
   491,     0,   465,   535,   534,   537,  1175,  1177,  1128,  1179,
  1234,  1241,  1236,  1218,     0,  1218,     0,  1211,  1212,     0,
     0,   192,     0,     0,     0,     0,     0,     0,     0,   191,
   193,     0,     0,     0,   106,     0,     0,     0,     0,     0,
    70,    69,   283,     0,     0,   449,   369,     0,     0,   183,
   132,     0,   124,   250,   252,     0,   138,     0,     0,     0,
     0,     0,     0,   151,   137,   139,   142,   146,     0,   314,
   265,   353,   932,     0,     0,     0,   904,   740,   662,   900,
   659,     0,   876,   877,     0,     0,     0,   881,   875,   886,
     0,   752,   754,   757,   758,   759,   760,     0,     0,     0,
   764,     0,     0,   770,   768,   772,     0,     0,   744,  1283,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   747,   749,   846,
     0,     0,     0,     0,   719,     0,   597,   599,     0,   832,
   834,   837,   838,     0,     0,     0,   842,   829,   894,   774,
   776,     0,   795,   786,   803,   794,   801,   792,   802,   793,
   796,   787,   797,   788,   800,   791,   798,   789,   799,   790,
     0,   561,   564,     0,   583,   577,   578,     0,   579,   572,
     0,   566,     0,     0,   511,     0,   468,     0,  1176,     0,
     0,  1244,  1214,  1218,  1215,  1218,     0,   215,   216,   194,
   204,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   218,   220,   217,     0,     0,     0,     0,     0,     0,
     0,     0,   185,     0,     0,     0,   186,   109,     0,   402,
    82,    81,     0,   282,     0,     0,   277,     0,   591,   424,
     0,   143,     0,     0,     0,   176,   177,   179,   181,   148,
   182,     0,     0,     0,     0,     0,   149,     0,   156,   150,
   152,   483,   141,   268,     0,   355,   356,   358,   363,     0,
   933,   347,     0,     0,   878,   879,   880,     0,   761,   762,
   763,   773,   775,     0,     0,     0,     0,   777,     0,     0,
   785,     0,     0,   783,     0,     0,   784,     0,     0,   778,
     0,     0,   779,     0,     0,   782,     0,     0,   780,     0,
     0,   781,   845,   701,     0,   704,   705,     0,   598,     0,
   839,   840,   841,   898,     0,   576,     0,     0,   550,   552,
   122,  1410,  1411,     0,  1412,  1413,  1178,  1353,   596,  1243,
  1179,  1216,  1217,     0,   207,   205,   213,     0,   232,     0,
   223,     0,   219,   222,   211,     0,     0,     0,   214,   210,
   200,   201,   202,   195,   196,   199,   197,   198,   208,     0,
   190,     0,   187,   108,     0,    84,   284,   285,   281,     0,
     0,     0,     0,     0,     0,   145,     0,     0,     0,   174,
   157,   167,   166,     0,     0,   175,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   235,   370,     0,     0,
     0,   366,     0,   480,   868,   740,   774,   776,   795,   786,
   803,   794,   801,   792,   802,   793,   796,   787,   797,   788,
   800,   791,   798,   789,   799,   790,   702,   703,   823,   570,
   575,     0,     0,   574,     0,  1354,  1246,  1245,     0,     0,
     0,   231,   225,   221,   224,     0,     0,   212,     0,   209,
     0,    80,     0,   368,   430,   423,   245,   147,     0,     0,
     0,   170,   168,   173,   163,   164,   165,   158,   159,   162,
   160,   161,   171,     0,   155,     0,     0,   238,   350,   357,
   362,   361,     0,   360,   364,   934,     0,   586,     0,  1414,
     0,   228,     0,   226,     0,     0,   189,   483,   288,   429,
     0,     0,   178,   180,     0,   172,   482,   233,   234,     0,
   153,   237,   365,   363,     0,   588,   589,   206,   230,   229,
   227,   235,     0,   286,   289,   290,   291,   292,   409,     0,
     0,   408,   411,   422,   419,   421,   420,   410,     0,   154,
     0,     0,   236,   366,     0,   585,   238,     0,   272,     0,
   414,   415,     0,   169,   242,     0,     0,   239,   240,   359,
   587,   188,   287,   412,   416,   418,   413,   241,   243,   244,
   417,     0,     0,     0
};

static const short yydefgoto[] = {  2492,
     1,    41,    96,    97,    98,    99,   100,   725,   973,  1318,
  2141,  1636,  1941,   101,  1246,   899,   895,   102,   103,   104,
   969,   105,   106,  1256,  1578,   407,   911,  1899,   107,   345,
   346,   347,  1340,  1341,  1342,  1965,  1966,  1957,  1967,  1968,
  2394,  2167,  1343,  1344,  2280,  1928,  2361,  2362,  2398,  2431,
  2432,  2478,  1953,   108,  1003,  1345,  1346,   109,   736,  1001,
  1665,  1666,  1667,   110,   348,   111,   112,   731,   979,   980,
  1944,  2145,  2289,  2443,  2444,   113,   114,   491,   349,  1006,
   740,  1007,  1008,  1668,   115,   116,   375,   524,   758,   117,
   382,   383,   384,  1363,  1683,   118,   119,   350,  1676,  2175,
  2176,  2177,  2178,  2322,  2404,   120,   121,  1646,   734,   988,
  1329,  1330,   122,   367,   123,   749,   124,   125,  1669,   493,
  1015,   126,  1633,  1311,   127,   994,  2452,  2470,  2471,  2472,
  2149,  1652,  2421,  2454,   129,   130,   131,   325,   132,   133,
   134,   982,  1324,  1641,   637,   135,   136,   137,   409,   657,
  1265,  1586,   138,   139,  2455,   764,  2317,  1023,  1024,  2456,
   142,   915,  1262,  1263,  2457,   144,  1355,   500,   145,   146,
   147,   882,   417,   662,   390,   436,   921,   922,  1270,   929,
  1276,  1279,   723,   502,   503,  1894,  2095,   666,  1273,  1233,
  1560,  1561,  1562,  1877,  1563,  1887,  1888,  1889,  2086,  2354,
  2435,  2436,   745,  1564,   857,  1487,  1114,   605,   606,   607,
   608,   609,   989,   786,   800,   781,   610,   611,   775,  1034,
  1377,   612,   613,   804,   792,  1035,   615,   852,  1484,  1810,
   853,   616,  1173,   846,  1078,  1044,  1045,  1064,  1065,  1071,
  1419,  1720,  1079,  1519,  1520,  1844,  1845,   617,  1028,  1029,
  1373,   768,   618,  1235,   904,   905,   619,   620,   326,   770,
   288,  1972,  1236,  2405,   404,   504,   622,   414,   623,   624,
   625,   626,   627,   298,   991,   628,  1155,   401,   148,   307,
   292,   442,   443,   691,   693,   696,   948,   299,   300,   293,
  1605,   149,   150,    44,    52,    45,   437,   169,   170,   440,
   939,   171,   680,   681,   682,   683,   684,   685,   686,   931,
   687,   688,  1283,  1284,  2099,  1285,   151,   152,   308,   309,
   153,   519,   518,   154,   155,   453,   700,   156,   157,   158,
   891,   634,   159,   160,   958,  1612,  1301,  1606,   951,   955,
   714,  1607,  1608,  1910,  2101,  2102,   161,   162,   463,  1106,
  1228,    46,  1302,  2247,  1229,   629,  1107,   630,   888,   631,
   715,    47,  1286,    48,  1287,  1622,  2248,    50,    51
};

static const short yypact[] = {-32768,
  2391,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  2926,-32768,-32768,-32768,-32768,
-32768,  1429, 25892,   304,   143, 25040,   317, 29553,   317,   -35,
   376,   -10,   264, 29553,   382,  3717, 29834,    77,  1798,   382,
    65,    45,    90,   139,    90,   382,   460, 27305, 27586,   -35,
   382, 29553,   145,    27,   153, 27586, 23335,   140,   307,    45,
 27586, 28148, 28429,    27,   -74,  4305,   230,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   518,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   420,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   571,    89,
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
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   273,-32768,-32768,
-32768,   273,-32768,-32768,   399, 25324,-32768,-32768,-32768,    41,
-32768,-32768,   317,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   526,-32768,-32768,   656,-32768,   627,   100,   100,   747, 27586,
   317,   757,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   317, 29553, 29553,-32768,-32768, 29553, 29553,
-32768, 29553, 27586,-32768,   620,-32768,   115,   581, 22750,   619,
   317,   514, 27586, 29553,   317,-32768, 29553,-32768, 29553, 29553,
 29553,-32768,  2302,   730,-32768, 29553, 29553,-32768,   345,-32768,
-32768,-32768,-32768,-32768,    98,   711,-32768,-32768,-32768,-32768,
-32768,   759,   574,-32768, 27586,   780,-32768,-32768,   784, 15476,
  -113,  -113,   -26,   739,   846,   -98,-32768,-32768,   807,-32768,
-32768,   861,-32768,   840,-32768,-32768, 27586,-32768,    57, 29553,
-32768,-32768,-32768,-32768,-32768,-32768, 27586,    98,-32768,   798,
   897,-32768,   842,   924,-32768,   772,   -32,   382,   721,-32768,
-32768,   -74,  1006,  1005,  1006,   969,-32768,  1010,-32768,   505,
 29553,-32768,   864,   864,-32768,-32768,  1057,  1098,  1667,  1667,
-32768,   399,-32768,   345,   839, 29553,-32768,  1001, 29553,-32768,
-32768, 30115,-32768,-32768,   100,   914,   993,   901,   993,  1163,
   482,  1051,   962,-32768,  1211,-32768, 27586,-32768,  1158,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1002,-32768,-32768, 29553,-32768,  1139,-32768,-32768,  1233,
  1140,-32768,  1066,-32768,-32768,  1206, 23619,-32768,   962,-32768,
  1068,-32768,   140,-32768,-32768,-32768,-32768,-32768,   526,-32768,
-32768,-32768,  1109,   277,-32768,-32768, 29553,    91,   -29, 29553,
 29553,  -118,-32768,   328,   413,   434,   454,-32768,   475,   554,
   595,   616,   624,   626,   632,   652,   655,   678,   679,   722,
   729,   738,   742,   768,   781,   794,   800,   806,   818,   824,
   826,   833,   835,   837, 24755,  1095,  1214,  1214,  1106,-32768,
  1110,  1113,-32768,  1116,  1275,  1130,  1133,-32768,  1153,  1157,
  1370,  1214, 16700,  1164,  1179,  1187,  1194,  1195,   844,   254,
  1216,-32768,-32768,-32768,   877, 30810, 16700,  1209, 16700,-32768,
 16700, 16700, 16700, 17006,   140,  1222,-32768,-32768,-32768,-32768,
  1232,-32768,   878,  1479,-32768,  4300,-32768,  1209,   -52,-32768,
  1244,  1251,-32768,  1265,-32768,-32768,-32768,   491,-32768,    31,
   880,-32768,-32768,    59, 25608,-32768,-32768,-32768,   -33,  1441,
   -21,   -21, 23047,   839, 27586,  1379, 29553,-32768,  1140,  1466,
   277,-32768,  1453,-32768,  1472,-32768, 27586,-32768,-32768,-32768,
-32768,   -74, 16700,   -74,   354,   487,  1517,-32768,-32768,-32768,
   -35,-32768,-32768,-32768,-32768,   -35,   -35,   641,-32768,-32768,
-32768,  1323,-32768,-32768,  1334,  1338,-32768,-32768,-32768,  1318,
-32768,  1109,-32768,  1366, 25892,  1443,  1667,-32768,-32768,-32768,
  1293,-32768,-32768,-32768,-32768,-32768,  1371,-32768,-32768,-32768,
-32768,-32768,   424,  1404,-32768,  1350, 29553,-32768,  1383,  1378,
-32768,-32768,   144,  1432,   190,-32768,   190,   -74,-32768,-32768,
   403,  1455,  9368,  1425,-32768,   815,  1495,   140, 22453,-32768,
  1553,-32768,  1628, 16700,-32768, 29553, 27586,-32768,-32768,-32768,
-32768, 28710,-32768,-32768,-32768, 29553, 29553,  1617,  1569,-32768,
  1579,  1498, 21875,-32768,-32768,  1673,-32768,  1624,  1209,  1503,
  1265,  1520, 16700,-32768,-32768,  1755, 17006,  1109,  1109,  1109,
-32768,-32768,  1660,  1326,  1109,-32768,  1657,  1661,  1668,  1671,
-32768,-32768,  1214,-32768,  1179,  1664, 16700, 16700,  1109,-32768,
 20066, 17006,  1690,-32768,  9662,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1275,-32768,  1693,-32768,
-32768,-32768,-32768,   894, 17312,-32768,  1814,  1814,  1814,  1814,
  1600,  1604,  1612,  2583,-32768,   766,-32768,  1109, 26460, 30604,
 16700, 18536,  1621,   235, 16700,   520, 16700,-32768,-32768, 17618,
 10886, 11192, 11498, 11804, 12110, 12416, 12722, 18230,-32768,    40,
 15476,  1816, 23903,  7526, 29553, 26176,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   375,-32768,-32768,-32768,
-32768,-32768,  1209,   -54,-32768,  1641,   338,   424,-32768,  1675,
    25,   514,-32768,   723,-32768,-32768,-32768,-32768,  1639,-32768,
  1633,-32768,  3548,-32768,  1802,  1800,   -16,   857,-32768,  1936,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1670,   760,
   151,   151, 29553,-32768, 29553,-32768,  1667,-32768,-32768,   399,
  1655,-32768,-32768,-32768,  1658,   802,   558,  1942,-32768,-32768,
-32768,-32768,-32768,-32768,    29,  1888,  1888,  1888,-32768,   317,
-32768,-32768,   314,   314,-32768,-32768,-32768,-32768,  1822,  1821,
  1685,  1751,-32768,  1819,-32768,-32768,-32768,   588,-32768,-32768,
-32768,-32768,  1712,  1830,   169,-32768,   169,   169,   169,   169,
-32768, 27022,  1916,  1752,  1695,  1700,   611,-32768, 27586,   317,
  4300,-32768,-32768,  1687,  1688,  1691,-32768,-32768,   399, 27867,
-32768, 15476,   615,-32768,  1209, 27867, 16700,    -2,-32768,-32768,
 29553,  2457,  1826,  1920,-32768,   -46,  1696,  1698,   706,  1702,
-32768,-32768,-32768,  1703,  1890,-32768,  1704,   229,   -36,  1836,
  1874,-32768,  3038,  2604,   819,  1707,  1708,  1709,  1710, 20066,
 20066, 20066, 20066,  1711,   838,  1209,  1714,-32768,   491,   -56,
  1719,  1825, 15782, 17006, 15782, 15782,  3845,   -63,  1725,  1715,
   232,   954,  1055,   542,  1728,  1729, 17312,  1746,  1731,  1732,
  1735,   680, 17312, 17312, 17312, 17312, 17312, 17006,   727,  4540,
   868,  1209,  1736,   906,  1252,   928,-32768,    37,-32768,  1385,
 16700,  1742,   352,  1332,-32768,  1739,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1664,  1741,-32768,  1745,
  1747,-32768,  1753,  1757,  1760,-32768, 18536, 18536, 18536, 18536,
 18536, 16700,  1223,  1209,  1761,-32768,   491,-32768,-32768,  5129,
-32768,   288,-32768,-32768,   970, 18536,  1762, 16700,  2243,  1763,
  1764, 16088,   894,  1765,  1766,-32768, 16088,  2604,  1768,  1769,
 16088,  4450,  1770,  1771, 16088,  4450,  1772,  1773, 16088,    23,
  1774,  1777, 16088,    23,  1779,  1780, 16088,  1814,  1781,  1783,
 16088,  1814,  1784,  1785, 16088,  1814,   307,  1743,-32768,    31,
-32768, 21594,  1140,-32768,  1750,-32768,-32768,  1754,-32768,   -20,
  1750,-32768,-32768,  1854,-32768,-32768,-32768, 24755,  1140, 24187,
  1803,  1942,-32768,-32768,-32768,   941,  2005,   164,-32768,   164,
  1835,  1859,-32768, 29553,-32768, 16700,-32768,-32768,   926,-32768,
-32768, 29553,-32768,-32768,-32768,  -167,-32768,-32768,  1869,-32768,
  1811,-32768,   474,-32768,   -35,  3423,-32768,  1804,  1806,-32768,
  1834,-32768,-32768,   203,   203,   522,  1532,   522,   996,-32768,
-32768,   971,  1149,  1812,-32768,  1983,  1990,  1815, 27022,-32768,
 29553, 29553, 29553, 29553,-32768,-32768,-32768,  2003,  2003, 27586,
   403,    -8,  1833,-32768,-32768, 26741,-32768,-32768,  1925, 26741,
   495,  1109,-32768,-32768,-32768,-32768,-32768,-32768, 29553,  1020,
-32768,-32768,-32768,-32768,  1030,-32768, 30398,  1660, 22750, 22156,
 22156, 22453,-32768,  1935,   -74,-32768, 29553,-32768, 28991,  1743,
 29553,-32768,  1930,-32768,  1092, 29553,   221,-32768,-32768,  3810,
 17006,-32768,  2028, 30604, 29553, 29553,-32768, 16700, 17006,-32768,
-32768,-32768,  1109,-32768,-32768,-32768, 16700,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768, 16700,  1109,-32768, 20066, 20066,
 17006,  9968,   330,  2073,  2073,    74,-32768, 30604, 20066, 20678,
 20066, 20066, 20066, 20066, 20066,-32768,  8140, 17006,  2022,-32768,
-32768,  1828,   -63,  1829,  1831, 17006,-32768, 16700,  1109,  1109,
  1660,  1326,  1852,-32768, 16700, 20066, 17006, 10274,  1019,-32768,
  2075,-32768,  2075,-32768,  2075,-32768,  2075,-32768,  1832, 30604,
 17312, 18536,  1844,   600, 17312,   523, 17312,   975,  1071, 13028,
 13334, 13640, 13946, 14252, 14558, 14864, 15170, 17924,  1121,  7833,
 17312,  1209,  1845,  2018,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,     2,  3059,   856,-32768,  1037,   352,   352,
   352,   352,   352,  1742,-32768, 18536,  1109,  1109, 20066, 17006,
 10580,   525,  2083,  2083,  2083,  2083,   859, 30604, 18536, 18842,
 18536, 18536, 18536, 18536, 19148,-32768,  8447,-32768,  1848,  1851,
-32768,-32768,-32768,-32768,-32768,  1287,  5129,   970,  1660,  1660,
  1850,  1660,  1660,  1853,  1660,  1660,  1863,  1660,  1660,  1864,
  1660,  1660,  1865,  1660,  1660,  1866,  1660,  1660,  1870,  1660,
  1660,  1871,  1660,  1660,  1873, 27586,   399,-32768, 27586,-32768,
  1856,  1623,-32768, 29272,  1881,  2042, 24471,-32768,-32768,-32768,
-32768,-32768,-32768, 17006,-32768,-32768,-32768,  1967,-32768,  2071,
-32768,-32768,-32768,  1957,-32768,  1142,-32768,-32768,-32768,-32768,
-32768,  1879,   857,   857,   -16,-32768,-32768,  1670,  1222,-32768,
-32768,-32768,-32768, 29553,-32768,-32768,  1876,   203,  1877,   917,
   563,-32768,   522,-32768,   522,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, 20984,  1882,  1883, 29553,  1148, 30398,-32768,
   -14,-32768,  2004,-32768,  2076,  1914,  1914,  2084,  2040,-32768,
-32768,-32768,   -26,-32768,  1002,  2129,-32768,-32768,-32768,-32768,
-32768,  2014,-32768,   555, 27022,  1964, 29553,-32768,  2041,  1269,
-32768,  1962, 29553,  1074,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   317,  1895,-32768,-32768,-32768,-32768,
-32768,  2087,-32768,-32768,-32768,  1900,-32768, 17006,-32768,-32768,
  1901,-32768,-32768,  4300,-32768,  1903,  4300,  1434,  1905,  1025,
  1908,  1909, 15782, 15782, 15782,  1910,-32768,-32768,   427,   330,
    55,    55,  2073,  2073,  2073,-32768,     6,   -63, 17006,-32768,
-32768,-32768,-32768,   -63,  3944,  1911,  1912,  1915,  1917,   903,
  1918,  1919, 15782, 15782, 15782,  1921,  1173,  1174,  1852,-32768,
  1465,  5129,  1181,   605,  1192,  1227,  1583,-32768, 18536,  1924,
 17312,  2275,-32768,  1926,  1927, 16088,  1019,-32768,  1928,  1929,
  1229, 16088,  2923,-32768,  1932,  1933, 16088,  4783,-32768,  1934,
  1941, 16088,  4783,-32768,  1943,  1944, 16088,   122,-32768,  1946,
  1947, 16088,   122,-32768,  1948,  1949, 16088,  2075,-32768,  1950,
  1953, 16088,  2075,-32768,  1954,  1955, 16088,  2075,-32768,  1956,
  1238,   136,  1958,-32768,  1660,  1968,-32768,-32768, 16394,  1969,
  1742,  1608,-32768,   -61,   -61,-32768,-32768,-32768,-32768,  1474,
  1970,  1971,  1972,  1973, 15782, 15782, 15782,  1974,-32768,-32768,
   948,   525,   182,   182,  2083,  2083,  2083,-32768,   154,-32768,
  6707, 18536,-32768,  1976,  1931,-32768,  1982,  1984,-32768,  1985,
  1986,-32768,  1987,  1992,-32768,  1993,  1996,-32768,  1997,  1998,
-32768,  1999,  2001,-32768,  2002,  2006,-32768,  2007,  2008,-32768,
  2010,  2011,-32768,-32768,-32768,  1185,  2013,-32768, 27586,  2093,
  2068,-32768,  2068,   960,-32768,  2068,  1623,-32768,  2103, 26460,
-32768,-32768,  2177,  2147,-32768,-32768,-32768,  2054,-32768,-32768,
-32768, 29553,-32768,-32768,-32768,-32768,-32768,  2000,-32768,  1670,
-32768,-32768,-32768,   522,  1629,   522,  1072,-32768,-32768,  2016,
 20984,-32768, 20984, 20984, 20984, 20984, 20984,  1566,  2017,-32768,
  2019, 29553, 29553,  1204,-32768,  2202,  2203, 29553,   317,  2035,
-32768,-32768,  2100,  2207,   403,-32768,-32768,   140, 27586,-32768,
-32768,  2021,-32768,-32768,-32768,  2200,-32768,  2024, 29553, 19454,
  2184,  2205, 29553,-32768,-32768,  1269,-32768,-32768,   140,-32768,
-32768,-32768,-32768, 29553,  2180, 15476,-32768,-32768,-32768,-32768,
-32768, 30604,-32768,-32768,  2029,  2030,  2031,-32768,-32768,   -63,
 30604,  1271,  1272,  1289,  1290,  1296,  1298,  2034,  2038,  2039,
  1302, 18536,  2043,  1305,  1333,  1339,  1593,  5129,  1583,-32768,
  1660,  1660,  2048,  1660,  1660,  2049,  1660,  1660,  2052,  1660,
  1660,  2053,  1660,  1660,  2056,  1660,  1660,  2057,  1660,  1660,
  2058,  1660,  1660,  2059,  1660,  1660,  2060,  1341,  1349,  1209,
  2061,  1660,  2063,  2064,  4300,  1660,-32768,  1742, 30604,-32768,
-32768,-32768,-32768,  2065,  2066,  2067,-32768,-32768,-32768,   948,
-32768,  6707,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2219,-32768,-32768, 27586,-32768,-32768,-32768,  2220,-32768,-32768,
 27586,-32768, 17006, 16700,-32768,   140,-32768,   543,-32768,   -35,
  1360,-32768,-32768,   522,-32768,   522, 20984,  2705,  1319,  2277,
  2277,  2277,  1872, 30604, 20984,  6707,  2055,   604, 20984,   612,
 20984,-32768,-32768, 21290, 20984, 20984, 20984, 20984, 20984, 20984,
 20984, 20984,-32768,  9061,  1312,  1316,-32768,-32768, 19760,-32768,
  2044,-32768,   140,-32768,   -95,  2213,-32768,  2248,  1140,  2078,
 29553,-32768, 20984,  1407,  2077,-32768,  2079,  2080,-32768,-32768,
-32768, 19760, 19760, 19760, 19760, 19760,   674,  2081,-32768,-32768,
-32768,  2085,-32768,-32768,  2086,  2090,-32768,-32768,   -49,  2091,
  2019,-32768,  1416,  2092,-32768,-32768,-32768,  2096,  1367,  1369,
  1387,   468,  1390, 18536,  2098,  2099,  2101,  1394,  2108,  2110,
  1397,  2112,  2114,  1400,  2115,  2117,  1406,  2118,  2119,  1408,
  2120,  2132,  1433,  2142,  2145,  1435,  2146,  2148,  1436,  2149,
  2150,  1445,-32768,-32768,  2153,-32768,-32768,  2154,-32768,  2156,
-32768,-32768,-32768,-32768, 27586,-32768, 27586,   270,   -63,  4300,
-32768,-32768,-32768,   760,-32768,-32768,   543,-32768,  1222,-32768,
  1670,-32768,-32768,  4210,-32768,-32768,  2705,  2318,-32768,  6707,
-32768,   647,-32768,-32768,  1991,  6707,  2158, 20984,  3364,  1319,
  4335,  4818,  4818,   208,   208,  2277,  2277,  2277,-32768,  1458,
  4604,  2225,-32768,   674,   317,-32768,-32768,-32768,-32768, 29553,
   140,  2169, 29553,  2161,  1975,-32768, 19760,  1109,  1109,   650,
  2340,  2340,  2340,   355, 30604, 20372, 19760, 19760, 19760, 19760,
 19760, 19760, 19760, 19760,  8754, 29553,  2333,  1925, 29553, 30604,
 30604,   327, 29553,-32768,-32768,  1446,   607,  1475,  1476,  1477,
  1483,  1490,  1504,  1508,  1531,  1535,  1539,  1542,  1548,  1551,
  1567,  1592,  1595,  1610,  1616,  1636,-32768,-32768,-32768,-32768,
-32768, 16700,  2164,-32768,  3987,-32768,-32768,-32768, 30604,  6707,
  1481,-32768,-32768,-32768,-32768,  2390,  6707,  1991, 20984,-32768,
 29553,-32768,  2165,-32768,  2237,-32768,-32768,-32768,   943,  2166,
  2168,-32768,-32768,   650,   674,   882,   882,   214,   214,  2340,
  2340,  2340,-32768,  1563,   674,  1576,   130,  2326,-32768,-32768,
-32768,-32768,   317,-32768,-32768,-32768,  1577,  4300, 29553,-32768,
  2171,-32768,  6707,-32768,  6707,  1590,  4604,  2085,  1127,-32768,
  1090, 30604,-32768,-32768, 19760,-32768,-32768,-32768,-32768,     4,
-32768,  2326,-32768,   -49,  1632,-32768,-32768,-32768,-32768,-32768,
-32768,  2333,  1637,-32768,-32768,-32768,-32768,-32768,-32768,   583,
   736,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2173,   674,
    95,    95,-32768,   327, 29553,-32768,  2326,  1127,-32768,  2178,
   583,  2181,  2179,-32768,-32768,  2424,   107,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2185,-32768,-32768,-32768,-32768,-32768,
-32768,  2489,  2491,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,  2396,-32768,-32768,-32768,  2025,  1778,  1519,
-32768,  1176,   860,-32768,-32768,  1858,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1618,
  2157,-32768,  1198,   854,  1190,-32768,-32768,-32768,   544,   357,
-32768, -2085,-32768,  -951,-32768, -1829,   147, -2049,    76,    49,
    92,    64,-32768,-32768,-32768,-32768,   872,-32768,-32768,-32768,
-32768,-32768,   566,-32768,-32768,-32768,-32768,-32768,-32768, -1300,
-32768,-32768,-32768,-32768,    62,-32768,-32768,-32768,-32768,  -340,
   887,-32768,  1182,  1193,-32768,-32768,  2443,  2125,  1894,-32768,
  2472,-32768,  2020,  1523,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   231,   117,    96,-32768,-32768,   244,  2070,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2201,  -350,
-32768,-32768,-32768,   749,-32768,-32768,-32768,   112,-32768, -2312,
-32768,-32768,-32768,   -22,-32768,-32768,-32768,  1152,-32768,-32768,
-32768,-32768,-32768,-32768,   922,-32768,-32768,-32768,  2481,-32768,
-32768,  1294,-32768,  2167,    -5,-32768,   159, -1604,  1215,     3,
-32768,-32768,-32768,   557,     9,-32768,-32768,  1672,  -526,   -91,
  5482,-32768,  1353,  2152,-32768,-32768,-32768,  1317,-32768,-32768,
   987,  -345,-32768,  -354,   265,-32768,-32768,-32768,-32768,  1686,
-32768,-32768, -1516,-32768,  1032,-32768,   702,   708, -1025,-32768,
-32768,   137,  -641,-32768, -1561, -1465,  -912,  -843,  2009,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -694,  -512,-32768,
-32768,-32768,  3441,-32768,-32768,  -121,  -578,   797,-32768,-32768,
-32768,  4844, -1134,  -576,  -755,  1171,-32768,  -864,  -941,  -970,
-32768,-32768,  -962,   865,-32768,   601,-32768,   -77,-32768,  1580,
-32768,-32768,  4926,  1730,-32768,  1362, -1011,  1733,-32768,   527,
  -307,-32768, -1536,   210,  -247,   -51,  3470,-32768,  5056,  1143,
    -1,     1,   -38,  -315,  -595,  1459,   726,-32768,-32768,   -25,
-32768,  2325,-32768,  1676,  2176,-32768,-32768,  1674,  -388,   -24,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -150,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   622,
-32768,-32768,-32768,  1024,-32768, -1884,-32768,-32768,-32768,  1988,
-32768,-32768,  2170,-32768,-32768,  2106,  1681,-32768,-32768,-32768,
-32768,  2240,-32768,-32768,  1726, -1212,  1381,  -390,-32768,-32768,
-32768, -1249,-32768,-32768,-32768,   384,-32768,-32768,  -233,  -969,
  1619,  2467,  1677,-32768,  1080,  -442,  -835,  2793,  1409,    93,
   -55,-32768,   396,-32768,     0,-32768,   395,-32768,-32768
};


#define	YYLAST		31095


static const short yytable[] = {    42,
    49,    43,   765,   427,   316,   467,   311,   913,   492,   701,
  1365,   514,   512,  1310,   289,   352,  1156,   289,   469,   439,
  1639,  1036,  1934,   128,   402,  2100,  1178,   291,  1819,   301,
  1896,   472,  1502,  1503,  1504,  1505,  1506,  1908,   990,   505,
   140,   879,  1876,  1297,  1299,  1609,  1070,  1274,   141,   415,
   886,  1526,   508,  2284,   143,   776,   886,  1418,   448,  1232,
   698,   699,  2320,   893,   713,  1807,  2258,   761,  1808,   794,
   636,   632,   432,   128,   880,   898,  2300,  2301,  2302,  2303,
  2304,   889,   860,   369,   464,  1614,   641,  1936,  1640,  1593,
   140,  2108,   433,  2109,  2110,  2111,  2112,  2113,   141,    77,
  1371,  2461,  1392,   894,   143,   371,   456,  1304,  2453,   457,
  1422,  1305,  1424,  1425,  1408,   458,   459,  1434,  1403,  1404,
  1405,  1406, -1136,  1440,  1442,  1444,  1446,  1448,  1240,   163,
  1378,   460,   164,  1408,   461,   165,  1393,  1378,  1254,  1594,
   166,  1306,   167,   168,    77,   295,   302,  1378,   295,   310,
   313,   314,   647,   376,    68,   329,   313,   435,  2485,   313,
  1937,   520,   649,   370,  -616,   762,   320,   303,  2475,  2287,
   313,   313,   759,  1378,   313,   766,   330,  2288,   313,   313,
    74,  1450,   321,   313,   313,   313,  -616,   377,   377,  1307,
   353,   163,  1030,   642,   164,  2462,  1027,   165,   633,  1378,
  1488,   975,   166,  2489,   167,   168,   965,   703,   966,  1255,
   890,  2379,   372,   378,   378,   704,  2366,   331,   332,  1308,
  2384,  2385,  2386,  2387,  2388,  2389,  2390,  2391,  2392,  2395,
    77,   721,   705,    95,   449,  1491,  1492,  1493,   706,   707,
  2476,  1508,   521,  1379,  2428,   967,   315,   741,    79,   284,
  1379,  2321,  1248,   908,   881,  2490,   284,   289,   373,   522,
  1379,   284,  1380,   379,   379,   385,  1099,  2114,   614,  2477,
   447,    25,  1275,  2305,   284,   374,   658,  2254,   763,   708,
  1052,   380,   380,   470,   471,  2257,  1379,  2429,  1569,  2265,
   475,  2269,   331,   332,  2270,  2271,  2272,  2273,  2274,  2275,
  2276,  2277,  2278,   709,  2281,   506,   408,   507,   949,  1809,
  2412,    91,  1379,   710,  1989,   515,   286,  1741,  1423,   876,
   877,   878,   286,  2295,   462,   286,  1247,  2135,  2136,  1378,
  1251,  1178,  1178,  1178,  1178,  1178,  1309, -1357,   450,  2460,
   660,  1046, -1357,  1181,   517,  2047,   283,  1378,  1389,   285,
  1178,  1413,  1414,  1415,   638,   381,   381,  1410,  1912,   322,
   406,  1820,  2083,  2439,    95,  2440,  2100,  1390,  1411,  1412,
  1413,  1414,  1415,   525,  1831,  1832,  1833,  1834,  1835,  1836,
  1837,  1182,  1707,  1183,   689,    25,   128,   410,   295,  1408,
   756,  1259,   711,   523,    77,   451,  1523,   757,   712, -1136,
  1918,  1391,  1919,   140,   716,   968,   317,   718,   318,   971,
   720,   141,   313,   302,  2305,  1686,   525,   143,  1466,  1467,
  1468,  2352,   284,  1184,   301,   301,   302,   313,   313,   517,
  1702,   313,   313,  1581,   313,   313,  1524,  2179,  2368,  1706,
   972,   313,  1379,   496,  2039,   313,   313,   302,  1368,   313,
   323,   313,   313,   313,   803,   750,    25,  1700,   313,   313,
  1379, -1136,  2058,  2353,  1332,   324,  1732,  1709,  1710,  1711,
  1712,  1713,  1714,  1715,   753,  1736,  1525,   313,  1513,  1514,
  1515,  1740,   851,   416,   315,  1748,  1408,  1753,   296,  1416,
  1758,  1764,  1769,  1774,  1779,  1784,  1789,  1794,  1799,   313,
   976,  1803,   313,  1660,  2130,  2131,  2132,   701,  1099,   313,
  2312,  2313,  2314, -1240,  1099,  1099,  1099,  1099,  1099,   925,
  2403,   755,   319,   388,   432,  1469,   977,  1508,    95,  1824,
  1691,   430, -1289,   313,  1316,  1701,  -689, -1289,  1828,  2417,
  1244,   302,   302,   431,   433,   926,   668,   669,   313,   670,
   671,   313,   672,   673,   313,   674,   441,   675,  -689,   389,
   676,   677,   678,   679,  1708,  1317,   855,  2236,   323,   313,
   920,  1731,   924,  1812,  2238,   434,  1814,  1815,  1816,  1817,
  1818,  1245,  2229,   324,  1508,   283,   297,   313,   285,   286,
  1186,  1566,  1648,  1749,   978,   912,   289,  1516,   283,   313,
   896,   285,   900,   900,     2,   399,  1738,  1572,   283,   435,
  -618,   285,   411,   413,  2007,   932,  1178,   419,  1649,   313,
   932,   932,   313,   313,  1411,  1412,  1413,  1414,  1415,   516,
   286,   990,  -618,  1304,  1823,   990,   497,  1291,  2306,    25,
  1187,  -930,   845,  1750,  2147,  1070,  2307,  2308,  2309,  2310,
  2311,  2312,  2313,  2314,  1315,  1188,   289,   313,  1751,  1113,
  1178,  1717,  1718,  2382,  1830,   963,  1508,  1306,  1650,   946,
  1724,   427,   301,  1178,  1178,  1178,  1178,  1178,  1178,  1178,
    68,  1070,  2266,   935,   286,   498,  1651,  2357,   843,   936,
   944,   937,   729,   938,  1012,  -619,   730,  1915,  1917,  1004,
  1016,  2103,  1950,  2105,  1017,  1018,    74,  2060,  1743,  2305,
  1410,  2396,  2261,  2004,  1802,  1307,  -620,  -619,  2350,   452,
  2351,  1411,  1412,  1413,  1414,  1415,   927,   295,   956,   499,
  1644,   957,  2267,  2305,  1647,   313,  -621,   313,  -620,   313,
  1985,  1986,  1987,   928,  1070,  1308,  1744,  2268,  1745,   313,
  2262,  1510,  2263,  2005,   455,  2363,  2376,  -623,  -621,   614,
   465,  1839,  1511,  1512,  1513,  1514,  1515,  1101, -1312,   454,
  1998,  1999,  2000, -1312,    79,  1597,  1037,  1038,  1039,  -623,
  1598,  2010,  2179,  1047,   468,  1660,   315,   295,  1746,   302,
  1288,  1289,  2264,  2006,  -930,  2364,   477,  1055,  -937,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,   313,
    13,    14,    15,    16,    17,    18,    19,    20,    21,  1511,
  1512,  1513,  1514,  1515,  2242,   313,  1610,  2243,  1677,  1611,
    25,   313,    26,    68,  1242,  2365,  -624,    91,   313,   313,
  1687,   479, -1294,   703,   313,    25,   466, -1294,   313,   313,
    25,   704,  2244,   495,  1115,   313,  1116,  2087,  -624,    74,
  2089,   513,  2054,  2055,  2056,  1113,  1298,  2192,   705,   476,
  1113,  1916,  1099,   526,   706,   707,  1099,  -625,  1099,   501,
   528,  1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,
  1510,  2252,  1099,  2253,  1326,  1804,  1327,  1408,  -626,  -625,
   614,  1511,  1512,  1513,  1514,  1515,  -627, -1313,  -628,    77,
   527,   529, -1313,  1178,  -629,   708,   621,  1352,   860,  1353,
  -626,  1366,   301,  1367,   861,  1277,  1280,    79,  -627,   862,
  -628,   530,  1258,   646,  -630,   531,  -629,  -631,    42,   709,
    43,  2305,   639,   650,  2310,  2311,  2312,  2313,  2314,   710,
  1259,   313,   843,   860,  1115,  1115,  -630,  2306,  1409,  -631,
  -632,  -633,   860,  1990,  2183,  2307,  2308,  2309,  2310,  2311,
  2312,  2313,  2314,   862,   640,   313,  1449,   313,   313,   863,
 -1295,   643,  -632,  -633,   656, -1295,   864,  1260,   644,  1046,
    91,   645,  1261,  1334,   865,  1334,  1334,  1334,  1334,   512,
   512,   652,  2305,   737,  -634,   866,  1178,  1508,  1662,  1101,
  2422,  -635,  1383,   867,  1384,  1101,  1101,  1101,  1101,  1101,
  -636,   864,   659,   863,  -637,   653,  -634, -1260,   711,   860,
   864,   995, -1260,  -635,   712,   313,   996,   313,   865,   302,
   862,    22,  -636,    95,    23,   654,  -637,    25,   997,    26,
  -638,    27,   655,    25,    28,    29,    30,    31,    32,  2327,
   998,   999,   302,  -639,    34,    35,    36,    37,    38,   661,
   851,  1112,  -638,  1113,  1881,   851,  -640,   663,  1450,   851,
   665,  1882,  -641,   851,  1408,  -639,  1000,   851,  -642,    25,
   863,   851,  1982,  1883,   313,   851,   868,   864,  -640,   851,
  -643,   313,  1356,   851,  -641,-32768,  -644,  1296,  -645,  1113,
  -642,  1115,   313,   667,   869,  -646,  1885,  -647,   313,  -648,
   315,  1410,  -643,   313,   695,  1397,  -680,  1398,  -644,  1886,
  -645,   868,  1411,  1412,  1413,  1414,  1415,  -646,  2184,  -647,
   868,  -648,   870,    25,    25,  1278,  1454,  2188,  -680,   869,
   871,   872,   873,   874,   875,   876,   877,   878,   869,  -615,
  -678,  1811,  -614,  1113,   692,  2306,  1178,  1829, -1346,   906,
   697,   909,  1099, -1346,-32768,-32768,  2310,  2311,  2312,  2313,
  2314,  -615,  -678,   919,  -614,   717,   870,    68,   874,   875,
   876,   877,   878,   724,   871,   872,   873,   874,   875,   876,
   877,   878,   726, -1274,    25,  2230, -1261,   868, -1274,  1589,
   722, -1261,  1587,    74,  1576,  1577,   328,  1579,  1590,  1591,
  1587,   368,  1914,   284,  1113,   869,  2306,   387,  1471,  1599,
   728,  1510,   403,  1472,  2307,  2308,  2309,  2310,  2311,  2312,
  2313,  2314,  1511,  1512,  1513,  1514,  1515,  1904,  1905,  1689,
   787,   732,  1616,   870, -1290,  1617,  1458,  1695,    25, -1290,
    26,  1429,  1634,    77,   874,   875,   876,   877,   878,   733,
  2256,  1880,   843,  1013,  1459, -1304,   788,  1618,   735,  1619,
 -1304,    79,  1508,  1642,    42,  1601,    43,  1654,  1509,   738,
  1489,  1490,  1491,  1492,  1493,   789,   213,   933,   934,  1881,
  1620,  1620,  1621,  1621,  1615,  1678,  1882,  1680,  1410,   739,
   742,  1671,  1671,  1464,  1465,  1466,  1467,  1468,  1883,  1411,
  1412,  1413,  1414,  1415,   313,   743,  1655,  1884,  1656,   223,
  1653,  1489,  1490,  1491,  1492,  1493,  1657,  2239,  1658,   744,
   313,  1885,   313,  2449,    91,  1813,  1508,  1958,  1334,  1334,
  1670,  1670,  1842,  1959,  1886, -1292,   313,   747,  1178,   790,
 -1292,    25,  1430,    26,   313,  1960,  1489,  1490,  1491,  1492,
  1493, -1306,   746,  1101,  2081,   752, -1306,  1101,  2114,  1101,
  2106,  1696,  1101,  1101,  1101,  1101,  1101,  1101,  1101,  1101,
  1101,   952,   953,  1101,  2450,  1699,    25,  2451,   881,   954,
  1684,   313,   773,   313,   313,   313,   313,   621,   283,   284,
   774,   285,   313,   777,    25,  1961,    26,   778,   313,   205,
   779, -1259,   313,   780,   959,   960, -1259,  1726,  1727,  1962,
  1616,   313,   961,  1617,   782,  1963,    25,   783,    26,   843,
   784,   313,   313,   313,   313,   207,  2118,   793,  1902,   313,
  1903,   313,  1897,   313,  1655,  1618,  1935,  1623,   313,  1964,
   785,  2383, -1136,  2223,   212,   213,   843,   313,   313,   163,
   798,   797,   164, -1280, -1278,   165,  2401,  2402, -1280, -1278,
   166, -1310,   167,   168,  1115,  1958, -1310,  1115,  1115,  1115,
  1115,  1115, -1305,   860,   799,  1821,  1822, -1305,   223,   861,
   843,   801,   802,  1960,   862,  1473,  1510,  2292,  1041,  1042,
  1366,   290,  2137,   845,   290,  2411,   312,  1511,  1512,  1513,
  1514,  1515,   327,   805,  1508,   312,   856, -1308,   228, -1273,
  2002,  1474, -1308,  1508, -1273,  1354,   396,   400, -1287,   858,
   405,  2049,   843, -1287,   400,   400,   859,   883,   621,   400,
   422,   425, -1262,  1961,   863,  -930,  2122, -1262,   884,  -937,
  1333,   864,  1335,  1336,  1337,  1338,  1977,  1962,   885,   865,
  1510, -1291, -1293,  1963,  2123,   897, -1291, -1293,  2459,   910,
   866,  1511,  1512,  1513,  1514,  1515,   914,   917,   867, -1296,
 -1297,  1280,  1280,  1277, -1296, -1297, -1298,  1964, -1299,   950,
   843, -1298, -1303, -1299,   638, -1309,   918, -1303,  1115,  1115,
 -1309,   286,   930,  2128,  2129,  2130,  2131,  2132,  1366,   843,
  2282,   943,  1366,  2142,  2283,  2114,  1489,  1490,  1491,  1492,
  1493,  2115,   940, -1307,  1449,   947,  2116,  1494, -1307, -1311,
  1449, -1286,  1450,   941, -1311,  1449, -1286,   942,   313, -1288,
  1449,   313,  1508,  1452, -1288,  1449,   313,   962,  2194,   313,
  1449,  2250,  1653,   945,  1971,  1449,  2251, -1300,  1475, -1301,
  1449,   868, -1300,  1101, -1301,  1449,  1476,  1477,  1478,  1479,
  1480,  1481,  1482,  1483, -1257,   964,  2117, -1302,   993,   869,
 -1314,   970, -1302,  2118, -1316, -1314,   313, -1324,   981, -1316,
 -1322,  2119, -1324,  1453,  1009, -1322, -1323,   771, -1317,  1880,
  1454, -1323,  2120, -1317,  1312,  1313,  1314,   870,-32768,   313,
  2121,   843,   881,   860,  2324,   871,   872,   873,   874,   875,
   876,   877,   878, -1318,   862, -1321, -1319,  1881, -1318,  1010,
 -1321, -1319,  1980,  1019,  1882, -1320, -1279,   313,  1510,   313,
 -1320, -1279,  -582,  1020,   290,   313,  1883,  1510,  1565,  1511,
  1512,  1513,  1514,  1515,  2369,  1884,  2370,  1973,  1511,  1512,
  1513,  1514,  1515,  1021,   906, -1315, -1334, -1325,   400,  1885,
 -1315, -1334, -1325, -1342,   863,   771,  1026,  2413, -1342,  2414,
 -1333,   864,  1886,   312,   312, -1333,  2294,   290,   474,   865,
   312,   400,  1002,  2122, -1340,  1022,  1031,   494, -1331, -1340,
   866,   400,   312, -1331,  1582,   312,  1583,   312,   290,   474,
  1458,  2123,  1027,  -930,   312,   312,  1489,  1490,  1491,  1492,
  1493, -1341,  1033,    77,   843, -1332, -1341,  1613,  1459, -1335,
 -1332,  1048, -1326,   400, -1335,  1049,  1638, -1326, -1336,  2124,
  2097, -1327,  1050, -1336,   614,  1051, -1327,  2125,  2126,  2127,
  2128,  2129,  2130,  2131,  2132,   400,  1460, -1339,   405,  2425,
  1072,  2426, -1339,   860,  2133,   400,  1510,  1464,  1465,  1466,
  1467,  1468,  1366,   746,  2427,  2434,  2140,  1511,  1512,  1513,
  1514,  1515, -1330,   803,  2458, -1337,  2413, -1330,  2441,   690,
 -1337,   868,  1489,  1490,  1491,  1492,  1493,  2154,  1109,  2148,
 -1328,  1450,  1110,  2048,   312, -1328, -1338,   312,  1111,   869,
   312, -1338,  1452,  1489,  1490,  1491,  1492,  1493,  1180,  1232,
  2174,  2114,  1253,   843,  2104,   400, -1329,  2115,  2465,  1266,
  2466, -1329,  2116,  2468,  1250,  2469,  1264,   870,   283,   297,
  1272,   285,   286,   405,  1271,   871,   872,   873,   874,   875,
   876,   877,   878,  1281,  1294,   312,  1282,  1295,  1300,  2372,
  1305,   313,  1453,  1320,   354,  1321,  1322,  1323,  1325,  1454,
  1328,  1331,   313,  1348,  1349,   312,  1350,  1455,   312,   767,
   355,  1351,  2117,  1357,   313,   356,  1358,  1359,  1456,  2118,
  1375,  1376,   357,  1387,  1381,   358,  1382,  2119,  1394,   359,
  1385,  1386,  1388,  1395,  1399,  1400,  1401,  1402,  2120,  1407,
   360,  1417,  1428,   772,   313,   313,  2121,  1420,  1421,   361,
   313,   302,   362,  1427,  2114,  1431,  1432,  1435,  1436,  1437,
  2115,   313,  1438,  1470,  2249,  2116,  1486,  1495,  1496,  1557,
  2114,   313,  1497,  1567,  1498,   313,   363,  2241,   364,  1570,
  1499,  2116,  1568,   365,  1500,   366,   313,  1501,  1517,  1527,
  1529,  1530,  1532,  1533,   843,  1535,  1536,  1538,  1539,  1541,
  1542,  1544,  1874,   843,  1545,  1565,  1547,  1548,  1550,  1458,
  1551,  1553,  1554,   290,  1574,  2117,  2245,  1580,  2246,  1584,
   843,   907,  2118,   400,  2286,   312,  1585,  1459,  1595,  2122,
  2119,  2117,  1596,  1625,  1602,   400,  1603,  1604,  2118,  1624,
  1626,  2120,  1627,  1635,  1643,  1645,-32768,  2123,  1675,  2121,
  1682,  1690,  1408,  1719,  1450,  1460,  1721,  1722,  1806,  1723,
  1737,   843,  1508,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
  1468,  1742,  1805,   290,   843,  2124,  1840,  1841,  1849,  1893,
  1898,  1852,  1879,  2125,  2126,  2127,  2128,  2129,  2130,  2131,
  2132,  1855,  1858,  1861,  1864,   312,   313,  1892,  1867,  1870,
  2255,  1873,  1900,   313,  1901,  1902,  1911,  1913,  1938,  1932,
  1933,   992,  1940,  1939,  1945,  1943,  1948,   494,  1949,  1952,
  1969,  1956,  1974,  1975,   312,   400,   843,  1976,   843,  1978,
   312,  1979,  2122,  1981,   312,   312,  1983,  1984,  1988,  1992,
  1993,  1025,  2084,  1994,  2085,  1995,  1996,  1997,  2122,  2001,
  2123,  2008,  2091,  2011,  2012,  2014,  2015,  2062,  2373,  2017,
  2018,  2020,    42,   313,    43,  2245,  2123,  2246,  2021,  2093,
  2023,  2024,  2374,  2026,  2027,  2029,  2030,  2032,  2124,  1069,
  2033,  2035,  2036,  2040,  2038,  2094,  2125,  2126,  2127,  2128,
  2129,  2130,  2131,  2132,  2124,  2042,  2046,  2096,  2050,  2051,
  2052,  2053,  2057,  2378,  2061,  2128,  2129,  2130,  2131,  2132,
  2063,  2098,  2064,  2065,  2066,  2067,  2380,  2381,  2138,  2139,
  2068,  2069,   860,  1105,  2070,  2071,  2072,  2073,   861,  2074,
  2075,  2143,  2146,   862,  2076,  2077,  2078,  1154,  2079,  2080,
  1177,  2082,  1522,  2107,  2134,  2144,  -937,   313,  2151,   313,
  2152,  2153,  2170,  2182,  1450,  2171,  2114,  2185,  2186,  2187,
  1451,  1237,  2189,  1237,   312,  1452,  2190,  2191,  2235,  2237,
  2285,  2193,   843,    42,  1601,    43,  2198,  2201,   843,   427,
  2204,  2207,  2260,   863,  2210,  2213,  2216,  2219,  2222,  2224,
   864,  2226,  2227,  2231,  2232,  2233,  2290,   302,   865,  2291,
  2447,  2293,   313,  2360,  2297,   313,  2298,  2299,  2315,   866,
   771,  2371,  2316,  2375,  2318,  1453,  2319,   843,  2323,  2305,
  2325,   690,  1454,   290,  2326,  1565,  2328,  2329,   313,  2330,
  1455,   313,   843,   843,  2406,   313,  2331,  2445,  2332,  2446,
  2333,  1456,  2334,  2335,     2,  2336,  2337,  2338,  2339,  2447,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
  2340,    13,    14,    15,    16,    17,    18,    19,    20,    21,
  2341,   843,   843,  2342,  2343,  2415,  2344,  2345,  2346,   843,
  1347,  2347,  2348,   313,  2349,  2367,  2445,   400,  2446,  2377,
  2397,  2409,  2419,  2420,  2423,  2150,  2424,  2430,  1364,  2438,
   868,  2474,  2486,  2484,  1364,  2488,  2491,  2487,  2493,  1237,
  2494,   429,  1319,   727,  1637,  2406,  1942,  1227,   869,   901,
  1630,   313,   621,   478,   974,   843,  1628,   843,  1951,  2173,
  2296,  2448,  1458,  2416,   843,  2482,   860,  2467,  1069,  1069,
  1069,  1069,   861,  2463,  1374,  2479,   870,   862,  1954,  2483,
  1459,  1947,   418,  1674,   871,   872,   873,   874,   875,   876,
   877,   878,   651,  1673,   916,  1105,   386,   760,  1369,  2400,
  2464,  1105,  1105,  1105,  1105,  1105,  2406,   313,  1460,  2480,
  2448,  2399,  2473,   511,  1946,  1592,  1461,  1462,  1463,  1464,
  1465,  1466,  1467,  1468,   426,   648,  2442,   863,   751,  1556,
  1685,  1906,  1588,  1257,   864,   510,   664,  2407,  2090,  1249,
  1878,  2088,   865,   483,   484,   485,   486,   487,   488,   489,
   490,  2481,  1729,   866,   841,  2044,  2003,  1372,  2195,  1571,
  1565,   867,  2433,  1231,  1241,  2092,   444,  1565,  1290,   694,
  1292,  1907,   892,   702,   754,  1177,  1177,  1177,  1177,  1177,
  1293,   635,  1575,  1252,  2358,   438,  1875,  1360,  1558,  2355,
  1303,  2356,   860,     0,  1177,     0,     0,     0,   861,     0,
     0,     0,     0,   862,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   860,     0,     0,     0,     0,     0,  1522,
     0,     0,    22,     0,   862,    23,     0,    24,    25,     0,
    26,     0,    27,     0,     0,    28,    29,    30,    31,    32,
   400,     0,    33,     0,   868,    34,    35,    36,    37,    38,
    39,    40,     0,   863,     0,     0,   907,     0,  1237,     0,
   864,     0,   869,     0,     0,     0,     0,     0,   865,     0,
     0,     0,   312,     0,   863,     0,     0,     0,     0,   866,
   312,   864,     0,     0,     0,     0,     0,   867,     0,   865,
   870,     0,     0,     0,     0,     0,     0,     0,   871,   872,
   873,   874,   875,   876,   877,   878,     0,     0,     0,     0,
     0,  1565,     0,  1565,  2114,     0,  1522,  1629,     0,  1629,
  1631,  1632,   312,     0,     0,  2116,     0,     0,   400,     0,
     0,     0,     0,     0,   992,     0,     0,     0,   992,     0,
     0,     0,     0,     0,     0,     0,     0,   312,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   494,  1672,  1672,
   494,     0,     0,     0,     0,   312,     0,   312,     0,  1681,
   868,     0,     0,     0,  1025,  2117,     0,     0,     0,     0,
     0,     0,  2118,  1692,  1693,     0,     0,     0,   869,     0,
  2119,   868,     0,     0,     0,   294,   294,     0,   294,     0,
     0,  2120,     0,     0,     0,     0,     0,  1069,  1069,   869,
     0,     0,     0,     0,     0,     0,   870,  1069,  1069,  1069,
  1069,  1069,  1069,  1069,   871,   872,   873,   874,   875,   876,
   877,   878,     0,     0,  1522,     0,     0,   870,     0,  -719,
     0,     0,     0,     0,  1069,   871,   872,   873,   874,   875,
   876,   877,   878,     0,     0,     0,     0,     0,     0,  1105,
  1177,     0,     0,  1105,     0,  1105,     0,     0,  1105,  1105,
  1105,  1105,  1105,  1105,  1105,  1105,  1105,     0,    53,  1105,
     0,     0,     0,    54,     0,     0,    55,    56,     0,     0,
    57,     0,  2122,     0,     0,     0,     0,     0,     0,    58,
    59,     0,     0,     0,  1177,     0,     0,  1069,     0,     0,
  2123,     0,     0,    60,    61,     0,     0,  1177,  1177,  1177,
  1177,  1177,  1177,  1177,     0,     0,     0,     0,     0,     0,
     0,     0,  1450,  1522,     0,     0,     0,     0,  2124,     0,
    62,     0,     0,  1452,     0,    63,  2125,  2126,  2127,  2128,
  2129,  2130,  2131,  2132,     0,    64,     0,     0,     0,    65,
     0,    66,     0,     0,   400,     0,     0,   400,     0,     0,
     0,    67,  1891,    68,     0,  1237,     0,    69,     0,    70,
     0,    71,     0,     0,     0,    72,     0,     0,     0,     0,
     0,     0,    73,  1453,     0,     0,     0,     0,     0,    74,
  1454,     0,     0,     0,     0,     0,     0,     0,  1455,     0,
     0,     0,  1909,  1522,     0,  1522,  1522,  1522,  1522,  1522,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1931,     0,     0,  1025,     0,   445,   294,     0,
     0,     0,     0,     0,    75,     0,    76,   860,     0,    77,
    78,     0,  1522,   861,     0,     0,     0,     0,   862,     0,
     0,     0,     0,  1629,     0,  1955,     0,    79,   860,     0,
     0,  1970,     0,     0,   861,     0,     0,     0,     0,   862,
     0,     0,     0,    80,    81,     0,     0,     0,     0,     0,
     0,     0,     0,    82,    83,     0,     0,     0,     0,     0,
  1522,     0,     0,     0,    84,    85,     0,     0,   863,     0,
  1458,   294,     0,     0,     0,   864,    86,    87,    88,     0,
    89,     0,     0,   865,    90,     0,     0,     0,  1459,   863,
    91,     0,     0,     0,   866,     0,   864,     0,    92,     0,
     0,     0,   867,     0,   865,     0,    93,     0,     0,     0,
     0,     0,     0,    94,  1522,   866,  1460,  1177,     0,  1105,
     0,     0,     0,   867,  1461,  1462,  1463,  1464,  1465,  1466,
  1467,  1468,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    95,     0,     0,     0,     0,     0,     0,
     0,   294,   294,     0,     0,     0,   294,     0,     0,  1522,
     0,     0,     0,     0,     0,     0,     0,  1522,  1522,     0,
     0,  1522,     0,  1522,     0,     0,  1522,  1522,  1522,  1522,
  1522,  1522,  1522,  1522,  1522,   868,  1522,     0,     0,     0,
     0,  1522,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   869,     0,  1522,   868,     0,     0,     0,
  1177,     0,     0,     0,  1522,  1522,  1522,  1522,  1522,     0,
     0,     0,     0,     0,   869,     0,     0,     0,     0,     0,
     0,   870,     0,     0,     0,     0,     0,     0,     0,   871,
   872,   873,   874,   875,   876,   877,   878,   400,     0,     0,
     0,     0,   870,     0,  1396,     0,     0,     0,  1154,     0,
   871,   872,   873,   874,   875,   876,   877,   878,     0,     0,
   312,     0,     0,     0,     0,  -718,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1931,
     0,  1931,  1931,  1931,  1931,  1931,     0,     0,     0,     0,
  1025,  1025,     0,     0,     0,     0,   312,     0,     0,     0,
     0,     0,  1522,     0,     0,     0,     0,   400,  1522,     0,
  1522,     0,     0,     0,     0,     0,     0,   312,   474,     0,
     0,  2172,   887,  2114,     0,     0,     0,   294,     0,  2115,
     0,     0,  2181,     0,  2116,     0,     0,     0,     0,  1522,
     0,     0,     0,     0,     0,     0,     0,     0,  1522,  1522,
  1522,  1522,  1522,  1522,  1522,  1522,  1522,  1522,     0,     0,
  1177,     0,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,     0,    13,    14,    15,    16,    17,    18,    19,
    20,    21,     0,     0,  2117,     0,     0,   294,     0,   294,
     0,  2118,     0,   287,     0,     0,   287,     0,   287,  2119,
     0,     0,  1522,     0,   287,     0,     0,   287,     0,  1522,
  2120,  1522,     0,     0,     0,     0,     0,     0,   287,   287,
     0,     0,   287,     0,     0,     0,   287,   287,     0,     0,
     0,   287,   287,   287,     0,     0,     0,     0,     0,     0,
     0,     0,   400,     0,     0,     0,     0,     0,     0,   400,
     0,     0,     0,     0,     0,  1522,     0,  1522,     0,     0,
     0,     0,     0,     0,     0,  1931,     0,  1522,     0,     0,
     0,     0,     0,  1931,     0,     0,     0,  1931,     0,  1931,
     0,     0,  1931,  1931,  1931,  1931,  1931,  1931,  1931,  1931,
  1931,     0,  1931,     0,     0,     0,     0,   474,     0,     0,
     0,  2122,     0,     0,     0,     0,     0,   860,     0,   312,
     0,  1931,     0,   861,     0,     0,  1267,     0,   862,  2123,
   474,   474,   474,   474,   474,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1108,     0,     0,
     0,     0,     0,     0,     0,     0,  1268,  2124,     0,     0,
     0,     0,  1177,     0,  1179,  2125,  2126,  2127,  2128,  2129,
  2130,  2131,  2132,     0,     0,     0,     0,     0,   863,     0,
     0,     0,  1230,     0,     0,   864,     0,     0,  1243,     0,
     0,     0,     0,   865,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   400,   866,   400,     0,     0,     0,     0,
     0,     0,   867,     0,    22,     0,     0,    23,     0,     0,
    25,     0,    26,     0,    27,     0,     0,    28,    29,    30,
    31,    32,     0,     0,     0,     0,  1931,    34,    35,    36,
    37,    38,     0,  1600,     0,     0,   287,     0,     0,   294,
     0,  1269,     0,     0,     0,     0,     0,     0,   312,     0,
     0,  1237,     0,     0,     0,   474,     0,     0,     0,     0,
   287,     0,     0,     0,   474,   474,   474,   474,   474,   474,
   474,   474,   474,   474,  1025,   287,   287,  1237,     0,   287,
   287,   312,   287,   287,     0,   868,     0,     0,     0,   287,
     0,     0,     0,   287,   287,     0,     0,   287,     0,   287,
   287,   287,     0,   869,     0,     0,   287,   287,     0,   473,
     0,  1230,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   287,     0,  1931,     0,  2418,
   509,   870,   329,     0,     0,     0,     0,     0,     0,   871,
   872,   873,   874,   875,   876,   877,   878,   287,     0,     0,
   287,     0,     0,   330,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2437,     0,   860,
     0,     0,     0,     0,     0,   861,     0,     0,     0,  1108,
   862,   287,     0,   474,     0,  1108,  1108,  1108,  1108,  1108,
     0,     0,     0,     0,   331,   332,   287,     0,     0,   287,
   887,     0,   287,     0,   860,     0,     0,   333,     0,   334,
   861,     0,     0,     0,   335,   862,     0,   287,     0,     0,
     0,   336,     0,  2437,   337,     0,     0,     0,   338,     0,
   863,     0,     0,     0,     0,   287,     0,   864,     0,   339,
     0,     0,     0,     0,     0,   865,     0,   287,   340,     0,
     0,  -352,     0,     0,     0,     0,   866,     0,  1426,  1179,
  1179,  1179,  1179,  1179,   867,   863,     0,   287,     0,     0,
   287,   287,   864,     0,     0,   341,     0,  -270,  1179,     0,
   865,     0,   342,     0,   343,     0,     0,     0,     0,  1688,
     0,   866,   344,     0,     0,     0,     0,     0,     0,   867,
     0,     0,     0,   860,     0,   287,     0,     0,     0,   861,
     0,  1991,     0,     0,   862,     0,     0,     0,     0,     0,
   791,     0,   887,     0,     0,     0,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,   842,    13,    14,    15,
    16,    17,    18,    19,    20,    21,     0,   868,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   863,   869,     0,     0,     0,     0,
     0,   864,     0,     0,     0,   287,     0,     0,     0,   865,
     0,     0,   868,   287,     0,   287,     0,   287,     0,     0,
   866,     0,     0,   870,     0,     0,     0,   287,   867,     0,
   869,   871,   872,   873,   874,   875,   876,   877,   878,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   870,     0,
     0,     0,     0,     0,     0,   287,   871,   872,   873,   874,
   875,   876,   877,   878,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   287,     0,     0,     0,     0,     0,   287,
     0,   868,     0,     0,     0,     0,   287,   287,     0,     0,
     0,     0,   287,     0,     0,     0,   287,   287,     0,   869,
     0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1043,     0,     0,   870,     0,     0,
     0,     0,     0,     0,     0,   871,   872,   873,   874,   875,
   876,   877,   878,  1108,  1179,     0,     0,  1108,     0,  1108,
     0,     0,  1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,
  1108,     0,     0,  1108,     0,     0,     0,     0,    22,  2114,
  1067,    23,     0,     0,    25,  2115,    26,  2359,    27,     0,
  2116,    28,    29,    30,    31,    32,     0,     0,  1179,     0,
     0,    34,    35,    36,    37,    38,     0,  2410,     0,   287,
   842,  1179,  1179,  1179,  1179,  1179,  1179,  1179,     0,     0,
     0,     0,    54,     0,  1103,    55,    56,     0,     0,    57,
     0,     0,     0,   287,     0,   287,   287,     0,    58,    59,
  2117,  1175,     0,     0,     0,     0,     0,  2118,     0,     0,
     0,     0,    60,    61,     0,  2119,     0,     0,     0,  1230,
     0,     0,     0,     0,     0,     0,  2120,     0,     0,   860,
     0,     0,     0,     0,  2121,   861,     0,     0,     0,    62,
   862,     0,     0,     0,   428,     0,     0,     0,     0,     0,
     0,     0,     0,   287,    64,   287,     0,     0,    65,     0,
    66,     0,     0,     0,  2114,     0,     0,     0,     0,     0,
    67,     0,    68,     0,     0,  2116,    69,     0,    70,     0,
    71,     0,     0,     0,    72,     0,     0,     0,     0,     0,
   863,    73,     0,     0,     0,     0,     0,   864,    74,     0,
     0,     0,     0,     0,     0,   865,     0,     0,     0,     0,
     0,     0,   287,     0,     0,     0,   866,  2122,     0,   287,
     0,     0,     0,     0,   867,  2117,     0,     0,     0,     0,
   287,     0,  2118,     0,     0,  2123,   287,     0,     0,     0,
  2119,   287,     0,    75,     0,    76,     0,     0,    77,    78,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2124,     0,     0,    79,     0,     0,     0,
     0,  2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,   860,
     0,     0,    80,    81,     0,     0,     0,     0,     0,     0,
   862,     0,    82,    83,     0,     0,     0,     0,     0,  1067,
  1067,  1067,  1067,    84,    85,     0,     0,   868,     0,     0,
     0,  1179,     0,  1108,     0,    86,    87,    88,     0,    89,
     0,     0,     0,    90,     0,   869,  1103,     0,     0,    91,
     0,     0,  1103,  1103,  1103,  1103,  1103,    92,     0,     0,
   863,     0,  2122,     0,     0,    93,     0,   864,     0,     0,
     0,     0,    94,   870,     0,   865,     0,     0,     0,     0,
  2123,   871,   872,   873,   874,   875,   876,   877,   878,  1450,
     0,     0,     0,     0,     0,  1451,     0,     0,     0,     0,
  1452,     0,    95,     0,     0,     0,     0,     0,  2124,     0,
   842,     0,     0,     0,     0,     0,  2125,  2126,  2127,  2128,
  2129,  2130,  2131,  2132,  1179,     0,  1175,  1175,  1175,  1175,
  1175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1175,     0,     0,     0,     0,
  1453,     0,     0,  2114,     0,     0,     0,  1454,     0,  2115,
     0,     0,   287,     0,  2116,  1455,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1456,   868,   287,     0,
   287,     0,     0,     0,  1457,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   287,   869,     0,     0,     0,     0,
     0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2117,     0,     0,     0,     0,     0,
     0,  2118,     0,   870,     0,     0,     0,     0,     0,  2119,
     0,     0,-32768,-32768,   874,   875,   876,   877,   878,   287,
  2120,   287,   287,   287,   287,     0,     0,     0,  2121,     0,
   287,     0,     0,     0,     0,     0,   287,     0,     0,     0,
   287,     0,     0,     0,     0,     0,     0,  1458,     0,   287,
     0,     0,     0,     0,     0,     0,     0,   842,     0,   287,
   287,   287,   287,     0,  1179,  1459,     0,   287,     0,   287,
     0,   287,     0,     0,     0,     0,   287,     0,     0,     0,
     0,     0,     0,     0,   842,   287,   287,     0,     0,     0,
     0,     0,     0,  1460,     0,     0,     0,     0,     0,     0,
     0,  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,     0,
     0,  2122,  1450,     0,     0,     0,     0,     0,   842,     0,
     0,     0,     0,  1452,     0,     0,     0,     0,     0,  2123,
     0,     0,     0,     0,     0,     0,     0,     0,  1067,  1067,
     0,     0,  1043,     0,     0,     0,     0,  2114,  1067,  1067,
  1067,  1067,  1067,  1067,  1067,     0,     0,  2124,  2116,     0,
   842,     0,     0,     0,     0,  2125,  2126,  2127,  2128,  2129,
  2130,  2131,  2132,  1453,     0,  1067,     0,     0,     0,     0,
  1454,     0,     0,     0,     0,     0,     0,     0,  1455,     0,
  1103,  1175,     0,     0,  1103,     0,  1103,     0,     0,  1103,
  1103,  1103,  1103,  1103,  1103,  1103,  1103,  1103,  2117,     0,
  1103,     0,     0,     0,     0,  2118,     0,     0,   842,     0,
     0,     0,     0,  2119,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1175,     0,   842,  1067,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1175,  1175,
  1175,  1175,  1175,  1175,  1175,     0,  1179,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   287,     0,     0,   287,
     0,     0,     0,     0,   287,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1458,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1459,     0,
     0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2122,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1460,   287,     0,   842,
     0,     0,     0,  2123,     0,-32768,-32768,  1464,  1465,  1466,
  1467,  1468,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1929,     0,   287,     0,   287,     0,     0,
     0,  2124,     0,   287,     0,     0,     0,     0,     0,     0,
-32768,-32768,  2128,  2129,  2130,  2131,  2132,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   806,   533,   807,   808,   809,   810,   538,   811,   812,
   813,     0,   814,     0,   815,   816,   817,   818,   819,   820,
   821,   822,   823,   824,   825,     0,   826,   827,   828,   829,
   830,   831,     0,   832,   833,   834,   835,   836,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   842,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   567,   568,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1175,     0,
  1103,     0,   205,   574,     0,     0,     0,     0,     0,   837,
     0,     0,     0,     0,     0,     0,     0,   578,     0,   579,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,     0,     0,     0,   580,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   212,   213,     0,
   581,     0,   582,     0,     0,     0,     0,     0,   586,     0,
     0,   842,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   223,    77,     0,     0,     0,     0,     0,     0,   838,
   839,  1175,     0,     0,     0,     0,     0,   592,     0,   287,
     0,     0,     0,     0,   594,     0,     0,     0,     0,     0,
   287,   228,     0,     0,     0,     0,   840,     0,     0,     0,
     0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   287,   287,     0,     0,     0,     0,   287,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
  1929,     0,  1929,  1929,  1929,  1929,  1929,   596,     0,   287,
     0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
   283,   284,     0,   285,   287,     0,    25,   598,    26,     0,
     0,     0,   842,     0,     0,     0,   796,     0,     0,  2168,
     0,   842,     0,     0,     0,     0,     0,     0,     0,     0,
   844,     0,   847,  2180,   848,   849,   850,   854,   842,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1175,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   842,
   769,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   842,     0,     0,     0,   923,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
     0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   842,     0,   842,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   903,     0,
     0,     0,     0,     0,     0,     0,  1929,     0,     0,     0,
     0,     0,     0,     0,  1929,     0,     0,  1011,  1929,     0,
  1929,   287,     0,  1929,  1929,  1929,  1929,  1929,  1929,  1929,
  1929,  1929,     0,  1929,     0,     0,     0,     0,  2168,     0,
     0,     0,     0,     0,     0,     0,  1032,     0,     0,     0,
     0,     0,  1929,     0,     0,     0,     0,     0,     0,     0,
     0,  2168,  2168,  2168,  2168,  2168,     0,     0,     0,     0,
  1053,  1054,     0,     0,     0,     0,     0,     0,  1077,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1175,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   287,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1100,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   842,     0,     0,     0,  1157,     0,   842,     0,  1185,     0,
  1189,     0,     0,  1193,  1198,  1202,  1206,  1210,  1214,  1218,
  1222,  1226,     0,     0,     0,     0,  1066,     0,     0,     0,
   287,     0,     0,   287,     0,     0,     0,  1929,     0,     0,
     0,     0,     0,     0,     0,   842,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   287,     0,     0,   287,
   842,   842,     0,   287,     0,     0,  2168,     0,     0,     0,
  1102,     0,     0,     0,     0,  2168,  2168,  2168,  2168,  2168,
  2168,  2168,  2168,  2168,  2168,     0,     0,  1174,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   842,
   842,     0,     0,     0,     0,     0,     0,   842,     0,     0,
     0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1929,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
     0,     0,     0,   842,     0,   842,  1068,     0,     0,     0,
     0,     0,   842,     0,     0,     0,     0,     0,     0,     0,
  1370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2168,     0,     0,     0,     0,     0,
  1104,     0,     0,     0,     0,   287,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1077,  1176,  1077,  1077,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1433,     0,     0,     0,     0,     0,  1439,  1441,  1443,  1445,
  1447,   854,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1485,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1066,  1066,  1066,  1066,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1102,     0,     0,  1507,     0,     0,  1102,  1102,
  1102,  1102,  1102,     0,     0,     0,     0,     0,     0,     0,
     0,  1528,     0,     0,     0,   854,     0,     0,     0,     0,
   854,     0,     0,     0,   854,     0,     0,     0,   854,     0,
     0,     0,   854,     0,     0,     0,   854,     0,     0,     0,
   854,     0,     0,     0,   854,     0,     0,     0,   854,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1174,  1174,  1174,  1174,  1174,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   923,
     0,  1174,     0,     0,     0,  1068,  1068,  1068,  1068,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1104,     0,     0,     0,     0,     0,  1104,  1104,
  1104,  1104,  1104,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   903,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1694,  1176,  1176,  1176,  1176,  1176,     0,     0,     0,
  1697,     0,     0,     0,     0,  1521,     0,     0,     0,  1698,
     0,  1176,     0,     0,     0,  1077,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1040,     0,     0,     0,     0,     0,
     0,  1725,     0,     0,     0,     0,     0,     0,  1730,     0,
     0,  1077,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1739,     0,     0,     0,  1747,     0,
  1752,     0,     0,  1757,  1763,  1768,  1773,  1778,  1783,  1788,
  1793,  1798,     0,     0,  1100,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1066,  1066,     0,     0,     0,     0,
     0,     0,     0,     0,  1066,  1066,  1066,  1066,  1066,  1066,
  1066,     0,     0,     0,  1077,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1066,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1102,  1174,     0,     0,
  1102,     0,  1102,     0,     0,  1102,  1102,  1102,  1102,  1102,
  1102,  1102,  1102,  1102,     0,     0,  1102,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1174,     0,     0,  1066,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1174,  1174,  1174,  1174,  1174,  1174,
  1174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1068,  1068,     0,     0,     0,     0,
     0,     0,     0,     0,  1068,  1068,  1068,  1068,  1068,  1068,
  1068,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1068,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1104,  1176,     0,     0,
  1104,     0,  1104,     0,     0,  1104,  1104,  1104,  1104,  1104,
  1104,  1104,  1104,  1104,     0,     0,  1104,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1077,  1077,  1077,     0,
     0,  1176,     0,     0,  1068,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1176,  1176,  1176,  1176,  1176,  1176,
  1176,     0,     0,     0,     0,     0,  1077,  1077,  1077,     0,
     0,     0,  1846,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  2009,     0,     0,     0,     0,   854,
     0,     0,     0,     0,     0,   854,     0,     0,     0,     0,
   854,     0,     0,     0,     0,   854,     0,     0,     0,     0,
   854,     0,     0,     0,     0,   854,     0,     0,     0,     0,
   854,     0,     0,     0,     0,   854,     0,     0,     0,     0,
   854,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2045,     0,     0,     0,     0,     0,     0,     0,
     0,  1518,     0,     0,     0,     0,     0,     0,  1077,  1077,
  1077,     0,     0,  1531,  1174,     0,  1102,     0,  1534,  1930,
     0,     0,  1537,     0,     0,     0,  1540,     0,     0,     0,
  1543,     0,     0,     0,  1546,     0,     0,     0,  1549,     0,
     0,     0,  1552,     0,     0,     0,  1555,     0,     0,   806,
   533,   807,   808,   809,   810,   538,   811,   812,   813,     0,
   814,     0,   815,   816,   817,   818,   819,   820,   821,   822,
   823,   824,   825,     0,   826,   827,   828,   829,   830,   831,
     0,   832,   833,   834,   835,   836,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1174,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   567,   568,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1521,     0,     0,
   205,   574,     0,     0,  1176,     0,  1104,   837,     0,     0,
     0,     0,     0,     0,     0,   578,     0,   579,     0,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,  1661,
     0,     0,   580,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   212,   213,     0,   581,     0,
   582,     0,     0,     0,     0,     0,   586,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
     0,     0,     0,     0,     0,     0,     0,   838,   839,     0,
     0,     0,     0,     0,     0,   592,  2059,  1176,     0,     0,
     0,     0,   594,     0,     0,     0,     0,     0,     0,   228,
     0,     0,  1728,     0,   840,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1174,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2240,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   596,  1930,     0,  1930,  1930,
  1930,  1930,  1930,     0,     0,     0,     0,     0,   283,   284,
     0,   285,     0,     0,    25,   598,    26,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1843,     0,
  1847,  1848,     0,  1850,  1851,  2169,  1853,  1854,     0,  1856,
  1857,     0,  1859,  1860,     0,  1862,  1863,     0,  1865,  1866,
     0,  1868,  1869,     0,  1871,  1872,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1176,     0,     0,
     0,     0,     0,  1846,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2234,     0,  1174,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1930,     0,     0,     0,     0,     0,     0,     0,
  1930,  2259,     0,     0,  1930,     0,  1930,     0,     0,  1930,
  1930,  1930,  1930,  1930,  1930,  1930,  1930,  1930,     0,  1930,
     0,     0,     0,     0,  2169,  2408,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1930,     0,
     0,     0,     0,     0,     0,     0,     0,  2169,  2169,  2169,
  2169,  2169,     0,  1518,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2013,     0,     0,
     0,     0,     0,  2016,     0,     0,     0,     0,  2019,  1176,
     0,     0,     0,  2022,     0,     0,     0,     0,  2025,     0,
     0,     0,     0,  2028,     0,     0,     0,     0,  2031,     0,
     0,     0,     0,  2034,     0,     0,     0,     0,  2037,     0,
     0,     0,     0,     0,     0,     0,  2041,     0,     0,     0,
  2043,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2259,     0,     0,     0,     0,
     0,  2259,     0,  1930,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2169,     0,     0,     0,     0,     0,     0,     0,
     0,  2169,  2169,  2169,  2169,  2169,  2169,  2169,  2169,  2169,
  2169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2259,     0,     0,     0,     0,
     0,     0,  2259,     0,  1930,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2259,     0,
  2259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2169,     0,     0,     0,     0,     0,     0,     0,     0,  1843,
     0,     0,  2196,  2197,     0,  2199,  2200,     0,  2202,  2203,
     0,  2205,  2206,     0,  2208,  2209,     0,  2211,  2212,     0,
  2214,  2215,     0,  2217,  2218,     0,  2220,  2221,     0,     0,
     0,     0,     0,  2225,     0,     0,     0,  2228,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   565,   566,   567,   568,     0,     0,   569,     0,     0,     0,
     0,     0,     0,   397,   570,   571,   572,   573,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,   576,   577,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,   583,   584,   585,   586,   215,     0,   216,   217,
     0,     0,     0,     0,   587,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,   588,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,   591,   592,     0,     0,     0,   593,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,   597,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,   599,  1238,     0,   601,   602,     0,   603,     0,     0,
     0,     0,     0,   604,  1239,   532,   533,   534,   535,   536,
   537,   538,   539,   540,   541,     0,   542,     0,   543,   544,
   545,   546,   547,   548,   549,   550,   551,   552,   553,     0,
   554,   555,   556,   557,   558,   559,     0,   560,   561,   562,
   563,   564,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   565,   566,   567,
   568,     0,     0,   569,     0,     0,     0,     0,     0,     0,
   397,   570,   571,   572,   573,     0,   205,   574,     0,     0,
     0,     0,     0,   575,     0,     0,     0,     0,     0,   576,
   577,   578,     0,   579,     0,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,   580,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,   581,     0,   582,   214,     0,   583,
   584,   585,   586,   215,     0,   216,   217,     0,     0,     0,
     0,   587,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,   588,     0,
     0,     0,     0,   589,   590,   226,   227,     0,     0,     0,
   591,   592,     0,     0,     0,   593,     0,     0,   594,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,   232,
   595,     0,   234,   235,   236,     0,   237,   238,     0,   239,
     0,     0,   240,   241,   242,   243,   244,     0,   245,   246,
   247,     0,     0,   248,   249,   250,   251,   252,   253,   254,
   255,   256,     0,     0,     0,     0,   257,     0,   258,   259,
   260,     0,   398,   261,   262,     0,   263,     0,   264,     0,
   265,   266,   267,   268,   269,     0,   270,   271,   272,   273,
   274,   596,   275,     0,   276,   277,   278,   279,   280,     0,
     0,   281,     0,   282,   283,   284,   597,   285,   286,     0,
    25,   598,    26,     0,     0,     0,     0,     0,   599,  1800,
     0,   601,   602,     0,   603,     0,     0,     0,     0,     0,
   604,  1801,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   565,   566,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,   570,   571,
   572,   573,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,   576,   577,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,   583,   584,   585,   586,
   215,     0,   216,   217,     0,     0,     0,     0,   587,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   588,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,   591,   592,     0,
     0,     0,   593,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,   597,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,   599,     0,     0,   601,   602,
     0,   603,     0,     0,     0,     0,     0,   604,  1716,   532,
   533,   534,   535,   536,   537,   538,   539,   540,   541,     0,
   542,     0,   543,   544,   545,   546,   547,   548,   549,   550,
   551,   552,   553,     0,   554,   555,   556,   557,   558,   559,
     0,   560,   561,   562,   563,   564,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   565,   566,   567,   568,     0,     0,   569,     0,     0,
     0,     0,     0,     0,   397,   570,   571,   572,   573,     0,
   205,   574,     0,     0,     0,     0,     0,   575,     0,     0,
     0,     0,     0,   576,   577,   578,     0,   579,     0,     0,
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,   580,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,   581,     0,
   582,   214,     0,   583,   584,   585,   586,   215,     0,   216,
   217,     0,     0,     0,     0,   587,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,   588,     0,     0,     0,     0,   589,   590,   226,
   227,     0,     0,     0,   591,   592,     0,     0,     0,   593,
     0,     0,   594,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,   232,   595,     0,   234,   235,   236,     0,
   237,   238,     0,   239,     0,     0,   240,   241,   242,   243,
   244,     0,   245,   246,   247,     0,     0,   248,   249,   250,
   251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
   257,     0,   258,   259,   260,     0,   398,   261,   262,     0,
   263,     0,   264,     0,   265,   266,   267,   268,   269,     0,
   270,   271,   272,   273,   274,   596,   275,     0,   276,   277,
   278,   279,   280,     0,     0,   281,     0,   282,   283,   284,
   597,   285,   286,     0,    25,   598,    26,     0,     0,     0,
     0,     0,   599,     0,     0,   601,   602,     0,   603,     0,
     0,     0,     0,     0,   604,  1838,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  2155,
   567,   568,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2156,  2157,  2158,  2159,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
     0,     0,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
     0,     0,     0,   586,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,     0,   592,     0,     0,     0,  2161,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,     0,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,  2162,   285,     0,
     0,    25,   598,    26,     0,     0,     0,     0,     0,  2163,
     0,     0,     0,  2164,     0,  2165,     0,     0,     0,     0,
     0,  2166,  2393,   532,   533,   534,   535,   536,   537,   538,
   539,   540,   541,     0,   542,     0,   543,   544,   545,   546,
   547,   548,   549,   550,   551,   552,   553,     0,   554,   555,
   556,   557,   558,   559,     0,   560,   561,   562,   563,   564,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1920,   567,   568,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,   574,     0,     0,     0,     0,
     0,   575,     0,     0,     0,     0,     0,     0,     0,   578,
     0,   579,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,   580,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,   581,     0,   582,   214,     0,  1921,     0,  1922,
   586,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   589,   590,   226,   227,     0,     0,     0,     0,   592,
     0,     0,     0,     0,     0,     0,   594,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,   232,   595,     0,
   234,   235,   236,     0,   237,   238,     0,   239,     0,     0,
   240,   241,   242,   243,   244,     0,   245,   246,   247,     0,
     0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     0,     0,     0,     0,   257,     0,   258,   259,   260,     0,
     0,   261,   262,     0,   263,     0,   264,     0,   265,   266,
   267,   268,   269,     0,   270,   271,   272,   273,   274,   596,
   275,     0,   276,   277,   278,   279,   280,     0,     0,   281,
     0,   282,   283,   284,  1923,   285,     0,     0,    25,   598,
    26,     0,     0,     0,     0,     0,  1924,     0,     0,     0,
  1925,     0,  1926,     0,     0,     0,     0,     0,  1927,  2279,
   172,     0,   173,   174,   175,   176,     0,   177,   178,   179,
     0,   180,     0,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,   191,     0,   192,   193,   194,   195,   196,
   197,     0,   198,   199,   200,   201,   202,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   567,   568,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,   983,     0,     0,     0,     0,     0,   984,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,     0,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,     0,     0,     0,   986,   215,     0,
   216,   217,     0,     0,     0,     0,     0,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,     0,     0,     0,     0,     0,   224,   225,
   226,   227,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   233,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,     0,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,     0,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
     0,     0,   285,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,   987,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1073,     0,     0,   565,   566,   567,   568,
     0,     0,   569,     0,     0,     0,     0,     0,     0,   397,
   570,   571,   572,   573,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,   576,   577,
   578,     0,   579,     0,     0,  1074,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,  1075,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,   583,   584,
   585,   586,   215,     0,   216,   217,     0,     0,     0,     0,
   587,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,   588,     0,     0,
     0,     0,   589,   590,   226,   227,     0,  1076,     0,   591,
   592,     0,     0,     0,   593,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,   597,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,   599,     0,     0,
   601,   602,     0,   603,     0,     0,     0,     0,     0,   604,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1703,
     0,     0,   565,   566,   567,   568,     0,     0,   569,     0,
     0,     0,     0,     0,     0,   397,   570,   571,   572,   573,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,   576,   577,   578,     0,   579,     0,
     0,  1074,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
  1704,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,   583,   584,   585,   586,   215,     0,
   216,   217,     0,     0,     0,     0,   587,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,   588,     0,     0,     0,     0,   589,   590,
   226,   227,     0,  1705,     0,   591,   592,     0,     0,     0,
   593,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,   597,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,   599,     0,     0,   601,   602,     0,   603,
     0,     0,     0,     0,     0,   604,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1733,     0,     0,   565,   566,
   567,   568,     0,     0,   569,     0,     0,     0,     0,     0,
     0,   397,   570,   571,   572,   573,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
   576,   577,   578,     0,   579,     0,     0,  1074,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,  1734,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
   583,   584,   585,   586,   215,     0,   216,   217,     0,     0,
     0,     0,   587,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,   588,
     0,     0,     0,     0,   589,   590,   226,   227,     0,  1735,
     0,   591,   592,     0,     0,     0,   593,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,   597,   285,   286,
     0,    25,   598,    26,     0,     0,     0,     0,     0,   599,
     0,     0,   601,   602,     0,   603,     0,     0,     0,     0,
     0,   604,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1825,     0,     0,   565,   566,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,   570,   571,
   572,   573,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,   576,   577,   578,     0,
   579,     0,     0,  1074,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,  1826,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,   583,   584,   585,   586,
   215,     0,   216,   217,     0,     0,     0,     0,   587,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   588,     0,     0,     0,     0,
   589,   590,   226,   227,     0,  1827,     0,   591,   592,     0,
     0,     0,   593,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,   597,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,   599,     0,     0,   601,   602,
     0,   603,     0,     0,     0,     0,     0,   604,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,  1194,
     0,     0,  1195,     0,     0,     0,     0,     0,     0,     0,
   565,   566,   567,   568,     0,     0,   569,     0,     0,     0,
     0,     0,     0,   397,   570,   571,   572,   573,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,   576,   577,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,   583,   584,  1196,   586,   215,     0,   216,   217,
     0,     0,     0,     0,   587,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,   588,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,   591,   592,     0,     0,     0,   593,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,   597,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,   599,     0,     0,   601,   602,     0,   603,     0,     0,
     0,     0,     0,  1197,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,  1199,     0,     0,  1200,     0,
     0,     0,     0,     0,     0,     0,   565,   566,   567,   568,
     0,     0,   569,     0,     0,     0,     0,     0,     0,   397,
   570,   571,   572,   573,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,   576,   577,
   578,     0,   579,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,   583,   584,
   795,   586,   215,     0,   216,   217,     0,     0,     0,     0,
   587,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,   588,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,   591,
   592,     0,     0,     0,   593,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,   597,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,   599,     0,     0,
   601,   602,     0,   603,     0,     0,     0,     0,     0,  1201,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,  1203,     0,     0,  1204,     0,     0,     0,     0,     0,
     0,     0,   565,   566,   567,   568,     0,     0,   569,     0,
     0,     0,     0,     0,     0,   397,   570,   571,   572,   573,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,   576,   577,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,   583,   584,   795,   586,   215,     0,
   216,   217,     0,     0,     0,     0,   587,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,   588,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,   591,   592,     0,     0,     0,
   593,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,   597,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,   599,     0,     0,   601,   602,     0,   603,
     0,     0,     0,     0,     0,  1205,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,  1207,     0,     0,
  1208,     0,     0,     0,     0,     0,     0,     0,   565,   566,
   567,   568,     0,     0,   569,     0,     0,     0,     0,     0,
     0,   397,   570,   571,   572,   573,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
   576,   577,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
   583,   584,   795,   586,   215,     0,   216,   217,     0,     0,
     0,     0,   587,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,   588,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,   591,   592,     0,     0,     0,   593,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,   597,   285,   286,
     0,    25,   598,    26,     0,     0,     0,     0,     0,   599,
     0,     0,   601,   602,     0,   603,     0,     0,     0,     0,
     0,  1209,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1211,     0,     0,  1212,     0,     0,     0,
     0,     0,     0,     0,   565,   566,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,   570,   571,
   572,   573,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,   576,   577,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,   583,   584,   795,   586,
   215,     0,   216,   217,     0,     0,     0,     0,   587,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   588,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,   591,   592,     0,
     0,     0,   593,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,   597,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,   599,     0,     0,   601,   602,
     0,   603,     0,     0,     0,     0,     0,  1213,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,  1215,
     0,     0,  1216,     0,     0,     0,     0,     0,     0,     0,
   565,   566,   567,   568,     0,     0,   569,     0,     0,     0,
     0,     0,     0,   397,   570,   571,   572,   573,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,   576,   577,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,   583,   584,   795,   586,   215,     0,   216,   217,
     0,     0,     0,     0,   587,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,   588,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,   591,   592,     0,     0,     0,   593,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,   597,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,   599,     0,     0,   601,   602,     0,   603,     0,     0,
     0,     0,     0,  1217,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,  1219,     0,     0,  1220,     0,
     0,     0,     0,     0,     0,     0,   565,   566,   567,   568,
     0,     0,   569,     0,     0,     0,     0,     0,     0,   397,
   570,   571,   572,   573,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,   576,   577,
   578,     0,   579,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,   583,   584,
   795,   586,   215,     0,   216,   217,     0,     0,     0,     0,
   587,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,   588,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,   591,
   592,     0,     0,     0,   593,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,   597,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,   599,     0,     0,
   601,   602,     0,   603,     0,     0,     0,     0,     0,  1221,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,  1754,     0,     0,  1755,     0,     0,     0,     0,     0,
     0,     0,   565,  1080,   567,   568,     0,     0,   569,     0,
     0,     0,     0,     0,     0,   397,  1081,  1082,  1083,  1084,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,  1085,  1086,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,     0,   584,  1088,   586,   215,     0,
   216,   217,     0,     0,     0,     0,  1089,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,  1090,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,  1091,   592,     0,     0,     0,
  1092,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,     0,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,  1094,     0,     0,  1095,  1096, -1285,  1097,
     0,     0,     0, -1285,     0,  1756,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,  1759,     0,     0,
  1760,     0,     0,     0,     0,     0,     0,     0,   565,  1080,
   567,   568,     0,     0,   569,     0,     0,     0,     0,     0,
     0,   397,  1081,  1082,  1083,  1084,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
  1085,  1086,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
  1087,   584,  1761,   586,   215,     0,   216,   217,     0,     0,
     0,     0,  1089,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,  1090,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,  1091,   592,     0,     0,     0,  1092,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,  1093,   285,   286,
     0,    25,   598,    26,     0,     0,     0,     0,     0,  1094,
     0,     0,  1095,  1096,     0,  1097,     0,     0,     0,     0,
     0,  1762,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1765,     0,     0,  1766,     0,     0,     0,
     0,     0,     0,     0,   565,  1080,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,  1081,  1082,
  1083,  1084,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,  1085,  1086,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,  1087,   584,  1088,   586,
   215,     0,   216,   217,     0,     0,     0,     0,  1089,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,  1090,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,  1091,   592,     0,
     0,     0,  1092,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,  1093,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,  1094,     0,     0,  1095,  1096,
     0,  1097,     0,     0,     0,     0,     0,  1767,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,  1770,
     0,     0,  1771,     0,     0,     0,     0,     0,     0,     0,
   565,  1080,   567,   568,     0,     0,   569,     0,     0,     0,
     0,     0,     0,   397,  1081,  1082,  1083,  1084,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,  1085,  1086,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,  1087,   584,  1088,   586,   215,     0,   216,   217,
     0,     0,     0,     0,  1089,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,  1090,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,  1091,   592,     0,     0,     0,  1092,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,  1093,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,  1094,     0,     0,  1095,  1096,     0,  1097,     0,     0,
     0,     0,     0,  1772,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,  1775,     0,     0,  1776,     0,
     0,     0,     0,     0,     0,     0,   565,  1080,   567,   568,
     0,     0,   569,     0,     0,     0,     0,     0,     0,   397,
  1081,  1082,  1083,  1084,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,  1085,  1086,
   578,     0,   579,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,  1087,   584,
  1088,   586,   215,     0,   216,   217,     0,     0,     0,     0,
  1089,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,  1090,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,  1091,
   592,     0,     0,     0,  1092,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,  1093,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,  1094,     0,     0,
  1095,  1096,     0,  1097,     0,     0,     0,     0,     0,  1777,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,  1780,     0,     0,  1781,     0,     0,     0,     0,     0,
     0,     0,   565,  1080,   567,   568,     0,     0,   569,     0,
     0,     0,     0,     0,     0,   397,  1081,  1082,  1083,  1084,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,  1085,  1086,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,  1087,   584,  1088,   586,   215,     0,
   216,   217,     0,     0,     0,     0,  1089,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,  1090,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,  1091,   592,     0,     0,     0,
  1092,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,  1093,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,  1094,     0,     0,  1095,  1096,     0,  1097,
     0,     0,     0,     0,     0,  1782,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,  1785,     0,     0,
  1786,     0,     0,     0,     0,     0,     0,     0,   565,  1080,
   567,   568,     0,     0,   569,     0,     0,     0,     0,     0,
     0,   397,  1081,  1082,  1083,  1084,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
  1085,  1086,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
  1087,   584,  1088,   586,   215,     0,   216,   217,     0,     0,
     0,     0,  1089,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,  1090,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,  1091,   592,     0,     0,     0,  1092,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,  1093,   285,   286,
     0,    25,   598,    26,     0,     0,     0,     0,     0,  1094,
     0,     0,  1095,  1096,     0,  1097,     0,     0,     0,     0,
     0,  1787,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1790,     0,     0,  1791,     0,     0,     0,
     0,     0,     0,     0,   565,  1080,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,  1081,  1082,
  1083,  1084,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,  1085,  1086,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,  1087,   584,  1088,   586,
   215,     0,   216,   217,     0,     0,     0,     0,  1089,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,  1090,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,  1091,   592,     0,
     0,     0,  1092,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,  1093,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,  1094,     0,     0,  1095,  1096,
     0,  1097,     0,     0,     0,     0,     0,  1792,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   565,   566,   567,   568,     0,     0,   569,     0,     0,     0,
     0,     0,     0,   397,   570,   571,   572,   573,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,   576,   577,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,   583,   584,   585,   586,   215,     0,   216,   217,
     0,     0,     0,     0,   587,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,   588,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,   591,   592,     0,     0,     0,   593,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,   597,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,   599,   600,     0,   601,   602,     0,   603,     0,     0,
     0,     0,     0,   604,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   565,   566,   567,   568,
     0,     0,   569,     0,     0,     0,     0,     0,     0,   397,
   570,   571,   572,   573,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,   576,   577,
   578,     0,   579,     0,     0,  1074,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,   583,   584,
   585,   586,   215,     0,   216,   217,     0,     0,     0,     0,
   587,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,   588,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,   591,
   592,     0,     0,     0,   593,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,   597,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,   599,     0,     0,
   601,   602,     0,   603,     0,     0,     0,     0,     0,   604,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   565,   566,   567,   568,     0,     0,   569,     0,
     0,     0,     0,     0,     0,   397,   570,   571,   572,   573,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,   576,   577,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,   583,   584,   585,   586,   215,     0,
   216,   217,     0,     0,     0,     0,   587,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,    77,     0,   588,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,   591,   592,     0,     0,     0,
   593,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,   597,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,   599,     0,     0,   601,   602,     0,   603,
     0,     0,     0,     0,     0,   604,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   565,   566,
   567,   568,     0,     0,   569,     0,     0,     0,     0,     0,
     0,   397,   570,   571,   572,   573,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
   576,   577,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
   583,   584,   795,   586,   215,     0,   216,   217,     0,     0,
     0,     0,   587,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,    77,     0,   588,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,   591,   592,     0,     0,     0,   593,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,   597,   285,   286,
     0,    25,   598,    26,     0,     0,     0,     0,     0,   599,
     0,     0,   601,   602,     0,   603,     0,     0,     0,     0,
     0,   604,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   565,   566,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,   570,   571,
   572,   573,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,   576,   577,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,   583,   584,   795,   586,
   215,     0,   216,   217,     0,     0,     0,     0,   587,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   588,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,   591,   592,     0,
     0,     0,   593,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,   597,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,   599,     0,     0,   601,   602,
     0,   603,     0,     0,     0,     0,     0,   604,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   565,   566,   567,   568,     0,     0,   569,     0,     0,     0,
     0,     0,     0,   397,   570,   571,   572,   573,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,   576,   577,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,   583,   584,   585,   586,   215,     0,   216,   217,
     0,     0,     0,     0,   587,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,   588,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,   591,   592,     0,     0,     0,   593,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,   597,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,   599,     0,     0,   601,   602,     0,   603,     0,     0,
     0,     0,     0,   604,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   565,  1080,   567,   568,
     0,     0,   569,     0,     0,     0,     0,     0,     0,   397,
  1081,  1082,  1083,  1084,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,  1085,  1086,
   578,     0,   579,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,  1087,   584,
  1088,   586,   215,     0,   216,   217,     0,     0,     0,     0,
  1089,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,  1090,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,  1091,
   592,     0,     0,     0,  1092,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,  1093,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,  1094,     0,     0,
  1095,  1096,     0,  1097,     0,     0,     0,     0,     0,  1098,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,  1190,     0,     0,  1191,     0,     0,     0,     0,     0,
     0,     0,   565,   566,   567,   568,     0,     0,   569,     0,
     0,     0,     0,     0,     0,   397,   570,   571,   572,   573,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,   576,   577,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,     0,   584,   795,   586,   215,     0,
   216,   217,     0,     0,     0,     0,   587,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,   588,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,   591,   592,     0,     0,     0,
   593,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,     0,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,   599,     0,     0,   601,   602,     0,   603,
     0,     0,     0,     0,     0,  1192,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,  1795,     0,     0,
  1796,     0,     0,     0,     0,     0,     0,     0,   565,  1080,
   567,   568,     0,     0,   569,     0,     0,     0,     0,     0,
     0,   397,  1081,  1082,  1083,  1084,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
  1085,  1086,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
     0,   584,  1088,   586,   215,     0,   216,   217,     0,     0,
     0,     0,  1089,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,  1090,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,  1091,   592,     0,     0,     0,  1092,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,     0,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,     0,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,     0,   285,   286,
     0,    25,   598,    26,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1096, -1265,  1097,     0,     0,     0, -1265,
     0,  1797,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,  1223,     0,     0,  1224,     0,     0,     0,
     0,     0,     0,     0,   565,   566,   567,   568,     0,     0,
   569,     0,     0,     0,     0,     0,     0,   397,   570,   571,
   572,   573,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,   576,   577,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,     0,   584,   795,   586,
   215,     0,   216,   217,     0,     0,     0,     0,   587,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,   588,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,   591,   592,     0,
     0,     0,   593,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,     0,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,   398,
   261,   262,     0,   263,     0,     0,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,     0,   285,   286,     0,    25,   598,    26,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   602,
     0,   603,     0,     0,     0,     0,     0,  1225,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1158,   567,   568,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   397,  1159,  1160,  1161,  1162,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,     0,     0,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,     0,     0,     0,   586,   215,     0,   216,   217,
     0,     0,     0,     0,  1163,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,  1164,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,  1165,   592,     0,     0,     0,  1166,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,  1167,
   285,   286,     0,    25,   598,    26,     0,     0,     0,     0,
     0,  1168,     0,     0,  1169,  1170,     0,  1171,     0,     0,
     0,     0,     0,  1172,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1158,   567,   568,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   397,
  1159,  1160,  1161,  1162,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,     0,     0,
   578,     0,   579,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,     0,     0,
     0,   586,   215,     0,   216,   217,     0,     0,     0,     0,
  1163,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,  1164,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,  1165,
   592,     0,     0,     0,  1166,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,   398,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,     0,   285,   286,     0,    25,
   598,    26,     0,     0,     0,     0,     0,  1168,     0,     0,
  1169,  1170,     0,  1171,     0,     0,     0,     0,     0,  1172,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1158,   567,   568,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   397,  1159,  1160,  1161,  1162,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,     0,     0,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,     0,     0,     0,   586,   215,     0,
   216,   217,     0,     0,     0,     0,  1163,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,  1164,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,  1165,   592,     0,     0,     0,
  1166,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,     0,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,     0,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,     0,   285,   286,     0,    25,   598,    26,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1170,     0,  1171,
     0,     0,     0,     0,     0,  1172,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  2155,
   567,   568,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  2156,  2157,  2158,  2159,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
     0,     0,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
     0,     0,  2160,   586,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,     0,   592,     0,     0,     0,  2161,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,     0,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,  2162,   285,     0,
     0,    25,   598,    26,     0,     0,     0,     0,     0,  2163,
     0,     0,     0,  2164,     0,  2165,     0,     0,     0,     0,
     0,  2166,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  2155,   567,   568,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2156,  2157,
  2158,  2159,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,     0,     0,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,     0,     0,     0,   586,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,     0,   592,     0,
     0,     0,  2161,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,     0,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,  2162,   285,     0,     0,    25,   598,    26,
     0,     0,     0,     0,     0,  2163,     0,     0,     0,  2164,
     0,  2165,     0,     0,     0,     0,     0,  2166,   532,   533,
   534,   535,   536,   537,   538,   539,   540,   541,     0,   542,
     0,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,     0,   554,   555,   556,   557,   558,   559,     0,
   560,   561,   562,   563,   564,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1056,   567,   568,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   397,     0,     0,     0,     0,     0,   205,
   574,     0,     0,     0,     0,     0,   575,     0,     0,     0,
     0,     0,     0,     0,   578,     0,   579,     0,     0,     0,
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,   580,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,   581,     0,   582,
   214,     0,     0,     0,     0,   586,   215,     0,   216,   217,
     0,     0,     0,     0,  1057,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,  1058,     0,     0,     0,     0,   589,   590,   226,   227,
     0,     0,     0,  1059,   592,     0,     0,     0,     0,     0,
     0,   594,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   595,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,   596,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,  1060,
   285,     0,     0,    25,   598,    26,     0,     0,     0,     0,
     0,  1061,     0,     0,     0,  1062,     0,     0,     0,     0,
     0,     0,     0,  1063,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,   542,     0,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,     0,   554,
   555,   556,   557,   558,   559,     0,   560,   561,   562,   563,
   564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2155,   567,   568,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2156,  2157,  2158,  2159,     0,   205,   574,     0,     0,     0,
     0,     0,   575,     0,     0,     0,     0,     0,     0,     0,
   578,     0,   579,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,   580,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,   581,     0,   582,   214,     0,     0,     0,
     0,   586,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   589,   590,   226,   227,     0,     0,     0,     0,
   592,     0,     0,     0,  2161,     0,     0,   594,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   595,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,     0,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
   596,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,     0,   285,     0,     0,    25,
   598,    26,     0,     0,     0,     0,     0,  2163,     0,     0,
     0,  2164,     0,  2165,     0,     0,     0,     0,     0,  2166,
   532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     0,   542,     0,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,     0,   554,   555,   556,   557,   558,
   559,     0,   560,   561,   562,   563,   564,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1056,   567,   568,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   397,     0,     0,     0,     0,
     0,   205,   574,     0,     0,     0,     0,     0,   575,     0,
     0,     0,     0,     0,     0,     0,   578,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,   580,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,   581,
     0,   582,   214,     0,     0,     0,     0,   586,   215,     0,
   216,   217,     0,     0,     0,     0,  1057,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,  1058,     0,     0,     0,     0,   589,   590,
   226,   227,     0,     0,     0,  1059,   592,     0,     0,     0,
     0,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   595,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,   398,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,   596,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,     0,   285,     0,     0,    25,   598,    26,     0,     0,
     0,     0,     0,  1061,     0,     0,     0,  1062,     0,     0,
     0,     0,     0,     0,     0,  1063,   532,   533,   534,   535,
   536,   537,   538,   539,   540,   541,     0,   542,     0,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     0,   554,   555,   556,   557,   558,   559,     0,   560,   561,
   562,   563,   564,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1920,
   567,   568,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   205,   574,     0,
     0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
     0,     0,   578,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,   208,     0,     0,   580,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,   581,     0,   582,   214,     0,
  1921,     0,  1922,   586,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   589,   590,   226,   227,     0,     0,
     0,     0,   592,     0,     0,     0,     0,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   595,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,     0,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,   596,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,  1923,   285,     0,
     0,    25,   598,    26,     0,     0,     0,     0,     0,  1924,
     0,     0,     0,  1925,     0,  1926,     0,     0,     0,     0,
     0,  1927,   532,   533,   534,   535,   536,   537,   538,   539,
   540,   541,     0,   542,     0,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,     0,   554,   555,   556,
   557,   558,   559,     0,   560,   561,   562,   563,   564,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1920,   567,   568,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,   574,     0,     0,     0,     0,     0,
   575,     0,     0,     0,     0,     0,     0,     0,   578,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,   580,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,   581,     0,   582,   214,     0,     0,     0,  1922,   586,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   589,   590,   226,   227,     0,     0,     0,     0,   592,     0,
     0,     0,     0,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   595,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,     0,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,   596,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,     0,   285,     0,     0,    25,   598,    26,
     0,     0,     0,     0,     0,  1924,     0,     0,     0,  1925,
     0,  1926,     0,     0,     0,     0,   172,  1927,   173,   174,
   175,   176,     0,   177,   178,   179,     0,   180,     0,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     0,   192,   193,   194,   195,   196,   197,     0,   198,   199,
   200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   397,     0,     0,     0,     0,     0,   205,     0,     0,
     0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
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
   232,   233,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,   398,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,     0,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,     0,   172,   285,   173,
   174,   175,   176,     0,   177,   178,   179,     0,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,  1559,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
     0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,    77,     0,
     0,     0,     0,     0,     0,   224,   225,   226,   227,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,   232,   233,     0,   234,   235,   236,     0,   237,   238,
     0,   239,     0,     0,   240,   241,   242,   243,   244,     0,
   245,   246,   247,     0,     0,   248,   249,   250,   251,   252,
   253,   254,   255,   256,     0,     0,     0,     0,   257,     0,
   258,   259,   260,     0,     0,   261,   262,     0,   263,     0,
   264,     0,   265,   266,   267,   268,   269,     0,   270,   271,
   272,   273,   274,     0,   275,     0,   276,   277,   278,   279,
   280,     0,     0,   281,     0,   282,   283,     0,   172,   285,
   173,   174,   175,   176,     0,   177,   178,   179,     0,   180,
     0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,    95,   192,   193,   194,   195,   196,   197,     0,
   198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
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
   230,   231,   232,   233,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,     0,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,  1663,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,   284,   510,
   285,     0,     0,    25,     0,    26,     0,   483,   484,   485,
   486,  1664,   488,   489,   490,   172,     0,   173,   174,   175,
   176,     0,   177,   178,   179,     0,   180,     0,   181,   182,
   183,   184,   185,   186,   187,   188,   189,   190,   191,     0,
   192,   193,   194,   195,   196,   197,     0,   198,   199,   200,
   201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   205,     0,     0,  1005,
     0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,   480,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
     0,     0,     0,   215,     0,   216,   217,     0,     0,     0,
     0,     0,     0,     0,   218,   219,   481,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,     0,
     0,     0,     0,   224,   225,   226,   227,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,   232,
   233,     0,   234,   235,   236,     0,   237,   238,     0,   239,
     0,     0,   240,   241,   242,   243,   244,     0,   245,   246,
   247,     0,     0,   248,   249,   250,   251,   252,   253,   254,
   255,   256,     0,     0,     0,     0,   257,     0,   258,   259,
   260,     0,     0,   261,   262,     0,   263,     0,   264,     0,
   265,   266,   267,   268,   269,     0,   270,   271,   272,   273,
   274,     0,   275,     0,   276,   277,   278,   279,   280,     0,
     0,   281,     0,   282,   283,     0,   482,   285,     0,     0,
     0,     0,     0,     0,   483,   484,   485,   486,   487,   488,
   489,   490,   172,     0,   173,   174,   175,   176,     0,   177,
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
     0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,   480,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,   481,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   224,   225,   226,   227,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   233,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,     0,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,     0,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,     0,   482,   285,     0,     0,     0,     0,     0,
     0,   483,   484,   485,   486,   487,   488,   489,   490,   172,
     0,   173,   174,   175,   176,     0,   177,   178,   179,     0,
   180,     0,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,     0,   192,   193,   194,   195,   196,   197,
     0,   198,   199,   200,   201,   202,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
   205,     0,     0,     0,     0,     0,     0,   206,     0,     0,
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
   229,   230,   231,   232,   233,     0,   234,   235,   236,     0,
   237,   238,     0,   239,     0,     0,   240,   241,   242,   243,
   244,     0,   245,   246,   247,     0,     0,   248,   249,   250,
   251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
   257,     0,   258,   259,   260,     0,   398,   261,   262,     0,
   263,     0,   264,     0,   265,   266,   267,   268,   269,     0,
   270,   271,   272,   273,   274,     0,   275,     0,   276,   277,
   278,   279,   280,     0,     0,   281,     0,   282,   283,     0,
     0,   285,     0,     0,     0,   598,     0,   172,     0,   173,
   174,   175,   176,   902,   177,   178,   179,     0,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,     0,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   397,     0,     0,     0,     0,     0,   205,     0,
     0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
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
   231,   232,   233,     0,   234,   235,   236,     0,   237,   238,
     0,   239,     0,     0,   240,   241,   242,   243,   244,     0,
   245,   246,   247,     0,     0,   248,   249,   250,   251,   252,
   253,   254,   255,   256,     0,     0,     0,     0,   257,     0,
   258,   259,   260,     0,   398,   261,   262,     0,   263,     0,
   264,     0,   265,   266,   267,   268,   269,     0,   270,   271,
   272,   273,   274,     0,   275,     0,   276,   277,   278,   279,
   280,     0,     0,   281,     0,   282,   283,     0,     0,   285,
     0,   172,     0,   173,   174,   175,   176,     0,   177,   178,
   179,   412,   180,     0,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,     0,   192,   193,   194,   195,
   196,   197,     0,   198,   199,   200,   201,   202,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
   204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   205,     0,     0,     0,     0,     0,     0,   206,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,     0,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   224,
   225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   231,   232,   233,     0,   234,   235,
   236,     0,   237,   238,     0,   239,     0,     0,   240,   241,
   242,   243,   244,     0,   245,   246,   247,     0,     0,   248,
   249,   250,   251,   252,   253,   254,   255,   256,     0,     0,
     0,     0,   257,     0,   258,   259,   260,     0,     0,   261,
   262,     0,   263,     0,   264,     0,   265,   266,   267,   268,
   269,     0,   270,   271,   272,   273,   274,     0,   275,     0,
   276,   277,   278,   279,   280,     0,     0,   281,     0,   282,
   283,     0,     0,   285,     0,   172,     0,   173,   174,   175,
   176,     0,   177,   178,   179,   748,   180,     0,   181,   182,
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
     0,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
     0,     0,     0,   215,     0,   216,   217,     0,     0,     0,
     0,     0,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,     0,
     0,     0,     0,   224,   225,   226,   227,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,   232,
   233,     0,   234,   235,   236,     0,   237,   238,     0,   239,
     0,     0,   240,   241,   242,   243,   244,     0,   245,   246,
   247,     0,     0,   248,   249,   250,   251,   252,   253,   254,
   255,   256,     0,     0,     0,     0,   257,     0,   258,   259,
   260,     0,     0,   261,   262,     0,   263,     0,   264,     0,
   265,   266,   267,   268,   269,     0,   270,   271,   272,   273,
   274,     0,   275,     0,   276,   277,   278,   279,   280,     0,
     0,   281,     0,   282,   283,     0,     0,   285,     0,   172,
     0,   173,   174,   175,   176,     0,   177,   178,   179,  1234,
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
     0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     0,     0,     0,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,     0,     0,
     0,   214,     0,     0,     0,     0,     0,   215,     0,   216,
   217,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,     0,     0,     0,     0,     0,   224,   225,   226,
   227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,   232,   233,     0,   234,   235,   236,     0,
   237,   238,     0,   239,     0,     0,   240,   241,   242,   243,
   244,     0,   245,   246,   247,     0,     0,   248,   249,   250,
   251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
   257,     0,   258,   259,   260,     0,     0,   261,   262,     0,
   263,     0,   264,     0,   265,   266,   267,   268,   269,     0,
   270,   271,   272,   273,   274,     0,   275,     0,   276,   277,
   278,   279,   280,     0,     0,   281,     0,   282,   283,     0,
     0,   285,     0,   172,     0,   173,   174,   175,   176,     0,
   177,   178,   179,  1573,   180,     0,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   191,     0,   192,   193,
   194,   195,   196,   197,     0,   198,   199,   200,   201,   202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
     0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     0,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,   232,   233,     0,
   234,   235,   236,     0,   237,   238,     0,   239,     0,     0,
   240,   241,   242,   243,   244,     0,   245,   246,   247,     0,
     0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     0,     0,     0,     0,   257,     0,   258,   259,   260,     0,
     0,   261,   262,     0,   263,     0,   264,     0,   265,   266,
   267,   268,   269,     0,   270,   271,   272,   273,   274,     0,
   275,     0,   276,   277,   278,   279,   280,     0,     0,   281,
     0,   282,   283,     0,     0,   285,     0,   172,     0,   173,
   174,   175,   176,     0,   177,   178,   179,  1895,   180,     0,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,     0,   192,   193,   194,   195,   196,   197,     0,   198,
   199,   200,   201,   202,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   397,     0,     0,     0,     0,     0,   205,     0,
     0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
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
   231,   232,   233,     0,   234,   235,   236,     0,   237,   238,
     0,   239,     0,     0,   240,   241,   242,   243,   244,     0,
   245,   246,   247,     0,     0,   248,   249,   250,   251,   252,
   253,   254,   255,   256,     0,     0,     0,     0,   257,     0,
   258,   259,   260,     0,   398,   261,   262,     0,   263,     0,
   264,     0,   265,   266,   267,   268,   269,     0,   270,   271,
   272,   273,   274,     0,   275,     0,   276,   277,   278,   279,
   280,     0,     0,   281,     0,   282,   283,     0,     0,   285,
     0,     0,   172,   598,   173,   174,   175,   176,     0,   177,
   178,   179,     0,   180,     0,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     0,   192,   193,   194,
   195,   196,   197,     0,   198,   199,   200,   201,   202,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,   304,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   305,     0,     0,
     0,     0,     0,   205,     0,     0,   306,     0,     0,     0,
   206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   224,   225,   226,   227,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   233,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,     0,
   261,   262,     0,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,     0,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,   284,     0,   285,   286,   172,     0,   173,   174,
   175,   176,     0,   177,   178,   179,     0,   180,     0,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     0,   192,   193,   194,   195,   196,   197,     0,   198,   199,
   200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
   446,     0,     0,     0,   206,     0,     0,     0,     0,     0,
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
   232,   233,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,     0,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,     0,   275,     0,   276,   277,   278,   279,   280,
     0,     0,   281,     0,   282,   283,   284,     0,   285,   286,
   172,     0,   173,   174,   175,   176,     0,   177,   178,   179,
     0,   180,     0,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,   191,     0,   192,   193,   194,   195,   196,
   197,     0,   198,   199,   200,   201,   202,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,     0,     0,   306,     0,     0,     0,   206,     0,
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
   228,   229,   230,   231,   232,   233,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,     0,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,     0,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
   284,     0,   285,   286,   172,     0,   173,   174,   175,   176,
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
     0,   207,     0,     0,   208,     0,     0,     0,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,     0,     0,     0,   214,     0,     0,     0,
     0,     0,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   224,   225,   226,   227,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   233,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,     0,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
     0,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,   284,     0,   285,   286,   172,     0,
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
     0,     0,     0,     0,     0,   207,     0,     0,   208,     0,
     0,     0,     0,     0,     0,     0,   209,   210,     0,     0,
     0,     0,     0,   211,   212,   213,     0,     0,     0,     0,
   214,     0,     0,     0,     0,     0,   215,     0,   216,   217,
     0,     0,     0,     0,     0,     0,     0,   218,   219,     0,
     0,   220,     0,   221,     0,     0,     0,   222,   223,     0,
     0,     0,     0,     0,     0,     0,   224,   225,   226,   227,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   228,   229,
   230,   231,   232,   233,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,     0,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,     0,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,     0,     0,
   285,   286,   172,     0,   173,   174,   175,   176,     0,   177,
   178,   179,     0,   180,     0,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     0,   192,   193,   194,
   195,   196,   197,     0,   198,   199,   200,   201,   202,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1117,     0,     0,     0,     0,     0,
  1118,     0,     0,     0,  1119,     0,     0,  1120,     0,     0,
     0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
   206,     0,  1121,  1122,     0,     0,     0,     0,  1123,     0,
     0,     0,  1124,     0,     0,     0,     0,  1125,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,     0,     0,     0,   214,     0,     0,  1126,     0,     0,
   215,     0,   216,   217,     0,  1127,     0,     0,  1128,  1129,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,  1130,     0,     0,  1131,
   224,   225,   226,   227,     0,     0,  1132,     0,  1133,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1134,     0,
     0,     0,   228,   229,   230,   231,   232,   233,  1135,   234,
   235,   236,  1136,   237,   238,  1137,   239,  1138,  1139,   240,
   241,   242,   243,   244,  1140,   245,   246,   247,  1141,  1142,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
  1143,     0,  1144,   257,  1145,   258,   259,   260,  1146,  1147,
   261,   262,  1148,   263,     0,   264,     0,   265,   266,   267,
   268,   269,  1149,   270,   271,   272,   273,   274,  1150,   275,
  1151,   276,   277,   278,   279,   280,     0,  1152,   281,  1153,
   282,   283,     0,   172,   285,   173,   174,   175,   176,     0,
   177,   178,   179,     0,   180,     0,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   191,     0,   192,   193,
   194,   195,   196,   197,     0,   198,   199,   200,   201,   202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   567,   568,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,   983,     0,     0,     0,     0,
     0,   984,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   985,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,   581,     0,   582,   214,     0,     0,     0,     0,
   986,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   594,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,   232,   233,     0,
   234,   235,   236,     0,   237,   238,     0,   239,     0,     0,
   240,   241,   242,   243,   244,     0,   245,   246,   247,     0,
     0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     0,     0,     0,     0,   257,     0,   258,   259,   260,     0,
     0,   261,   262,     0,   263,     0,   264,     0,   265,   266,
   267,   268,   269,     0,   270,   271,   272,   273,   274,     0,
   275,     0,   276,   277,   278,   279,   280,     0,     0,   281,
     0,   282,   283,     0,   172,   285,   173,   174,   175,   176,
     0,   177,   178,   179,     0,   180,     0,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,     0,   192,
   193,   194,   195,   196,   197,     0,   198,   199,   200,   201,
   202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1304,     0,     0,     0,     0,     0,  1339,     0,     0,     0,
     0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1306,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,     0,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,     0,     0,     0,   214,     0,     0,     0,
     0,     0,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,  1307,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   224,   225,   226,   227,     0,     0,     0,     0,
     0,     0,  1308,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   233,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,     0,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
     0,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,     0,     0,   285,   172,   391,   173,
   174,   175,   176,   392,   177,   178,   179,     0,   180,     0,
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
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,   393,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   394,   225,   226,   227,     0,
     0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,   232,   233,     0,   234,   235,   236,     0,   237,   238,
     0,   239,     0,     0,   240,   241,   242,   243,   244,     0,
   245,   246,   247,     0,     0,   248,   249,   250,   251,   252,
   253,   254,   255,   256,     0,     0,     0,     0,   257,     0,
   258,   259,   260,     0,     0,   261,   262,     0,   263,     0,
   264,     0,   265,   266,   267,   268,   269,     0,   270,   271,
   272,   273,   274,     0,   275,     0,   276,   277,   278,   279,
   280,     0,     0,   281,     0,   282,   283,     0,   172,   285,
   173,   174,   175,   176,     0,   177,   178,   179,     0,   180,
     0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,     0,   192,   193,   194,   195,   196,   197,     0,
   198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   397,     0,     0,     0,     0,     0,   205,
     0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
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
   230,   231,   232,   233,     0,   234,   235,   236,     0,   237,
   238,     0,   239,     0,     0,   240,   241,   242,   243,   244,
     0,   245,   246,   247,     0,     0,   248,   249,   250,   251,
   252,   253,   254,   255,   256,     0,     0,     0,     0,   257,
     0,   258,   259,   260,     0,   398,   261,   262,     0,   263,
     0,   264,     0,   265,   266,   267,   268,   269,     0,   270,
   271,   272,   273,   274,     0,   275,     0,   276,   277,   278,
   279,   280,     0,     0,   281,     0,   282,   283,     0,   172,
   285,   173,   174,   175,   176,     0,   177,   178,   179,     0,
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
     0,     0,     0,     0,  1361,     0,   207,     0,     0,   208,
     0,     0,     0,     0,     0,     0,     0,   209,   210,     0,
     0,     0,     0,     0,   211,   212,   213,     0,     0,     0,
     0,   214,     0,     0,     0,     0,     0,   215,     0,   216,
   217,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     0,  1362,   220,     0,   221,     0,     0,     0,   222,   223,
     0,     0,     0,     0,     0,     0,     0,   224,   225,   226,
   227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
   229,   230,   231,   232,   233,     0,   234,   235,   236,     0,
   237,   238,     0,   239,     0,     0,   240,   241,   242,   243,
   244,     0,   245,   246,   247,     0,     0,   248,   249,   250,
   251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
   257,     0,   258,   259,   260,     0,     0,   261,   262,     0,
   263,     0,   264,     0,   265,   266,   267,   268,   269,     0,
   270,   271,   272,   273,   274,     0,   275,     0,   276,   277,
   278,   279,   280,     0,     0,   281,     0,   282,   283,     0,
   172,   285,   173,   174,   175,   176,     0,   177,   178,   179,
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
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
   208,     0,     0,     0,     0,     0,     0,     0,   209,   210,
     0,     0,     0,     0,     0,   211,   212,   213,     0,     0,
     0,     0,   214,     0,     0,     0,     0,     0,   215,     0,
   216,   217,     0,     0,     0,     0,     0,     0,     0,   218,
   219,     0,     0,   220,     0,   221,     0,     0,     0,   222,
   223,     0,     0,     0,     0,     0,     0,     0,   420,   225,
   226,   227,     0,     0,   421,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   228,   229,   230,   231,   232,   233,     0,   234,   235,   236,
     0,   237,   238,     0,   239,     0,     0,   240,   241,   242,
   243,   244,     0,   245,   246,   247,     0,     0,   248,   249,
   250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
     0,   257,     0,   258,   259,   260,     0,     0,   261,   262,
     0,   263,     0,   264,     0,   265,   266,   267,   268,   269,
     0,   270,   271,   272,   273,   274,     0,   275,     0,   276,
   277,   278,   279,   280,     0,     0,   281,     0,   282,   283,
     0,   172,   285,   173,   174,   175,   176,     0,   177,   178,
   179,     0,   180,     0,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,     0,   192,   193,   194,   195,
   196,   197,     0,   198,   199,   200,   201,   202,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
   204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   205,     0,     0,     0,     0,     0,     0,   206,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,   208,     0,     0,     0,     0,     0,     0,     0,   209,
   210,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
   218,   219,     0,     0,   220,     0,   221,     0,     0,     0,
   222,   223,     0,     0,     0,     0,     0,     0,     0,   423,
   225,   226,   227,     0,     0,   424,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   228,   229,   230,   231,   232,   233,     0,   234,   235,
   236,     0,   237,   238,     0,   239,     0,     0,   240,   241,
   242,   243,   244,     0,   245,   246,   247,     0,     0,   248,
   249,   250,   251,   252,   253,   254,   255,   256,     0,     0,
     0,     0,   257,     0,   258,   259,   260,     0,     0,   261,
   262,     0,   263,     0,   264,     0,   265,   266,   267,   268,
   269,     0,   270,   271,   272,   273,   274,     0,   275,     0,
   276,   277,   278,   279,   280,     0,     0,   281,     0,   282,
   283,     0,   172,   285,   173,   174,   175,   176,     0,   177,
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
     0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
   209,   210,     0,     0,     0,     0,     0,   211,   212,   213,
     0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
   215,     0,   216,   217,     0,     0,     0,     0,     0,     0,
     0,   218,   219,     0,     0,   220,     0,   221,     0,     0,
     0,   222,   223,     0,     0,     0,     0,     0,     0,     0,
   224,   225,   226,   227,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   228,   229,   230,   231,   232,   233,     0,   234,
   235,   236,     0,   237,   238,     0,   239,     0,     0,   240,
   241,   242,   243,   244,     0,   245,   246,   247,     0,     0,
   248,   249,   250,   251,   252,   253,   254,   255,   256,     0,
     0,     0,     0,   257,     0,   258,   259,   260,     0,     0,
   261,   262,  1014,   263,     0,   264,     0,   265,   266,   267,
   268,   269,     0,   270,   271,   272,   273,   274,     0,   275,
     0,   276,   277,   278,   279,   280,     0,     0,   281,     0,
   282,   283,     0,   172,   285,   173,   174,   175,   176,     0,
   177,   178,   179,     0,   180,     0,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   191,     0,   192,   193,
   194,   195,   196,   197,     0,   198,   199,   200,   201,   202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   203,   204,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
     0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   207,     0,     0,   208,     0,     0,     0,     0,     0,     0,
     0,   209,   210,     0,     0,     0,     0,     0,   211,   212,
   213,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     0,   215,     0,   216,   217,     0,     0,     0,     0,     0,
     0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
     0,     0,   222,   223,     0,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   228,   229,   230,   231,   232,   233,     0,
   234,   235,   236,     0,   237,   238,     0,   239,     0,     0,
   240,   241,   242,   243,   244,     0,   245,   246,   247,     0,
     0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     0,     0,     0,     0,   257,     0,   258,   259,   260,     0,
     0,   261,   262,  1679,   263,     0,   264,     0,   265,   266,
   267,   268,   269,     0,   270,   271,   272,   273,   274,     0,
   275,     0,   276,   277,   278,   279,   280,     0,     0,   281,
     0,   282,   283,     0,   172,   285,   173,   174,   175,   176,
     0,   177,   178,   179,     0,   180,     0,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,     0,   192,
   193,   194,   195,   196,   197,     0,   198,   199,   200,   201,
   202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   203,   204,     0,     0,     0,     0,     0,  1890,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   207,     0,     0,   208,     0,     0,     0,     0,     0,
     0,     0,   209,   210,     0,     0,     0,     0,     0,   211,
   212,   213,     0,     0,     0,     0,   214,     0,     0,     0,
     0,     0,   215,     0,   216,   217,     0,     0,     0,     0,
     0,     0,     0,   218,   219,     0,     0,   220,     0,   221,
     0,     0,     0,   222,   223,     0,     0,     0,     0,     0,
     0,     0,   224,   225,   226,   227,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   229,   230,   231,   232,   233,
     0,   234,   235,   236,     0,   237,   238,     0,   239,     0,
     0,   240,   241,   242,   243,   244,     0,   245,   246,   247,
     0,     0,   248,   249,   250,   251,   252,   253,   254,   255,
   256,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     0,     0,   261,   262,     0,   263,     0,   264,     0,   265,
   266,   267,   268,   269,     0,   270,   271,   272,   273,   274,
     0,   275,     0,   276,   277,   278,   279,   280,     0,     0,
   281,     0,   282,   283,     0,   172,   285,   173,   174,   175,
   176,     0,   177,   178,   179,     0,   180,     0,   181,   182,
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
     0,     0,   207,     0,     0,   208,     0,     0,     0,     0,
     0,     0,     0,   209,   210,     0,     0,     0,     0,     0,
   211,   212,   213,     0,     0,     0,     0,   214,     0,     0,
     0,     0,     0,   215,     0,   216,   217,     0,     0,     0,
     0,     0,     0,     0,   218,   219,     0,     0,   220,     0,
   221,     0,     0,     0,   222,   223,     0,     0,     0,     0,
     0,     0,     0,   224,   225,   226,   227,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   228,   229,   230,   231,   232,
   233,     0,   234,   235,   236,     0,   237,   238,     0,   239,
     0,     0,   240,   241,   242,   243,   244,     0,   245,   246,
   247,     0,     0,   248,   249,   250,   251,   252,   253,   254,
   255,   256,     0,     0,     0,     0,   257,     0,   258,   259,
   260,     0,     0,   261,   262,     0,   263,     0,   264,     0,
   265,   266,   267,   268,   269,     0,   270,   271,   272,   273,
   274,     0,   275,     0,   276,   277,   278,   279,   280,     0,
     0,   281,     0,   282,   283,     0,   172,   285,   173,   174,
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
     0,     0,     0,   207,     0,     0,   208,     0,     0,     0,
     0,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     0,   211,   212,   213,     0,     0,     0,     0,   214,     0,
     0,     0,     0,     0,   215,     0,   216,   217,     0,     0,
     0,     0,     0,     0,     0,   218,   219,     0,     0,   220,
     0,   221,     0,     0,     0,   222,   223,     0,     0,     0,
     0,     0,     0,     0,   224,   225,   226,   227,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
   232,   233,     0,   234,   235,   236,     0,   237,   238,     0,
   239,     0,     0,   240,   241,   242,   243,   244,     0,   245,
   246,   247,     0,     0,   248,   249,   250,   251,   252,   253,
   254,   255,   256,     0,     0,     0,     0,   257,     0,   258,
   259,   260,     0,     0,   261,   262,     0,   263,     0,   264,
     0,   265,   266,   267,   268,   269,     0,   270,   271,   272,
   273,   274,     0,   275,     0,   276,   351,   278,   279,   280,
     0,     0,   281,     0,   282,   283,     0,   172,   285,   173,
   719,   175,   176,     0,   177,   178,   179,     0,   180,     0,
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
     0,     0,     0,     0,   207,     0,     0,   208,     0,     0,
     0,     0,     0,     0,     0,   209,   210,     0,     0,     0,
     0,     0,   211,   212,   213,     0,     0,     0,     0,   214,
     0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
   220,     0,   221,     0,     0,     0,   222,   223,     0,     0,
     0,     0,     0,     0,     0,   224,   225,   226,   227,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
   231,   232,   233,     0,   234,   235,   236,     0,   237,   238,
     0,   239,     0,     0,   240,   241,   242,   243,   244,     0,
   245,   246,   247,     0,     0,   248,   249,   250,   251,   252,
   253,   254,   255,   256,     0,     0,     0,     0,   257,     0,
   258,   259,   260,     0,     0,   261,   262,     0,   263,     0,
   264,     0,   265,   266,   267,   268,   269,     0,   270,   271,
   272,   273,   274,     0,   275,     0,   276,   277,   278,   279,
   280,     0,     0,   281,     0,   282,   283,     0,     0,   285,
   806,   533,   807,   808,   809,   810,   538,   811,   812,   813,
     0,   814,     0,   815,   816,   817,   818,   819,   820,   821,
   822,   823,   824,   825,     0,   826,   827,   828,   829,   830,
   831,     0,   832,   833,   834,   835,   836,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   567,   568,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   205,   574,     0,     0,     0,     0,     0,   837,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   579,     0,
     0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
     0,     0,     0,   580,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   212,   213,     0,   581,
     0,   582,     0,     0,     0,     0,     0,   586,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   223,     0,     0,     0,     0,     0,     0,     0,   838,   839,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   594,     0,     0,     0,     0,     0,     0,
   228,     0,     0,     0,     0,   840,   806,   533,   807,   808,
   809,   810,   538,   811,   812,   813,     0,   814,     0,   815,
   816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     0,   826,   827,   828,   829,   830,   831,     0,   832,   833,
   834,   835,   836,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1659,     0,   596,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
   567,   568,   285,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   205,   574,     0,
     0,     0,     0,     0,   837,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   579,     0,     0,     0,     0,     0,
     0,     0,     0,   207,     0,     0,     0,     0,     0,   580,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   212,   213,     0,   581,     0,   582,     0,     0,
     0,     0,     0,   586,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   223,     0,     0,     0,
     0,     0,     0,     0,   838,   839,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   594,
     0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
     0,   840,   806,   533,   807,   808,   809,   810,   538,   811,
   812,   813,     0,   814,     0,   815,   816,   817,   818,   819,
   820,   821,   822,   823,   824,   825,     0,   826,   827,   828,
   829,   830,   831,     0,   832,   833,   834,   835,   836,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   596,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   283,   567,   568,   285,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   205,   574,     0,     0,     0,     0,     0,
   837,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   579,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     0,     0,     0,     0,     0,   580,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   212,   213,
     0,   581,     0,   582,     0,     0,     0,     0,     0,   586,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
   838,   839,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   594,     0,     0,     0,     0,
     0,     0,   228,     0,     0,     0,     0,   840,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   283,     0,     0,   285
};

static const short yycheck[] = {     1,
     1,     1,   529,    95,    60,   321,    58,   649,   349,   452,
  1022,   366,   363,   965,    53,    67,   860,    56,   334,   170,
  1321,   777,  1627,    46,    80,  1910,   862,    53,  1494,    54,
  1567,   339,  1167,  1168,  1169,  1170,  1171,  1599,   733,   355,
    46,   618,  1559,   956,   957,  1295,   802,    64,    46,    88,
    20,  1186,   360,  2139,    46,   568,    20,   114,    18,   114,
   449,   450,   112,    97,   455,    64,  2116,    97,    67,   582,
    97,   185,   105,    96,   127,    97,  2162,  2163,  2164,  2165,
  2166,    23,    60,    19,   318,  1298,   185,   102,    97,   257,
    96,  1921,   125,  1923,  1924,  1925,  1926,  1927,    96,   174,
   103,    98,   139,   137,    96,    61,     7,    79,  2421,    10,
  1073,    83,  1075,  1076,    60,    16,    17,  1087,  1060,  1061,
  1062,  1063,    34,  1093,  1094,  1095,  1096,  1097,   884,    41,
   194,    32,    44,    60,    35,    47,   173,   194,   114,   307,
    52,   113,    54,    55,   174,    53,    54,   194,    56,    57,
    58,    59,    96,    64,    98,   116,    64,   190,  2471,    67,
   175,    64,   410,    71,   283,   195,   177,    25,    74,   265,
    78,    79,   527,   194,    82,   530,   137,   273,    86,    87,
   124,    60,   193,    91,    92,    93,   305,    98,    98,   161,
   114,    41,   769,   292,    44,   192,   199,    47,   312,   194,
  1113,   728,    52,    97,    54,    55,    63,     5,    65,   185,
   152,  2297,   168,   124,   124,    13,  2266,   178,   179,   191,
  2306,  2307,  2308,  2309,  2310,  2311,  2312,  2313,  2314,  2315,
   174,   465,    30,   308,   194,   297,   298,   299,    36,    37,
   146,    60,   145,   307,   115,   102,   282,   495,   192,   283,
   307,   301,   307,   644,   307,   149,   283,   296,   214,   162,
   307,   283,   309,   174,   174,   127,   845,    60,   390,   175,
   296,   288,   289,    60,   283,   231,   309,  2107,   308,    77,
   793,   192,   192,   335,   336,  2115,   307,   158,   309,  2119,
   342,  2121,   178,   179,  2124,  2125,  2126,  2127,  2128,  2129,
  2130,  2131,  2132,   101,  2134,   357,   280,   359,   697,   308,
  2360,   255,   307,   111,   309,   367,   286,  1452,  1074,   297,
   298,   299,   286,  2153,   225,   286,   903,  1932,  1933,   194,
   907,  1167,  1168,  1169,  1170,  1171,   308,   301,   298,  2425,
   432,   784,   306,   109,   369,  1811,   282,   194,   120,   285,
  1186,   297,   298,   299,   393,   266,   266,   284,  1608,    96,
   216,  1496,  1879,  2413,   308,  2415,  2251,   139,   295,   296,
   297,   298,   299,   375,  1509,  1510,  1511,  1512,  1513,  1514,
  1515,   147,   309,   149,   440,   288,   409,   235,   296,    60,
   114,   228,   190,   296,   174,   303,   109,   121,   196,   311,
  1613,   173,  1615,   409,   456,   262,    31,   459,    33,   220,
   462,   409,   320,   321,    60,   195,   418,   409,   297,   298,
   299,   152,   283,   189,   449,   450,   334,   335,   336,   454,
  1401,   339,   340,   270,   342,   343,   149,  1974,  2268,  1402,
   251,   349,   307,   351,   309,   353,   354,   355,  1025,   357,
   187,   359,   360,   361,   201,   507,   288,  1399,   366,   367,
   307,   311,   309,   194,   296,   202,  1437,  1409,  1410,  1411,
  1412,  1413,  1414,  1415,   513,  1438,   189,   385,   297,   298,
   299,  1451,   604,   177,   282,  1455,    60,  1457,   185,  1066,
  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,   407,
    98,  1471,   410,  1347,   297,   298,   299,   950,  1087,   417,
   297,   298,   299,   311,  1093,  1094,  1095,  1096,  1097,   166,
   194,   523,   147,    64,   105,  1102,   124,    60,   308,  1500,
  1374,   302,   301,   441,   221,  1400,   283,   306,  1501,  2369,
   166,   449,   450,    26,   125,   192,    42,    43,   456,    45,
    46,   459,    48,    49,   462,    51,   284,    53,   305,   100,
    56,    57,    58,    59,  1408,   252,   605,  2084,   187,   477,
   662,  1436,   664,  1486,  2091,   156,  1489,  1490,  1491,  1492,
  1493,   207,  2048,   202,    60,   282,   283,   495,   285,   286,
    71,  1233,    98,    71,   192,   647,   635,  1174,   282,   507,
   639,   285,   641,   642,    34,    79,  1450,  1249,   282,   190,
   283,   285,    86,    87,  1749,   671,  1452,    91,   124,   527,
   676,   677,   530,   531,   295,   296,   297,   298,   299,   285,
   286,  1326,   305,    79,  1499,  1330,   123,   945,   284,   288,
   121,   304,   305,   121,  1945,  1401,   292,   293,   294,   295,
   296,   297,   298,   299,   970,   136,   695,   565,   136,   308,
  1496,  1417,  1418,   309,  1508,   717,    60,   113,   174,   695,
  1426,   763,   697,  1509,  1510,  1511,  1512,  1513,  1514,  1515,
    98,  1437,    71,    43,   286,   172,   192,  2249,   596,    49,
   692,    51,   211,    53,   746,   283,   215,  1610,  1611,   738,
   752,  1914,  1654,  1916,   756,   757,   124,  1842,   109,    60,
   284,  2316,   109,   109,  1470,   161,   283,   305,  2235,   194,
  2237,   295,   296,   297,   298,   299,   240,   635,   305,   216,
  1326,   308,   121,    60,  1330,   643,   283,   645,   305,   647,
  1703,  1704,  1705,   257,  1500,   191,   147,   136,   149,   657,
   147,   284,   149,   149,   128,   109,  2293,   283,   305,   881,
    14,  1517,   295,   296,   297,   298,   299,   845,   301,   114,
  1733,  1734,  1735,   306,   192,   302,   778,   779,   780,   305,
   307,  1751,  2319,   785,    28,  1629,   282,   695,   189,   697,
   941,   942,   189,   189,   304,   149,   177,   799,   308,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,   717,
    51,    52,    53,    54,    55,    56,    57,    58,    59,   295,
   296,   297,   298,   299,   282,   733,   305,   285,  1355,   308,
   288,   739,   290,    98,   886,   189,   283,   255,   746,   747,
  1367,   261,   301,     5,   752,   288,   320,   306,   756,   757,
   288,    13,   310,   235,   856,   763,   858,  1883,   305,   124,
  1886,   132,  1825,  1826,  1827,   308,   309,  2002,    30,   343,
   308,   309,  1451,   163,    36,    37,  1455,   283,  1457,   353,
   307,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,
   284,  2104,  1471,  2106,   307,  1472,   309,    60,   283,   305,
  1022,   295,   296,   297,   298,   299,   283,   301,   283,   174,
   152,   385,   306,  1749,   283,    77,   390,   307,    60,   309,
   305,   307,   947,   309,    66,   927,   928,   192,   305,    71,
   305,   152,   210,   407,   283,   152,   305,   283,   940,   101,
   940,    60,   204,   417,   295,   296,   297,   298,   299,   111,
   228,   859,   860,    60,   956,   957,   305,   284,   121,   305,
   283,   283,    60,  1719,  1976,   292,   293,   294,   295,   296,
   297,   298,   299,    71,   129,   883,  1098,   885,   886,   121,
   301,   175,   305,   305,   213,   306,   128,   265,   128,  1432,
   255,   152,   270,   995,   136,   997,   998,   999,  1000,  1350,
  1351,   204,    60,   477,   283,   147,  1842,    60,  1349,  1087,
    68,   283,   307,   155,   309,  1093,  1094,  1095,  1096,  1097,
   283,   128,   302,   121,   283,   129,   305,   301,   190,    60,
   128,   217,   306,   305,   196,   943,   222,   945,   136,   947,
    71,   282,   305,   308,   285,   204,   305,   288,   234,   290,
   283,   292,   129,   288,   295,   296,   297,   298,   299,  2194,
   246,   247,   970,   283,   305,   306,   307,   308,   309,    64,
  1192,   306,   305,   308,   115,  1197,   283,    73,    60,  1201,
   112,   122,   283,  1205,    60,   305,   272,  1209,   283,   288,
   121,  1213,    68,   134,  1002,  1217,   238,   128,   305,  1221,
   283,  1009,  1010,  1225,   305,   136,   283,   306,   283,   308,
   305,  1113,  1020,   104,   256,   283,   157,   283,  1026,   283,
   282,   284,   305,  1031,    68,   307,   283,   309,   305,   170,
   305,   238,   295,   296,   297,   298,   299,   305,  1982,   305,
   238,   305,   284,   288,   288,   289,   128,  1991,   305,   256,
   292,   293,   294,   295,   296,   297,   298,   299,   256,   283,
   283,   306,   283,   308,   301,   284,  2002,   309,   301,   643,
    73,   645,  1751,   306,   293,   294,   295,   296,   297,   298,
   299,   305,   305,   657,   305,   185,   284,    98,   295,   296,
   297,   298,   299,   201,   292,   293,   294,   295,   296,   297,
   298,   299,   302,   301,   288,  2049,   301,   238,   306,   284,
   297,   306,  1264,   124,   274,   275,    65,  1256,   293,   294,
  1272,    70,   306,   283,   308,   256,   284,    76,   301,  1285,
    68,   284,    81,   306,   292,   293,   294,   295,   296,   297,
   298,   299,   295,   296,   297,   298,   299,  1593,  1594,  1371,
    94,   201,   282,   284,   301,   285,   238,  1379,   288,   306,
   290,   308,  1314,   174,   295,   296,   297,   298,   299,   308,
  2114,    87,  1180,   747,   256,   301,   120,   307,    68,   309,
   306,   192,    60,  1322,  1286,  1286,  1286,  1339,    66,   132,
   295,   296,   297,   298,   299,   139,   140,   676,   677,   115,
  1302,  1303,  1302,  1303,   309,  1357,   122,  1359,   284,   308,
   172,  1350,  1351,   295,   296,   297,   298,   299,   134,   295,
   296,   297,   298,   299,  1232,    93,   307,   143,   309,   173,
  1332,   295,   296,   297,   298,   299,   307,  2093,   309,   200,
  1248,   157,  1250,   254,   255,   309,    60,    79,  1350,  1351,
  1350,  1351,    66,    85,   170,   301,  1264,   152,  2194,   203,
   306,   288,   308,   290,  1272,    97,   295,   296,   297,   298,
   299,   301,   307,  1451,   190,   308,   306,  1455,    60,  1457,
   309,  1383,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
  1468,    21,    22,  1471,   305,  1397,   288,   308,   307,    29,
   309,  1309,   308,  1311,  1312,  1313,  1314,   881,   282,   283,
   197,   285,  1320,   308,   288,   147,   290,   308,  1326,    94,
   308,   301,  1330,   308,    21,    22,   306,  1429,  1430,   161,
   282,  1339,    29,   285,   160,   167,   288,   308,   290,  1347,
   308,  1349,  1350,  1351,  1352,   120,   128,    78,   307,  1357,
   309,  1359,  1574,  1361,   307,   307,   309,   309,  1366,   191,
   308,  2305,    34,  2040,   139,   140,  1374,  1375,  1376,    41,
   292,   308,    44,   301,   301,    47,  2320,  2321,   306,   306,
    52,   301,    54,    55,  1486,    79,   306,  1489,  1490,  1491,
  1492,  1493,   301,    60,   308,  1497,  1498,   306,   173,    66,
  1408,   308,   308,    97,    71,   121,   284,  2149,   183,   184,
   307,    53,   309,   305,    56,  2359,    58,   295,   296,   297,
   298,   299,    64,   308,    60,    67,   305,   301,   203,   301,
    66,   147,   306,    60,   306,  1009,    78,    79,   301,   308,
    82,    68,  1450,   306,    86,    87,    68,   304,  1022,    91,
    92,    93,   301,   147,   121,   304,   238,   306,   308,   308,
   995,   128,   997,   998,   999,  1000,  1688,   161,   304,   136,
   284,   301,   301,   167,   256,   135,   306,   306,  2422,   201,
   147,   295,   296,   297,   298,   299,   121,   135,   155,   301,
   301,  1593,  1594,  1595,   306,   306,   301,   191,   301,   307,
  1508,   306,   301,   306,  1643,   301,   135,   306,  1610,  1611,
   306,   286,    96,   295,   296,   297,   298,   299,   307,  1527,
   309,   304,   307,  1939,   309,    60,   295,   296,   297,   298,
   299,    66,   310,   301,  1756,   193,    71,   306,   306,   301,
  1762,   301,    60,   310,   306,  1767,   306,   310,  1556,   301,
  1772,  1559,    60,    71,   306,  1777,  1564,   308,    66,  1567,
  1782,   302,  1664,   298,  1664,  1787,   307,   301,   284,   301,
  1792,   238,   306,  1751,   306,  1797,   292,   293,   294,   295,
   296,   297,   298,   299,   302,   308,   121,   301,   264,   256,
   301,   260,   306,   128,   301,   306,  1604,   301,   244,   306,
   301,   136,   306,   121,   152,   306,   301,   565,   301,    87,
   128,   306,   147,   306,   966,   967,   968,   284,   136,  1627,
   155,  1629,   307,    60,   309,   292,   293,   294,   295,   296,
   297,   298,   299,   301,    71,   301,   301,   115,   306,   112,
   306,   306,   309,   127,   122,   301,   301,  1655,   284,  1657,
   306,   306,   130,   185,   296,  1663,   134,   284,  1232,   295,
   296,   297,   298,   299,   307,   143,   309,  1675,   295,   296,
   297,   298,   299,   195,  1248,   301,   301,   301,   320,   157,
   306,   306,   306,   301,   121,   643,   114,   307,   306,   309,
   301,   128,   170,   335,   336,   306,  2151,   339,   340,   136,
   342,   343,   308,   238,   301,   308,   304,   349,   301,   306,
   147,   353,   354,   306,  1258,   357,  1260,   359,   360,   361,
   238,   256,   199,   304,   366,   367,   295,   296,   297,   298,
   299,   301,    78,   174,  1742,   301,   306,   306,   256,   301,
   306,   185,   301,   385,   306,   185,  1320,   306,   301,   284,
  1902,   301,   185,   306,  1976,   185,   306,   292,   293,   294,
   295,   296,   297,   298,   299,   407,   284,   301,   410,   307,
   181,   309,   306,    60,   309,   417,   284,   295,   296,   297,
   298,   299,   307,   307,   309,   309,  1938,   295,   296,   297,
   298,   299,   301,   201,  2421,   301,   307,   306,   309,   441,
   306,   238,   295,   296,   297,   298,   299,  1959,   309,  1948,
   301,    60,   309,   306,   456,   306,   301,   459,   307,   256,
   462,   306,    71,   295,   296,   297,   298,   299,   308,   114,
  1969,    60,   258,  1841,   306,   477,   301,    66,   307,   307,
   309,   306,    71,   307,   304,   309,   308,   284,   282,   283,
   151,   285,   286,   495,   153,   292,   293,   294,   295,   296,
   297,   298,   299,    28,   310,   507,   297,   310,    27,  2285,
    83,  1879,   121,   152,   177,   155,   292,   227,   160,   128,
   269,   152,  1890,    68,   233,   527,   292,   136,   530,   531,
   193,   292,   121,   307,  1902,   198,   309,   307,   147,   128,
   175,    82,   205,   114,   309,   208,   309,   136,   173,   212,
   309,   309,   309,   140,   308,   308,   308,   308,   147,   309,
   223,   308,   308,   565,  1932,  1933,   155,   309,   204,   232,
  1938,  1939,   235,   309,    60,   308,   308,   292,   308,   308,
    66,  1949,   308,   308,  2100,    71,   305,   309,   308,   307,
    60,  1959,   308,   304,   308,  1963,   259,  2096,   261,   206,
   308,    71,   309,   266,   308,   268,  1974,   308,   308,   308,
   308,   308,   308,   308,  1982,   308,   308,   308,   308,   308,
   308,   308,  1556,  1991,   308,  1559,   308,   308,   308,   238,
   308,   308,   308,   635,   292,   121,  2098,    93,  2098,   265,
  2008,   643,   128,   645,  2143,   647,   248,   256,   240,   238,
   136,   121,   302,   131,   311,   657,   311,   284,   128,   308,
   131,   147,   308,   121,   292,   201,   136,   256,   194,   155,
   201,   104,    60,   112,    60,   284,   309,   309,   121,   309,
   309,  2049,    60,   292,   293,   294,   295,   296,   297,   298,
   299,   308,   308,   695,  2062,   284,   309,   307,   309,   118,
   194,   309,   307,   292,   293,   294,   295,   296,   297,   298,
   299,   309,   309,   309,   309,   717,  2084,   297,   309,   309,
   309,   309,   112,  2091,   228,   307,   311,   311,   185,   308,
   308,   733,   279,   118,   155,   112,    68,   739,   185,   236,
   239,   161,   308,   117,   746,   747,  2114,   308,  2116,   309,
   752,   309,   238,   309,   756,   757,   309,   309,   309,   309,
   309,   763,   130,   309,   157,   309,   309,   309,   238,   309,
   256,   308,   130,   308,   308,   308,   308,   307,  2290,   308,
   308,   308,  2244,  2151,  2244,  2247,   256,  2247,   308,    73,
   308,   308,  2291,   308,   308,   308,   308,   308,   284,   801,
   308,   308,   308,   306,   309,   119,   292,   293,   294,   295,
   296,   297,   298,   299,   284,   308,   308,   224,   309,   309,
   309,   309,   309,   309,   309,   295,   296,   297,   298,   299,
   309,   292,   309,   309,   309,   309,  2298,  2299,    97,    97,
   309,   309,    60,   845,   309,   309,   309,   309,    66,   309,
   309,   277,   106,    71,   309,   309,   309,   859,   309,   309,
   862,   309,  1180,   308,   308,   226,   308,  2235,   308,  2237,
   131,   308,   149,   154,    60,   131,    60,   309,   309,   309,
    66,   883,   309,   885,   886,    71,   309,   309,   130,   130,
   307,   309,  2260,  2355,  2355,  2355,   309,   309,  2266,  2451,
   309,   309,   308,   121,   309,   309,   309,   309,   309,   309,
   128,   309,   309,   309,   309,   309,   164,  2285,   136,   132,
  2419,   304,  2290,    66,   308,  2293,   308,   308,   308,   147,
  1248,   167,   308,   225,   309,   121,   307,  2305,   308,    60,
   309,   943,   128,   945,   309,  1879,   309,   309,  2316,   309,
   136,  2319,  2320,  2321,  2322,  2323,   309,  2419,   309,  2419,
   309,   147,   309,   309,    34,   309,   309,   309,   309,  2468,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   309,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   309,  2359,  2360,   309,   309,    66,   309,   309,   309,  2367,
  1002,   309,   309,  2371,   309,   308,  2468,  1009,  2468,   309,
   138,   308,   308,   237,   309,  1949,   309,   152,  1020,   309,
   238,   309,   302,   306,  1026,    62,   302,   309,     0,  1031,
     0,    96,   974,   469,  1319,  2403,  1637,   880,   256,   642,
  1311,  2409,  1976,   347,   727,  2413,  1309,  2415,  1655,  1966,
  2154,  2419,   238,  2367,  2422,  2467,    60,  2442,  1060,  1061,
  1062,  1063,    66,  2432,    68,  2462,   284,    71,  1657,  2468,
   256,  1645,    90,  1352,   292,   293,   294,   295,   296,   297,
   298,   299,   418,  1351,   651,  1087,    75,   528,  1026,  2319,
  2434,  1093,  1094,  1095,  1096,  1097,  2464,  2465,   284,  2464,
  2468,  2318,  2451,   363,  1643,  1272,   292,   293,   294,   295,
   296,   297,   298,   299,    94,   409,  2418,   121,   509,  1227,
  1366,  1595,  1266,   912,   128,   284,   435,  2323,  1887,   904,
  1559,  1884,   136,   292,   293,   294,   295,   296,   297,   298,
   299,  2465,  1432,   147,   596,  1809,  1742,  1028,  2008,  1248,
  2084,   155,  2403,   881,   885,  1890,   292,  2091,   943,   444,
   947,  1598,   635,   454,   519,  1167,  1168,  1169,  1170,  1171,
   950,   392,  1252,   908,  2251,   169,  1557,  1019,  1230,  2244,
   964,  2247,    60,    -1,  1186,    -1,    -1,    -1,    66,    -1,
    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,  1527,
    -1,    -1,   282,    -1,    71,   285,    -1,   287,   288,    -1,
   290,    -1,   292,    -1,    -1,   295,   296,   297,   298,   299,
  1232,    -1,   302,    -1,   238,   305,   306,   307,   308,   309,
   310,   311,    -1,   121,    -1,    -1,  1248,    -1,  1250,    -1,
   128,    -1,   256,    -1,    -1,    -1,    -1,    -1,   136,    -1,
    -1,    -1,  1264,    -1,   121,    -1,    -1,    -1,    -1,   147,
  1272,   128,    -1,    -1,    -1,    -1,    -1,   155,    -1,   136,
   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,   293,
   294,   295,   296,   297,   298,   299,    -1,    -1,    -1,    -1,
    -1,  2235,    -1,  2237,    60,    -1,  1624,  1309,    -1,  1311,
  1312,  1313,  1314,    -1,    -1,    71,    -1,    -1,  1320,    -1,
    -1,    -1,    -1,    -1,  1326,    -1,    -1,    -1,  1330,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1339,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1349,  1350,  1351,
  1352,    -1,    -1,    -1,    -1,  1357,    -1,  1359,    -1,  1361,
   238,    -1,    -1,    -1,  1366,   121,    -1,    -1,    -1,    -1,
    -1,    -1,   128,  1375,  1376,    -1,    -1,    -1,   256,    -1,
   136,   238,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
    -1,   147,    -1,    -1,    -1,    -1,    -1,  1399,  1400,   256,
    -1,    -1,    -1,    -1,    -1,    -1,   284,  1409,  1410,  1411,
  1412,  1413,  1414,  1415,   292,   293,   294,   295,   296,   297,
   298,   299,    -1,    -1,  1742,    -1,    -1,   284,    -1,   307,
    -1,    -1,    -1,    -1,  1436,   292,   293,   294,   295,   296,
   297,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,  1451,
  1452,    -1,    -1,  1455,    -1,  1457,    -1,    -1,  1460,  1461,
  1462,  1463,  1464,  1465,  1466,  1467,  1468,    -1,     3,  1471,
    -1,    -1,    -1,     8,    -1,    -1,    11,    12,    -1,    -1,
    15,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    24,
    25,    -1,    -1,    -1,  1496,    -1,    -1,  1499,    -1,    -1,
   256,    -1,    -1,    38,    39,    -1,    -1,  1509,  1510,  1511,
  1512,  1513,  1514,  1515,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    60,  1841,    -1,    -1,    -1,    -1,   284,    -1,
    65,    -1,    -1,    71,    -1,    70,   292,   293,   294,   295,
   296,   297,   298,   299,    -1,    80,    -1,    -1,    -1,    84,
    -1,    86,    -1,    -1,  1556,    -1,    -1,  1559,    -1,    -1,
    -1,    96,  1564,    98,    -1,  1567,    -1,   102,    -1,   104,
    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
    -1,    -1,   117,   121,    -1,    -1,    -1,    -1,    -1,   124,
   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
    -1,    -1,  1604,  1921,    -1,  1923,  1924,  1925,  1926,  1927,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1624,    -1,    -1,  1627,    -1,   295,   296,    -1,
    -1,    -1,    -1,    -1,   169,    -1,   171,    60,    -1,   174,
   175,    -1,  1960,    66,    -1,    -1,    -1,    -1,    71,    -1,
    -1,    -1,    -1,  1655,    -1,  1657,    -1,   192,    60,    -1,
    -1,  1663,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
    -1,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   218,   219,    -1,    -1,    -1,    -1,    -1,
  2008,    -1,    -1,    -1,   229,   230,    -1,    -1,   121,    -1,
   238,   369,    -1,    -1,    -1,   128,   241,   242,   243,    -1,
   245,    -1,    -1,   136,   249,    -1,    -1,    -1,   256,   121,
   255,    -1,    -1,    -1,   147,    -1,   128,    -1,   263,    -1,
    -1,    -1,   155,    -1,   136,    -1,   271,    -1,    -1,    -1,
    -1,    -1,    -1,   278,  2062,   147,   284,  1749,    -1,  1751,
    -1,    -1,    -1,   155,   292,   293,   294,   295,   296,   297,
   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   449,   450,    -1,    -1,    -1,   454,    -1,    -1,  2107,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2115,  2116,    -1,
    -1,  2119,    -1,  2121,    -1,    -1,  2124,  2125,  2126,  2127,
  2128,  2129,  2130,  2131,  2132,   238,  2134,    -1,    -1,    -1,
    -1,  2139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   256,    -1,  2153,   238,    -1,    -1,    -1,
  1842,    -1,    -1,    -1,  2162,  2163,  2164,  2165,  2166,    -1,
    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
    -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
   293,   294,   295,   296,   297,   298,   299,  1879,    -1,    -1,
    -1,    -1,   284,    -1,   307,    -1,    -1,    -1,  1890,    -1,
   292,   293,   294,   295,   296,   297,   298,   299,    -1,    -1,
  1902,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1921,
    -1,  1923,  1924,  1925,  1926,  1927,    -1,    -1,    -1,    -1,
  1932,  1933,    -1,    -1,    -1,    -1,  1938,    -1,    -1,    -1,
    -1,    -1,  2260,    -1,    -1,    -1,    -1,  1949,  2266,    -1,
  2268,    -1,    -1,    -1,    -1,    -1,    -1,  1959,  1960,    -1,
    -1,  1963,   630,    60,    -1,    -1,    -1,   635,    -1,    66,
    -1,    -1,  1974,    -1,    71,    -1,    -1,    -1,    -1,  2297,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2306,  2307,
  2308,  2309,  2310,  2311,  2312,  2313,  2314,  2315,    -1,    -1,
  2002,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    -1,    -1,   121,    -1,    -1,   695,    -1,   697,
    -1,   128,    -1,    53,    -1,    -1,    56,    -1,    58,   136,
    -1,    -1,  2360,    -1,    64,    -1,    -1,    67,    -1,  2367,
   147,  2369,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,
    -1,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2084,    -1,    -1,    -1,    -1,    -1,    -1,  2091,
    -1,    -1,    -1,    -1,    -1,  2413,    -1,  2415,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2107,    -1,  2425,    -1,    -1,
    -1,    -1,    -1,  2115,    -1,    -1,    -1,  2119,    -1,  2121,
    -1,    -1,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,
  2132,    -1,  2134,    -1,    -1,    -1,    -1,  2139,    -1,    -1,
    -1,   238,    -1,    -1,    -1,    -1,    -1,    60,    -1,  2151,
    -1,  2153,    -1,    66,    -1,    -1,    69,    -1,    71,   256,
  2162,  2163,  2164,  2165,  2166,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    99,   284,    -1,    -1,
    -1,    -1,  2194,    -1,   862,   292,   293,   294,   295,   296,
   297,   298,   299,    -1,    -1,    -1,    -1,    -1,   121,    -1,
    -1,    -1,   880,    -1,    -1,   128,    -1,    -1,   886,    -1,
    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2235,   147,  2237,    -1,    -1,    -1,    -1,
    -1,    -1,   155,    -1,   282,    -1,    -1,   285,    -1,    -1,
   288,    -1,   290,    -1,   292,    -1,    -1,   295,   296,   297,
   298,   299,    -1,    -1,    -1,    -1,  2268,   305,   306,   307,
   308,   309,    -1,   311,    -1,    -1,   296,    -1,    -1,   947,
    -1,   194,    -1,    -1,    -1,    -1,    -1,    -1,  2290,    -1,
    -1,  2293,    -1,    -1,    -1,  2297,    -1,    -1,    -1,    -1,
   320,    -1,    -1,    -1,  2306,  2307,  2308,  2309,  2310,  2311,
  2312,  2313,  2314,  2315,  2316,   335,   336,  2319,    -1,   339,
   340,  2323,   342,   343,    -1,   238,    -1,    -1,    -1,   349,
    -1,    -1,    -1,   353,   354,    -1,    -1,   357,    -1,   359,
   360,   361,    -1,   256,    -1,    -1,   366,   367,    -1,   340,
    -1,  1019,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   385,    -1,  2369,    -1,  2371,
   361,   284,   116,    -1,    -1,    -1,    -1,    -1,    -1,   292,
   293,   294,   295,   296,   297,   298,   299,   407,    -1,    -1,
   410,    -1,    -1,   137,    -1,    -1,    -1,   417,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2409,    -1,    60,
    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,  1087,
    71,   441,    -1,  2425,    -1,  1093,  1094,  1095,  1096,  1097,
    -1,    -1,    -1,    -1,   178,   179,   456,    -1,    -1,   459,
  1108,    -1,   462,    -1,    60,    -1,    -1,   191,    -1,   193,
    66,    -1,    -1,    -1,   198,    71,    -1,   477,    -1,    -1,
    -1,   205,    -1,  2465,   208,    -1,    -1,    -1,   212,    -1,
   121,    -1,    -1,    -1,    -1,   495,    -1,   128,    -1,   223,
    -1,    -1,    -1,    -1,    -1,   136,    -1,   507,   232,    -1,
    -1,   235,    -1,    -1,    -1,    -1,   147,    -1,   114,  1167,
  1168,  1169,  1170,  1171,   155,   121,    -1,   527,    -1,    -1,
   530,   531,   128,    -1,    -1,   259,    -1,   261,  1186,    -1,
   136,    -1,   266,    -1,   268,    -1,    -1,    -1,    -1,   180,
    -1,   147,   276,    -1,    -1,    -1,    -1,    -1,    -1,   155,
    -1,    -1,    -1,    60,    -1,   565,    -1,    -1,    -1,    66,
    -1,    68,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
   580,    -1,  1230,    -1,    -1,    -1,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,   596,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    -1,   238,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   121,   256,    -1,    -1,    -1,    -1,
    -1,   128,    -1,    -1,    -1,   635,    -1,    -1,    -1,   136,
    -1,    -1,   238,   643,    -1,   645,    -1,   647,    -1,    -1,
   147,    -1,    -1,   284,    -1,    -1,    -1,   657,   155,    -1,
   256,   292,   293,   294,   295,   296,   297,   298,   299,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,
    -1,    -1,    -1,    -1,    -1,   695,   292,   293,   294,   295,
   296,   297,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   717,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   733,    -1,    -1,    -1,    -1,    -1,   739,
    -1,   238,    -1,    -1,    -1,    -1,   746,   747,    -1,    -1,
    -1,    -1,   752,    -1,    -1,    -1,   756,   757,    -1,   256,
    -1,    -1,    -1,   763,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   784,    -1,    -1,   284,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   292,   293,   294,   295,   296,
   297,   298,   299,  1451,  1452,    -1,    -1,  1455,    -1,  1457,
    -1,    -1,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
  1468,    -1,    -1,  1471,    -1,    -1,    -1,    -1,   282,    60,
   801,   285,    -1,    -1,   288,    66,   290,    68,   292,    -1,
    71,   295,   296,   297,   298,   299,    -1,    -1,  1496,    -1,
    -1,   305,   306,   307,   308,   309,    -1,   311,    -1,   859,
   860,  1509,  1510,  1511,  1512,  1513,  1514,  1515,    -1,    -1,
    -1,    -1,     8,    -1,   845,    11,    12,    -1,    -1,    15,
    -1,    -1,    -1,   883,    -1,   885,   886,    -1,    24,    25,
   121,   862,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,
    -1,    -1,    38,    39,    -1,   136,    -1,    -1,    -1,  1557,
    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    60,
    -1,    -1,    -1,    -1,   155,    66,    -1,    -1,    -1,    65,
    71,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   943,    80,   945,    -1,    -1,    84,    -1,
    86,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
    96,    -1,    98,    -1,    -1,    71,   102,    -1,   104,    -1,
   106,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
   121,   117,    -1,    -1,    -1,    -1,    -1,   128,   124,    -1,
    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
    -1,    -1,  1002,    -1,    -1,    -1,   147,   238,    -1,  1009,
    -1,    -1,    -1,    -1,   155,   121,    -1,    -1,    -1,    -1,
  1020,    -1,   128,    -1,    -1,   256,  1026,    -1,    -1,    -1,
   136,  1031,    -1,   169,    -1,   171,    -1,    -1,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   284,    -1,    -1,   192,    -1,    -1,    -1,
    -1,   292,   293,   294,   295,   296,   297,   298,   299,    60,
    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    -1,
    71,    -1,   218,   219,    -1,    -1,    -1,    -1,    -1,  1060,
  1061,  1062,  1063,   229,   230,    -1,    -1,   238,    -1,    -1,
    -1,  1749,    -1,  1751,    -1,   241,   242,   243,    -1,   245,
    -1,    -1,    -1,   249,    -1,   256,  1087,    -1,    -1,   255,
    -1,    -1,  1093,  1094,  1095,  1096,  1097,   263,    -1,    -1,
   121,    -1,   238,    -1,    -1,   271,    -1,   128,    -1,    -1,
    -1,    -1,   278,   284,    -1,   136,    -1,    -1,    -1,    -1,
   256,   292,   293,   294,   295,   296,   297,   298,   299,    60,
    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
    71,    -1,   308,    -1,    -1,    -1,    -1,    -1,   284,    -1,
  1180,    -1,    -1,    -1,    -1,    -1,   292,   293,   294,   295,
   296,   297,   298,   299,  1842,    -1,  1167,  1168,  1169,  1170,
  1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1186,    -1,    -1,    -1,    -1,
   121,    -1,    -1,    60,    -1,    -1,    -1,   128,    -1,    66,
    -1,    -1,  1232,    -1,    71,   136,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   147,   238,  1248,    -1,
  1250,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1264,   256,    -1,    -1,    -1,    -1,
    -1,    -1,  1272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
    -1,   128,    -1,   284,    -1,    -1,    -1,    -1,    -1,   136,
    -1,    -1,   293,   294,   295,   296,   297,   298,   299,  1309,
   147,  1311,  1312,  1313,  1314,    -1,    -1,    -1,   155,    -1,
  1320,    -1,    -1,    -1,    -1,    -1,  1326,    -1,    -1,    -1,
  1330,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,  1339,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1347,    -1,  1349,
  1350,  1351,  1352,    -1,  2002,   256,    -1,  1357,    -1,  1359,
    -1,  1361,    -1,    -1,    -1,    -1,  1366,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1374,  1375,  1376,    -1,    -1,    -1,
    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   292,   293,   294,   295,   296,   297,   298,   299,    -1,
    -1,   238,    60,    -1,    -1,    -1,    -1,    -1,  1408,    -1,
    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,   256,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1399,  1400,
    -1,    -1,  1432,    -1,    -1,    -1,    -1,    60,  1409,  1410,
  1411,  1412,  1413,  1414,  1415,    -1,    -1,   284,    71,    -1,
  1450,    -1,    -1,    -1,    -1,   292,   293,   294,   295,   296,
   297,   298,   299,   121,    -1,  1436,    -1,    -1,    -1,    -1,
   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
  1451,  1452,    -1,    -1,  1455,    -1,  1457,    -1,    -1,  1460,
  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,   121,    -1,
  1471,    -1,    -1,    -1,    -1,   128,    -1,    -1,  1508,    -1,
    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1496,    -1,  1527,  1499,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1509,  1510,
  1511,  1512,  1513,  1514,  1515,    -1,  2194,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1556,    -1,    -1,  1559,
    -1,    -1,    -1,    -1,  1564,    -1,    -1,  1567,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,
    -1,    -1,    -1,    -1,  1604,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   284,  1627,    -1,  1629,
    -1,    -1,    -1,   256,    -1,   293,   294,   295,   296,   297,
   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1624,    -1,  1655,    -1,  1657,    -1,    -1,
    -1,   284,    -1,  1663,    -1,    -1,    -1,    -1,    -1,    -1,
   293,   294,   295,   296,   297,   298,   299,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1749,    -1,
  1751,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,
    -1,  1841,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   173,   174,    -1,    -1,    -1,    -1,    -1,    -1,   181,
   182,  1842,    -1,    -1,    -1,    -1,    -1,   189,    -1,  1879,
    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,
  1890,   203,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
    -1,    -1,  1902,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1932,  1933,    -1,    -1,    -1,    -1,  1938,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1949,
  1921,    -1,  1923,  1924,  1925,  1926,  1927,   269,    -1,  1959,
    -1,    -1,    -1,  1963,    -1,    -1,    -1,    -1,    -1,    -1,
   282,   283,    -1,   285,  1974,    -1,   288,   289,   290,    -1,
    -1,    -1,  1982,    -1,    -1,    -1,   583,    -1,    -1,  1960,
    -1,  1991,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   597,    -1,   599,  1974,   601,   602,   603,   604,  2008,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2002,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2049,
   565,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2062,    -1,    -1,    -1,   663,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2084,    -1,    -1,    -1,    -1,    -1,
    -1,  2091,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2114,    -1,  2116,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   643,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  2107,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2115,    -1,    -1,   744,  2119,    -1,
  2121,  2151,    -1,  2124,  2125,  2126,  2127,  2128,  2129,  2130,
  2131,  2132,    -1,  2134,    -1,    -1,    -1,    -1,  2139,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,    -1,
    -1,    -1,  2153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2162,  2163,  2164,  2165,  2166,    -1,    -1,    -1,    -1,
   797,   798,    -1,    -1,    -1,    -1,    -1,    -1,   805,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  2194,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2235,    -1,  2237,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2260,    -1,    -1,    -1,   861,    -1,  2266,    -1,   865,    -1,
   867,    -1,    -1,   870,   871,   872,   873,   874,   875,   876,
   877,   878,    -1,    -1,    -1,    -1,   801,    -1,    -1,    -1,
  2290,    -1,    -1,  2293,    -1,    -1,    -1,  2268,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2305,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  2316,    -1,    -1,  2319,
  2320,  2321,    -1,  2323,    -1,    -1,  2297,    -1,    -1,    -1,
   845,    -1,    -1,    -1,    -1,  2306,  2307,  2308,  2309,  2310,
  2311,  2312,  2313,  2314,  2315,    -1,    -1,   862,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2359,
  2360,    -1,    -1,    -1,    -1,    -1,    -1,  2367,    -1,    -1,
    -1,  2371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2369,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2409,
    -1,    -1,    -1,  2413,    -1,  2415,   801,    -1,    -1,    -1,
    -1,    -1,  2422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1027,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  2425,    -1,    -1,    -1,    -1,    -1,
   845,    -1,    -1,    -1,    -1,  2465,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1073,   862,  1075,  1076,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1087,    -1,    -1,    -1,    -1,    -1,  1093,  1094,  1095,  1096,
  1097,  1098,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1060,  1061,  1062,  1063,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1087,    -1,    -1,  1172,    -1,    -1,  1093,  1094,
  1095,  1096,  1097,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1188,    -1,    -1,    -1,  1192,    -1,    -1,    -1,    -1,
  1197,    -1,    -1,    -1,  1201,    -1,    -1,    -1,  1205,    -1,
    -1,    -1,  1209,    -1,    -1,    -1,  1213,    -1,    -1,    -1,
  1217,    -1,    -1,    -1,  1221,    -1,    -1,    -1,  1225,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1167,  1168,  1169,  1170,  1171,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1266,
    -1,  1186,    -1,    -1,    -1,  1060,  1061,  1062,  1063,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1087,    -1,    -1,    -1,    -1,    -1,  1093,  1094,
  1095,  1096,  1097,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1248,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1378,  1167,  1168,  1169,  1170,  1171,    -1,    -1,    -1,
  1387,    -1,    -1,    -1,    -1,  1180,    -1,    -1,    -1,  1396,
    -1,  1186,    -1,    -1,    -1,  1402,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   783,    -1,    -1,    -1,    -1,    -1,
    -1,  1428,    -1,    -1,    -1,    -1,    -1,    -1,  1435,    -1,
    -1,  1438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1451,    -1,    -1,    -1,  1455,    -1,
  1457,    -1,    -1,  1460,  1461,  1462,  1463,  1464,  1465,  1466,
  1467,  1468,    -1,    -1,  1471,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1399,  1400,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1409,  1410,  1411,  1412,  1413,  1414,
  1415,    -1,    -1,    -1,  1501,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1451,  1452,    -1,    -1,
  1455,    -1,  1457,    -1,    -1,  1460,  1461,  1462,  1463,  1464,
  1465,  1466,  1467,  1468,    -1,    -1,  1471,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1496,    -1,    -1,  1499,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1509,  1510,  1511,  1512,  1513,  1514,
  1515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1399,  1400,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1409,  1410,  1411,  1412,  1413,  1414,
  1415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1451,  1452,    -1,    -1,
  1455,    -1,  1457,    -1,    -1,  1460,  1461,  1462,  1463,  1464,
  1465,  1466,  1467,  1468,    -1,    -1,  1471,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1703,  1704,  1705,    -1,
    -1,  1496,    -1,    -1,  1499,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1509,  1510,  1511,  1512,  1513,  1514,
  1515,    -1,    -1,    -1,    -1,    -1,  1733,  1734,  1735,    -1,
    -1,    -1,  1527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1751,    -1,    -1,    -1,    -1,  1756,
    -1,    -1,    -1,    -1,    -1,  1762,    -1,    -1,    -1,    -1,
  1767,    -1,    -1,    -1,    -1,  1772,    -1,    -1,    -1,    -1,
  1777,    -1,    -1,    -1,    -1,  1782,    -1,    -1,    -1,    -1,
  1787,    -1,    -1,    -1,    -1,  1792,    -1,    -1,    -1,    -1,
  1797,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1180,    -1,    -1,    -1,    -1,    -1,    -1,  1825,  1826,
  1827,    -1,    -1,  1192,  1749,    -1,  1751,    -1,  1197,  1624,
    -1,    -1,  1201,    -1,    -1,    -1,  1205,    -1,    -1,    -1,
  1209,    -1,    -1,    -1,  1213,    -1,    -1,    -1,  1217,    -1,
    -1,    -1,  1221,    -1,    -1,    -1,  1225,    -1,    -1,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
    14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1842,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1742,    -1,    -1,
    94,    95,    -1,    -1,  1749,    -1,  1751,   101,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,  1348,
    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,    -1,
   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,
    -1,    -1,    -1,    -1,    -1,   189,  1841,  1842,    -1,    -1,
    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
    -1,    -1,  1431,    -1,   208,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2002,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2094,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   269,  1921,    -1,  1923,  1924,
  1925,  1926,  1927,    -1,    -1,    -1,    -1,    -1,   282,   283,
    -1,   285,    -1,    -1,   288,   289,   290,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1527,    -1,
  1529,  1530,    -1,  1532,  1533,  1960,  1535,  1536,    -1,  1538,
  1539,    -1,  1541,  1542,    -1,  1544,  1545,    -1,  1547,  1548,
    -1,  1550,  1551,    -1,  1553,  1554,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2002,    -1,    -1,
    -1,    -1,    -1,  2008,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2062,    -1,  2194,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2115,  2116,    -1,    -1,  2119,    -1,  2121,    -1,    -1,  2124,
  2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,    -1,  2134,
    -1,    -1,    -1,    -1,  2139,  2352,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2153,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2162,  2163,  2164,
  2165,  2166,    -1,  1742,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1756,    -1,    -1,
    -1,    -1,    -1,  1762,    -1,    -1,    -1,    -1,  1767,  2194,
    -1,    -1,    -1,  1772,    -1,    -1,    -1,    -1,  1777,    -1,
    -1,    -1,    -1,  1782,    -1,    -1,    -1,    -1,  1787,    -1,
    -1,    -1,    -1,  1792,    -1,    -1,    -1,    -1,  1797,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1805,    -1,    -1,    -1,
  1809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2260,    -1,    -1,    -1,    -1,
    -1,  2266,    -1,  2268,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  2297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  2306,  2307,  2308,  2309,  2310,  2311,  2312,  2313,  2314,
  2315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  2360,    -1,    -1,    -1,    -1,
    -1,    -1,  2367,    -1,  2369,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2413,    -1,
  2415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  2425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2008,
    -1,    -1,  2011,  2012,    -1,  2014,  2015,    -1,  2017,  2018,
    -1,  2020,  2021,    -1,  2023,  2024,    -1,  2026,  2027,    -1,
  2029,  2030,    -1,  2032,  2033,    -1,  2035,  2036,    -1,    -1,
    -1,    -1,    -1,  2042,    -1,    -1,    -1,  2046,     3,     4,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,   147,   148,   149,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,   297,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,   309,     3,     4,     5,     6,     7,
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
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,
    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,
   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,
    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,
   168,    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,
    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,
    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,
   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,
    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,   227,
   228,    -1,    -1,   231,   232,   233,   234,   235,   236,   237,
   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,
   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,
   258,   259,   260,   261,   262,    -1,   264,   265,   266,   267,
   268,   269,   270,    -1,   272,   273,   274,   275,   276,    -1,
    -1,   279,    -1,   281,   282,   283,   284,   285,   286,    -1,
   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,   297,
    -1,   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,
   308,   309,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,   309,     3,
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
    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,
    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,
   144,   145,    -1,   147,   148,   149,   150,   151,    -1,   153,
   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,
    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,
   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,
    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
   204,   205,   206,   207,   208,    -1,   210,   211,   212,    -1,
   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,
   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,
   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,
   244,    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,
   254,    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,
   264,   265,   266,   267,   268,   269,   270,    -1,   272,   273,
   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,
   284,   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,
    -1,    -1,   296,    -1,    -1,   299,   300,    -1,   302,    -1,
    -1,    -1,    -1,    -1,   308,   309,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    89,    90,    91,    92,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
    -1,    -1,    -1,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,    -1,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,    -1,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,   309,     3,     4,     5,     6,     7,     8,     9,
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
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,
    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,
   140,    -1,   142,    -1,   144,   145,    -1,   147,    -1,   149,
   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,
    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,
   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,
   220,   221,   222,   223,   224,    -1,   226,   227,   228,    -1,
    -1,   231,   232,   233,   234,   235,   236,   237,   238,   239,
    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,
   260,   261,   262,    -1,   264,   265,   266,   267,   268,   269,
   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,
    -1,   281,   282,   283,   284,   285,    -1,    -1,   288,   289,
   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,   309,
     3,    -1,     5,     6,     7,     8,    -1,    10,    11,    12,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,    -1,    -1,    -1,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,    -1,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,    -1,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
    -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,   309,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,
    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,   133,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,   186,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
    -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,
    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,    -1,   111,    -1,
    -1,   114,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
   133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,   147,   148,   149,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,   186,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,   284,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,   299,   300,    -1,   302,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,
    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
    -1,    88,    89,    90,    91,    92,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
   107,   108,   109,    -1,   111,    -1,    -1,   114,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
   147,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,   176,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,   186,
    -1,   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,   286,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,   299,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    72,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,   186,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,   147,   148,   149,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,    -1,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
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
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,   147,   148,   149,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,   284,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,   299,   300,    -1,   302,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
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
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
   147,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,   176,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,   286,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,   299,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
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
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,   147,   148,   149,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,    -1,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
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
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,    -1,   148,   149,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,    -1,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,   299,   300,   301,   302,
    -1,    -1,    -1,   306,    -1,   308,     3,     4,     5,     6,
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
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
   147,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,   176,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,   286,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,   299,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
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
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,   147,   148,   149,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,    -1,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
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
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,   147,   148,   149,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,   284,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,   299,   300,    -1,   302,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
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
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
   147,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,   176,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,   286,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,   299,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
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
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,   147,   148,   149,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,   297,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,   147,   148,   149,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,   174,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,   284,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,   299,   300,    -1,   302,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
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
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
   147,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,   174,    -1,   176,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,   286,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,   299,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,   147,   148,   149,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,    -1,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,   284,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,    -1,   148,   149,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,    -1,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,   299,   300,    -1,   302,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
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
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
    -1,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,   159,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,   176,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,   188,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,    -1,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,    -1,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,    -1,   285,   286,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   300,   301,   302,    -1,    -1,    -1,   306,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
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
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,    -1,   148,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,   159,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,   188,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,    -1,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,   250,
   251,   252,    -1,   254,    -1,    -1,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,    -1,   285,   286,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,    -1,    -1,    -1,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   193,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,   286,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,    -1,    -1,   299,   300,    -1,   302,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,    -1,    -1,
    -1,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
   159,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,   188,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,   250,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,    -1,   285,   286,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
   299,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,    -1,    -1,    -1,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,    -1,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,    -1,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,    -1,   285,   286,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,   302,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    89,    90,    91,    92,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
    -1,    -1,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,   189,    -1,    -1,    -1,   193,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,    -1,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,    -1,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,    -1,    -1,    -1,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,    -1,   189,    -1,
    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,   284,   285,    -1,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,   126,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,   142,    -1,   144,
   145,    -1,    -1,    -1,    -1,   150,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,   176,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,    -1,    -1,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,    -1,    -1,   288,   289,   290,    -1,    -1,    -1,    -1,
    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   308,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,   142,    -1,   144,   145,    -1,    -1,    -1,
    -1,   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
   189,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
   269,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,    -1,   285,    -1,    -1,   288,
   289,   290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
    -1,   300,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,   142,
    -1,   144,   145,    -1,    -1,    -1,    -1,   150,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,   250,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,   269,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,    -1,   285,    -1,    -1,   288,   289,   290,    -1,    -1,
    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   308,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,   142,    -1,   144,   145,    -1,
   147,    -1,   149,   150,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,   284,   285,    -1,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
    -1,    -1,    -1,   300,    -1,   302,    -1,    -1,    -1,    -1,
    -1,   308,     3,     4,     5,     6,     7,     8,     9,    10,
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
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,   142,    -1,   144,   145,    -1,    -1,    -1,   149,   150,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,    -1,   189,    -1,
    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,   269,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,    -1,   285,    -1,    -1,   288,   289,   290,
    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
    -1,   302,    -1,    -1,    -1,    -1,     3,   308,     5,     6,
     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,    -1,
    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,    -1,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,    -1,     3,   285,     5,
     6,     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,   308,    28,    29,    30,    31,    32,    33,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,
    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,
    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
   166,    -1,   168,    -1,    -1,    -1,   172,   173,   174,    -1,
    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
   206,   207,   208,    -1,   210,   211,   212,    -1,   214,   215,
    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,
   226,   227,   228,    -1,    -1,   231,   232,   233,   234,   235,
   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
   246,   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,
   256,    -1,   258,   259,   260,   261,   262,    -1,   264,   265,
   266,   267,   268,    -1,   270,    -1,   272,   273,   274,   275,
   276,    -1,    -1,   279,    -1,   281,   282,    -1,     3,   285,
     5,     6,     7,     8,    -1,    10,    11,    12,    -1,    14,
    -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,   308,    28,    29,    30,    31,    32,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,
   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,    -1,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,   284,
   285,    -1,    -1,   288,    -1,   290,    -1,   292,   293,   294,
   295,   296,   297,   298,   299,     3,    -1,     5,     6,     7,
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
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
    -1,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,    -1,
   138,   139,   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,
    -1,    -1,    -1,   151,    -1,   153,   154,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   162,   163,   164,    -1,   166,    -1,
   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,
   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,
    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,   227,
   228,    -1,    -1,   231,   232,   233,   234,   235,   236,   237,
   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,
   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,
   258,   259,   260,   261,   262,    -1,   264,   265,   266,   267,
   268,    -1,   270,    -1,   272,   273,   274,   275,   276,    -1,
    -1,   279,    -1,   281,   282,    -1,   284,   285,    -1,    -1,
    -1,    -1,    -1,    -1,   292,   293,   294,   295,   296,   297,
   298,   299,     3,    -1,     5,     6,     7,     8,    -1,    10,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,   130,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,    -1,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
    -1,   292,   293,   294,   295,   296,   297,   298,   299,     3,
    -1,     5,     6,     7,     8,    -1,    10,    11,    12,    -1,
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
    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,
    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,
   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
   204,   205,   206,   207,   208,    -1,   210,   211,   212,    -1,
   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,
   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,
   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,
   244,    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,
   254,    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,
   264,   265,   266,   267,   268,    -1,   270,    -1,   272,   273,
   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,    -1,
    -1,   285,    -1,    -1,    -1,   289,    -1,     3,    -1,     5,
     6,     7,     8,   297,    10,    11,    12,    -1,    14,    -1,
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
    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,
    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,
    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
   206,   207,   208,    -1,   210,   211,   212,    -1,   214,   215,
    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,
   226,   227,   228,    -1,    -1,   231,   232,   233,   234,   235,
   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
   246,   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,
   256,    -1,   258,   259,   260,   261,   262,    -1,   264,   265,
   266,   267,   268,    -1,   270,    -1,   272,   273,   274,   275,
   276,    -1,    -1,   279,    -1,   281,   282,    -1,    -1,   285,
    -1,     3,    -1,     5,     6,     7,     8,    -1,    10,    11,
    12,   297,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,
    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,
    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,
   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
   182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,
   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,
   232,   233,   234,   235,   236,   237,   238,   239,    -1,    -1,
    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,   251,
   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,
   262,    -1,   264,   265,   266,   267,   268,    -1,   270,    -1,
   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
   282,    -1,    -1,   285,    -1,     3,    -1,     5,     6,     7,
     8,    -1,    10,    11,    12,   297,    14,    -1,    16,    17,
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
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
   138,   139,   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,
    -1,    -1,    -1,   151,    -1,   153,   154,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,
   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,
   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,
    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,   227,
   228,    -1,    -1,   231,   232,   233,   234,   235,   236,   237,
   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,
   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,
   258,   259,   260,   261,   262,    -1,   264,   265,   266,   267,
   268,    -1,   270,    -1,   272,   273,   274,   275,   276,    -1,
    -1,   279,    -1,   281,   282,    -1,    -1,   285,    -1,     3,
    -1,     5,     6,     7,     8,    -1,    10,    11,    12,   297,
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
    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,
    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,
   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
   204,   205,   206,   207,   208,    -1,   210,   211,   212,    -1,
   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,
   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,
   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,
   244,    -1,   246,   247,   248,    -1,    -1,   251,   252,    -1,
   254,    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,
   264,   265,   266,   267,   268,    -1,   270,    -1,   272,   273,
   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,    -1,
    -1,   285,    -1,     3,    -1,     5,     6,     7,     8,    -1,
    10,    11,    12,   297,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,
   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
    -1,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,
    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,
   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,
   220,   221,   222,   223,   224,    -1,   226,   227,   228,    -1,
    -1,   231,   232,   233,   234,   235,   236,   237,   238,   239,
    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,
   260,   261,   262,    -1,   264,   265,   266,   267,   268,    -1,
   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,
    -1,   281,   282,    -1,    -1,   285,    -1,     3,    -1,     5,
     6,     7,     8,    -1,    10,    11,    12,   297,    14,    -1,
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
    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,
    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,
    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
   206,   207,   208,    -1,   210,   211,   212,    -1,   214,   215,
    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,
   226,   227,   228,    -1,    -1,   231,   232,   233,   234,   235,
   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
   246,   247,   248,    -1,   250,   251,   252,    -1,   254,    -1,
   256,    -1,   258,   259,   260,   261,   262,    -1,   264,   265,
   266,   267,   268,    -1,   270,    -1,   272,   273,   274,   275,
   276,    -1,    -1,   279,    -1,   281,   282,    -1,    -1,   285,
    -1,    -1,     3,   289,     5,     6,     7,     8,    -1,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,
   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,    -1,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,   283,    -1,   285,   286,     3,    -1,     5,     6,
     7,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,    -1,
    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,    -1,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,   283,    -1,   285,   286,
     3,    -1,     5,     6,     7,     8,    -1,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,    -1,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,    -1,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
   283,    -1,   285,   286,     3,    -1,     5,     6,     7,     8,
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
    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,
    -1,    -1,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
    -1,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,   283,    -1,   285,   286,     3,    -1,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,
   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,    -1,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,    -1,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,    -1,    -1,
   285,   286,     3,    -1,     5,     6,     7,     8,    -1,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
    81,    -1,    -1,    -1,    85,    -1,    -1,    88,    -1,    -1,
    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
   101,    -1,   103,   104,    -1,    -1,    -1,    -1,   109,    -1,
    -1,    -1,   113,    -1,    -1,    -1,    -1,   118,    -1,   120,
    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,    -1,    -1,    -1,   145,    -1,    -1,   148,    -1,    -1,
   151,    -1,   153,   154,    -1,   156,    -1,    -1,   159,   160,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,    -1,   177,    -1,    -1,   180,
   181,   182,   183,   184,    -1,    -1,   187,    -1,   189,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
   211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
   241,    -1,   243,   244,   245,   246,   247,   248,   249,   250,
   251,   252,   253,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
   271,   272,   273,   274,   275,   276,    -1,   278,   279,   280,
   281,   282,    -1,     3,   285,     5,     6,     7,     8,    -1,
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
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,
   140,    -1,   142,    -1,   144,   145,    -1,    -1,    -1,    -1,
   150,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,
    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,
   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,
   220,   221,   222,   223,   224,    -1,   226,   227,   228,    -1,
    -1,   231,   232,   233,   234,   235,   236,   237,   238,   239,
    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,   259,
   260,   261,   262,    -1,   264,   265,   266,   267,   268,    -1,
   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,
    -1,   281,   282,    -1,     3,   285,     5,     6,     7,     8,
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
    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,
    -1,    -1,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
    -1,    -1,   161,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
    -1,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,    -1,    -1,   285,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
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
    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,
    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,   145,
    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,
    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
   206,   207,   208,    -1,   210,   211,   212,    -1,   214,   215,
    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,
   226,   227,   228,    -1,    -1,   231,   232,   233,   234,   235,
   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
   246,   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,
   256,    -1,   258,   259,   260,   261,   262,    -1,   264,   265,
   266,   267,   268,    -1,   270,    -1,   272,   273,   274,   275,
   276,    -1,    -1,   279,    -1,   281,   282,    -1,     3,   285,
     5,     6,     7,     8,    -1,    10,    11,    12,    -1,    14,
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
    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,
   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,
    -1,   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
   205,   206,   207,   208,    -1,   210,   211,   212,    -1,   214,
   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,
    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,   234,
   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,
    -1,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,   264,
   265,   266,   267,   268,    -1,   270,    -1,   272,   273,   274,
   275,   276,    -1,    -1,   279,    -1,   281,   282,    -1,     3,
   285,     5,     6,     7,     8,    -1,    10,    11,    12,    -1,
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
    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,
    -1,   165,   166,    -1,   168,    -1,    -1,    -1,   172,   173,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,
   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
   204,   205,   206,   207,   208,    -1,   210,   211,   212,    -1,
   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,   223,
   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,   233,
   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,    -1,
   244,    -1,   246,   247,   248,    -1,    -1,   251,   252,    -1,
   254,    -1,   256,    -1,   258,   259,   260,   261,   262,    -1,
   264,   265,   266,   267,   268,    -1,   270,    -1,   272,   273,
   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,    -1,
     3,   285,     5,     6,     7,     8,    -1,    10,    11,    12,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,    -1,
   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,   172,
   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
   183,   184,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,   205,   206,   207,   208,    -1,   210,   211,   212,
    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,   222,
   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,   232,
   233,   234,   235,   236,   237,   238,   239,    -1,    -1,    -1,
    -1,   244,    -1,   246,   247,   248,    -1,    -1,   251,   252,
    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,   262,
    -1,   264,   265,   266,   267,   268,    -1,   270,    -1,   272,
   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
    -1,     3,   285,     5,     6,     7,     8,    -1,    10,    11,
    12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    32,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,
    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,
    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,
   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
   182,   183,   184,    -1,    -1,   187,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,   221,
   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,   231,
   232,   233,   234,   235,   236,   237,   238,   239,    -1,    -1,
    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,   251,
   252,    -1,   254,    -1,   256,    -1,   258,   259,   260,   261,
   262,    -1,   264,   265,   266,   267,   268,    -1,   270,    -1,
   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
   282,    -1,     3,   285,     5,     6,     7,     8,    -1,    10,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,    -1,
    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,   210,
   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,   220,
   221,   222,   223,   224,    -1,   226,   227,   228,    -1,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,    -1,
    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,
   251,   252,   253,   254,    -1,   256,    -1,   258,   259,   260,
   261,   262,    -1,   264,   265,   266,   267,   268,    -1,   270,
    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,    -1,
   281,   282,    -1,     3,   285,     5,     6,     7,     8,    -1,
    10,    11,    12,    -1,    14,    -1,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,   139,
   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
    -1,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,    -1,
    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,    -1,
   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,    -1,
   220,   221,   222,   223,   224,    -1,   226,   227,   228,    -1,
    -1,   231,   232,   233,   234,   235,   236,   237,   238,   239,
    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
    -1,   251,   252,   253,   254,    -1,   256,    -1,   258,   259,
   260,   261,   262,    -1,   264,   265,   266,   267,   268,    -1,
   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,   279,
    -1,   281,   282,    -1,     3,   285,     5,     6,     7,     8,
    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
    29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   138,
   139,   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,
    -1,    -1,   151,    -1,   153,   154,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,   168,
    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,   208,
    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,    -1,
    -1,   220,   221,   222,   223,   224,    -1,   226,   227,   228,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,
    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,   258,
   259,   260,   261,   262,    -1,   264,   265,   266,   267,   268,
    -1,   270,    -1,   272,   273,   274,   275,   276,    -1,    -1,
   279,    -1,   281,   282,    -1,     3,   285,     5,     6,     7,
     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,    17,
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
    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
   138,   139,   140,    -1,    -1,    -1,    -1,   145,    -1,    -1,
    -1,    -1,    -1,   151,    -1,   153,   154,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,    -1,
   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,
   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,   217,
    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,   227,
   228,    -1,    -1,   231,   232,   233,   234,   235,   236,   237,
   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,
   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,    -1,
   258,   259,   260,   261,   262,    -1,   264,   265,   266,   267,
   268,    -1,   270,    -1,   272,   273,   274,   275,   276,    -1,
    -1,   279,    -1,   281,   282,    -1,     3,   285,     5,     6,
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
    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,    -1,
    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,   166,
    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,
   207,   208,    -1,   210,   211,   212,    -1,   214,   215,    -1,
   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,   226,
   227,   228,    -1,    -1,   231,   232,   233,   234,   235,   236,
   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,
   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,   256,
    -1,   258,   259,   260,   261,   262,    -1,   264,   265,   266,
   267,   268,    -1,   270,    -1,   272,   273,   274,   275,   276,
    -1,    -1,   279,    -1,   281,   282,    -1,     3,   285,     5,
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
    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,
    -1,    -1,   138,   139,   140,    -1,    -1,    -1,    -1,   145,
    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
   166,    -1,   168,    -1,    -1,    -1,   172,   173,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
   206,   207,   208,    -1,   210,   211,   212,    -1,   214,   215,
    -1,   217,    -1,    -1,   220,   221,   222,   223,   224,    -1,
   226,   227,   228,    -1,    -1,   231,   232,   233,   234,   235,
   236,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
   246,   247,   248,    -1,    -1,   251,   252,    -1,   254,    -1,
   256,    -1,   258,   259,   260,   261,   262,    -1,   264,   265,
   266,   267,   268,    -1,   270,    -1,   272,   273,   274,   275,
   276,    -1,    -1,   279,    -1,   281,   282,    -1,    -1,   285,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,   208,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    -1,    14,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
    77,    78,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    -1,
    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   181,   182,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
    -1,   208,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    -1,    14,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    32,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   282,    77,    78,   285,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,   203,    -1,    -1,    -1,    -1,   208,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   282,    -1,    -1,   285
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
#line 857 "preproc.y"
{ connection = NULL; ;
    break;}
case 7:
#line 860 "preproc.y"
{ fprintf(yyout, "%s", yyvsp[0].str); free(yyvsp[0].str); ;
    break;}
case 8:
#line 861 "preproc.y"
{ fprintf(yyout, "%s", yyvsp[0].str); free(yyvsp[0].str); ;
    break;}
case 9:
#line 862 "preproc.y"
{ fputs(yyvsp[0].str, yyout); free(yyvsp[0].str); ;
    break;}
case 10:
#line 863 "preproc.y"
{ fputs(yyvsp[0].str, yyout); free(yyvsp[0].str); ;
    break;}
case 11:
#line 865 "preproc.y"
{ connection = yyvsp[0].str; ;
    break;}
case 12:
#line 867 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 13:
#line 868 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 14:
#line 869 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 15:
#line 870 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 16:
#line 871 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 17:
#line 872 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 18:
#line 873 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 19:
#line 874 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 20:
#line 875 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 21:
#line 876 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 22:
#line 877 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 23:
#line 878 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 24:
#line 879 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 25:
#line 880 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 26:
#line 881 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 27:
#line 882 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 28:
#line 883 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 29:
#line 884 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 30:
#line 885 "preproc.y"
{ output_statement(yyvsp[0].str, 1); ;
    break;}
case 31:
#line 886 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 32:
#line 887 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 33:
#line 888 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 34:
#line 889 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 35:
#line 890 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 36:
#line 891 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 37:
#line 892 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 38:
#line 893 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 39:
#line 894 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 40:
#line 895 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 41:
#line 896 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 42:
#line 897 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 43:
#line 898 "preproc.y"
{
						if (strncmp(yyvsp[0].str, "/* " , sizeof("/* ")-1) == 0)
							output_simple_statement(yyvsp[0].str);
						else
							output_statement(yyvsp[0].str, 1);
					;
    break;}
case 44:
#line 904 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 45:
#line 905 "preproc.y"
{
						fprintf(yyout, "ECPGtrans(__LINE__, %s, \"%s\");", connection ? connection : "NULL", yyvsp[0].str);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 46:
#line 910 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 47:
#line 911 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 48:
#line 912 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 49:
#line 913 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 50:
#line 914 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 51:
#line 915 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 52:
#line 916 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 53:
#line 917 "preproc.y"
{ output_statement(yyvsp[0].str, 0); ;
    break;}
case 54:
#line 918 "preproc.y"
{
						if (connection)
							yyerror("no at option for connect statement.\n");

						fprintf(yyout, "ECPGconnect(__LINE__, %s, %d);", yyvsp[0].str, autocommit);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 55:
#line 926 "preproc.y"
{
						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 56:
#line 929 "preproc.y"
{
						if (connection)
							yyerror("no at option for connect statement.\n");

						fputs(yyvsp[0].str, yyout);
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 57:
#line 937 "preproc.y"
{
						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 58:
#line 940 "preproc.y"
{
						if (connection)
							yyerror("no at option for disconnect statement.\n");

						fprintf(yyout, "ECPGdisconnect(__LINE__, \"%s\");", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 59:
#line 948 "preproc.y"
{
						output_statement(yyvsp[0].str, 0);
					;
    break;}
case 60:
#line 951 "preproc.y"
{
						fprintf(yyout, "ECPGdeallocate(__LINE__, %s, \"%s\");", connection ? connection : "NULL", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 61:
#line 956 "preproc.y"
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
#line 981 "preproc.y"
{
						if (connection)
							yyerror("no at option for set connection statement.\n");

						fprintf(yyout, "ECPGprepare(__LINE__, %s);", yyvsp[0].str); 
						whenever_action(0);
						free(yyvsp[0].str);
					;
    break;}
case 63:
#line 989 "preproc.y"
{ /* output already done */ ;
    break;}
case 64:
#line 990 "preproc.y"
{
						fprintf(yyout, "ECPGsetcommit(__LINE__, \"%s\", %s);", yyvsp[0].str, connection ? connection : "NULL");
						whenever_action(0);
                                       		free(yyvsp[0].str);
					;
    break;}
case 65:
#line 995 "preproc.y"
{
						if (connection)
							yyerror("no at option for set connection statement.\n");

						fprintf(yyout, "ECPGsetconn(__LINE__, %s);", yyvsp[0].str);
						whenever_action(0);
                                       		free(yyvsp[0].str);
					;
    break;}
case 66:
#line 1003 "preproc.y"
{
						if (connection)
							yyerror("no at option for typedef statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 67:
#line 1009 "preproc.y"
{
						if (connection)
							yyerror("no at option for var statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 68:
#line 1015 "preproc.y"
{
						if (connection)
							yyerror("no at option for whenever statement.\n");

						output_simple_statement(yyvsp[0].str);
					;
    break;}
case 69:
#line 1037 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("create user"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 70:
#line 1051 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("alter user"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 71:
#line 1064 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop user"), yyvsp[0].str);
				;
    break;}
case 72:
#line 1069 "preproc.y"
{ yyval.str = cat2_str(make1_str("with password") , yyvsp[0].str); ;
    break;}
case 73:
#line 1070 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 74:
#line 1074 "preproc.y"
{
					yyval.str = make1_str("createdb");
				;
    break;}
case 75:
#line 1078 "preproc.y"
{
					yyval.str = make1_str("nocreatedb");
				;
    break;}
case 76:
#line 1081 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 77:
#line 1085 "preproc.y"
{
					yyval.str = make1_str("createuser");
				;
    break;}
case 78:
#line 1089 "preproc.y"
{
					yyval.str = make1_str("nocreateuser");
				;
    break;}
case 79:
#line 1092 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 80:
#line 1096 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 81:
#line 1100 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 82:
#line 1105 "preproc.y"
{ yyval.str = cat2_str(make1_str("in group"), yyvsp[0].str); ;
    break;}
case 83:
#line 1106 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 84:
#line 1109 "preproc.y"
{ yyval.str = cat2_str(make1_str("valid until"), yyvsp[0].str); ;
    break;}
case 85:
#line 1110 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 86:
#line 1123 "preproc.y"
{
					yyval.str = cat4_str(make1_str("set"), yyvsp[-2].str, make1_str("to"), yyvsp[0].str);
				;
    break;}
case 87:
#line 1127 "preproc.y"
{
					yyval.str = cat4_str(make1_str("set"), yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 88:
#line 1131 "preproc.y"
{
					yyval.str = cat2_str(make1_str("set time zone"), yyvsp[0].str);
				;
    break;}
case 89:
#line 1135 "preproc.y"
{
					yyval.str = cat2_str(make1_str("set transaction isolation level"), yyvsp[0].str);
				;
    break;}
case 90:
#line 1139 "preproc.y"
{
#ifdef MB
					yyval.str = cat2_str(make1_str("set names"), yyvsp[0].str);
#else
                                        yyerror("SET NAMES is not supported");
#endif
                                ;
    break;}
case 91:
#line 1148 "preproc.y"
{ yyval.str = make1_str("read committed"); ;
    break;}
case 92:
#line 1149 "preproc.y"
{ yyval.str = make1_str("serializable"); ;
    break;}
case 93:
#line 1153 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 94:
#line 1154 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 95:
#line 1157 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 96:
#line 1158 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 97:
#line 1159 "preproc.y"
{ yyval.str = make1_str("local"); ;
    break;}
case 98:
#line 1163 "preproc.y"
{
					yyval.str = cat2_str(make1_str("show"), yyvsp[0].str);
				;
    break;}
case 99:
#line 1167 "preproc.y"
{
					yyval.str = make1_str("show time zone");
				;
    break;}
case 100:
#line 1171 "preproc.y"
{
					yyval.str = make1_str("show transaction isolation level");
				;
    break;}
case 101:
#line 1177 "preproc.y"
{
					yyval.str = cat2_str(make1_str("reset"), yyvsp[0].str);
				;
    break;}
case 102:
#line 1181 "preproc.y"
{
					yyval.str = make1_str("reset time zone");
				;
    break;}
case 103:
#line 1185 "preproc.y"
{
					yyval.str = make1_str("reset transaction isolation level");
				;
    break;}
case 104:
#line 1199 "preproc.y"
{
					yyval.str = cat4_str(make1_str("alter table"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 105:
#line 1205 "preproc.y"
{
					yyval.str = cat3_str(make1_str("add"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 106:
#line 1209 "preproc.y"
{
					yyval.str = make3_str(make1_str("add("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 107:
#line 1213 "preproc.y"
{	yyerror("ALTER TABLE/DROP COLUMN not yet implemented"); ;
    break;}
case 108:
#line 1215 "preproc.y"
{	yyerror("ALTER TABLE/ALTER COLUMN/SET DEFAULT not yet implemented"); ;
    break;}
case 109:
#line 1217 "preproc.y"
{	yyerror("ALTER TABLE/ALTER COLUMN/DROP DEFAULT not yet implemented"); ;
    break;}
case 110:
#line 1219 "preproc.y"
{	yyerror("ALTER TABLE/ADD CONSTRAINT not yet implemented"); ;
    break;}
case 111:
#line 1230 "preproc.y"
{
					yyval.str = cat2_str(make1_str("close"), yyvsp[0].str);
				;
    break;}
case 112:
#line 1245 "preproc.y"
{
					yyval.str = cat3_str(cat5_str(make1_str("copy"), yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 113:
#line 1251 "preproc.y"
{ yyval.str = make1_str("to"); ;
    break;}
case 114:
#line 1253 "preproc.y"
{ yyval.str = make1_str("from"); ;
    break;}
case 115:
#line 1261 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 116:
#line 1262 "preproc.y"
{ yyval.str = make1_str("stdin"); ;
    break;}
case 117:
#line 1263 "preproc.y"
{ yyval.str = make1_str("stdout"); ;
    break;}
case 118:
#line 1266 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 119:
#line 1267 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 120:
#line 1270 "preproc.y"
{ yyval.str = make1_str("with oids"); ;
    break;}
case 121:
#line 1271 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 122:
#line 1277 "preproc.y"
{ yyval.str = cat2_str(make1_str("using delimiters"), yyvsp[0].str); ;
    break;}
case 123:
#line 1278 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 124:
#line 1292 "preproc.y"
{
					yyval.str = cat3_str(cat4_str(make1_str("create"), yyvsp[-6].str, make1_str("table"), yyvsp[-4].str), make3_str(make1_str("("), yyvsp[-2].str, make1_str(")")), yyvsp[0].str);
				;
    break;}
case 125:
#line 1297 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 126:
#line 1298 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str,yyvsp[0].str); ;
    break;}
case 127:
#line 1301 "preproc.y"
{ yyval.str = make1_str("temp"); ;
    break;}
case 128:
#line 1302 "preproc.y"
{ yyval.str = make1_str("temporary"); ;
    break;}
case 129:
#line 1303 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 130:
#line 1307 "preproc.y"
{
                    yyerror("GLOBAL TEMPORARY TABLE is not currently supported");
                    yyval.str = make1_str("global");
               ;
    break;}
case 131:
#line 1311 "preproc.y"
{ yyval.str = make1_str("local"); ;
    break;}
case 132:
#line 1316 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 133:
#line 1320 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 134:
#line 1323 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 135:
#line 1326 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 136:
#line 1327 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 137:
#line 1331 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 138:
#line 1335 "preproc.y"
{
			yyval.str = make3_str(yyvsp[-2].str, make1_str(" serial "), yyvsp[0].str);
		;
    break;}
case 139:
#line 1340 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 140:
#line 1341 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 141:
#line 1344 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str,yyvsp[0].str); ;
    break;}
case 142:
#line 1345 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 143:
#line 1349 "preproc.y"
{
			yyval.str = make1_str("primary key");
                ;
    break;}
case 144:
#line 1353 "preproc.y"
{
			yyval.str = make1_str("");
		;
    break;}
case 145:
#line 1360 "preproc.y"
{
					yyval.str = cat3_str(make1_str("constraint"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 146:
#line 1364 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 147:
#line 1378 "preproc.y"
{
					yyval.str = make3_str(make1_str("check("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 148:
#line 1382 "preproc.y"
{
					yyval.str = make1_str("default null");
				;
    break;}
case 149:
#line 1386 "preproc.y"
{
					yyval.str = cat2_str(make1_str("default"), yyvsp[0].str);
				;
    break;}
case 150:
#line 1390 "preproc.y"
{
					yyval.str = make1_str("not null");
				;
    break;}
case 151:
#line 1394 "preproc.y"
{
					yyval.str = make1_str("unique");
				;
    break;}
case 152:
#line 1398 "preproc.y"
{
					yyval.str = make1_str("primary key");
				;
    break;}
case 153:
#line 1402 "preproc.y"
{
					fprintf(stderr, "CREATE TABLE/FOREIGN KEY clause ignored; not yet implemented");
					yyval.str = make1_str("");
				;
    break;}
case 154:
#line 1409 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 155:
#line 1413 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 156:
#line 1427 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 157:
#line 1429 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 158:
#line 1431 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 159:
#line 1433 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 160:
#line 1435 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 161:
#line 1437 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 162:
#line 1439 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 163:
#line 1441 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 164:
#line 1443 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 165:
#line 1445 "preproc.y"
{	yyerror("boolean expressions not supported in DEFAULT"); ;
    break;}
case 166:
#line 1451 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 167:
#line 1453 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 168:
#line 1455 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str); ;
    break;}
case 169:
#line 1457 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str) , make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 170:
#line 1461 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 171:
#line 1463 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); ;
    break;}
case 172:
#line 1465 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); ;
    break;}
case 173:
#line 1467 "preproc.y"
{
					if (!strcmp("<=", yyvsp[-1].str) || !strcmp(">=", yyvsp[-1].str))
						yyerror("boolean expressions not supported in DEFAULT");
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 174:
#line 1473 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 175:
#line 1475 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 176:
#line 1478 "preproc.y"
{	yyval.str = make1_str("current_date"); ;
    break;}
case 177:
#line 1480 "preproc.y"
{	yyval.str = make1_str("current_time"); ;
    break;}
case 178:
#line 1482 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr, "CURRENT_TIME(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = "current_time";
				;
    break;}
case 179:
#line 1488 "preproc.y"
{	yyval.str = make1_str("current_timestamp"); ;
    break;}
case 180:
#line 1490 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr, "CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = "current_timestamp";
				;
    break;}
case 181:
#line 1496 "preproc.y"
{	yyval.str = make1_str("current_user"); ;
    break;}
case 182:
#line 1498 "preproc.y"
{       yyval.str = make1_str("user"); ;
    break;}
case 183:
#line 1506 "preproc.y"
{
						yyval.str = cat3_str(make1_str("constraint"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 184:
#line 1510 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 185:
#line 1514 "preproc.y"
{
					yyval.str = make3_str(make1_str("check("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 186:
#line 1518 "preproc.y"
{
					yyval.str = make3_str(make1_str("unique("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 187:
#line 1522 "preproc.y"
{
					yyval.str = make3_str(make1_str("primary key("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 188:
#line 1526 "preproc.y"
{
					fprintf(stderr, "CREATE TABLE/FOREIGN KEY clause ignored; not yet implemented");
					yyval.str = "";
				;
    break;}
case 189:
#line 1533 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 190:
#line 1537 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 191:
#line 1543 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 192:
#line 1545 "preproc.y"
{	yyval.str = make1_str("null"); ;
    break;}
case 193:
#line 1547 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 194:
#line 1551 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 195:
#line 1553 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 196:
#line 1555 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 197:
#line 1557 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 198:
#line 1559 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 199:
#line 1561 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 200:
#line 1563 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 201:
#line 1565 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 202:
#line 1567 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 203:
#line 1573 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 204:
#line 1575 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 205:
#line 1577 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 206:
#line 1581 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 207:
#line 1585 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 208:
#line 1587 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); }
				;
    break;}
case 209:
#line 1591 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 210:
#line 1595 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 211:
#line 1597 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 212:
#line 1599 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 213:
#line 1601 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 214:
#line 1603 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 215:
#line 1605 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 216:
#line 1607 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 217:
#line 1609 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 218:
#line 1611 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 219:
#line 1613 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 220:
#line 1615 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 221:
#line 1617 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 222:
#line 1619 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); ;
    break;}
case 223:
#line 1621 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); ;
    break;}
case 224:
#line 1623 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); ;
    break;}
case 225:
#line 1625 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); ;
    break;}
case 226:
#line 1627 "preproc.y"
{	yyval.str = cat4_str(yyvsp[-4].str, make1_str("in ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 227:
#line 1629 "preproc.y"
{	yyval.str = cat4_str(yyvsp[-5].str, make1_str("not in ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 228:
#line 1631 "preproc.y"
{	yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 229:
#line 1633 "preproc.y"
{	yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 230:
#line 1636 "preproc.y"
{
		yyval.str = make3_str(yyvsp[-2].str, make1_str(", "), yyvsp[0].str);
	;
    break;}
case 231:
#line 1640 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 232:
#line 1645 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 233:
#line 1649 "preproc.y"
{ yyval.str = make1_str("match full"); ;
    break;}
case 234:
#line 1650 "preproc.y"
{ yyval.str = make1_str("match partial"); ;
    break;}
case 235:
#line 1651 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 236:
#line 1654 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 237:
#line 1655 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 238:
#line 1656 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 239:
#line 1659 "preproc.y"
{ yyval.str = cat2_str(make1_str("on delete"), yyvsp[0].str); ;
    break;}
case 240:
#line 1660 "preproc.y"
{ yyval.str = cat2_str(make1_str("on update"), yyvsp[0].str); ;
    break;}
case 241:
#line 1663 "preproc.y"
{ yyval.str = make1_str("no action"); ;
    break;}
case 242:
#line 1664 "preproc.y"
{ yyval.str = make1_str("cascade"); ;
    break;}
case 243:
#line 1665 "preproc.y"
{ yyval.str = make1_str("set default"); ;
    break;}
case 244:
#line 1666 "preproc.y"
{ yyval.str = make1_str("set null"); ;
    break;}
case 245:
#line 1669 "preproc.y"
{ yyval.str = make3_str(make1_str("inherits ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 246:
#line 1670 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 247:
#line 1674 "preproc.y"
{
			yyval.str = cat5_str(cat3_str(make1_str("create"), yyvsp[-5].str, make1_str("table")), yyvsp[-3].str, yyvsp[-2].str, make1_str("as"), yyvsp[0].str); 
		;
    break;}
case 248:
#line 1679 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 249:
#line 1680 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 250:
#line 1683 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 251:
#line 1684 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 252:
#line 1687 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 253:
#line 1698 "preproc.y"
{
					yyval.str = cat3_str(make1_str("create sequence"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 254:
#line 1704 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 255:
#line 1705 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 256:
#line 1709 "preproc.y"
{
					yyval.str = cat2_str(make1_str("cache"), yyvsp[0].str);
				;
    break;}
case 257:
#line 1713 "preproc.y"
{
					yyval.str = make1_str("cycle");
				;
    break;}
case 258:
#line 1717 "preproc.y"
{
					yyval.str = cat2_str(make1_str("increment"), yyvsp[0].str);
				;
    break;}
case 259:
#line 1721 "preproc.y"
{
					yyval.str = cat2_str(make1_str("maxvalue"), yyvsp[0].str);
				;
    break;}
case 260:
#line 1725 "preproc.y"
{
					yyval.str = cat2_str(make1_str("minvalue"), yyvsp[0].str);
				;
    break;}
case 261:
#line 1729 "preproc.y"
{
					yyval.str = cat2_str(make1_str("start"), yyvsp[0].str);
				;
    break;}
case 262:
#line 1734 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 263:
#line 1735 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 264:
#line 1738 "preproc.y"
{
                                       yyval.str = yyvsp[0].str;
                               ;
    break;}
case 265:
#line 1742 "preproc.y"
{
                                       yyval.str = cat2_str(make1_str("-"), yyvsp[0].str);
                               ;
    break;}
case 266:
#line 1749 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 267:
#line 1753 "preproc.y"
{
					yyval.str = cat2_str(make1_str("-"), yyvsp[0].str);
				;
    break;}
case 268:
#line 1768 "preproc.y"
{
				yyval.str = cat4_str(cat5_str(make1_str("create"), yyvsp[-7].str, make1_str("precedural language"), yyvsp[-4].str, make1_str("handler")), yyvsp[-2].str, make1_str("langcompiler"), yyvsp[0].str);
			;
    break;}
case 269:
#line 1773 "preproc.y"
{ yyval.str = make1_str("trusted"); ;
    break;}
case 270:
#line 1774 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 271:
#line 1777 "preproc.y"
{
				yyval.str = cat2_str(make1_str("drop procedural language"), yyvsp[0].str);
			;
    break;}
case 272:
#line 1793 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create trigger"), yyvsp[-11].str, yyvsp[-10].str, yyvsp[-9].str, make1_str("on")), yyvsp[-7].str, yyvsp[-6].str, make1_str("execute procedure"), yyvsp[-3].str), make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 273:
#line 1798 "preproc.y"
{ yyval.str = make1_str("before"); ;
    break;}
case 274:
#line 1799 "preproc.y"
{ yyval.str = make1_str("after"); ;
    break;}
case 275:
#line 1803 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 276:
#line 1807 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str);
				;
    break;}
case 277:
#line 1811 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("or"), yyvsp[-2].str, make1_str("or"), yyvsp[0].str);
				;
    break;}
case 278:
#line 1816 "preproc.y"
{ yyval.str = make1_str("insert"); ;
    break;}
case 279:
#line 1817 "preproc.y"
{ yyval.str = make1_str("delete"); ;
    break;}
case 280:
#line 1818 "preproc.y"
{ yyval.str = make1_str("update"); ;
    break;}
case 281:
#line 1822 "preproc.y"
{
					yyval.str = cat3_str(make1_str("for"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 282:
#line 1827 "preproc.y"
{ yyval.str = make1_str("each"); ;
    break;}
case 283:
#line 1828 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 284:
#line 1831 "preproc.y"
{ yyval.str = make1_str("row"); ;
    break;}
case 285:
#line 1832 "preproc.y"
{ yyval.str = make1_str("statement"); ;
    break;}
case 286:
#line 1836 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 287:
#line 1838 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 288:
#line 1840 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 289:
#line 1844 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 290:
#line 1848 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 291:
#line 1851 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 292:
#line 1852 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 293:
#line 1856 "preproc.y"
{
					yyval.str = cat4_str(make1_str("drop trigger"), yyvsp[-2].str, make1_str("on"), yyvsp[0].str);
				;
    break;}
case 294:
#line 1869 "preproc.y"
{
					yyval.str = cat3_str(make1_str("create"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 295:
#line 1875 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 296:
#line 1880 "preproc.y"
{ yyval.str = make1_str("operator"); ;
    break;}
case 297:
#line 1881 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 298:
#line 1882 "preproc.y"
{ yyval.str = make1_str("aggregate"); ;
    break;}
case 299:
#line 1885 "preproc.y"
{ yyval.str = make1_str("procedure"); ;
    break;}
case 300:
#line 1886 "preproc.y"
{ yyval.str = make1_str("join"); ;
    break;}
case 301:
#line 1887 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 302:
#line 1888 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 303:
#line 1889 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 304:
#line 1892 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 305:
#line 1895 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 306:
#line 1896 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 307:
#line 1899 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 308:
#line 1903 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 309:
#line 1907 "preproc.y"
{
					yyval.str = cat2_str(make1_str("default ="), yyvsp[0].str);
				;
    break;}
case 310:
#line 1912 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 311:
#line 1913 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 312:
#line 1914 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 313:
#line 1915 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 314:
#line 1917 "preproc.y"
{
					yyval.str = cat2_str(make1_str("setof"), yyvsp[0].str);
				;
    break;}
case 315:
#line 1930 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop table"), yyvsp[0].str);
				;
    break;}
case 316:
#line 1934 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop sequence"), yyvsp[0].str);
				;
    break;}
case 317:
#line 1951 "preproc.y"
{
					if (strncmp(yyvsp[-4].str, "relative", strlen("relative")) == 0 && atol(yyvsp[-3].str) == 0L)
						yyerror("FETCH/RELATIVE at current position is not supported");

					yyval.str = cat4_str(make1_str("fetch"), yyvsp[-4].str, yyvsp[-3].str, yyvsp[-2].str);
				;
    break;}
case 318:
#line 1958 "preproc.y"
{
					yyval.str = cat4_str(make1_str("fetch"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 319:
#line 1963 "preproc.y"
{ yyval.str = make1_str("forward"); ;
    break;}
case 320:
#line 1964 "preproc.y"
{ yyval.str = make1_str("backward"); ;
    break;}
case 321:
#line 1965 "preproc.y"
{ yyval.str = make1_str("relative"); ;
    break;}
case 322:
#line 1967 "preproc.y"
{
					fprintf(stderr, "FETCH/ABSOLUTE not supported, using RELATIVE");
					yyval.str = make1_str("absolute");
				;
    break;}
case 323:
#line 1971 "preproc.y"
{ yyval.str = make1_str(""); /* default */ ;
    break;}
case 324:
#line 1974 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 325:
#line 1975 "preproc.y"
{ yyval.str = make2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 326:
#line 1976 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 327:
#line 1977 "preproc.y"
{ yyval.str = make1_str("next"); ;
    break;}
case 328:
#line 1978 "preproc.y"
{ yyval.str = make1_str("prior"); ;
    break;}
case 329:
#line 1979 "preproc.y"
{ yyval.str = make1_str(""); /*default*/ ;
    break;}
case 330:
#line 1982 "preproc.y"
{ yyval.str = cat2_str(make1_str("in"), yyvsp[0].str); ;
    break;}
case 331:
#line 1983 "preproc.y"
{ yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 332:
#line 1985 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 333:
#line 1997 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("grant"), yyvsp[-5].str, make1_str("on"), yyvsp[-3].str, make1_str("to")), yyvsp[-1].str);
				;
    break;}
case 334:
#line 2003 "preproc.y"
{
				 yyval.str = make1_str("all privileges");
				;
    break;}
case 335:
#line 2007 "preproc.y"
{
				 yyval.str = make1_str("all");
				;
    break;}
case 336:
#line 2011 "preproc.y"
{
				 yyval.str = yyvsp[0].str;
				;
    break;}
case 337:
#line 2017 "preproc.y"
{
						yyval.str = yyvsp[0].str;
				;
    break;}
case 338:
#line 2021 "preproc.y"
{
						yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 339:
#line 2027 "preproc.y"
{
						yyval.str = make1_str("select");
				;
    break;}
case 340:
#line 2031 "preproc.y"
{
						yyval.str = make1_str("insert");
				;
    break;}
case 341:
#line 2035 "preproc.y"
{
						yyval.str = make1_str("update");
				;
    break;}
case 342:
#line 2039 "preproc.y"
{
						yyval.str = make1_str("delete");
				;
    break;}
case 343:
#line 2043 "preproc.y"
{
						yyval.str = make1_str("rule");
				;
    break;}
case 344:
#line 2049 "preproc.y"
{
						yyval.str = make1_str("public");
				;
    break;}
case 345:
#line 2053 "preproc.y"
{
						yyval.str = cat2_str(make1_str("group"), yyvsp[0].str);
				;
    break;}
case 346:
#line 2057 "preproc.y"
{
						yyval.str = yyvsp[0].str;
				;
    break;}
case 347:
#line 2063 "preproc.y"
{
					yyerror("WITH GRANT OPTION is not supported.  Only relation owners can set privileges");
				 ;
    break;}
case 349:
#line 2078 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("revoke"), yyvsp[-4].str, make1_str("on"), yyvsp[-2].str, make1_str("from")), yyvsp[0].str);
				;
    break;}
case 350:
#line 2097 "preproc.y"
{
					/* should check that access_method is valid,
					   etc ... but doesn't */
					yyval.str = cat5_str(cat5_str(make1_str("create"), yyvsp[-9].str, make1_str("index"), yyvsp[-7].str, make1_str("on")), yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("("), yyvsp[-2].str, make1_str(")")), yyvsp[0].str);
				;
    break;}
case 351:
#line 2104 "preproc.y"
{ yyval.str = make1_str("unique"); ;
    break;}
case 352:
#line 2105 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 353:
#line 2108 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 354:
#line 2109 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 355:
#line 2112 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 356:
#line 2113 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 357:
#line 2116 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 358:
#line 2117 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 359:
#line 2121 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-5].str, make3_str(make1_str("("), yyvsp[-3].str, ")"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 360:
#line 2127 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 361:
#line 2132 "preproc.y"
{ yyval.str = cat2_str(make1_str(":"), yyvsp[0].str); ;
    break;}
case 362:
#line 2133 "preproc.y"
{ yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 363:
#line 2134 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 364:
#line 2143 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 365:
#line 2144 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 366:
#line 2145 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 367:
#line 2156 "preproc.y"
{
					yyval.str = cat3_str(make1_str("extend index"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 368:
#line 2193 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create function"), yyvsp[-8].str, yyvsp[-7].str, make1_str("returns"), yyvsp[-5].str), yyvsp[-4].str, make1_str("as"), yyvsp[-2].str, make1_str("language")), yyvsp[0].str);
				;
    break;}
case 369:
#line 2197 "preproc.y"
{ yyval.str = cat2_str(make1_str("with"), yyvsp[0].str); ;
    break;}
case 370:
#line 2198 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 371:
#line 2201 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 372:
#line 2202 "preproc.y"
{ yyval.str = make1_str("()"); ;
    break;}
case 373:
#line 2205 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 374:
#line 2207 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 375:
#line 2211 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 376:
#line 2216 "preproc.y"
{ yyval.str = make1_str("setof"); ;
    break;}
case 377:
#line 2217 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 378:
#line 2239 "preproc.y"
{
					yyval.str = cat3_str(make1_str("drop"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 379:
#line 2244 "preproc.y"
{  yyval.str = make1_str("type"); ;
    break;}
case 380:
#line 2245 "preproc.y"
{  yyval.str = make1_str("index"); ;
    break;}
case 381:
#line 2246 "preproc.y"
{  yyval.str = make1_str("rule"); ;
    break;}
case 382:
#line 2247 "preproc.y"
{  yyval.str = make1_str("view"); ;
    break;}
case 383:
#line 2252 "preproc.y"
{
						yyval.str = cat3_str(make1_str("drop aggregate"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 384:
#line 2257 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 385:
#line 2258 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 386:
#line 2263 "preproc.y"
{
						yyval.str = cat3_str(make1_str("drop function"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 387:
#line 2270 "preproc.y"
{
					yyval.str = cat3_str(make1_str("drop operator"), yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 390:
#line 2277 "preproc.y"
{ yyval.str = make1_str("+"); ;
    break;}
case 391:
#line 2278 "preproc.y"
{ yyval.str = make1_str("-"); ;
    break;}
case 392:
#line 2279 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 393:
#line 2280 "preproc.y"
{ yyval.str = make1_str("%"); ;
    break;}
case 394:
#line 2281 "preproc.y"
{ yyval.str = make1_str("/"); ;
    break;}
case 395:
#line 2282 "preproc.y"
{ yyval.str = make1_str("<"); ;
    break;}
case 396:
#line 2283 "preproc.y"
{ yyval.str = make1_str(">"); ;
    break;}
case 397:
#line 2284 "preproc.y"
{ yyval.str = make1_str("="); ;
    break;}
case 398:
#line 2288 "preproc.y"
{
				   yyerror("parser: argument type missing (use NONE for unary operators)");
				;
    break;}
case 399:
#line 2292 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 400:
#line 2294 "preproc.y"
{ yyval.str = cat2_str(make1_str("none,"), yyvsp[0].str); ;
    break;}
case 401:
#line 2296 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-2].str, make1_str(", none")); ;
    break;}
case 402:
#line 2310 "preproc.y"
{
					yyval.str = cat4_str(cat5_str(make1_str("alter table"), yyvsp[-6].str, yyvsp[-5].str, make1_str("rename"), yyvsp[-3].str), yyvsp[-2].str, make1_str("to"), yyvsp[0].str);
				;
    break;}
case 403:
#line 2315 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 404:
#line 2316 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 405:
#line 2319 "preproc.y"
{ yyval.str = make1_str("colmunn"); ;
    break;}
case 406:
#line 2320 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 407:
#line 2334 "preproc.y"
{ QueryIsRule=1; ;
    break;}
case 408:
#line 2337 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(cat5_str(make1_str("create rule"), yyvsp[-10].str, make1_str("as on"), yyvsp[-6].str, make1_str("to")), yyvsp[-4].str, yyvsp[-3].str, make1_str("do"), yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 409:
#line 2342 "preproc.y"
{ yyval.str = make1_str("nothing"); ;
    break;}
case 410:
#line 2343 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 411:
#line 2344 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 412:
#line 2345 "preproc.y"
{ yyval.str = cat3_str(make1_str("["), yyvsp[-1].str, make1_str("]")); ;
    break;}
case 413:
#line 2346 "preproc.y"
{ yyval.str = cat3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 414:
#line 2349 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 415:
#line 2350 "preproc.y"
{  yyval.str = yyvsp[0].str; ;
    break;}
case 416:
#line 2354 "preproc.y"
{  yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 417:
#line 2356 "preproc.y"
{  yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, make1_str(";")); ;
    break;}
case 418:
#line 2358 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, make1_str(";")); ;
    break;}
case 423:
#line 2368 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 424:
#line 2372 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 425:
#line 2378 "preproc.y"
{ yyval.str = make1_str("select"); ;
    break;}
case 426:
#line 2379 "preproc.y"
{ yyval.str = make1_str("update"); ;
    break;}
case 427:
#line 2380 "preproc.y"
{ yyval.str = make1_str("delete"); ;
    break;}
case 428:
#line 2381 "preproc.y"
{ yyval.str = make1_str("insert"); ;
    break;}
case 429:
#line 2384 "preproc.y"
{ yyval.str = make1_str("instead"); ;
    break;}
case 430:
#line 2385 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 431:
#line 2398 "preproc.y"
{
					yyval.str = cat2_str(make1_str("notify"), yyvsp[0].str);
				;
    break;}
case 432:
#line 2404 "preproc.y"
{
					yyval.str = cat2_str(make1_str("listen"), yyvsp[0].str);
                                ;
    break;}
case 433:
#line 2410 "preproc.y"
{
					yyval.str = cat2_str(make1_str("unlisten"), yyvsp[0].str);
                                ;
    break;}
case 434:
#line 2414 "preproc.y"
{
					yyval.str = make1_str("unlisten *");
                                ;
    break;}
case 435:
#line 2431 "preproc.y"
{ yyval.str = make1_str("rollback"); ;
    break;}
case 436:
#line 2432 "preproc.y"
{ yyval.str = make1_str("begin transaction"); ;
    break;}
case 437:
#line 2433 "preproc.y"
{ yyval.str = make1_str("commit"); ;
    break;}
case 438:
#line 2434 "preproc.y"
{ yyval.str = make1_str("commit"); ;
    break;}
case 439:
#line 2435 "preproc.y"
{ yyval.str = make1_str("rollback"); ;
    break;}
case 440:
#line 2437 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 441:
#line 2438 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 442:
#line 2439 "preproc.y"
{ yyval.str = ""; ;
    break;}
case 443:
#line 2450 "preproc.y"
{
					yyval.str = cat4_str(make1_str("create view"), yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
				;
    break;}
case 444:
#line 2464 "preproc.y"
{
					yyval.str = cat2_str(make1_str("load"), yyvsp[0].str);
				;
    break;}
case 445:
#line 2478 "preproc.y"
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
case 446:
#line 2488 "preproc.y"
{
					yyval.str = cat2_str(make1_str("create database"), yyvsp[0].str);
				;
    break;}
case 447:
#line 2493 "preproc.y"
{ yyval.str = cat2_str(make1_str("location ="), yyvsp[0].str); ;
    break;}
case 448:
#line 2494 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 449:
#line 2497 "preproc.y"
{ yyval.str = cat2_str(make1_str("encoding ="), yyvsp[0].str); ;
    break;}
case 450:
#line 2498 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 451:
#line 2501 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 452:
#line 2502 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 453:
#line 2503 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 454:
#line 2506 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 455:
#line 2507 "preproc.y"
{ yyval.str = make1_str("default"); ;
    break;}
case 456:
#line 2508 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 457:
#line 2519 "preproc.y"
{
					yyval.str = cat2_str(make1_str("drop database"), yyvsp[0].str);
				;
    break;}
case 458:
#line 2533 "preproc.y"
{
				   yyval.str = cat4_str(make1_str("cluster"), yyvsp[-2].str, make1_str("on"), yyvsp[0].str);
				;
    break;}
case 459:
#line 2547 "preproc.y"
{
					yyval.str = cat3_str(make1_str("vacuum"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 460:
#line 2551 "preproc.y"
{
					if ( strlen(yyvsp[0].str) > 0 && strlen(yyvsp[-1].str) == 0 )
						yyerror("parser: syntax error at or near \"(\"");
					yyval.str = cat5_str(make1_str("vacuum"), yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 461:
#line 2558 "preproc.y"
{ yyval.str = make1_str("verbose"); ;
    break;}
case 462:
#line 2559 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 463:
#line 2562 "preproc.y"
{ yyval.str = make1_str("analyse"); ;
    break;}
case 464:
#line 2563 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 465:
#line 2566 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 466:
#line 2567 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 467:
#line 2571 "preproc.y"
{ yyval.str=yyvsp[0].str; ;
    break;}
case 468:
#line 2573 "preproc.y"
{ yyval.str=cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 469:
#line 2585 "preproc.y"
{
					yyval.str = cat3_str(make1_str("explain"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 476:
#line 2625 "preproc.y"
{
					yyval.str = cat3_str(make1_str("insert into"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 477:
#line 2631 "preproc.y"
{
					yyval.str = make3_str(make1_str("values("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 478:
#line 2635 "preproc.y"
{
					yyval.str = make1_str("default values");
				;
    break;}
case 479:
#line 2639 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 480:
#line 2643 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-5].str, make1_str(") values ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 481:
#line 2647 "preproc.y"
{
					yyval.str = make4_str(make1_str("("), yyvsp[-2].str, make1_str(")"), yyvsp[0].str);
				;
    break;}
case 482:
#line 2652 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 483:
#line 2653 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 484:
#line 2658 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 485:
#line 2660 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 486:
#line 2664 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 487:
#line 2679 "preproc.y"
{
					yyval.str = cat3_str(make1_str("delete from"), yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 488:
#line 2685 "preproc.y"
{
					yyval.str = cat4_str(make1_str("lock"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 489:
#line 2690 "preproc.y"
{ yyval.str = cat3_str(make1_str("in"), yyvsp[-1].str, make1_str("mode")); ;
    break;}
case 490:
#line 2691 "preproc.y"
{ yyval.str = make1_str("");;
    break;}
case 491:
#line 2694 "preproc.y"
{ yyval.str = make1_str("share row exclusive"); ;
    break;}
case 492:
#line 2695 "preproc.y"
{ yyval.str = cat2_str(make1_str("row"), yyvsp[0].str);;
    break;}
case 493:
#line 2696 "preproc.y"
{ yyval.str = cat2_str(make1_str("access"), yyvsp[0].str);;
    break;}
case 494:
#line 2697 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 495:
#line 2700 "preproc.y"
{ yyval.str = make1_str("share"); ;
    break;}
case 496:
#line 2701 "preproc.y"
{ yyval.str = make1_str("exclusive"); ;
    break;}
case 497:
#line 2715 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("update"), yyvsp[-4].str, make1_str("set"), yyvsp[-2].str, yyvsp[-1].str), yyvsp[0].str);
				;
    break;}
case 498:
#line 2728 "preproc.y"
{ ForUpdateNotAllowed = 1; ;
    break;}
case 499:
#line 2730 "preproc.y"
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
				        this->command =  cat5_str(make1_str("declare"), mm_strdup(yyvsp[-5].str), yyvsp[-4].str, make1_str("cursor for"), yyvsp[0].str);
					this->argsinsert = argsinsert;
					this->argsresult = argsresult;
					argsinsert = argsresult = NULL;
											
			        	cur = this;
					
					yyval.str = cat3_str(make1_str("/*"), mm_strdup(this->command), make1_str("*/"));
				;
    break;}
case 500:
#line 2760 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 501:
#line 2761 "preproc.y"
{ yyval.str = make1_str("insensitive"); ;
    break;}
case 502:
#line 2762 "preproc.y"
{ yyval.str = make1_str("scroll"); ;
    break;}
case 503:
#line 2763 "preproc.y"
{ yyval.str = make1_str("insensitive scroll"); ;
    break;}
case 504:
#line 2764 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 505:
#line 2782 "preproc.y"
{
					if (strlen(yyvsp[-1].str) > 0 && ForUpdateNotAllowed != 0)
							yyerror("FOR UPDATE is not allowed in this context");

					ForUpdateNotAllowed = 0;
					yyval.str = cat4_str(yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 506:
#line 2799 "preproc.y"
{
                               yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); 
                        ;
    break;}
case 507:
#line 2803 "preproc.y"
{
                               yyval.str = yyvsp[0].str; 
                        ;
    break;}
case 508:
#line 2807 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-2].str, make1_str("except"), yyvsp[0].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 509:
#line 2812 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-3].str, make1_str("union"), yyvsp[-1].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 510:
#line 2817 "preproc.y"
{
				yyval.str = cat3_str(yyvsp[-3].str, make1_str("intersect"), yyvsp[-1].str);
				ForUpdateNotAllowed = 1;
			;
    break;}
case 511:
#line 2827 "preproc.y"
{
					yyval.str = cat4_str(cat5_str(make1_str("select"), yyvsp[-6].str, yyvsp[-5].str, yyvsp[-4].str, yyvsp[-3].str), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
					if (strlen(yyvsp[-1].str) > 0 || strlen(yyvsp[0].str) > 0)
						ForUpdateNotAllowed = 1;
				;
    break;}
case 512:
#line 2834 "preproc.y"
{ yyval.str= cat4_str(make1_str("into"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 513:
#line 2835 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 514:
#line 2836 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 515:
#line 2839 "preproc.y"
{ yyval.str = make1_str("table"); ;
    break;}
case 516:
#line 2840 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 517:
#line 2843 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 518:
#line 2844 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 519:
#line 2847 "preproc.y"
{ yyval.str = make1_str("distinct"); ;
    break;}
case 520:
#line 2848 "preproc.y"
{ yyval.str = cat2_str(make1_str("distinct on"), yyvsp[0].str); ;
    break;}
case 521:
#line 2849 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 522:
#line 2850 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 523:
#line 2853 "preproc.y"
{ yyval.str = cat2_str(make1_str("order by"), yyvsp[0].str); ;
    break;}
case 524:
#line 2854 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 525:
#line 2857 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 526:
#line 2858 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 527:
#line 2862 "preproc.y"
{
					 yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 528:
#line 2867 "preproc.y"
{ yyval.str = cat2_str(make1_str("using"), yyvsp[0].str); ;
    break;}
case 529:
#line 2868 "preproc.y"
{ yyval.str = make1_str("using <"); ;
    break;}
case 530:
#line 2869 "preproc.y"
{ yyval.str = make1_str("using >"); ;
    break;}
case 531:
#line 2870 "preproc.y"
{ yyval.str = make1_str("asc"); ;
    break;}
case 532:
#line 2871 "preproc.y"
{ yyval.str = make1_str("desc"); ;
    break;}
case 533:
#line 2872 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 534:
#line 2876 "preproc.y"
{ yyval.str = cat4_str(make1_str("limit"), yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 535:
#line 2878 "preproc.y"
{ yyval.str = cat4_str(make1_str("limit"), yyvsp[-2].str, make1_str("offset"), yyvsp[0].str); ;
    break;}
case 536:
#line 2880 "preproc.y"
{ yyval.str = cat2_str(make1_str("limit"), yyvsp[0].str); ;
    break;}
case 537:
#line 2882 "preproc.y"
{ yyval.str = cat4_str(make1_str("offset"), yyvsp[-2].str, make1_str("limit"), yyvsp[0].str); ;
    break;}
case 538:
#line 2884 "preproc.y"
{ yyval.str = cat2_str(make1_str("offset"), yyvsp[0].str); ;
    break;}
case 539:
#line 2886 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 540:
#line 2889 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 541:
#line 2890 "preproc.y"
{ yyval.str = make1_str("all"); ;
    break;}
case 542:
#line 2891 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 543:
#line 2894 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 544:
#line 2895 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 545:
#line 2905 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 546:
#line 2906 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 547:
#line 2909 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 548:
#line 2912 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 549:
#line 2914 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 550:
#line 2917 "preproc.y"
{ yyval.str = cat2_str(make1_str("groub by"), yyvsp[0].str); ;
    break;}
case 551:
#line 2918 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 552:
#line 2922 "preproc.y"
{
					yyval.str = cat2_str(make1_str("having"), yyvsp[0].str);
				;
    break;}
case 553:
#line 2925 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 554:
#line 2929 "preproc.y"
{
                	yyval.str = make1_str("for update"); 
		;
    break;}
case 555:
#line 2933 "preproc.y"
{
			yyval.str = make1_str("for read only");
		;
    break;}
case 556:
#line 2937 "preproc.y"
{
                        yyval.str = make1_str("");
                ;
    break;}
case 557:
#line 2942 "preproc.y"
{
			yyval.str = cat2_str(make1_str("of"), yyvsp[0].str);
	      ;
    break;}
case 558:
#line 2946 "preproc.y"
{
                        yyval.str = make1_str("");
              ;
    break;}
case 559:
#line 2960 "preproc.y"
{
			yyval.str = cat2_str(make1_str("from"), yyvsp[0].str);
		;
    break;}
case 560:
#line 2964 "preproc.y"
{
			yyval.str = make1_str("");
		;
    break;}
case 561:
#line 2970 "preproc.y"
{ yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 562:
#line 2972 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 563:
#line 2974 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 564:
#line 2978 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 565:
#line 2980 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 566:
#line 2984 "preproc.y"
{
                                        yyval.str = cat3_str(yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
                                ;
    break;}
case 567:
#line 2988 "preproc.y"
{
                                        yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 568:
#line 2992 "preproc.y"
{
                                        yyval.str = yyvsp[0].str;
                                ;
    break;}
case 569:
#line 3002 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 570:
#line 3004 "preproc.y"
{       yyerror("UNION JOIN not yet implemented"); ;
    break;}
case 571:
#line 3008 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 572:
#line 3014 "preproc.y"
{
                                        yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 573:
#line 3018 "preproc.y"
{
                                        yyval.str = yyvsp[0].str;
                                ;
    break;}
case 574:
#line 3031 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-3].str, make1_str("join"), yyvsp[-1].str, yyvsp[0].str);
                                ;
    break;}
case 575:
#line 3035 "preproc.y"
{
					yyval.str = cat4_str(make1_str("natural"), yyvsp[-2].str, make1_str("join"), yyvsp[0].str);
                                ;
    break;}
case 576:
#line 3039 "preproc.y"
{ 	yyval.str = cat2_str(make1_str("cross join"), yyvsp[0].str); ;
    break;}
case 577:
#line 3044 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("full"), yyvsp[0].str);
                                        fprintf(stderr,"FULL OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 578:
#line 3049 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("left"), yyvsp[0].str);
                                        fprintf(stderr,"LEFT OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 579:
#line 3054 "preproc.y"
{
                                        yyval.str = cat2_str(make1_str("right"), yyvsp[0].str);
                                        fprintf(stderr,"RIGHT OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 580:
#line 3059 "preproc.y"
{
                                        yyval.str = make1_str("outer");
                                        fprintf(stderr,"OUTER JOIN not yet implemented\n");
                                ;
    break;}
case 581:
#line 3064 "preproc.y"
{
                                        yyval.str = make1_str("inner");
				;
    break;}
case 582:
#line 3068 "preproc.y"
{
                                        yyval.str = make1_str("");
				;
    break;}
case 583:
#line 3073 "preproc.y"
{ yyval.str = make1_str("outer"); ;
    break;}
case 584:
#line 3074 "preproc.y"
{ yyval.str = make1_str("");  /* no qualifiers */ ;
    break;}
case 585:
#line 3085 "preproc.y"
{ yyval.str = make3_str(make1_str("using ("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 586:
#line 3086 "preproc.y"
{ yyval.str = cat2_str(make1_str("on"), yyvsp[0].str); ;
    break;}
case 587:
#line 3089 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 588:
#line 3090 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 589:
#line 3094 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 590:
#line 3099 "preproc.y"
{ yyval.str = cat2_str(make1_str("where"), yyvsp[0].str); ;
    break;}
case 591:
#line 3100 "preproc.y"
{ yyval.str = make1_str("");  /* no qualifiers */ ;
    break;}
case 592:
#line 3104 "preproc.y"
{
					/* normal relations */
					yyval.str = yyvsp[0].str;
				;
    break;}
case 593:
#line 3109 "preproc.y"
{
					/* inheritance query */
					yyval.str = cat2_str(yyvsp[-1].str, make1_str("*"));
				;
    break;}
case 594:
#line 3115 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 595:
#line 3121 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 596:
#line 3130 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 597:
#line 3138 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 598:
#line 3144 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 599:
#line 3153 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 600:
#line 3160 "preproc.y"
{ yyval.ival = atol(yyvsp[0].str); ;
    break;}
case 601:
#line 3161 "preproc.y"
{ yyval.ival = yyvsp[-1].ival; ;
    break;}
case 602:
#line 3162 "preproc.y"
{ yyval.ival = yyvsp[-2].ival + yyvsp[0].ival; ;
    break;}
case 603:
#line 3163 "preproc.y"
{ yyval.ival = yyvsp[-2].ival - yyvsp[0].ival; ;
    break;}
case 604:
#line 3164 "preproc.y"
{ yyval.ival = yyvsp[-2].ival * yyvsp[0].ival; ;
    break;}
case 605:
#line 3165 "preproc.y"
{ yyval.ival = yyvsp[-2].ival / yyvsp[0].ival; ;
    break;}
case 606:
#line 3166 "preproc.y"
{ yyval.ival = yyvsp[-2].ival % yyvsp[0].ival; ;
    break;}
case 607:
#line 3181 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].index.str);
				;
    break;}
case 608:
#line 3185 "preproc.y"
{
					yyval.str = cat2_str(make1_str("setof"), yyvsp[0].str);
				;
    break;}
case 609:
#line 3190 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 610:
#line 3191 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 611:
#line 3192 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 612:
#line 3193 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 613:
#line 3197 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 614:
#line 3202 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 615:
#line 3203 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 616:
#line 3204 "preproc.y"
{ yyval.str = make1_str("at"); ;
    break;}
case 617:
#line 3205 "preproc.y"
{ yyval.str = make1_str("autocommit"); ;
    break;}
case 618:
#line 3206 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 619:
#line 3207 "preproc.y"
{ yyval.str = make1_str("break"); ;
    break;}
case 620:
#line 3208 "preproc.y"
{ yyval.str = make1_str("call"); ;
    break;}
case 621:
#line 3209 "preproc.y"
{ yyval.str = make1_str("connect"); ;
    break;}
case 622:
#line 3210 "preproc.y"
{ yyval.str = make1_str("connection"); ;
    break;}
case 623:
#line 3211 "preproc.y"
{ yyval.str = make1_str("continue"); ;
    break;}
case 624:
#line 3212 "preproc.y"
{ yyval.str = make1_str("deallocate"); ;
    break;}
case 625:
#line 3213 "preproc.y"
{ yyval.str = make1_str("disconnect"); ;
    break;}
case 626:
#line 3214 "preproc.y"
{ yyval.str = make1_str("found"); ;
    break;}
case 627:
#line 3215 "preproc.y"
{ yyval.str = make1_str("go"); ;
    break;}
case 628:
#line 3216 "preproc.y"
{ yyval.str = make1_str("goto"); ;
    break;}
case 629:
#line 3217 "preproc.y"
{ yyval.str = make1_str("identified"); ;
    break;}
case 630:
#line 3218 "preproc.y"
{ yyval.str = make1_str("immediate"); ;
    break;}
case 631:
#line 3219 "preproc.y"
{ yyval.str = make1_str("indicator"); ;
    break;}
case 632:
#line 3220 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 633:
#line 3221 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 634:
#line 3222 "preproc.y"
{ yyval.str = make1_str("off"); ;
    break;}
case 635:
#line 3223 "preproc.y"
{ yyval.str = make1_str("open"); ;
    break;}
case 636:
#line 3224 "preproc.y"
{ yyval.str = make1_str("prepare"); ;
    break;}
case 637:
#line 3225 "preproc.y"
{ yyval.str = make1_str("release"); ;
    break;}
case 638:
#line 3226 "preproc.y"
{ yyval.str = make1_str("section"); ;
    break;}
case 639:
#line 3227 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 640:
#line 3228 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 641:
#line 3229 "preproc.y"
{ yyval.str = make1_str("sqlerror"); ;
    break;}
case 642:
#line 3230 "preproc.y"
{ yyval.str = make1_str("sqlprint"); ;
    break;}
case 643:
#line 3231 "preproc.y"
{ yyval.str = make1_str("sqlwarning"); ;
    break;}
case 644:
#line 3232 "preproc.y"
{ yyval.str = make1_str("stop"); ;
    break;}
case 645:
#line 3233 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 646:
#line 3234 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 647:
#line 3235 "preproc.y"
{ yyval.str = make1_str("var"); ;
    break;}
case 648:
#line 3236 "preproc.y"
{ yyval.str = make1_str("whenever"); ;
    break;}
case 649:
#line 3245 "preproc.y"
{
					yyval.str = cat2_str(make1_str("float"), yyvsp[0].str);
				;
    break;}
case 650:
#line 3249 "preproc.y"
{
					yyval.str = make1_str("double precision");
				;
    break;}
case 651:
#line 3253 "preproc.y"
{
					yyval.str = cat2_str(make1_str("decimal"), yyvsp[0].str);
				;
    break;}
case 652:
#line 3257 "preproc.y"
{
					yyval.str = cat2_str(make1_str("numeric"), yyvsp[0].str);
				;
    break;}
case 653:
#line 3263 "preproc.y"
{	yyval.str = make1_str("float"); ;
    break;}
case 654:
#line 3265 "preproc.y"
{	yyval.str = make1_str("double precision"); ;
    break;}
case 655:
#line 3267 "preproc.y"
{	yyval.str = make1_str("decimal"); ;
    break;}
case 656:
#line 3269 "preproc.y"
{	yyval.str = make1_str("numeric"); ;
    break;}
case 657:
#line 3273 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1)
						yyerror("precision for FLOAT must be at least 1");
					else if (atol(yyvsp[-1].str) >= 16)
						yyerror("precision for FLOAT must be less than 16");
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 658:
#line 3281 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 659:
#line 3287 "preproc.y"
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
case 660:
#line 3299 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1 || atol(yyvsp[-1].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-1].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 661:
#line 3307 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 662:
#line 3313 "preproc.y"
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
case 663:
#line 3325 "preproc.y"
{
					if (atol(yyvsp[-1].str) < 1 || atol(yyvsp[-1].str) > NUMERIC_MAX_PRECISION) {
						sprintf(errortext, "NUMERIC precision %s must be between 1 and %d", yyvsp[-1].str, NUMERIC_MAX_PRECISION);
						yyerror(errortext);
					}
					yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 664:
#line 3333 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 665:
#line 3343 "preproc.y"
{
					if (strncasecmp(yyvsp[-3].str, "char", strlen("char")) && strncasecmp(yyvsp[-3].str, "varchar", strlen("varchar")))
						yyerror("internal parsing error; unrecognized character type");
					if (atol(yyvsp[-1].str) < 1) {
						sprintf(errortext, "length for '%s' type must be at least 1",yyvsp[-3].str);
						yyerror(errortext);
					}
					else if (atol(yyvsp[-1].str) > BLCKSZ - 128) {
						sprintf(errortext, "length for type '%s' cannot exceed %d",yyvsp[-3].str,BLCKSZ - 128);
						yyerror(errortext);
					}

					yyval.str = cat2_str(yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 666:
#line 3358 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 667:
#line 3364 "preproc.y"
{
					if (strlen(yyvsp[0].str) > 0) 
						fprintf(stderr, "COLLATE %s not yet implemented",yyvsp[0].str);

					yyval.str = cat4_str(make1_str("character"), yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 668:
#line 3370 "preproc.y"
{ yyval.str = cat2_str(make1_str("char"), yyvsp[0].str); ;
    break;}
case 669:
#line 3371 "preproc.y"
{ yyval.str = make1_str("varchar"); ;
    break;}
case 670:
#line 3372 "preproc.y"
{ yyval.str = cat2_str(make1_str("national character"), yyvsp[0].str); ;
    break;}
case 671:
#line 3373 "preproc.y"
{ yyval.str = cat2_str(make1_str("nchar"), yyvsp[0].str); ;
    break;}
case 672:
#line 3376 "preproc.y"
{ yyval.str = make1_str("varying"); ;
    break;}
case 673:
#line 3377 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 674:
#line 3380 "preproc.y"
{ yyval.str = cat2_str(make1_str("character set"), yyvsp[0].str); ;
    break;}
case 675:
#line 3381 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 676:
#line 3384 "preproc.y"
{ yyval.str = cat2_str(make1_str("collate"), yyvsp[0].str); ;
    break;}
case 677:
#line 3385 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 678:
#line 3389 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 679:
#line 3393 "preproc.y"
{
					yyval.str = cat2_str(make1_str("timestamp"), yyvsp[0].str);
				;
    break;}
case 680:
#line 3397 "preproc.y"
{
					yyval.str = make1_str("time");
				;
    break;}
case 681:
#line 3401 "preproc.y"
{
					yyval.str = cat2_str(make1_str("interval"), yyvsp[0].str);
				;
    break;}
case 682:
#line 3406 "preproc.y"
{ yyval.str = make1_str("year"); ;
    break;}
case 683:
#line 3407 "preproc.y"
{ yyval.str = make1_str("month"); ;
    break;}
case 684:
#line 3408 "preproc.y"
{ yyval.str = make1_str("day"); ;
    break;}
case 685:
#line 3409 "preproc.y"
{ yyval.str = make1_str("hour"); ;
    break;}
case 686:
#line 3410 "preproc.y"
{ yyval.str = make1_str("minute"); ;
    break;}
case 687:
#line 3411 "preproc.y"
{ yyval.str = make1_str("second"); ;
    break;}
case 688:
#line 3414 "preproc.y"
{ yyval.str = make1_str("with time zone"); ;
    break;}
case 689:
#line 3415 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 690:
#line 3418 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 691:
#line 3419 "preproc.y"
{ yyval.str = make1_str("year to #month"); ;
    break;}
case 692:
#line 3420 "preproc.y"
{ yyval.str = make1_str("day to hour"); ;
    break;}
case 693:
#line 3421 "preproc.y"
{ yyval.str = make1_str("day to minute"); ;
    break;}
case 694:
#line 3422 "preproc.y"
{ yyval.str = make1_str("day to second"); ;
    break;}
case 695:
#line 3423 "preproc.y"
{ yyval.str = make1_str("hour to minute"); ;
    break;}
case 696:
#line 3424 "preproc.y"
{ yyval.str = make1_str("minute to second"); ;
    break;}
case 697:
#line 3425 "preproc.y"
{ yyval.str = make1_str("hour to second"); ;
    break;}
case 698:
#line 3426 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 699:
#line 3437 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 700:
#line 3439 "preproc.y"
{
					yyval.str = make1_str("null");
				;
    break;}
case 701:
#line 3454 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-5].str, make1_str(") in ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 702:
#line 3458 "preproc.y"
{
					yyval.str = make5_str(make1_str("("), yyvsp[-6].str, make1_str(") not in ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 703:
#line 3462 "preproc.y"
{
					yyval.str = make4_str(make5_str(make1_str("("), yyvsp[-6].str, make1_str(")"), yyvsp[-4].str, yyvsp[-3].str), make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 704:
#line 3466 "preproc.y"
{
					yyval.str = make3_str(make5_str(make1_str("("), yyvsp[-5].str, make1_str(")"), yyvsp[-3].str, make1_str("(")), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 705:
#line 3470 "preproc.y"
{
					yyval.str = cat3_str(make3_str(make1_str("("), yyvsp[-5].str, make1_str(")")), yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 706:
#line 3476 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 707:
#line 3481 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 708:
#line 3482 "preproc.y"
{ yyval.str = "<"; ;
    break;}
case 709:
#line 3483 "preproc.y"
{ yyval.str = "="; ;
    break;}
case 710:
#line 3484 "preproc.y"
{ yyval.str = ">"; ;
    break;}
case 711:
#line 3485 "preproc.y"
{ yyval.str = "+"; ;
    break;}
case 712:
#line 3486 "preproc.y"
{ yyval.str = "-"; ;
    break;}
case 713:
#line 3487 "preproc.y"
{ yyval.str = "*"; ;
    break;}
case 714:
#line 3488 "preproc.y"
{ yyval.str = "%"; ;
    break;}
case 715:
#line 3489 "preproc.y"
{ yyval.str = "/"; ;
    break;}
case 716:
#line 3492 "preproc.y"
{ yyval.str = make1_str("ANY"); ;
    break;}
case 717:
#line 3493 "preproc.y"
{ yyval.str = make1_str("ALL"); ;
    break;}
case 718:
#line 3498 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
				;
    break;}
case 719:
#line 3502 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 720:
#line 3517 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 721:
#line 3521 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 722:
#line 3523 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 723:
#line 3525 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 724:
#line 3529 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 725:
#line 3531 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 726:
#line 3533 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 727:
#line 3535 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 728:
#line 3537 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 729:
#line 3539 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 730:
#line 3541 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 731:
#line 3543 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 732:
#line 3545 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 733:
#line 3547 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 734:
#line 3549 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-2].str, make1_str("= NULL")); ;
    break;}
case 735:
#line 3551 "preproc.y"
{       yyval.str = cat2_str(make1_str("= NULL"), yyvsp[0].str); ;
    break;}
case 736:
#line 3553 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 737:
#line 3558 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 738:
#line 3560 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 739:
#line 3562 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 740:
#line 3566 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 741:
#line 3570 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 742:
#line 3572 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 743:
#line 3574 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 744:
#line 3576 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 745:
#line 3578 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 746:
#line 3580 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 747:
#line 3582 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make1_str("(*)")); 
				;
    break;}
case 748:
#line 3586 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 749:
#line 3590 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 750:
#line 3594 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 751:
#line 3598 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 752:
#line 3602 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 753:
#line 3608 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 754:
#line 3612 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 755:
#line 3618 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 756:
#line 3622 "preproc.y"
{
  		     		        yyval.str = make1_str("user");
			     	;
    break;}
case 757:
#line 3626 "preproc.y"
{
					yyval.str = make3_str(make1_str("exists("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 758:
#line 3630 "preproc.y"
{
					yyval.str = make3_str(make1_str("extract("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 759:
#line 3634 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 760:
#line 3638 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 761:
#line 3643 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 762:
#line 3647 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 763:
#line 3651 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 764:
#line 3655 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 765:
#line 3659 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 766:
#line 3661 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 767:
#line 3663 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 768:
#line 3665 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 769:
#line 3672 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); }
				;
    break;}
case 770:
#line 3676 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); }
				;
    break;}
case 771:
#line 3680 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); }
				;
    break;}
case 772:
#line 3684 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); }
				;
    break;}
case 773:
#line 3688 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 774:
#line 3692 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 775:
#line 3696 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(" in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 776:
#line 3700 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str(" not in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 777:
#line 3704 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-4].str, yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 778:
#line 3708 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("+("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 779:
#line 3712 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("-("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 780:
#line 3716 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("/("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 781:
#line 3720 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("%("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 782:
#line 3724 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("*("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 783:
#line 3728 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("<("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 784:
#line 3732 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(">("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 785:
#line 3736 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("=("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 786:
#line 3740 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("any("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 787:
#line 3744 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 788:
#line 3748 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 789:
#line 3752 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 790:
#line 3756 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 791:
#line 3760 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 792:
#line 3764 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 793:
#line 3768 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 794:
#line 3772 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 795:
#line 3776 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("all ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 796:
#line 3780 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 797:
#line 3784 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 798:
#line 3788 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 799:
#line 3792 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 800:
#line 3796 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 801:
#line 3800 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 802:
#line 3804 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 803:
#line 3808 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 804:
#line 3812 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 805:
#line 3814 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 806:
#line 3816 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 807:
#line 3818 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 808:
#line 3820 "preproc.y"
{ yyval.str = make1_str("?"); ;
    break;}
case 809:
#line 3829 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 810:
#line 3833 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 811:
#line 3835 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 812:
#line 3839 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 813:
#line 3841 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 814:
#line 3843 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 815:
#line 3845 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 816:
#line 3847 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 817:
#line 3849 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 818:
#line 3851 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 819:
#line 3853 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 820:
#line 3858 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 821:
#line 3860 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 822:
#line 3862 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 823:
#line 3866 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 824:
#line 3870 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 825:
#line 3872 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 826:
#line 3874 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 827:
#line 3876 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 828:
#line 3878 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 829:
#line 3882 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 830:
#line 3886 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 831:
#line 3890 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 832:
#line 3894 "preproc.y"
{
					if (yyvsp[-1].str != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 833:
#line 3900 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 834:
#line 3904 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 835:
#line 3910 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 836:
#line 3914 "preproc.y"
{
					yyval.str = make1_str("user");
				;
    break;}
case 837:
#line 3918 "preproc.y"
{
					yyval.str = make3_str(make1_str("position ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 838:
#line 3922 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring ("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 839:
#line 3927 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 840:
#line 3931 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 841:
#line 3935 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 842:
#line 3939 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 843:
#line 3943 "preproc.y"
{ 	yyval.str = yyvsp[0].str; ;
    break;}
case 844:
#line 3947 "preproc.y"
{
					yyval.str = cat4_str(make1_str("["), yyvsp[-2].str, make1_str("]"), yyvsp[0].str);
				;
    break;}
case 845:
#line 3951 "preproc.y"
{
					yyval.str = cat2_str(cat5_str(make1_str("["), yyvsp[-4].str, make1_str(":"), yyvsp[-2].str, make1_str("]")), yyvsp[0].str);
				;
    break;}
case 846:
#line 3955 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 847:
#line 3959 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 848:
#line 3961 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str); ;
    break;}
case 849:
#line 3963 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str("using"), yyvsp[0].str); ;
    break;}
case 850:
#line 3967 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("from"), yyvsp[0].str);
				;
    break;}
case 851:
#line 3971 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 852:
#line 3973 "preproc.y"
{ yyval.str = make1_str("?"); ;
    break;}
case 853:
#line 3976 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 854:
#line 3977 "preproc.y"
{ yyval.str = make1_str("timezone_hour"); ;
    break;}
case 855:
#line 3978 "preproc.y"
{ yyval.str = make1_str("timezone_minute"); ;
    break;}
case 856:
#line 3982 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("in"), yyvsp[0].str); ;
    break;}
case 857:
#line 3984 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 858:
#line 3988 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 859:
#line 3992 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 860:
#line 3994 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 861:
#line 3996 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 862:
#line 3998 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 863:
#line 4000 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 864:
#line 4002 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 865:
#line 4004 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 866:
#line 4006 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 867:
#line 4008 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 868:
#line 4012 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 869:
#line 4016 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 870:
#line 4018 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 871:
#line 4020 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 872:
#line 4022 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 873:
#line 4024 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 874:
#line 4028 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()"));
				;
    break;}
case 875:
#line 4032 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 876:
#line 4036 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 877:
#line 4040 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 878:
#line 4045 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 879:
#line 4049 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 880:
#line 4053 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 881:
#line 4057 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 882:
#line 4063 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 883:
#line 4067 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 884:
#line 4071 "preproc.y"
{	yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 885:
#line 4073 "preproc.y"
{
					yyval.str = make1_str("");
				;
    break;}
case 886:
#line 4079 "preproc.y"
{	yyval.str = cat2_str(make1_str("for"), yyvsp[0].str); ;
    break;}
case 887:
#line 4081 "preproc.y"
{	yyval.str = make1_str(""); ;
    break;}
case 888:
#line 4085 "preproc.y"
{ yyval.str = cat3_str(yyvsp[-2].str, make1_str("from"), yyvsp[0].str); ;
    break;}
case 889:
#line 4087 "preproc.y"
{ yyval.str = cat2_str(make1_str("from"), yyvsp[0].str); ;
    break;}
case 890:
#line 4089 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 891:
#line 4093 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 892:
#line 4097 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 893:
#line 4101 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 894:
#line 4103 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);;
    break;}
case 895:
#line 4107 "preproc.y"
{
					yyval.str = yyvsp[0].str; 
				;
    break;}
case 896:
#line 4111 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 897:
#line 4115 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 898:
#line 4117 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);;
    break;}
case 899:
#line 4136 "preproc.y"
{ yyval.str = cat5_str(make1_str("case"), yyvsp[-3].str, yyvsp[-2].str, yyvsp[-1].str, make1_str("end")); ;
    break;}
case 900:
#line 4138 "preproc.y"
{
					yyval.str = cat5_str(make1_str("nullif("), yyvsp[-3].str, make1_str(","), yyvsp[-1].str, make1_str(")"));

					fprintf(stderr, "NULLIF() not yet fully implemented");
                                ;
    break;}
case 901:
#line 4144 "preproc.y"
{
					yyval.str = cat3_str(make1_str("coalesce("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 902:
#line 4150 "preproc.y"
{ yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 903:
#line 4152 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 904:
#line 4156 "preproc.y"
{
					yyval.str = cat4_str(make1_str("when"), yyvsp[-2].str, make1_str("then"), yyvsp[0].str);
                               ;
    break;}
case 905:
#line 4161 "preproc.y"
{ yyval.str = cat2_str(make1_str("else"), yyvsp[0].str); ;
    break;}
case 906:
#line 4162 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 907:
#line 4166 "preproc.y"
{
                                       yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
                               ;
    break;}
case 908:
#line 4170 "preproc.y"
{
                                       yyval.str = yyvsp[0].str;
                               ;
    break;}
case 909:
#line 4174 "preproc.y"
{       yyval.str = make1_str(""); ;
    break;}
case 910:
#line 4178 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 911:
#line 4182 "preproc.y"
{
					yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str);
				;
    break;}
case 912:
#line 4188 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 913:
#line 4190 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str); ;
    break;}
case 914:
#line 4192 "preproc.y"
{ yyval.str = make2_str(yyvsp[-2].str, make1_str(".*")); ;
    break;}
case 915:
#line 4203 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","),yyvsp[0].str);  ;
    break;}
case 916:
#line 4205 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 917:
#line 4206 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 918:
#line 4210 "preproc.y"
{
					yyval.str = cat4_str(yyvsp[-3].str, yyvsp[-2].str, make1_str("="), yyvsp[0].str);
				;
    break;}
case 919:
#line 4214 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 920:
#line 4218 "preproc.y"
{
					yyval.str = make2_str(yyvsp[-2].str, make1_str(".*"));
				;
    break;}
case 921:
#line 4229 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);  ;
    break;}
case 922:
#line 4231 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 923:
#line 4236 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("as"), yyvsp[0].str);
				;
    break;}
case 924:
#line 4240 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 925:
#line 4244 "preproc.y"
{
					yyval.str = make2_str(yyvsp[-2].str, make1_str(".*"));
				;
    break;}
case 926:
#line 4248 "preproc.y"
{
					yyval.str = make1_str("*");
				;
    break;}
case 927:
#line 4253 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 928:
#line 4254 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 929:
#line 4258 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 930:
#line 4262 "preproc.y"
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
case 931:
#line 4274 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 932:
#line 4275 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 933:
#line 4276 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 934:
#line 4277 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 935:
#line 4278 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 936:
#line 4284 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 937:
#line 4285 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 938:
#line 4287 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 939:
#line 4294 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 940:
#line 4298 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 941:
#line 4302 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 942:
#line 4306 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 943:
#line 4310 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 944:
#line 4312 "preproc.y"
{
					yyval.str = make1_str("true");
				;
    break;}
case 945:
#line 4316 "preproc.y"
{
					yyval.str = make1_str("false");
				;
    break;}
case 946:
#line 4322 "preproc.y"
{
					yyval.str = cat2_str(make_name(), yyvsp[0].str);
				;
    break;}
case 947:
#line 4327 "preproc.y"
{ yyval.str = make_name();;
    break;}
case 948:
#line 4328 "preproc.y"
{ yyval.str = make_name();;
    break;}
case 949:
#line 4329 "preproc.y"
{
							yyval.str = (char *)mm_alloc(strlen(yyvsp[0].str) + 3);
							yyval.str[0]='\'';
				     		        strcpy(yyval.str+1, yyvsp[0].str);
							yyval.str[strlen(yyvsp[0].str)+2]='\0';
							yyval.str[strlen(yyvsp[0].str)+1]='\'';
							free(yyvsp[0].str);
						;
    break;}
case 950:
#line 4337 "preproc.y"
{ yyval.str = yyvsp[0].str;;
    break;}
case 951:
#line 4345 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 952:
#line 4347 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 953:
#line 4349 "preproc.y"
{	yyval.str = yyvsp[0].str; ;
    break;}
case 954:
#line 4359 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 955:
#line 4360 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 956:
#line 4361 "preproc.y"
{ yyval.str = make1_str("absolute"); ;
    break;}
case 957:
#line 4362 "preproc.y"
{ yyval.str = make1_str("access"); ;
    break;}
case 958:
#line 4363 "preproc.y"
{ yyval.str = make1_str("action"); ;
    break;}
case 959:
#line 4364 "preproc.y"
{ yyval.str = make1_str("after"); ;
    break;}
case 960:
#line 4365 "preproc.y"
{ yyval.str = make1_str("aggregate"); ;
    break;}
case 961:
#line 4366 "preproc.y"
{ yyval.str = make1_str("backward"); ;
    break;}
case 962:
#line 4367 "preproc.y"
{ yyval.str = make1_str("before"); ;
    break;}
case 963:
#line 4368 "preproc.y"
{ yyval.str = make1_str("cache"); ;
    break;}
case 964:
#line 4369 "preproc.y"
{ yyval.str = make1_str("committed"); ;
    break;}
case 965:
#line 4370 "preproc.y"
{ yyval.str = make1_str("createdb"); ;
    break;}
case 966:
#line 4371 "preproc.y"
{ yyval.str = make1_str("createuser"); ;
    break;}
case 967:
#line 4372 "preproc.y"
{ yyval.str = make1_str("cycle"); ;
    break;}
case 968:
#line 4373 "preproc.y"
{ yyval.str = make1_str("database"); ;
    break;}
case 969:
#line 4374 "preproc.y"
{ yyval.str = make1_str("delimiters"); ;
    break;}
case 970:
#line 4375 "preproc.y"
{ yyval.str = make1_str("double"); ;
    break;}
case 971:
#line 4376 "preproc.y"
{ yyval.str = make1_str("each"); ;
    break;}
case 972:
#line 4377 "preproc.y"
{ yyval.str = make1_str("encoding"); ;
    break;}
case 973:
#line 4378 "preproc.y"
{ yyval.str = make1_str("exclusive"); ;
    break;}
case 974:
#line 4379 "preproc.y"
{ yyval.str = make1_str("forward"); ;
    break;}
case 975:
#line 4380 "preproc.y"
{ yyval.str = make1_str("function"); ;
    break;}
case 976:
#line 4381 "preproc.y"
{ yyval.str = make1_str("handler"); ;
    break;}
case 977:
#line 4382 "preproc.y"
{ yyval.str = make1_str("increment"); ;
    break;}
case 978:
#line 4383 "preproc.y"
{ yyval.str = make1_str("index"); ;
    break;}
case 979:
#line 4384 "preproc.y"
{ yyval.str = make1_str("inherits"); ;
    break;}
case 980:
#line 4385 "preproc.y"
{ yyval.str = make1_str("insensitive"); ;
    break;}
case 981:
#line 4386 "preproc.y"
{ yyval.str = make1_str("instead"); ;
    break;}
case 982:
#line 4387 "preproc.y"
{ yyval.str = make1_str("isnull"); ;
    break;}
case 983:
#line 4388 "preproc.y"
{ yyval.str = make1_str("key"); ;
    break;}
case 984:
#line 4389 "preproc.y"
{ yyval.str = make1_str("language"); ;
    break;}
case 985:
#line 4390 "preproc.y"
{ yyval.str = make1_str("lancompiler"); ;
    break;}
case 986:
#line 4391 "preproc.y"
{ yyval.str = make1_str("location"); ;
    break;}
case 987:
#line 4392 "preproc.y"
{ yyval.str = make1_str("match"); ;
    break;}
case 988:
#line 4393 "preproc.y"
{ yyval.str = make1_str("maxvalue"); ;
    break;}
case 989:
#line 4394 "preproc.y"
{ yyval.str = make1_str("minvalue"); ;
    break;}
case 990:
#line 4395 "preproc.y"
{ yyval.str = make1_str("mode"); ;
    break;}
case 991:
#line 4396 "preproc.y"
{ yyval.str = make1_str("next"); ;
    break;}
case 992:
#line 4397 "preproc.y"
{ yyval.str = make1_str("nocreatedb"); ;
    break;}
case 993:
#line 4398 "preproc.y"
{ yyval.str = make1_str("nocreateuser"); ;
    break;}
case 994:
#line 4399 "preproc.y"
{ yyval.str = make1_str("nothing"); ;
    break;}
case 995:
#line 4400 "preproc.y"
{ yyval.str = make1_str("notnull"); ;
    break;}
case 996:
#line 4401 "preproc.y"
{ yyval.str = make1_str("of"); ;
    break;}
case 997:
#line 4402 "preproc.y"
{ yyval.str = make1_str("oids"); ;
    break;}
case 998:
#line 4403 "preproc.y"
{ yyval.str = make1_str("only"); ;
    break;}
case 999:
#line 4404 "preproc.y"
{ yyval.str = make1_str("operator"); ;
    break;}
case 1000:
#line 4405 "preproc.y"
{ yyval.str = make1_str("option"); ;
    break;}
case 1001:
#line 4406 "preproc.y"
{ yyval.str = make1_str("password"); ;
    break;}
case 1002:
#line 4407 "preproc.y"
{ yyval.str = make1_str("prior"); ;
    break;}
case 1003:
#line 4408 "preproc.y"
{ yyval.str = make1_str("privileges"); ;
    break;}
case 1004:
#line 4409 "preproc.y"
{ yyval.str = make1_str("procedural"); ;
    break;}
case 1005:
#line 4410 "preproc.y"
{ yyval.str = make1_str("read"); ;
    break;}
case 1006:
#line 4412 "preproc.y"
{ yyval.str = make1_str("relative"); ;
    break;}
case 1007:
#line 4413 "preproc.y"
{ yyval.str = make1_str("rename"); ;
    break;}
case 1008:
#line 4414 "preproc.y"
{ yyval.str = make1_str("returns"); ;
    break;}
case 1009:
#line 4415 "preproc.y"
{ yyval.str = make1_str("row"); ;
    break;}
case 1010:
#line 4416 "preproc.y"
{ yyval.str = make1_str("rule"); ;
    break;}
case 1011:
#line 4417 "preproc.y"
{ yyval.str = make1_str("scroll"); ;
    break;}
case 1012:
#line 4418 "preproc.y"
{ yyval.str = make1_str("sequence"); ;
    break;}
case 1013:
#line 4419 "preproc.y"
{ yyval.str = make1_str("serial"); ;
    break;}
case 1014:
#line 4420 "preproc.y"
{ yyval.str = make1_str("serializable"); ;
    break;}
case 1015:
#line 4421 "preproc.y"
{ yyval.str = make1_str("share"); ;
    break;}
case 1016:
#line 4422 "preproc.y"
{ yyval.str = make1_str("start"); ;
    break;}
case 1017:
#line 4423 "preproc.y"
{ yyval.str = make1_str("statement"); ;
    break;}
case 1018:
#line 4424 "preproc.y"
{ yyval.str = make1_str("stdin"); ;
    break;}
case 1019:
#line 4425 "preproc.y"
{ yyval.str = make1_str("stdout"); ;
    break;}
case 1020:
#line 4426 "preproc.y"
{ yyval.str = make1_str("time"); ;
    break;}
case 1021:
#line 4427 "preproc.y"
{ yyval.str = make1_str("timestamp"); ;
    break;}
case 1022:
#line 4428 "preproc.y"
{ yyval.str = make1_str("timezone_hour"); ;
    break;}
case 1023:
#line 4429 "preproc.y"
{ yyval.str = make1_str("timezone_minute"); ;
    break;}
case 1024:
#line 4430 "preproc.y"
{ yyval.str = make1_str("trigger"); ;
    break;}
case 1025:
#line 4431 "preproc.y"
{ yyval.str = make1_str("trusted"); ;
    break;}
case 1026:
#line 4432 "preproc.y"
{ yyval.str = make1_str("type"); ;
    break;}
case 1027:
#line 4433 "preproc.y"
{ yyval.str = make1_str("valid"); ;
    break;}
case 1028:
#line 4434 "preproc.y"
{ yyval.str = make1_str("version"); ;
    break;}
case 1029:
#line 4435 "preproc.y"
{ yyval.str = make1_str("zone"); ;
    break;}
case 1030:
#line 4436 "preproc.y"
{ yyval.str = make1_str("at"); ;
    break;}
case 1031:
#line 4437 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 1032:
#line 4438 "preproc.y"
{ yyval.str = make1_str("break"); ;
    break;}
case 1033:
#line 4439 "preproc.y"
{ yyval.str = make1_str("call"); ;
    break;}
case 1034:
#line 4440 "preproc.y"
{ yyval.str = make1_str("connect"); ;
    break;}
case 1035:
#line 4441 "preproc.y"
{ yyval.str = make1_str("continue"); ;
    break;}
case 1036:
#line 4442 "preproc.y"
{ yyval.str = make1_str("deallocate"); ;
    break;}
case 1037:
#line 4443 "preproc.y"
{ yyval.str = make1_str("disconnect"); ;
    break;}
case 1038:
#line 4444 "preproc.y"
{ yyval.str = make1_str("found"); ;
    break;}
case 1039:
#line 4445 "preproc.y"
{ yyval.str = make1_str("go"); ;
    break;}
case 1040:
#line 4446 "preproc.y"
{ yyval.str = make1_str("goto"); ;
    break;}
case 1041:
#line 4447 "preproc.y"
{ yyval.str = make1_str("identified"); ;
    break;}
case 1042:
#line 4448 "preproc.y"
{ yyval.str = make1_str("immediate"); ;
    break;}
case 1043:
#line 4449 "preproc.y"
{ yyval.str = make1_str("indicator"); ;
    break;}
case 1044:
#line 4450 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 1045:
#line 4451 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 1046:
#line 4452 "preproc.y"
{ yyval.str = make1_str("off"); ;
    break;}
case 1047:
#line 4453 "preproc.y"
{ yyval.str = make1_str("open"); ;
    break;}
case 1048:
#line 4454 "preproc.y"
{ yyval.str = make1_str("prepare"); ;
    break;}
case 1049:
#line 4455 "preproc.y"
{ yyval.str = make1_str("release"); ;
    break;}
case 1050:
#line 4456 "preproc.y"
{ yyval.str = make1_str("section"); ;
    break;}
case 1051:
#line 4457 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 1052:
#line 4458 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1053:
#line 4459 "preproc.y"
{ yyval.str = make1_str("sqlerror"); ;
    break;}
case 1054:
#line 4460 "preproc.y"
{ yyval.str = make1_str("sqlprint"); ;
    break;}
case 1055:
#line 4461 "preproc.y"
{ yyval.str = make1_str("sqlwarning"); ;
    break;}
case 1056:
#line 4462 "preproc.y"
{ yyval.str = make1_str("stop"); ;
    break;}
case 1057:
#line 4463 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 1058:
#line 4464 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 1059:
#line 4465 "preproc.y"
{ yyval.str = make1_str("var"); ;
    break;}
case 1060:
#line 4466 "preproc.y"
{ yyval.str = make1_str("whenever"); ;
    break;}
case 1061:
#line 4478 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1062:
#line 4479 "preproc.y"
{ yyval.str = make1_str("abort"); ;
    break;}
case 1063:
#line 4480 "preproc.y"
{ yyval.str = make1_str("analyze"); ;
    break;}
case 1064:
#line 4481 "preproc.y"
{ yyval.str = make1_str("binary"); ;
    break;}
case 1065:
#line 4482 "preproc.y"
{ yyval.str = make1_str("case"); ;
    break;}
case 1066:
#line 4483 "preproc.y"
{ yyval.str = make1_str("cluster"); ;
    break;}
case 1067:
#line 4484 "preproc.y"
{ yyval.str = make1_str("coalesce"); ;
    break;}
case 1068:
#line 4485 "preproc.y"
{ yyval.str = make1_str("constraint"); ;
    break;}
case 1069:
#line 4486 "preproc.y"
{ yyval.str = make1_str("copy"); ;
    break;}
case 1070:
#line 4487 "preproc.y"
{ yyval.str = make1_str("current"); ;
    break;}
case 1071:
#line 4488 "preproc.y"
{ yyval.str = make1_str("do"); ;
    break;}
case 1072:
#line 4489 "preproc.y"
{ yyval.str = make1_str("else"); ;
    break;}
case 1073:
#line 4490 "preproc.y"
{ yyval.str = make1_str("end"); ;
    break;}
case 1074:
#line 4491 "preproc.y"
{ yyval.str = make1_str("explain"); ;
    break;}
case 1075:
#line 4492 "preproc.y"
{ yyval.str = make1_str("extend"); ;
    break;}
case 1076:
#line 4493 "preproc.y"
{ yyval.str = make1_str("false"); ;
    break;}
case 1077:
#line 4494 "preproc.y"
{ yyval.str = make1_str("foreign"); ;
    break;}
case 1078:
#line 4495 "preproc.y"
{ yyval.str = make1_str("group"); ;
    break;}
case 1079:
#line 4496 "preproc.y"
{ yyval.str = make1_str("listen"); ;
    break;}
case 1080:
#line 4497 "preproc.y"
{ yyval.str = make1_str("load"); ;
    break;}
case 1081:
#line 4498 "preproc.y"
{ yyval.str = make1_str("lock"); ;
    break;}
case 1082:
#line 4499 "preproc.y"
{ yyval.str = make1_str("move"); ;
    break;}
case 1083:
#line 4500 "preproc.y"
{ yyval.str = make1_str("new"); ;
    break;}
case 1084:
#line 4501 "preproc.y"
{ yyval.str = make1_str("none"); ;
    break;}
case 1085:
#line 4502 "preproc.y"
{ yyval.str = make1_str("nullif"); ;
    break;}
case 1086:
#line 4503 "preproc.y"
{ yyval.str = make1_str("order"); ;
    break;}
case 1087:
#line 4504 "preproc.y"
{ yyval.str = make1_str("position"); ;
    break;}
case 1088:
#line 4505 "preproc.y"
{ yyval.str = make1_str("precision"); ;
    break;}
case 1089:
#line 4506 "preproc.y"
{ yyval.str = make1_str("reset"); ;
    break;}
case 1090:
#line 4507 "preproc.y"
{ yyval.str = make1_str("setof"); ;
    break;}
case 1091:
#line 4508 "preproc.y"
{ yyval.str = make1_str("show"); ;
    break;}
case 1092:
#line 4509 "preproc.y"
{ yyval.str = make1_str("table"); ;
    break;}
case 1093:
#line 4510 "preproc.y"
{ yyval.str = make1_str("then"); ;
    break;}
case 1094:
#line 4511 "preproc.y"
{ yyval.str = make1_str("transaction"); ;
    break;}
case 1095:
#line 4512 "preproc.y"
{ yyval.str = make1_str("true"); ;
    break;}
case 1096:
#line 4513 "preproc.y"
{ yyval.str = make1_str("vacuum"); ;
    break;}
case 1097:
#line 4514 "preproc.y"
{ yyval.str = make1_str("verbose"); ;
    break;}
case 1098:
#line 4515 "preproc.y"
{ yyval.str = make1_str("when"); ;
    break;}
case 1099:
#line 4519 "preproc.y"
{
					if (QueryIsRule)
						yyval.str = make1_str("current");
					else
						yyerror("CURRENT used in non-rule query");
				;
    break;}
case 1100:
#line 4526 "preproc.y"
{
					if (QueryIsRule)
						yyval.str = make1_str("new");
					else
						yyerror("NEW used in non-rule query");
				;
    break;}
case 1101:
#line 4542 "preproc.y"
{
			yyval.str = make5_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str, make1_str(","), yyvsp[-1].str);
                ;
    break;}
case 1102:
#line 4546 "preproc.y"
{
                	yyval.str = make1_str("NULL,NULL,NULL,\"DEFAULT\"");
                ;
    break;}
case 1103:
#line 4551 "preproc.y"
{
		       yyval.str = make3_str(make1_str("NULL,"), yyvsp[0].str, make1_str(",NULL"));
		;
    break;}
case 1104:
#line 4556 "preproc.y"
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
case 1105:
#line 4567 "preproc.y"
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
case 1106:
#line 4590 "preproc.y"
{
		  yyval.str = yyvsp[0].str;
		;
    break;}
case 1107:
#line 4594 "preproc.y"
{
		  yyval.str = mm_strdup(yyvsp[0].str);
		  yyval.str[0] = '\"';
		  yyval.str[strlen(yyval.str) - 1] = '\"';
		  free(yyvsp[0].str);
		;
    break;}
case 1108:
#line 4602 "preproc.y"
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
case 1109:
#line 4619 "preproc.y"
{
		  if (strcmp(yyvsp[-1].str, "@") != 0 && strcmp(yyvsp[-1].str, "://") != 0)
		  {
		    sprintf(errortext, "parse error at or near '%s'", yyvsp[-1].str);
		    yyerror(errortext);
		  }

		  yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str);
	        ;
    break;}
case 1110:
#line 4629 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1111:
#line 4630 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1112:
#line 4632 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1113:
#line 4633 "preproc.y"
{ yyval.str = make3_str(yyvsp[-2].str, make1_str("."), yyvsp[0].str); ;
    break;}
case 1114:
#line 4635 "preproc.y"
{ yyval.str = make2_str(make1_str(":"), yyvsp[0].str); ;
    break;}
case 1115:
#line 4636 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1116:
#line 4638 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1117:
#line 4639 "preproc.y"
{ yyval.str = make1_str("NULL"); ;
    break;}
case 1118:
#line 4641 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1119:
#line 4642 "preproc.y"
{ yyval.str = make1_str("NULL,NULL"); ;
    break;}
case 1120:
#line 4645 "preproc.y"
{
                        yyval.str = make2_str(yyvsp[0].str, make1_str(",NULL"));
	        ;
    break;}
case 1121:
#line 4649 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1122:
#line 4653 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-3].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1123:
#line 4657 "preproc.y"
{
        		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
                ;
    break;}
case 1124:
#line 4661 "preproc.y"
{ if (yyvsp[0].str[0] == '\"')
				yyval.str = yyvsp[0].str;
			  else
				yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\""));
			;
    break;}
case 1125:
#line 4666 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1126:
#line 4667 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1127:
#line 4670 "preproc.y"
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
case 1128:
#line 4694 "preproc.y"
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
case 1129:
#line 4706 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1130:
#line 4713 "preproc.y"
{
					struct cursor *ptr, *this;
					struct variable *thisquery = (struct variable *)mm_alloc(sizeof(struct variable));

					for (ptr = cur; ptr != NULL; ptr = ptr->next)
					{
						if (strcmp(yyvsp[-4].str, ptr->name) == 0)
						{
						        /* re-definition is a bug */
							sprintf(errortext, "cursor %s already defined", yyvsp[-4].str);
							yyerror(errortext);
				                }
        				}

        				this = (struct cursor *) mm_alloc(sizeof(struct cursor));

			        	/* initial definition */
				        this->next = cur;
				        this->name = yyvsp[-4].str;
					this->connection = connection;
				        this->command =  cat4_str(make1_str("declare"), mm_strdup(yyvsp[-4].str), yyvsp[-3].str, make1_str("cursor for ?"));
					this->argsresult = NULL;

					thisquery->type = &ecpg_query;
					thisquery->brace_level = 0;
					thisquery->next = NULL;
					thisquery->name = (char *) mm_alloc(sizeof("ECPGprepared_statement(\"\")") + strlen(yyvsp[0].str));
					sprintf(thisquery->name, "ECPGprepared_statement(\"%s\")", yyvsp[0].str);

					this->argsinsert = NULL;
					add_variable(&(this->argsinsert), thisquery, &no_indicator); 

			        	cur = this;
					
					yyval.str = cat3_str(make1_str("/*"), mm_strdup(this->command), make1_str("*/"));
				;
    break;}
case 1131:
#line 4755 "preproc.y"
{ yyval.str = make3_str(make1_str("ECPGdeallocate(__LINE__, \""), yyvsp[0].str, make1_str("\");")); ;
    break;}
case 1132:
#line 4761 "preproc.y"
{
		fputs("/* exec sql begin declare section */", yyout);
	        output_line_number();
	;
    break;}
case 1133:
#line 4766 "preproc.y"
{
		fprintf(yyout, "%s/* exec sql end declare section */", yyvsp[-1].str);
		free(yyvsp[-1].str);
		output_line_number();
	;
    break;}
case 1134:
#line 4772 "preproc.y"
{;
    break;}
case 1135:
#line 4774 "preproc.y"
{;
    break;}
case 1136:
#line 4777 "preproc.y"
{
		yyval.str = make1_str("");
	;
    break;}
case 1137:
#line 4781 "preproc.y"
{
		yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
	;
    break;}
case 1138:
#line 4786 "preproc.y"
{
		actual_storage[struct_level] = mm_strdup(yyvsp[0].str);
	;
    break;}
case 1139:
#line 4790 "preproc.y"
{
		actual_type[struct_level].type_enum = yyvsp[0].type.type_enum;
		actual_type[struct_level].type_dimension = yyvsp[0].type.type_dimension;
		actual_type[struct_level].type_index = yyvsp[0].type.type_index;
	;
    break;}
case 1140:
#line 4796 "preproc.y"
{
 		yyval.str = cat4_str(yyvsp[-5].str, yyvsp[-3].type.type_str, yyvsp[-1].str, make1_str(";\n"));
	;
    break;}
case 1141:
#line 4800 "preproc.y"
{ yyval.str = make1_str("extern"); ;
    break;}
case 1142:
#line 4801 "preproc.y"
{ yyval.str = make1_str("static"); ;
    break;}
case 1143:
#line 4802 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1144:
#line 4803 "preproc.y"
{ yyval.str = make1_str("const"); ;
    break;}
case 1145:
#line 4804 "preproc.y"
{ yyval.str = make1_str("register"); ;
    break;}
case 1146:
#line 4805 "preproc.y"
{ yyval.str = make1_str("auto"); ;
    break;}
case 1147:
#line 4806 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1148:
#line 4809 "preproc.y"
{
			yyval.type.type_enum = yyvsp[0].type_enum;
			yyval.type.type_str = mm_strdup(ECPGtype_name(yyvsp[0].type_enum));
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1149:
#line 4816 "preproc.y"
{
			yyval.type.type_enum = ECPGt_varchar;
			yyval.type.type_str = make1_str("");
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1150:
#line 4823 "preproc.y"
{
			yyval.type.type_enum = ECPGt_struct;
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1151:
#line 4830 "preproc.y"
{
			yyval.type.type_enum = ECPGt_union;
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1152:
#line 4837 "preproc.y"
{
			yyval.type.type_str = yyvsp[0].str;
			yyval.type.type_enum = ECPGt_int;
		
	yyval.type.type_dimension = -1;
  			yyval.type.type_index = -1;
		;
    break;}
case 1153:
#line 4845 "preproc.y"
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
case 1154:
#line 4857 "preproc.y"
{
		yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1155:
#line 4861 "preproc.y"
{ yyval.str = cat2_str(make1_str("enum"), yyvsp[0].str); ;
    break;}
case 1156:
#line 4864 "preproc.y"
{
	    ECPGfree_struct_member(struct_member_list[struct_level]);
	    free(actual_storage[struct_level--]);
	    yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1157:
#line 4871 "preproc.y"
{
	    ECPGfree_struct_member(struct_member_list[struct_level]);
	    free(actual_storage[struct_level--]);
	    yyval.str = cat4_str(yyvsp[-3].str, make1_str("{"), yyvsp[-1].str, make1_str("}"));
	;
    break;}
case 1158:
#line 4878 "preproc.y"
{
            struct_member_list[struct_level++] = NULL;
            if (struct_level >= STRUCT_DEPTH)
                 yyerror("Too many levels in nested structure definition");
	    yyval.str = cat2_str(make1_str("struct"), yyvsp[0].str);
	;
    break;}
case 1159:
#line 4886 "preproc.y"
{
            struct_member_list[struct_level++] = NULL;
            if (struct_level >= STRUCT_DEPTH)
                 yyerror("Too many levels in nested structure definition");
	    yyval.str = cat2_str(make1_str("union"), yyvsp[0].str);
	;
    break;}
case 1160:
#line 4893 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1161:
#line 4894 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1162:
#line 4896 "preproc.y"
{ yyval.type_enum = ECPGt_short; ;
    break;}
case 1163:
#line 4897 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_short; ;
    break;}
case 1164:
#line 4898 "preproc.y"
{ yyval.type_enum = ECPGt_int; ;
    break;}
case 1165:
#line 4899 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_int; ;
    break;}
case 1166:
#line 4900 "preproc.y"
{ yyval.type_enum = ECPGt_long; ;
    break;}
case 1167:
#line 4901 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_long; ;
    break;}
case 1168:
#line 4902 "preproc.y"
{ yyval.type_enum = ECPGt_float; ;
    break;}
case 1169:
#line 4903 "preproc.y"
{ yyval.type_enum = ECPGt_double; ;
    break;}
case 1170:
#line 4904 "preproc.y"
{ yyval.type_enum = ECPGt_bool; ;
    break;}
case 1171:
#line 4905 "preproc.y"
{ yyval.type_enum = ECPGt_char; ;
    break;}
case 1172:
#line 4906 "preproc.y"
{ yyval.type_enum = ECPGt_unsigned_char; ;
    break;}
case 1173:
#line 4908 "preproc.y"
{ yyval.type_enum = ECPGt_varchar; ;
    break;}
case 1174:
#line 4911 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 1175:
#line 4915 "preproc.y"
{
		yyval.str = cat3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
	;
    break;}
case 1176:
#line 4920 "preproc.y"
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
case 1177:
#line 4994 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1178:
#line 4995 "preproc.y"
{ yyval.str = make2_str(make1_str("="), yyvsp[0].str); ;
    break;}
case 1179:
#line 4997 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1180:
#line 4998 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 1181:
#line 5005 "preproc.y"
{
		/* this is only supported for compatibility */
		yyval.str = cat3_str(make1_str("/* declare statement"), yyvsp[0].str, make1_str("*/"));
	;
    break;}
case 1182:
#line 5012 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1183:
#line 5014 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1184:
#line 5015 "preproc.y"
{ yyval.str = make1_str("CURRENT"); ;
    break;}
case 1185:
#line 5016 "preproc.y"
{ yyval.str = make1_str("ALL"); ;
    break;}
case 1186:
#line 5017 "preproc.y"
{ yyval.str = make1_str("CURRENT"); ;
    break;}
case 1187:
#line 5019 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1188:
#line 5020 "preproc.y"
{ yyval.str = make1_str("DEFAULT"); ;
    break;}
case 1189:
#line 5026 "preproc.y"
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
case 1190:
#line 5039 "preproc.y"
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
case 1191:
#line 5050 "preproc.y"
{
		yyval.str = make1_str("?");
	;
    break;}
case 1193:
#line 5055 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1194:
#line 5061 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1195:
#line 5066 "preproc.y"
{
		yyval.str = yyvsp[-1].str;
;
    break;}
case 1196:
#line 5070 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1197:
#line 5071 "preproc.y"
{
					/* yyerror ("open cursor with variables not implemented yet"); */
					yyval.str = make1_str("");
				;
    break;}
case 1200:
#line 5083 "preproc.y"
{
		yyval.str = make4_str(make1_str("\""), yyvsp[-2].str, make1_str("\", "), yyvsp[0].str);
	;
    break;}
case 1201:
#line 5093 "preproc.y"
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
case 1202:
#line 5109 "preproc.y"
{
				yyval.str = yyvsp[0].str;
                        ;
    break;}
case 1203:
#line 5113 "preproc.y"
{ yyval.str = make1_str("on"); ;
    break;}
case 1204:
#line 5114 "preproc.y"
{ yyval.str = make1_str("off"); ;
    break;}
case 1207:
#line 5123 "preproc.y"
{
				yyval.str = yyvsp[0].str;
                        ;
    break;}
case 1208:
#line 5131 "preproc.y"
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
case 1209:
#line 5173 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1210:
#line 5179 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1211:
#line 5185 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1212:
#line 5194 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1213:
#line 5203 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 1214:
#line 5211 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1215:
#line 5217 "preproc.y"
{
                            yyval.index.index1 = 0;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat2_str(make1_str("[]"), yyvsp[0].index.str);
                        ;
    break;}
case 1216:
#line 5223 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1217:
#line 5232 "preproc.y"
{
			    char *txt = mm_alloc(20L);

			    sprintf (txt, "%d", yyvsp[-2].ival);
                            yyval.index.index1 = yyvsp[-2].ival;
                            yyval.index.index2 = yyvsp[0].index.index1;
                            yyval.index.str = cat4_str(make1_str("["), txt, make1_str("]"), yyvsp[0].index.str);
                        ;
    break;}
case 1218:
#line 5241 "preproc.y"
{
                            yyval.index.index1 = -1;
                            yyval.index.index2 = -1;
                            yyval.index.str= make1_str("");
                        ;
    break;}
case 1219:
#line 5247 "preproc.y"
{ yyval.str = make1_str("reference"); ;
    break;}
case 1220:
#line 5248 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1221:
#line 5251 "preproc.y"
{
		yyval.type.type_str = make1_str("char");
                yyval.type.type_enum = ECPGt_char;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1222:
#line 5258 "preproc.y"
{
		yyval.type.type_str = make1_str("varchar");
                yyval.type.type_enum = ECPGt_varchar;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1223:
#line 5265 "preproc.y"
{
		yyval.type.type_str = make1_str("float");
                yyval.type.type_enum = ECPGt_float;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1224:
#line 5272 "preproc.y"
{
		yyval.type.type_str = make1_str("double");
                yyval.type.type_enum = ECPGt_double;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1225:
#line 5279 "preproc.y"
{
		yyval.type.type_str = make1_str("int");
       	        yyval.type.type_enum = ECPGt_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1226:
#line 5286 "preproc.y"
{
		yyval.type.type_str = make1_str("int");
       	        yyval.type.type_enum = ECPGt_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1227:
#line 5293 "preproc.y"
{
		yyval.type.type_str = make1_str("short");
       	        yyval.type.type_enum = ECPGt_short;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1228:
#line 5300 "preproc.y"
{
		yyval.type.type_str = make1_str("long");
       	        yyval.type.type_enum = ECPGt_long;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1229:
#line 5307 "preproc.y"
{
		yyval.type.type_str = make1_str("bool");
       	        yyval.type.type_enum = ECPGt_bool;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1230:
#line 5314 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned int");
       	        yyval.type.type_enum = ECPGt_unsigned_int;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1231:
#line 5321 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned short");
       	        yyval.type.type_enum = ECPGt_unsigned_short;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1232:
#line 5328 "preproc.y"
{
		yyval.type.type_str = make1_str("unsigned long");
       	        yyval.type.type_enum = ECPGt_unsigned_long;
		yyval.type.type_index = -1;
		yyval.type.type_dimension = -1;
	;
    break;}
case 1233:
#line 5335 "preproc.y"
{
		struct_member_list[struct_level++] = NULL;
		if (struct_level >= STRUCT_DEPTH)
        		yyerror("Too many levels in nested structure definition");
	;
    break;}
case 1234:
#line 5340 "preproc.y"
{
		ECPGfree_struct_member(struct_member_list[struct_level--]);
		yyval.type.type_str = cat3_str(make1_str("struct {"), yyvsp[-1].str, make1_str("}"));
		yyval.type.type_enum = ECPGt_struct;
                yyval.type.type_index = -1;
                yyval.type.type_dimension = -1;
	;
    break;}
case 1235:
#line 5348 "preproc.y"
{
		struct_member_list[struct_level++] = NULL;
		if (struct_level >= STRUCT_DEPTH)
        		yyerror("Too many levels in nested structure definition");
	;
    break;}
case 1236:
#line 5353 "preproc.y"
{
		ECPGfree_struct_member(struct_member_list[struct_level--]);
		yyval.type.type_str = cat3_str(make1_str("union {"), yyvsp[-1].str, make1_str("}"));
		yyval.type.type_enum = ECPGt_union;
                yyval.type.type_index = -1;
                yyval.type.type_dimension = -1;
	;
    break;}
case 1237:
#line 5361 "preproc.y"
{
		struct typedefs *this = get_typedef(yyvsp[0].str);

		yyval.type.type_str = mm_strdup(yyvsp[0].str);
		yyval.type.type_enum = this->type->type_enum;
		yyval.type.type_dimension = this->type->type_dimension;
		yyval.type.type_index = this->type->type_index;
		struct_member_list[struct_level] = this->struct_member_list;
	;
    break;}
case 1240:
#line 5374 "preproc.y"
{
		yyval.str = make1_str("");
	;
    break;}
case 1241:
#line 5378 "preproc.y"
{
		yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
	;
    break;}
case 1242:
#line 5384 "preproc.y"
{
		actual_type[struct_level].type_enum = yyvsp[0].type.type_enum;
		actual_type[struct_level].type_dimension = yyvsp[0].type.type_dimension;
		actual_type[struct_level].type_index = yyvsp[0].type.type_index;
	;
    break;}
case 1243:
#line 5390 "preproc.y"
{
		yyval.str = cat3_str(yyvsp[-3].type.type_str, yyvsp[-1].str, make1_str(";"));
	;
    break;}
case 1244:
#line 5395 "preproc.y"
{
		yyval.str = yyvsp[0].str;
	;
    break;}
case 1245:
#line 5399 "preproc.y"
{
		yyval.str = make3_str(yyvsp[-2].str, make1_str(","), yyvsp[0].str);
	;
    break;}
case 1246:
#line 5404 "preproc.y"
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
case 1247:
#line 5475 "preproc.y"
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
case 1248:
#line 5529 "preproc.y"
{
	when_error.code = yyvsp[0].action.code;
	when_error.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever sqlerror "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1249:
#line 5534 "preproc.y"
{
	when_nf.code = yyvsp[0].action.code;
	when_nf.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever not found "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1250:
#line 5539 "preproc.y"
{
	when_warn.code = yyvsp[0].action.code;
	when_warn.command = yyvsp[0].action.command;
	yyval.str = cat3_str(make1_str("/* exec sql whenever sql_warning "), yyvsp[0].action.str, make1_str("; */\n"));
;
    break;}
case 1251:
#line 5545 "preproc.y"
{
	yyval.action.code = W_NOTHING;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("continue");
;
    break;}
case 1252:
#line 5550 "preproc.y"
{
	yyval.action.code = W_SQLPRINT;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("sqlprint");
;
    break;}
case 1253:
#line 5555 "preproc.y"
{
	yyval.action.code = W_STOP;
	yyval.action.command = NULL;
	yyval.action.str = make1_str("stop");
;
    break;}
case 1254:
#line 5560 "preproc.y"
{
        yyval.action.code = W_GOTO;
        yyval.action.command = strdup(yyvsp[0].str);
	yyval.action.str = cat2_str(make1_str("goto "), yyvsp[0].str);
;
    break;}
case 1255:
#line 5565 "preproc.y"
{
        yyval.action.code = W_GOTO;
        yyval.action.command = strdup(yyvsp[0].str);
	yyval.action.str = cat2_str(make1_str("goto "), yyvsp[0].str);
;
    break;}
case 1256:
#line 5570 "preproc.y"
{
	yyval.action.code = W_DO;
	yyval.action.command = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
	yyval.action.str = cat2_str(make1_str("do"), mm_strdup(yyval.action.command));
;
    break;}
case 1257:
#line 5575 "preproc.y"
{
        yyval.action.code = W_BREAK;
        yyval.action.command = NULL;
        yyval.action.str = make1_str("break");
;
    break;}
case 1258:
#line 5580 "preproc.y"
{
	yyval.action.code = W_DO;
	yyval.action.command = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")"));
	yyval.action.str = cat2_str(make1_str("call"), mm_strdup(yyval.action.command));
;
    break;}
case 1259:
#line 5588 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str);
				;
    break;}
case 1260:
#line 5592 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 1261:
#line 5594 "preproc.y"
{	yyval.str = yyvsp[0].str;  ;
    break;}
case 1262:
#line 5596 "preproc.y"
{
					yyval.str = yyvsp[0].str;
				;
    break;}
case 1263:
#line 5600 "preproc.y"
{	yyval.str = cat2_str(make1_str("-"), yyvsp[0].str); ;
    break;}
case 1264:
#line 5602 "preproc.y"
{       yyval.str = cat2_str(make1_str("%"), yyvsp[0].str); ;
    break;}
case 1265:
#line 5604 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-1].str, make1_str("%")); ;
    break;}
case 1266:
#line 5606 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("+"), yyvsp[0].str); ;
    break;}
case 1267:
#line 5608 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("-"), yyvsp[0].str); ;
    break;}
case 1268:
#line 5610 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("/"), yyvsp[0].str); ;
    break;}
case 1269:
#line 5612 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("%"), yyvsp[0].str); ;
    break;}
case 1270:
#line 5614 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("*"), yyvsp[0].str); ;
    break;}
case 1271:
#line 5616 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("<"), yyvsp[0].str); ;
    break;}
case 1272:
#line 5618 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str(">"), yyvsp[0].str); ;
    break;}
case 1273:
#line 5620 "preproc.y"
{       yyval.str = cat2_str(yyvsp[-2].str, make1_str("= NULL")); ;
    break;}
case 1274:
#line 5622 "preproc.y"
{       yyval.str = cat2_str(make1_str("= NULL"), yyvsp[0].str); ;
    break;}
case 1275:
#line 5624 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("="), yyvsp[0].str); ;
    break;}
case 1276:
#line 5628 "preproc.y"
{	yyval.str = cat2_str(make1_str(";"), yyvsp[0].str); ;
    break;}
case 1277:
#line 5630 "preproc.y"
{	yyval.str = cat2_str(make1_str("|"), yyvsp[0].str); ;
    break;}
case 1278:
#line 5632 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-2].str, make1_str("::"), yyvsp[0].str);
				;
    break;}
case 1279:
#line 5636 "preproc.y"
{
					yyval.str = cat3_str(make2_str(make1_str("cast("), yyvsp[-3].str), make1_str("as"), make2_str(yyvsp[-1].str, make1_str(")")));
				;
    break;}
case 1280:
#line 5640 "preproc.y"
{	yyval.str = make3_str(make1_str("("), yyvsp[-1].str, make1_str(")")); ;
    break;}
case 1281:
#line 5642 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, yyvsp[-1].str, yyvsp[0].str);	;
    break;}
case 1282:
#line 5644 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("like"), yyvsp[0].str); ;
    break;}
case 1283:
#line 5646 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-3].str, make1_str("not like"), yyvsp[0].str); ;
    break;}
case 1284:
#line 5648 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1285:
#line 5650 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1286:
#line 5652 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-3].str, make1_str("(*)")); 
				;
    break;}
case 1287:
#line 5656 "preproc.y"
{
					yyval.str = cat2_str(yyvsp[-2].str, make1_str("()")); 
				;
    break;}
case 1288:
#line 5660 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-3].str, make1_str("("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1289:
#line 5664 "preproc.y"
{
					yyval.str = make1_str("current_date");
				;
    break;}
case 1290:
#line 5668 "preproc.y"
{
					yyval.str = make1_str("current_time");
				;
    break;}
case 1291:
#line 5672 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIME(%s) precision not implemented; zero used instead", yyvsp[-1].str);
					yyval.str = make1_str("current_time");
				;
    break;}
case 1292:
#line 5678 "preproc.y"
{
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 1293:
#line 5682 "preproc.y"
{
					if (atol(yyvsp[-1].str) != 0)
						fprintf(stderr,"CURRENT_TIMESTAMP(%s) precision not implemented; zero used instead",yyvsp[-1].str);
					yyval.str = make1_str("current_timestamp");
				;
    break;}
case 1294:
#line 5688 "preproc.y"
{
					yyval.str = make1_str("current_user");
				;
    break;}
case 1295:
#line 5692 "preproc.y"
{
  		     		        yyval.str = make1_str("user");
			     	;
    break;}
case 1296:
#line 5696 "preproc.y"
{
					yyval.str = make3_str(make1_str("exists("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1297:
#line 5700 "preproc.y"
{
					yyval.str = make3_str(make1_str("extract("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1298:
#line 5704 "preproc.y"
{
					yyval.str = make3_str(make1_str("position("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1299:
#line 5708 "preproc.y"
{
					yyval.str = make3_str(make1_str("substring("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1300:
#line 5713 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(both"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1301:
#line 5717 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(leading"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1302:
#line 5721 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim(trailing"), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1303:
#line 5725 "preproc.y"
{
					yyval.str = make3_str(make1_str("trim("), yyvsp[-1].str, make1_str(")"));
				;
    break;}
case 1304:
#line 5729 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("isnull")); ;
    break;}
case 1305:
#line 5731 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is null")); ;
    break;}
case 1306:
#line 5733 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-1].str, make1_str("notnull")); ;
    break;}
case 1307:
#line 5735 "preproc.y"
{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not null")); ;
    break;}
case 1308:
#line 5742 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is true")); }
				;
    break;}
case 1309:
#line 5746 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not false")); }
				;
    break;}
case 1310:
#line 5750 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-2].str, make1_str("is false")); }
				;
    break;}
case 1311:
#line 5754 "preproc.y"
{
				{	yyval.str = cat2_str(yyvsp[-3].str, make1_str("is not true")); }
				;
    break;}
case 1312:
#line 5758 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-4].str, make1_str("between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 1313:
#line 5762 "preproc.y"
{
					yyval.str = cat5_str(yyvsp[-5].str, make1_str("not between"), yyvsp[-2].str, make1_str("and"), yyvsp[0].str); 
				;
    break;}
case 1314:
#line 5766 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(" in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1315:
#line 5770 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str(" not in ("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1316:
#line 5774 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-4].str, yyvsp[-3].str, make3_str(make1_str("("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1317:
#line 5778 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("+("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1318:
#line 5782 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("-("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1319:
#line 5786 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("/("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1320:
#line 5790 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("%("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1321:
#line 5794 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("*("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1322:
#line 5798 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("<("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1323:
#line 5802 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str(">("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1324:
#line 5806 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-4].str, make1_str("=("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1325:
#line 5810 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("any ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1326:
#line 5814 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1327:
#line 5818 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1328:
#line 5822 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1329:
#line 5826 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1330:
#line 5830 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1331:
#line 5834 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1332:
#line 5838 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1333:
#line 5842 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("= any("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1334:
#line 5846 "preproc.y"
{
					yyval.str = cat3_str(yyvsp[-5].str, yyvsp[-4].str, make3_str(make1_str("all ("), yyvsp[-1].str, make1_str(")"))); 
				;
    break;}
case 1335:
#line 5850 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("+ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1336:
#line 5854 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("- all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1337:
#line 5858 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("/ all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1338:
#line 5862 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("% all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1339:
#line 5866 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("* all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1340:
#line 5870 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("< all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1341:
#line 5874 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("> all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1342:
#line 5878 "preproc.y"
{
					yyval.str = make4_str(yyvsp[-5].str, make1_str("=all("), yyvsp[-1].str, make1_str(")")); 
				;
    break;}
case 1343:
#line 5882 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("and"), yyvsp[0].str); ;
    break;}
case 1344:
#line 5884 "preproc.y"
{	yyval.str = cat3_str(yyvsp[-2].str, make1_str("or"), yyvsp[0].str); ;
    break;}
case 1345:
#line 5886 "preproc.y"
{	yyval.str = cat2_str(make1_str("not"), yyvsp[0].str); ;
    break;}
case 1346:
#line 5888 "preproc.y"
{       yyval.str = yyvsp[0].str; ;
    break;}
case 1347:
#line 5890 "preproc.y"
{ 	yyval.str = yyvsp[0].str; ;
    break;}
case 1350:
#line 5895 "preproc.y"
{ reset_variables();;
    break;}
case 1351:
#line 5897 "preproc.y"
{ yyval.str = make1_str(""); ;
    break;}
case 1352:
#line 5898 "preproc.y"
{ yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1353:
#line 5900 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1354:
#line 5901 "preproc.y"
{ yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str); ;
    break;}
case 1355:
#line 5903 "preproc.y"
{
		add_variable(&argsresult, find_variable(yyvsp[-1].str), (yyvsp[0].str == NULL) ? &no_indicator : find_variable(yyvsp[0].str)); 
;
    break;}
case 1356:
#line 5907 "preproc.y"
{
		add_variable(&argsinsert, find_variable(yyvsp[-1].str), (yyvsp[0].str == NULL) ? &no_indicator : find_variable(yyvsp[0].str)); 
;
    break;}
case 1357:
#line 5911 "preproc.y"
{
		add_variable(&argsinsert, find_variable(yyvsp[0].str), &no_indicator); 
		yyval.str = make1_str("?");
;
    break;}
case 1358:
#line 5916 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1359:
#line 5918 "preproc.y"
{ yyval.str = NULL; ;
    break;}
case 1360:
#line 5919 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1361:
#line 5920 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1362:
#line 5921 "preproc.y"
{ check_indicator((find_variable(yyvsp[0].str))->type); yyval.str = yyvsp[0].str; ;
    break;}
case 1363:
#line 5923 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1364:
#line 5924 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1365:
#line 5929 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1366:
#line 5931 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1367:
#line 5933 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1368:
#line 5935 "preproc.y"
{
			yyval.str = make2_str(yyvsp[-1].str, yyvsp[0].str);
		;
    break;}
case 1370:
#line 5939 "preproc.y"
{ yyval.str = make1_str(";"); ;
    break;}
case 1371:
#line 5941 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1372:
#line 5942 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1373:
#line 5943 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1374:
#line 5944 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1375:
#line 5945 "preproc.y"
{ yyval.str = make1_str("*"); ;
    break;}
case 1376:
#line 5946 "preproc.y"
{ yyval.str = make1_str("+"); ;
    break;}
case 1377:
#line 5947 "preproc.y"
{ yyval.str = make1_str("-"); ;
    break;}
case 1378:
#line 5948 "preproc.y"
{ yyval.str = make1_str("/"); ;
    break;}
case 1379:
#line 5949 "preproc.y"
{ yyval.str = make1_str("%"); ;
    break;}
case 1380:
#line 5950 "preproc.y"
{ yyval.str = make1_str("auto"); ;
    break;}
case 1381:
#line 5951 "preproc.y"
{ yyval.str = make1_str("bool"); ;
    break;}
case 1382:
#line 5952 "preproc.y"
{ yyval.str = make1_str("char"); ;
    break;}
case 1383:
#line 5953 "preproc.y"
{ yyval.str = make1_str("const"); ;
    break;}
case 1384:
#line 5954 "preproc.y"
{ yyval.str = make1_str("double"); ;
    break;}
case 1385:
#line 5955 "preproc.y"
{ yyval.str = make1_str("enum"); ;
    break;}
case 1386:
#line 5956 "preproc.y"
{ yyval.str = make1_str("extern"); ;
    break;}
case 1387:
#line 5957 "preproc.y"
{ yyval.str = make1_str("float"); ;
    break;}
case 1388:
#line 5958 "preproc.y"
{ yyval.str = make1_str("int"); ;
    break;}
case 1389:
#line 5959 "preproc.y"
{ yyval.str = make1_str("long"); ;
    break;}
case 1390:
#line 5960 "preproc.y"
{ yyval.str = make1_str("register"); ;
    break;}
case 1391:
#line 5961 "preproc.y"
{ yyval.str = make1_str("short"); ;
    break;}
case 1392:
#line 5962 "preproc.y"
{ yyval.str = make1_str("signed"); ;
    break;}
case 1393:
#line 5963 "preproc.y"
{ yyval.str = make1_str("static"); ;
    break;}
case 1394:
#line 5964 "preproc.y"
{ yyval.str = make1_str("struct"); ;
    break;}
case 1395:
#line 5965 "preproc.y"
{ yyval.str = make1_str("union"); ;
    break;}
case 1396:
#line 5966 "preproc.y"
{ yyval.str = make1_str("unsigned"); ;
    break;}
case 1397:
#line 5967 "preproc.y"
{ yyval.str = make1_str("varchar"); ;
    break;}
case 1398:
#line 5968 "preproc.y"
{ yyval.str = make_name(); ;
    break;}
case 1399:
#line 5969 "preproc.y"
{ yyval.str = make1_str("["); ;
    break;}
case 1400:
#line 5970 "preproc.y"
{ yyval.str = make1_str("]"); ;
    break;}
case 1401:
#line 5971 "preproc.y"
{ yyval.str = make1_str("("); ;
    break;}
case 1402:
#line 5972 "preproc.y"
{ yyval.str = make1_str(")"); ;
    break;}
case 1403:
#line 5973 "preproc.y"
{ yyval.str = make1_str("="); ;
    break;}
case 1404:
#line 5974 "preproc.y"
{ yyval.str = make1_str(","); ;
    break;}
case 1405:
#line 5976 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1406:
#line 5977 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\""));;
    break;}
case 1407:
#line 5978 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1408:
#line 5979 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1409:
#line 5980 "preproc.y"
{ yyval.str = make1_str(","); ;
    break;}
case 1410:
#line 5982 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1411:
#line 5983 "preproc.y"
{ yyval.str = make3_str(make1_str("\""), yyvsp[0].str, make1_str("\"")); ;
    break;}
case 1412:
#line 5984 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1413:
#line 5985 "preproc.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 1414:
#line 5986 "preproc.y"
{ yyval.str = make3_str(make1_str("{"), yyvsp[-1].str, make1_str("}")); ;
    break;}
case 1415:
#line 5988 "preproc.y"
{
    braces_open++;
    yyval.str = make1_str("{");
;
    break;}
case 1416:
#line 5993 "preproc.y"
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
#line 5998 "preproc.y"


void yyerror(char * error)
{
    fprintf(stderr, "%s:%d: %s\n", input_filename, yylineno, error);
    exit(PARSE_ERROR);
}
