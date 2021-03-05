# USB-slot-car-controller-adapter
Arduino USB adapter for connecting a real analog slot car controller to PC (game Virtual SlotCars).

You will need to install the free Xinput library! https://github.com/dmadison/ArduinoXInput

**Don't use a common 1/4 Watt resistor!**
The 26 ohm 1 Watt resistor is the smalest possible resistance for 1 Watt at 5 Volts (P = VxV/R => 0.96 Watt = 5x5V/26R).
The smaler this resistor is the more range there is for reading the slot car resistor.
The resistor puls the trigger voltage to the ground. Which is intended to stop the car when there is bad wiper contact with the slot car resistor.

![Arduino USB slot car controller adapter](https://user-images.githubusercontent.com/79975566/110134779-0e34ac00-7dce-11eb-99cd-8cc50ce4cb02.png)


![20210305_135558](https://user-images.githubusercontent.com/79975566/110118970-6f9f4f80-7dbb-11eb-8812-f8b6a421316b.jpg)
![20210305_135456](https://user-images.githubusercontent.com/79975566/110118994-75953080-7dbb-11eb-8261-c2a59c90fd44.jpg)
![20210305_135420](https://user-images.githubusercontent.com/79975566/110119007-79c14e00-7dbb-11eb-9f82-e38dd3e9c552.jpg)
![20210305_135437](https://user-images.githubusercontent.com/79975566/110119010-7c23a800-7dbb-11eb-8d13-e368e3763dd3.jpg)
