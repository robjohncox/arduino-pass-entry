arduino-pass-entry
==================

Super simple arduino application to help with entering passwords on computers at the press of a button. This has been tested on an Arduino Due, and should also work with the Leonardo or the Micro (according to the Arduino Mouse and Keyboard libraries: http://arduino.cc/en/Reference/MouseKeyboard).

To set up your own password entry button:

* Modify the script, setting up your password on line 2 (and change the pin on line 1 if you like)
* Upload to an arduino
* Connect the arduino to your computer using the Native USB port (this is for the Due, other Arduino's may differ).
* Connect a push to make style switch between ground and pin 2 of the Arduino

You should find that when you push the button, your password is entered. Of course, this should be useful for repetitive text entry for things other than passwords, and is simple to modify to handle multiple buttons entering multiple passwords.


Background
----------

It is **definitely not** a good idea to use this for your own passwords, in fact you should think carefully before using this! This was developed for use in a highly controlled testing setup where the password was shared between all people who would have physical access to the machine in question.


Contributions
-------------

Any improvements are gratefully received via pull request. One thing to note, please make sure that you leave the password on line 2 as a placeholder, try not to check your own passwords in :)
