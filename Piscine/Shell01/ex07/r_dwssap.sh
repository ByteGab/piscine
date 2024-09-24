awk -F: 'NR % 2 == 0 {print $1}' /etc/passwd | rev | sort -r
