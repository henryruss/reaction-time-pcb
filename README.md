# Custom PCB — Reaction Time Game

A two-player reaction time game on a custom-designed PCB. A white LED 
lights up at a random interval — whoever presses their button first 
wins. The loser's color LED lights up and a buzzer sounds.

Designed entirely in KiCad. Schematic to Gerber files to physical 
board. Hand-soldered. Board fabricated by JLCPCB.

[Full writeup](https://portfolio-seven-mu-24.vercel.app/projects/reaction-time-pcb)

## Hardware

| Component | Details |
|---|---|
| Microcontroller | Arduino Uno (external, connected via pin headers) |
| LEDs | Red, yellow, green, white x2 |
| Resistors | Current-limiting (R1–R5) |
| Buzzer | Passive buzzer (BZ1) |
| Buttons | 2x tactile push switches |
| Fabrication | JLCPCB (2-layer, green soldermask) |

## Design notes

- Schematic and PCB layout designed in KiCad 9.0
- Board connects to an Arduino Uno via two rows of pin headers along 
  the top and bottom edges
- Firmware loaded via Arduino — direct chip programming is a planned 
  improvement
- All components hand-soldered

## Files

- `ReactionGame.kicad_sch` — KiCad schematic
- `ReactionGame.kicad_pcb` — KiCad PCB layout
- `gerbers/` — Gerber files sent to JLCPCB for fabrication
- `firmware/` — Arduino sketch (coming soon)
