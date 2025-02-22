![image](https://github.com/user-attachments/assets/559497b8-b192-487e-9d35-99ab5c7711cc)<p align="center">
      <img src="[[https://ibb.co/tf49y1q](https://ibb.co/tf49y1q)]" width="126">

## Voxel Glass

Voxel Glass is an open-source AR device designed for research and educational purposes. The project includes two versions of the device: Voxel Glass and Voxel Glass Mini. The main difference between them lies in size and the number of supported sensors: the standard version allows for more sensors to be installed, while the mini version is more compact and features one touch button instead of three physical buttons.

## About the Project

This project was developed with the aim of uniting and creating a community of enthusiasts for collaborative work on AR headsets. As part of this initiative, the Voxel One headset was created, which will continue to be modified and developed by the community over a long period of time.

The device's architecture is based on Arduino microcontrollers, making it more accessible to users and promoting openness and friendliness towards the development of their own AR applications.

## Sensors used in the device

- Display ST-7789
- Gyroscope and accelerometer MPU-6050
- Magnetometer HMC-5883L
- Barometr GY-68
- Bluetooth HC-06

## Assembling

### ST-7789 :

-  VCC - 3.3V (Only!)
-  GND - GND (Any)
-  SCK - 13 + Resistor (Used in Voxel firmwares)
-  SDA - 11 + Resistor (Used in Voxel firmwares)
-  RES - 9 + Resistor (Used in Voxel firmwares)
-  DC - 10 + Resistor (Used in Voxel firmwares)

### MPU-6050 :

-  VCC - 3.3-5V
-  GND - GND (Any)
-  SCL - A4 (Only!)
-  SDA - A5 (Only!)

> [!WARNING]
> INCOMPATIBLE WITH HMC-5883L OR GY-68

### HMC-5883L :

-  VCC - 3.3-5V (Check the specification of your HMC5883L module. Some only work with 3.3V)
-  GND - GND (Any)
-  SCL - A4 (Only!)
-  SDA - A5 (Only!)
> [!WARNING]
> INCOMPATIBLE WITH MPU-6050 OR GY-68

### BAROMETER GY-68 :

-  VCC - 3.3V (Only!)
-  GND - GND (Any)
-  SCL - A4 (Only!)
-  SDA - A5 (Only!)
> [!WARNING]
>  INCOMPATIBLE WITH MPU-6050 OR HMC-5883L

### BLUETOOTH HC-06 :

-  VCC - 3.3-5V (Check the specification of your module. Some only work with 3.3V)
-  GND - GND (Any)
-  TXD - RX (D0)
-  RXD - TX (D1)

## Links

- [Telegramm](https://t.me/VoxelIndie)
- [YouTube](https://youtu.be/fe8EWjKe92w?si=TjnR1veJzxJYvTlk)
- [DonationAlerts](https://www.donationalerts.com/r/voxel_indle)

## Contact

- If you have any questions or suggestions, feel free to reach out to us via email: voxel.ar.indle@gmail.com