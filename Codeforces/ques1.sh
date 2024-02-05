hackword="hack.txt"
if [ ! -f "$hackword" ]; then
                touch "$hackword"
fi
if [ -r "$hackword" ]; then
                echo "you are not allowed to read $hackword"
else
                echo "you are allowed to read $hackword"
fi