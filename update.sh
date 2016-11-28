#!/bin/bash
tmp=""
function fix {
	case "$1" in
	"o") tmp="AC";;
	"*") tmp="**AC**";;
	"(") tmp="(AC)";;
	"_") tmp="_";;
	"x") tmp="x";;
	".") tmp=".";;
	esac
}
function addline {
	echo "Contest name:"
	read contest_name
	echo "Contest url:"
	read contest_url
	echo "Date:"
	read date
	num=$((`cat README.md | wc -l` - 7))
	sed "${num} a|[${contest_name}](${contest_url})|${date}|||||||||||||" -i README.md
	echo "DONE"
}
function editline {
	echo "Date:"
	read date
	echo "Status:"
	read stat
	num=`nl -b a README.md | grep ${date} | awk '{print $1}'`
	line=`cat README.md | grep ${date}`
	A=""; B=""; C=""; D="";	E=""; F="";	G=""; H="";	I=""; J="";	K=""; L="";	M="";
	for item in ${stat}
	do
		fix "${item:0:1}"
		case "${item:1:1}" in
			"A") A="${tmp}";;
			"B") B="${tmp}";;
			"C") C="${tmp}";;
			"D") D="${tmp}";;
			"E") E="${tmp}";;
			"F") F="${tmp}";;
			"G") G="${tmp}";;
			"H") H="${tmp}";;
			"I") I="${tmp}";;
			"J") J="${tmp}";;
			"K") K="${tmp}";;
			"L") L="${tmp}";;
			"M") M="${tmp}";;
		esac
	done
	sed "${num}d" -i README.md
	stat="|$A|$B|$C|$D|$E|$F|$G|$H|$I|$J|$K|$L|$M|"
	sed "${num}i ${line%%${date}*}${date}"${stat}"" -i README.md
	echo "DONE"
}
function help {
	echo -e "'update add' \t add a new contest information"
	echo -e "'update edit' \t edit the contest information"
}
case "$1" in
add)
	addline;;
edit)
	editline;;
--help)
	help;;
*)
	echo "Try 'update --help' for more information.";;
esac