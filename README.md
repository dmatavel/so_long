**Description:** So_long is a graphic project realized at school 42 with the help of a graphic library developed for educational purposes: the MiniLibX. The goal of the project is to develop a small 2d game. With the exception of a few specific rules, the project gives us freedom for creativity with regard to the creation of sprites and the ambiance of the game.

**About the game:**

- The player must pick up all the collectibles around the map and escap the level using the nearest exit.
- The keys `W`, `A`, `S`, `D` move the player up, left, down, and right respectively.
- When all the collectibles are picked up by the player, a passage becomes available and the player can access it.

**Instructions:**

- macOS:

1. Inside the so_long directory type `make` and press `Enter` to create the executable an executable named so_long.
2. Type `./so_long maps/map1.ber` and press `Enter`.

- Linux

1. The Linux version of the MiniLibiX graphics library "requires xorg, `x11` and zlib`, therefore you will need to install the following dependencies: `xorg`, `libxext-dev` and `zlib1g-dev`. Installing these dependencies on Ubuntu can be done as follows"*:

`sudo apt-get update && sudo apt-get install xorg libxext-dev zlib1g-dev libbsd-dev`

1. Inside the so_long directory type `make` and press `Enter` to create an executable called `so_long`.
2. Type `./so_long maps/map1.ber` and press Enter`.

**What I learned with this project:** What is a C graphics library and how to manipulate it to develop applications that generate events related to window creation and display of images, frames, pixels etc; how to create and use in depth C data structures for storing and using variables in different functions throughout the application development; flood fill algorithm; basic image manipulation for creating custom sprites.

*[42 Docs.](https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html)
