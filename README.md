# Photo Interrupter Door Lock Monitor
Using a SHARP GP1A57HRJ00F photo interrupter I can now ensure the power is off in my workshop when I leave

### See https://youtube.com/ralphbacon video #142
#### (Direct link to video: https://youtu.be/Cd0dJy0D8l4)

### Sponsored by LCSC Electronics - Shop Online: https://lcsc.com
```
LCSC was founded in 2011 in Shenzhen, China's very own Silicon Valley, just bordering Hong Kong. It starts
its business from a very small company. In the past 8 years since its founding, LCSC has grown into one of
the largest electronic components distributors in China.

Currently, LCSC has over 900,000 customers and over 310 employees with around $150 Million in sales. LCSC
distributes over 200,000 products ranging from semiconductors to resistors, capacitors, diodes, inductors,
connectors, transistors, sensors, providing design-chain services with EasyEDA too. 

EasyEDA is an easier and powerful online PCB design tool integrated LCSC component. LCSC acquired EasyEDA
in March 2017. 

LCSC has been confirmed by ISO 9001: 2015. 
A new warehouse of 60,000 SQM equipped with smooth pick-and-ship operation system is expected in 2019.
```

I've left the power on in my workshop once or twice too often now, it's only a matter of time before I burn the structure to the ground because the soldering iron or heater is left on too  - so how do I remind myself to turn off the power when I leave?

So how do I monitor that I have switched off my workshop power before I shut and lock the door?

This is a practical project that modifies the lock's strike plate (well, it's a bit more than just a plate, it's a solid brass housing, you'll see in the video). The actual modification is simple, as is the electronics using a trusty Arduino in the final solution, along with the Sharp photo interrupter that I had to seriously modify.

The code (see sample here in my GitHub) is simple in the extreme - it's getting the signal in the first place that took a bit of work.  

The modification could also be used as part of a burglar alarm but as I have an in-built PIR connected to my house alarm I didn't need to do this.

### LINKS    LINKS    LINKS    LINKS    LINKS    LINKS    LINKS

Proto-Pic (UK site but available elsewhere too) GP1A57HRJ00F:  
https://www.proto-pic.co.uk/photo-interrupter-gp1a57hrj00f-kit.html

Opto Interrupter Data Sheet:  
https://www.sparkfun.com/datasheets/Components/GP1A57HRJ00F.pdf 

#### Chinese options  

LCSC Electronics have over 100 photo interrupters:   
https://lcsc.com/products/Photo-Interrupter_457.html

Banggood optical-limit-stop (used in 3D printers) example:  
https://www.banggood.com/Optical-Endstop-Limit-Switch-Sensor-with-1M-3Pin-Cable-for-3D-Printer-p-1383078.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3897

---

If you like this video please give it a thumbs up, share it and if you're not already subscribed please consider doing so and joining me on my Arduinite journey

My channel and blog are here:  
------------------------------------------------------------------  
https://www.youtube.com/RalphBacon  
https://ralphbacon.blog  
------------------------------------------------------------------
