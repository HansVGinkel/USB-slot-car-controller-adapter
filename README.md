# USB slot car controller adapter
Arduino USB adapter for connecting a real analog resistor slot car controller to PC (game Virtual SlotCars).
## Hardware
- **Not all Arduino types can be used!** Arduino Pro Micro Sparkfun clone 5 V 16 MHz used (costs less than EUR/USD/GBP 10,-).
  - For a complete list of available packages and compatible boards see there 'supported boards' file.
  https://github.com/dmadison/ArduinoXInput/blob/master/extras/SupportedBoards.md
- **USB A to Micro USB cable**
- **Use minimal a 1 Watt resistor** not a common 1/4 Watt resistor.
- **Circuit diagram**
- ![Arduino USB slot car controller adapter](https://user-images.githubusercontent.com/79975566/110343992-57366b80-802d-11eb-8bee-f2e01754493b.png)

## Software
- **Install the free Arduino IDE on your PC** https://www.arduino.cc/en/software/

- **Install the free Xinput library**
  - ![image](https://user-images.githubusercontent.com/79975566/110919377-7af2fd80-831c-11eb-97fb-55ea1efdf3d3.png)
  - ![image](https://user-images.githubusercontent.com/79975566/110919981-22703000-831d-11eb-8c71-587f73e935d6.png)

- **Install the free board package**
  - Download .zip board package (Sparkfun used) https://github.com/dmadison/ArduinoXInput_SparkFun
  - Unzip and copy xinput_sparkfun as subfolder in the hardware folder 
  - ![image](https://user-images.githubusercontent.com/79975566/110921793-3fa5fe00-831f-11eb-88f5-74db2d34cbc0.png)
  - Select the used board
  - ![image](https://user-images.githubusercontent.com/79975566/110922299-cce95280-831f-11eb-8a78-f0d06d8525ad.png)
  - Select the port
  - ![image](https://user-images.githubusercontent.com/79975566/110922457-fefab480-831f-11eb-9825-0e83fd080344.png)

- **Download and open the free sketch file slotcar_controller.ino** from this page.
  - Deleting de default code in the IDE first.
  - Now copy paste the code from the file into the IDE.
  - Save your sketch file with a new name.

- **Connect a USB A to Micro USB cable from you PC to your Arduino**
- **Before you can upload** the sketch from you IDE to your Arduino you need to mention the following:
  - When uploading of the sketch starts you need to make a short (time) connection between the reset (RST) and ground (GND).
  - You can use a piece of wire for this, temperory soldered to the RST pin and touch other side to the GND.
  - On an original Arduino Micro there is a white reset button for this.
- **After uploading with the Xinput library, your Arduino can't possibly be programmed as a normal Arduino anymore!** 
  - But who cares? :)

## Explanation 
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
