s="[Desktop Entry]\nName=海天鹰涂鸦\nComment=简单的屏幕涂鸦程序\nExec=`pwd`/HTYScreenPen\nIcon=`pwd`/icons/icon.png\nPath=`pwd`\nTerminal=false\nType=Application\nCategories=Graphics;"
echo -e $s > HTYScreenPen.desktop
cp `pwd`/HTYScreenPen.desktop ~/.local/share/applications/HTYScreenPen.desktop
