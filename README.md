# wakemail

Listen, not here to impress anyone with my README skills, I'll provide the gist.

## What It Does
This program just takes a screenshot of the person using the computer and emails it to the email indicated. The comment block at the top of the .c is to remind cloners that our cell phone numbers are open to receving emails as sms--you can text yourself on run a picture of the user.
Only works for Linux distro's that support ssmtp, mail() and possses the fswebcam program. 

## What It Needs
Prerequisites: ssmtp with accurate /etc/ssmtp/ssmtp.conf file, fswebcam, email service that supports being used (some deny it for security reasons).
sudo apt-get install [mail/ssmptp/fswebcam] and download the package names that it corrects you with.

## How To Setup /etc/ssmtp/ssmtp.conf
```
gksu gedit /etc/ssmtp/ssmtp.conf
```
or, if you don't have gksu:
```
sudo gedit /etc/ssmtp/ssmtp.conf
```

Once it's open, comment out everything there already. You can comment out lines with the # symbol. 

Template of what is needed is below. If open in gedit, you can copy-paste to the bottom of the original.
```

  root=[youremail@provider.com]
  
  mail.domain.com
  
  mailhub=[smtp.gmail.com:587] # This is the gmail example, other providers may be different
  
  AuthUser=[youremail@provider.com]
  
  AuthPass=[password] # There is a way to encrypt this, IDK how though.
  
  UseTLS=YES
  
  UseSTARTTLS=YES
  
  rewriteDomain=[gmail.com] # Again, I used gmail, not sure if this follows for others, so I didn't make it look like a template.
  
  hostname=[hostname]       # Run hostname command to figure out your hostname
  
  FromLineOverride=YES      # Allows user to specifiy From: address 
```

## Error: Something about your provider not allowing access because it's not secure
They're completely right, it's not very secure to write your email and password to a file. Now, go to settings on their website and dig through them to figure out how to allow less-secure apps to run. 
