#
# Script that collects a list of regression tests from a Makefile
#
# $PostgreSQL$
#
use strict;
use warnings;

my $M;

open($M,"<Makefile") || open($M,"<GNUMakefile") || die "Could not open Makefile";
undef $/;
my $m = <$M>;
close($M);

$m =~ s/\\[\r\n]*//gs;
if ($m =~ /^REGRESS\s*=\s*(.*)$/gm)
{
    my $t = $1;
    $t =~ s/\s+/ /g;
    print "SET TESTS=$t";
}
