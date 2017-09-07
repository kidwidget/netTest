#! /usr/bin/gawk -f

BEGIN {	OFS = ","
		FS = " "
		ORS = ","
	}
/0\.0/ {print $5, $6, $7, $8}		
