/*
 * Headers for handling of SET var TO statements
 *
 * $Id$
 *
 * $Log: variable.h,v $
 * Revision 1.1  1997/04/10 16:53:30  mjl
 * Initial revision
 *
 */
/*-----------------------------------------------------------------------*/

enum DateFormat { Date_Postgres, Date_SQL, Date_ISO };

/*-----------------------------------------------------------------------*/
struct PGVariables
	{
	struct
		{
		bool euro;
		enum DateFormat format;
		} date;
	};

extern struct PGVariables PGVariables;

/*-----------------------------------------------------------------------*/
bool SetPGVariable(const char *, const char *);
const char *GetPGVariable(const char *);

/*-----------------------------------------------------------------------*/
bool SetPGVariable(const char *, const char *);
const char *GetPGVariable(const char *);
