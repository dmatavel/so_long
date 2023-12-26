
# so_long

## Name

so_long - a small 2D game.

## **Synopsis**

**so_long** [*map_file path*].

## Description

so_long is a small 2D game in witch the player must pick up all the collectibles around the map and escape the level using the nearest exit. The keys `W`, `A`, `S`, `D` move the player up, left, down, and right respectively. When all the collectibles are picked up by the player, a passage becomes available.

## **Download**

You can download the source code [here](https://github.com/dmatavel/so_long/archive/refs/heads/main.zip) or click the "Code" button at the upper-right corner of this repository, selecting "Download Zip".

Alternatively, you can clone this repository in your machine. Simple copy and paste or write the following command in your terminal:

    cd ~/Downloads/ && git clone https://github.com/dmatavel/so_long.git

It assumes that you have [Git](https://git-scm.com/) installed and a **Downloads** folder in your **Home** directory. If you face any error, check this requirements.

## Compilation and execution

so_long uses the graphic library MiniLibX and its Linux version, as said in [42Docs](https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html), "requires `xorg`, `x11` and `zlib`, therefore you will need to install the following dependencies: `xorg`, `libxext-dev` and `zlib1g-dev`. Installing these dependencies on Ubuntu can be done as follows" :
    
    sudo apt-get update && sudo apt-get install xorg libxext-dev zlib1g-dev libbsd-dev

If you downloaded the zip file, extract it and enter the **so_long-main** folder. With a right click on your file browser, select the option **Open in Terminal** or something like that. If you've cloned the repository, simple go inside the program's directory. Copy and paste or write in your terminal:

    make so_long

An executable named **so_long** will be created. After that, run the program with:

    ./so_long/maps/map1.ber

## Bugs and contribution

Report bugs sending an email for matavelidanilo@gmail.com or opening an issue on the project's GitHub repository. Pull requests with fixes, features or any other upgrades are highly welcome.  

## Supported OSs

so_long was developed and tested on Ubuntu 22.04 LTS and on MacOS 10.15 Catalina. 

## 42 cursus students

so_long was first developed as a project in 42 cursus. If you are a student at 42, please be aware that this project may have been modified in relation to the project that was submitted for evaluation during the course. You can take it as a reference for your studies, but not as a parameter for correcting your project.

## License

This is a free work delivered for educational purposes during the main course
at 42 <42.rio>.

Feel free to use it, change it, give advices, send me a pull request or
just slack me if you want to share some thoughts.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
