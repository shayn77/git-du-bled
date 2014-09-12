if [ -z "$(ifconfig | grep -w "inet" | sed 1d | cut -d ' ' -f2)" ]; then
	echo "Je suis perdu!"
else
	ifconfig | grep -w "inet" | sed 1d | cut -d ' ' -f2
fi