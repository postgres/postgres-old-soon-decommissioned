#
# lex.sed - sed rules to remove conflicts between the 
#               bootstrap backend interface LEX scanner and the
#               normal backend SQL LEX scanner
#
# $Header$
#
s/^yy/Int_yy/g
s/\([^a-zA-Z0-9_]\)yy/\1Int_yy/g
