hackword = "hack.txt"
if [! -f "$hackword" ]; then
	toch "$hackword"

fi

if [ -r "$hackword" ];then
	echo "you are not allowed to read $hackword"

else 
	echo "you are allowed"

fi