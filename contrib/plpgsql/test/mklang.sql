--
-- PL/pgSQL language declaration
--
-- $Header$
--

create function plpgsql_call_handler() returns opaque
	as '/usr/local/pgsql/lib/plpgsql.so'
	language 'C';

create trusted procedural language 'plpgsql'
	handler plpgsql_call_handler
	lancompiler 'PL/pgSQL';

