--
--	PostgreSQL code for ISSNs.
--
--	$Id$
--

load '/usr/local/pgsql/modules/issn.so';

--
--	Input and output functions and the type itself:
--

create function issn_in(opaque)
	returns opaque
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create function issn_out(opaque)
	returns opaque
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create type issn (
	internallength = 16,
	externallength = 9,
	input = issn_in,
	output = issn_out
);

--
--	The various boolean tests:
--

create function issn_lt(issn, issn)
	returns bool
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create function issn_le(issn, issn)
	returns bool
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create function issn_eq(issn, issn)
	returns bool
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create function issn_ge(issn, issn)
	returns bool
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create function issn_gt(issn, issn)
	returns bool
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

create function issn_ne(issn, issn)
	returns bool
	as '/usr/local/pgsql/modules/issn.so'
	language 'c';

--
--	Now the operators.  Note how some of the parameters to some
--	of the 'create operator' commands are commented out.  This
--	is because they reference as yet undefined operators, and
--	will be implicitly defined when those are, further down.
--

create operator < (
	leftarg = issn,
	rightarg = issn,
--	negator = >=,
	procedure = issn_lt
);

create operator <= (
	leftarg = issn,
	rightarg = issn,
--	negator = >,
	procedure = issn_le
);

create operator = (
	leftarg = issn,
	rightarg = issn,
	commutator = =,
--	negator = <>,
	procedure = issn_eq
);

create operator >= (
	leftarg = issn,
	rightarg = issn,
	negator = <,
	procedure = issn_ge
);

create operator > (
	leftarg = issn,
	rightarg = issn,
	negator = <=,
	procedure = issn_gt
);

create operator <> (
	leftarg = issn,
	rightarg = issn,
	negator = =,
	procedure = issn_ne
);

--
--	eof
--
