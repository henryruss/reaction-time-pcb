![PCB Layout](images/pcb-layout.png)
![Schematic](images/pcb-schematic.png)

# Custom PCB — Reaction Time Game

A two-player reaction time game on a custom-designed PCB. A white LED 
lights up at a random interval — whoever presses their button first 
wins. The loser's color LED stays off and a buzzer sounds.

Designed entirely in KiCad. Schematic to Gerber files to physical 
board. Hand-soldered. Board fabricated by JLCPCB.

[Full writeup and photos](https://portfolio-seven-mu-24.vercel.app/projects/reaction-time-pcb)

## How it works

Each round starts with a countdown sequence — red LED, then yellow, 
then green — with buzzer feedback on each. After the green LED, both 
white LEDs light up simultaneously after a random delay (200–3000ms). 
The first player to press their button wins. The loser's white LED 
turns off, the buzzer sounds for 500ms, and the round resets.

`randomSeed(analogRead(A0))` seeds the RNG from floating analog noise 
on an unconnected pin for genuine randomness each game.

## Hardware

| Component | Details |
|---|---|
| Microcontroller | Arduino Uno (external, via pin headers) |
| LEDs | Red (D1), Yellow (D2), Green (D3), White x2 (D4, D5) |
| Resistors | R1–R5 current-limiting |
| Buzzer | Passive (BZ1) |
| Buttons | 2x tactile push switches (SW1, SW2) |
| Fabrication | JLCPCB (2-layer, green soldermask) |

## Pin mapping

| Arduino Pin | Connection |
|---|---|
| D8 | White LED 2 |
| D9 | White LED 1 |
| D10 | Green LED |
| D11 | Yellow LED |
| D12 | Red LED |
| D7 | Buzzer |
| D6 | Button 1 |
| D13 | Button 2 |

## Files

- `Reaction_game.ino` — Game firmware
- `ReactionGame.kicad_sch` — KiCad schematic
- `ReactionGame.kicad_pcb` — KiCad PCB layout
- `gerbers/` — Gerber files sent to JLCPCB

## Notes

Arduino is connected externally via pin headers rather than burning 
firmware directly to a standalone chip — a planned improvement for 
the next revision.
