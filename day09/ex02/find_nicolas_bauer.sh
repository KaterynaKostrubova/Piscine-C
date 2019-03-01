cat $1 | grep -wi "bauer" | grep -wi "nicolas" | grep -vi "bomber" | grep -i "-" | tr -s "\t" " " | rev | cut -d " " -f 2 | rev
