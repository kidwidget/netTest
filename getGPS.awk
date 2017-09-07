#! /usr/bin/gawk -f

BEGIN{ 	FS = "," 
		OFS = ","		
		ORS = ","
	}
{
	if($1 == "$GPRMC"){
	# print $10, $2, $4 $5, $6 $7
	print $10, $2, substr($4,0,2) " " substr($4,3,7) $5, substr($6,0,3) " " substr($6,4,7) $7
	exit
	}
}


