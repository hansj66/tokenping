# TokenPing

Firmware for sensing NC-signal from arcade / pinball coin mechs and transmitting this data over LoRa.

1. Install Newt as described in the [MyNewt](https://mynewt.apache.org/v1_1_0/os/get_started/native_install_intro/) docs pages
1. Create an application and register your device in https://lora.engineering
1. Update LORAWAN_DEVICE_EUI, LORAWAN_APP_KEY and LORAWAN_APP_EUI in /apps/tokenping/src/lora.h
1. Run the load_firmware.sh script in order to update repo dependencies, build and load bootloader and application into your [EE-02](https://docs.exploratory.engineering/ee-02/) LoRa module.

The application logic is trivial. Each time a coin/token is accepted by the coin mech, a pulse is generated on both NO/NC outputs. The token count is accumulated and the total count since power up is transmitted via LoRa every 4 minutes.

Arcade machines/pinballs normally uses the NO output. The NC output on the coin mech has to be connected to GPIO pin 31 on the EE-02. An interrupt is triggered on every rising edge on this pin in order to increment the payload counter.

![tokenping](http://www.timeexpander.com/wordpress/wp-content/uploads/tokenping.jpg)
