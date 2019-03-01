cat /etc/passwd | grep -v "#" | sed -n "1d;p;n" | cut -d ":" -f 1 | rev | sort --reverse | sed -n $FT_LINE1","$FT_LINE2"p"| sed "s/$/,/" | paste -s -d " " - | sed "s/,$/./" | tr -d "\n"
