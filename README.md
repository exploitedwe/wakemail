# wakemail

Listen, not here to impress anyone with my README skills, I'll provide the gist.

## What It Does
This program just takes a screenshot of the person using the computer and emails it to the email indicated. The comment block at the top of the .c is to remind cloners that our cell phone numbers are open to receving emails as sms--you can text yourself on run a picture of the user.
Only works for Linux distro's that support ssmtp, mail() and possses the fswebcam program. 


## What It Needs
Prerequisites: ssmtp with accurate /etc/ssmtp/ssmtp.conf file, fswebcam, email service that supports being used (some deny it for security reasons).
sudo apt-get install [mail/ssmptp/fswebcam] and download the package names that it corrects you with.
