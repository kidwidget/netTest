#! /usr/bin/gawk -f

BEGIN{ OFS = ","}

/icmp/ { print $5, substr($7,6,5), $8 }


