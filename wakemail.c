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

  sleep(8); // If it's a startup app, you need a few seconds for the desktop apps to load before running
  system("fswebcam -r 1280x720 --jpeg 85 -D 1 --deinterlace -S 20"
	   " --quiet ~/file/directory/location/of/where/you/want/the/image.jpg");
  sleep(3); // Give the screenshotter some time to screenshot before attempting to email
  system("echo ""Someone has logged onto your laptop--user@machine"" | mail -A image.jpg -s "
	   "LOGIN_DETECTED!"" username@email.com");

  //Could also add a system("rm image.jpg"); if you wanted, I didn't mind having the picture laying around
  return 0;
}
