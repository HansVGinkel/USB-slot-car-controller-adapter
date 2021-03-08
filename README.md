# USB slot car controller adapter
Arduino USB adapter for connecting a real analog resistor slot car controller to PC (game Virtual SlotCars).
##  
- **You will need to install the free Xinput library!** https://github.com/dmadison/ArduinoXInput
- **Not all Arduino types can be used for this library!** Arduino Pro Micro Sparkfun clone 5 V 16 MHz used.
  - For a complete list of available packages and compatible boards see there 'supported boards' file.
https://github.com/dmadison/ArduinoXInput/blob/master/extras/SupportedBoards.md
- **After uploading with the Xinput library, your Arduino can't possibly be programmed as a normal Arduino anymore!**
##  
![Arduino USB slot car controller adapter](https://user-images.githubusercontent.com/79975566/110343992-57366b80-802d-11eb-8bee-f2e01754493b.png)
##  
### Use minimal a 1 Watt resistor, not a common 1/4 Watt resistor!
- The 27 ohm 1 Watt resistor is the smalest possible resistor for 1 Watt at 5 Volts (P = VxV/R => 0.93 Watt = 5x5V/27R). 
- It's maximum current is reached when the controller has full throttle and nearly no resistance.
- The smaler this resistor is the more range there is for reading the slot car resistor.
- The resistor puls the wiper voltage to the ground. Which is intended to stop the car when the wiper is at the electrical isolated brake part of the slot car resistor or has bad electrical contact.

##  
![20210305_135558](https://user-images.githubusercontent.com/79975566/110118970-6f9f4f80-7dbb-11eb-8812-f8b6a421316b.jpg)
![20210305_135456](https://user-images.githubusercontent.com/79975566/110118994-75953080-7dbb-11eb-8261-c2a59c90fd44.jpg)
![20210305_135420](https://user-images.githubusercontent.com/79975566/110119007-79c14e00-7dbb-11eb-9f82-e38dd3e9c552.jpg)
![20210305_135437](https://user-images.githubusercontent.com/79975566/110119010-7c23a800-7dbb-11eb-8d13-e368e3763dd3.jpg)
