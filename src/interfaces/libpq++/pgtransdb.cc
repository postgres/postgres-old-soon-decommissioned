/*-------------------------------------------------------------------------
 *
 *   FILE
 *	pgtransdb.cpp
 *
 *   DESCRIPTION
 *      implementation of the PgTransaction class.
 *   PgConnection encapsulates a transaction querying to backend
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 *
 *-------------------------------------------------------------------------
 */
 
 #include "pgtransdb.h"
 
static char rcsid[] = "$Id$";
 
// ****************************************************************
//
// PgTransaction Implementation
//
// ****************************************************************
// Make a connection to the specified database with default environment
// See PQconnectdb() for conninfo usage. 
PgTransaction::PgTransaction(const char* conninfo)
   : PgDatabase(conninfo)
{
	BeginTransaction();
}

// Destructor: End the transaction block
PgTransaction::~PgTransaction()
{
	EndTransaction();
}

// Begin the transaction block
ExecStatusType PgTransaction::BeginTransaction()
{
	return Exec("BEGIN");
} // End BeginTransaction()

// Begin the transaction block
ExecStatusType PgTransaction::EndTransaction()
{
	return Exec("END");
} // End EndTransaction()
