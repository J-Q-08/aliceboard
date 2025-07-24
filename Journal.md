- author: Jeffrey Qi
- description: A custom alice-style keyboard that includes a rotary encoder
- created_at: 2025-07-5
---

Total Time Spent: 36 hours

---

July 5th: Researching about custom keyboards
  - Time: 2 hours
- Today was spent mostly investigating potential projects to work on. After looking at previous submissions, a keyboard seemed like something very intriguing. I watched a couple YouTube videos on what creating a custom keyboard would entail.

---

July 6th: created keyboard layout in Keyboard layout editor
  - Time: 1 hour
-   Based on suggestions from friends and tutorials, I created a sketch of what I wanted the board to look like through Keyboard Layout Editor and worked from there. Using presets available on the website, I moved the keyswitches around into the overall Alice-style that I wanted. Once I finished with the design, I continued over to Kicad where I started tinkering around and familiarizing with the software.
<img width="1038" height="368" alt="Screenshot 2025-07-15 at 3 13 03 PM" src="https://github.com/user-attachments/assets/6f01e9b5-3843-4360-b41e-23f04371868b" />

---


July 7th: Schematic
- Time: 2 hours
- Today was about building the schematic. I imported and created some footprints for important components like the STM32 and the keyswitches. Once I had a general understanding of the software, I started wiring columns and rows of switches and diodes together.

<img width="788" height="383" alt="Screenshot 2025-07-15 at 2 57 25 PM" src="https://github.com/user-attachments/assets/9de5e704-05f4-4ac2-b3f1-d207e1382221" />

---

July 8th: Added rotarey encoder & USB-C
- Time: 1 hour
- Today I added a rotary encoder: ec11 and learned about all the components on the Stm32 and what each pin does. I also added a usb-c port as well as other components like ESD protection.

  <img width="462" height="315" alt="Screenshot 2025-07-15 at 3 17 13 PM" src="https://github.com/user-attachments/assets/b5ccaaea-1a2c-49f0-9568-c1b9d43c3511" />

---

July 9th: Global Labels
- Time: 4 hours
-  Today I added global labels to everything that needed to connect together. This was a royal pain. Doing this, I had no clue if what I was doing was correct at all. Hoping all the reddit threads I read are correct.
  <img width="1070" height="630" alt="Screenshot 2025-07-15 at 3 18 10 PM" src="https://github.com/user-attachments/assets/0ef0e5cd-708b-4b4c-9f3d-ee120778dd31" />

---

July 11th: I wanna die
- Time: 7 hours
- This was absolutlely the most frustrating day so far. I imported the schematics in to the pcb editor and put them into the layout I made on keyboard layout editor. Only after rearraging the switches did I realize that I didn't place them in the correct order and the ratsnest was a complete mess. There was probably a much better way of handling this but I just simply renamed each switch and diode to the one it was supposed to correlate with. After that, I realized that I didn't place the mcu in the correct position before and now had wires crossing over each other everywhere. I had to rewire the whole thing multiple times and realized why custom keyboards are so damn expensive.

<img width="1538" height="612" alt="Screenshot 2025-07-15 at 3 20 01 PM" src="https://github.com/user-attachments/assets/72b38213-88de-4fec-ad99-15502d93b80f" />


---

July 13th: DRC SHOWS NO ERRORS!
- Time: 2 hours
- Today was a lot nicer of a day. Just double checked each pin to make sure that everything was connected to what it was supposed to connect to by running the DRC and fixing problems.
<img width="661" height="515" alt="Screenshot 2025-07-15 at 3 20 55 PM" src="https://github.com/user-attachments/assets/0c66dc45-4002-423e-b05a-f890c3a5a5cc" />

---

July 14th: PCB finished
- Time: 1 hour
- Today I finished up the pcb design. I added a copper fill zone, edge cuts and realigned everything to match perfectly. Figuring out how to do copper fill zones for ground on the 2 internal pcb layers was actually a lot easier than I had thought. I had been pushing this to the end because I had no clue what the hell the tutorials were talking about so I just avoided it until today. Turns out its like 5 buttons to do. Oh well.

<img width="931" height="376" alt="Screenshot 2025-07-15 at 3 21 15 PM" src="https://github.com/user-attachments/assets/e61271eb-f1c8-459f-8a66-3595598844c7" />

---

July 17th: created pcb plate
- Time 3 hours
- Today was spent mostly on learning the basics of Fusion. I watched many different tutorials on YouTube and using the sketch tool created a plate that I will use for my keyboard. This process was a bit annoying as I had learned that the pcb I had made had the keyswitch holes placed too close together so I had to go back and edit that.

<img width="1667" height="1011" alt="image" src="https://github.com/user-attachments/assets/127bc78d-f44a-4655-9d5d-56db44eb73fa" />

---

July 20th: Complete rough shape of keyboard
- Time 4 hours
- Today, using the tools that I had learned on the 17th, I created the housing for the keyboard. The bottom plate and side housing was quite simple to do. All I did was offset from the pcb and extrude upwards. However, for the top housing, I had to do a quite detailed sketch by measuing precisely the distance from the keyswitch cutouts in every direction. There was probably a much easier and cleaner way to do it but I am more than satisfied with the result that I've created.

- <img width="1440" height="972" alt="image" src="https://github.com/user-attachments/assets/0742579e-7a98-43f2-ba82-49c8da32f392" />

---

July 21th: Worked on 3d model
- Time: 2 Hours
- Today, I added cutouts for the usb-c port, as well as the rotary encoder. I also added threads for the screws to mount the plate and the case together. Most of the time was spent figuring out how to create the holes and how to line them up so that the threads were all oriented properly.

<img width="1376" height="929" alt="Screenshot 2025-07-21 at 11 13 58 PM" src="https://github.com/user-attachments/assets/96f86939-525d-48d7-a855-ad26acf6e849" />

---

July 23rd: Completion
- Time: 2 hours
- Today I finished compiling a firmware for the keyboard and added some finishing touches to the cad design like an indentation of my name on the underside of the keyboard for style. This concludes the designing portion of this journey and I am overall happy to have done this project up to now.
<img width="770" height="738" alt="Screenshot 2025-07-23 at 10 33 58 PM" src="https://github.com/user-attachments/assets/4af2110e-c608-46d3-90fc-eb375319215f" />

---

July 24: Cleaning up
- Time: 5 hours
- Today was a complete mess. I thought I had completed everything I needed to yesterday until I got to the submitting part. Thats when I realized that my BOM was nowhere to be found and I hadn't yet looked at places to 3d print my files. A lot of the time spent was just looking for cheaper alternatives but my pcb just seems to want to be expensive. <img width="597" height="658" alt="Screenshot 2025-07-24 at 1 03 59 PM" src="https://github.com/user-attachments/assets/70cb1492-b7cf-424a-a18a-bc1dccb324cd" />

