#!/bin/sh
# $Header$
# 
# Note that in our published benchmark numbers, we executed the command in the
# following fashion:
#
# time $POSTGRES -texecutor -tplanner -f hashjoin -Q bench
#
if [ -d ./obj ]; then
	cd ./obj
fi

echo =============== vacuuming benchmark database... =================
echo "vacuum" | postgres -Q bench > /dev/null

echo =============== running benchmark... =================
time postgres -texecutor -tplanner -Q bench < bench.sql
