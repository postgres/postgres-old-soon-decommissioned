.\" This is -*-nroff-*-
.\" XXX standard disclaimer belongs here....
.\" $Header$
.TH GRANT SQL 11/05/95 PostgreSQL PostgreSQL
.SH NAME
grant - grant access control to a user or group
.SH SYNOPSIS
.nf
\fBgrant\fR <privilege[,privilege,...]>
	\fBon\fR <rel1>[,...<reln>]
	\fBto\fR [\fBpublic\fR | group <group> | <username>]

	\fBprivilege\fR is {\fBALL\fR | \fBSELECT\fR | \fBINSERT\fR | \fBUPDATE\fR | \fBDELETE\fR | \fBRULE\fR}
.fi
.SH DESCRIPTION
.PP
.B Grant
allows you to give specified permissions to all users or
a certain user or group.
By default, only the table owner has rights.
.SH EXAMPLES
.nf
--
--Example of a grant
--
grant insert
	on mytab
	to public
.fi
.SH "SEE ALSO"
revoke(l).
