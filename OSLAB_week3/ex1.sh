#!/usr/bin/bash
clear
echo "Hello $USER"
echo -e "Today is"; date
echo -e "Number of user login : \c"; who | wc -l
echo "Calendar"
cal
exit 0
