typedef union {
    int				tagname;
    struct ECPGtemp_type	type;
    char *			symbolname;
    int				indexsize;
    enum ECPGttype		type_enum;
    struct when			action;
} YYSTYPE;
#define	SQL_START	258
#define	SQL_SEMI	259
#define	SQL_STRING	260
#define	SQL_INTO	261
#define	SQL_BEGIN	262
#define	SQL_END	263
#define	SQL_DECLARE	264
#define	SQL_SECTION	265
#define	SQL_INCLUDE	266
#define	SQL_CONNECT	267
#define	SQL_OPEN	268
#define	SQL_EXECUTE	269
#define	SQL_IMMEDIATE	270
#define	SQL_COMMIT	271
#define	SQL_ROLLBACK	272
#define	SQL_RELEASE	273
#define	SQL_WORK	274
#define	SQL_WHENEVER	275
#define	SQL_SQLERROR	276
#define	SQL_NOT_FOUND	277
#define	SQL_BREAK	278
#define	SQL_CONTINUE	279
#define	SQL_DO	280
#define	SQL_GOTO	281
#define	SQL_SQLPRINT	282
#define	S_SYMBOL	283
#define	S_LENGTH	284
#define	S_ANYTHING	285
#define	S_LABEL	286
#define	S_VARCHAR	287
#define	S_VARCHAR2	288
#define	S_EXTERN	289
#define	S_STATIC	290
#define	S_AUTO	291
#define	S_CONST	292
#define	S_REGISTER	293
#define	S_STRUCT	294
#define	S_SIGNED	295
#define	S_UNSIGNED	296
#define	S_LONG	297
#define	S_SHORT	298
#define	S_INT	299
#define	S_CHAR	300
#define	S_FLOAT	301
#define	S_DOUBLE	302
#define	S_BOOL	303


extern YYSTYPE yylval;
