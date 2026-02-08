# SDL2 Platformer: A Journey in C

> A retro-inspired 2D platformer built from the ground up using C and SDL2. 

This project explores the fundamentals of game engine development, from manually handling memory to implementing physics and smooth world scrolling. It's more than just a game; it's a deep dive into how games actually work "under the hood."

---

## Features

- **Classic Gameplay**: Smooth 2D platforming action with responsive controls.
- **Hand-Crafted Physics**: Real-time gravity, velocity-based movement, and tile-based collision detection.
- **Endless World Scrolling**: A dynamic camera system that keeps the player at the center of the action.
- **Immersive Audio**: Integrated background music and dynamic sound effects (jumping, landing, and... dying).
- **Game States**: Fully implemented status screens for Lives, Game Over, and Victory conditions.
- **Input Friendly**: Play with your keyboard or plug in a joystick/gamepad.

---

## Getting Started

### Prerequisites

You'll need the SDL2 development libraries installed. If you're on Ubuntu, Pop!_OS, or any Debian-based system, just run:

```bash
sudo apt update && sudo apt install libsdl2-dev libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev
```

### Building & Playing

I've included a `Makefile` to make your life easier.

1.  **Clone and Compile**:
    ```bash
    make
    ```
2.  **Launch the Game**:
    ```bash
    ./game
    # Or just run: make run
    ```
3.  **Clean up binaries**:
    ```bash
    make clean
    ```

---

## How to Play

| Action | Control |
| :--- | :--- |
| **Move Left/Right** | `Left` / `Right` Arrow Keys |
| **Jump** | `Up` Arrow Key |
| **Toggle Fullscreen**| `Alt` + `Enter` |
| **Mute Sound** | `M` Key |
| **Quit** | `Esc` Key |

---

## What I Learned

Building this project taught me several key concepts in low-level programming:
- **Memory Management**: Handling textures and sounds manually in C without a garbage collector.
- **The Game Loop**: Understanding the relationship between events, logic processing, and rendering.
- **Header Organization**: Managing complex data structures across multiple files (`main.h`, `status.h`).
- **Linking & Makefiles**: Automating the build process with `sdl2-config`.

---

## Project Anatomy

- `main.c`: The heart of the game—handling the loop, physics, and rendering.
- `status.c`: Dedicated logic for the status screens (HUD).
- `main.h`: The global brain, housing all our shared structs and game state.
- `images/`: The pixel art and sound effects that bring the world to life.

---
*Created with a lot of C.*

