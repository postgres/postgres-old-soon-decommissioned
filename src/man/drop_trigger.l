.\" This is -*-nroff-*-
.\" XXX standard disclaimer belongs here....
.\" $Header$
.TH "DROP TRIGGER" SQL 09/26/97 PostgreSQL
.SH NAME
drop trigger \(em destroy existing classes
.SH SYNOPSIS
.nf
\fBdrop trigger\fR trigname
.fi
.SH DESCRIPTION
.BR "Drop Trigger"
removes triggers from the data base.  Only its owner may destroy a
trigger.
.SH EXAMPLE
.nf
--
--Destroy the empverify trigger
--
drop trigger empverify
.fi
.SH "SEE ALSO"
create trigger(l).
