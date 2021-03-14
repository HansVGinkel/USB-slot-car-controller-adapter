# USB slot car controller adapter
Arduino USB adapter for connecting a real analog resistor slot car controller to PC (game Virtual SlotCars).
## Hardware
- **Not all Arduino types can be used!** Arduino Pro Micro Sparkfun clone 5 V 16 MHz used (costs less than EUR/USD/GBP 10,-).
  - For a complete list of available packages and compatible boards see there 'supported boards' file.
  https://github.com/dmadison/ArduinoXInput/blob/master/extras/SupportedBoards.md
- **USB A to Micro USB cable**
- **Use minimal a 1 Watt resistor** not a common 1/4 Watt resistor.
- **Circuit diagram**

  ![Arduino USB slot car controller adapter](https://user-images.githubusercontent.com/79975566/110343992-57366b80-802d-11eb-8bee-f2e01754493b.png)

## Software
- **Install the free Arduino IDE on your PC** https://www.arduino.cc/en/software/

- **Open the IDE program and install the free Xinput library**

  ![image](https://user-images.githubusercontent.com/79975566/110919377-7af2fd80-831c-11eb-97fb-55ea1efdf3d3.png)

  ![image](https://user-images.githubusercontent.com/79975566/110919981-22703000-831d-11eb-8c71-587f73e935d6.png)

- **Install the free board package**
  - Download .zip board package (Sparkfun used) https://github.com/dmadison/ArduinoXInput_SparkFun
  - Unzip, copy and move **xinput_sparkfun** as direct subfolder in the **hardware** folder, see screenshot:

  ![image](https://user-images.githubusercontent.com/79975566/111075898-4b91eb80-84ea-11eb-90df-190cdb6c475b.png)
 
  - Delete the folder "ArduinoXinput_Sparkfun-master" with the remaining content. It comes with the download but doesn't belong anywhere.
  - Select the used board w/Xinput, processor and port

    ![image](https://user-images.githubusercontent.com/79975566/111065022-cdb4ec80-84b7-11eb-9c9a-a52593c0ca3e.png)

- **Download and open the free sketch file slotcar_controller.ino** from this page.
  - Deleting de default code in the IDE first.
  - Now copy paste the code from the file into the IDE.
  - Press the Verify button ![image](https://user-images.githubusercontent.com/79975566/110943526-97eaf900-833b-11eb-8cfc-4f67e717b470.png)
 to see if the code is OK.
  - Save your sketch file with a new name.

- **Connect a USB A to Micro USB cable from you PC to your Arduino**
- **Before you can upload** the sketch from the IDE to your Arduino you need to mention the following:
  - After you pressed the Upload button ![image](https://user-images.githubusercontent.com/79975566/110943696-ce287880-833b-11eb-89fc-fe4b681249d1.png)
 and uploading of the sketch just starts ![image](https://user-images.githubusercontent.com/79975566/110944016-2bbcc500-833c-11eb-94b7-3ab0eee2ad2c.png)
 you allways need to make a short (time) connection between the reset (RST) and ground (GND).
  - You can use a piece of wire for this, temperory soldered to the RST pin and touch the other side of the wire to GND.
  - On an original Arduino Micro there is a white reset button for this. But that you will have to press twice.
  - There is no problem if the upload isn't right the fist time (lot's of error messages), just try again and adjust your reset timing.
- **After uploading with the Xinput library, your Arduino can't possibly be programmed as a normal Arduino anymore!** 
  - But who cares? :wink:

## Explanation 
### The use of minimal a 1 Watt resistor, not a common 1/4 Watt resistor!
- The 27 ohm 1 Watt resistor is the smalest possible resistor for 1 Watt at 5 Volts (P = VxV/R => 0.93 Watt = 5x5V/27R). 
- It's maximum current is reached when the controller has full throttle and nearly no resistance.
- The smaler this resistor is the more range there is for reading the slot car resistor.
- The resistor puls the wiper voltage to the ground. Which is intended to stop the car when the wiper is at the electrical isolated brake part of the slot car resistor or has bad electrical contact.

##  
![20210305_135558](https://user-images.githubusercontent.com/79975566/110118970-6f9f4f80-7dbb-11eb-8812-f8b6a421316b.jpg)
![20210305_135456](https://user-images.githubusercontent.com/79975566/110118994-75953080-7dbb-11eb-8261-c2a59c90fd44.jpg)
![20210305_135420](https://user-images.githubusercontent.com/79975566/110119007-79c14e00-7dbb-11eb-9f82-e38dd3e9c552.jpg)
![20210305_135437](https://user-images.githubusercontent.com/79975566/110119010-7c23a800-7dbb-11eb-8d13-e368e3763dd3.jpg)
