#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
  
  /*Text Email: 
	Alltel phonenumber@message.alltel.com
  	ATT phonenumber@txt.att.net
	T-Mobile phonenumber@tmomail.net
	Virgin Mobile phonenumber@vmobl.com
	Sprint phonenumber@messaging.sprintpcs.com
	Verizon phonenumber@vtext.com
	Nextel phonenumber@messaging.nextel.com
	US Cellular phonenumber@mms.uscc.net
	
  */

  //Pre requisites: mail is setup--ssmtp.config is fillied in, and fswebcam for screenshotting

  sleep(8);
  system("fswebcam -r 1280x720 --jpeg 85 -D 1 --deinterlace -S 20"
	" --quiet ~/Documents/Coding_Hub/Email-On-Wakeup/image.jpg");
  sleep(3);
  system("echo ""Someone has logged onto your laptop--user@machine"" | mail -A image.jpg -s "
	"LOGIN_DETECTED!"" username@email.com");


  
  
  return 0;
}