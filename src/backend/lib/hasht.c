/*-------------------------------------------------------------------------
 *
 * hasht.c
 *	  hash table related functions that are not directly supported
 *	  by the hashing packages under utils/hash.
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $Header$
 *
 *-------------------------------------------------------------------------
 */
#include <postgres.h>

#include <utils/memutils.h>
#include <lib/hasht.h>

/* -----------------------------------
 *		HashTableWalk
 *
 *		call function on every element in hashtable
 *		one extra argument, arg may be supplied
 * -----------------------------------
 */
void
HashTableWalk(HTAB *hashtable, HashtFunc function, int arg)
{
	long	   *hashent;
	long	   *data;
	int			keysize;

	keysize = hashtable->hctl->keysize;
	hash_seq((HTAB *) NULL);
	while ((hashent = hash_seq(hashtable)) != (long *) TRUE)
	{
		if (hashent == NULL)
			elog(FATAL, "error in HashTableWalk.");

		/*
		 * XXX the corresponding hash table insertion does NOT LONGALIGN
		 * -- make sure the keysize is ok
		 */
		data = (long *) LONGALIGN((char *) hashent + keysize);
		(*function) (data, arg);
	}
}
