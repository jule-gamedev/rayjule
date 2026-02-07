# rayjule
Raylib bindings for the Jule programming language.

> [!WARNING]
> This is still a WIP and has only been tested on windows so far so be aware. If you are on a different OS and want to help contributions are welcome

## Getting Started
First make sure you have the latest version of Jule installed. 0.2.0 is the latest at the time of writing.
Then create a new folder and create a Jule module via `julec mod init <module name>`
Once you have that clone this repository
```
git clone https://github.com/SabeDoesThings/rayjule
```
and copy the windows.jule file into your main directory.
This is has all the compiler flags needed to run on Windows.
There currently is not one for Linux or Mac OS because it has not been tested on those platforms at the moment.

Once you have that create a `main.jule` file and put this code:
```v
use "<module name>/rayjule"

fn main() {
   rayjule::InitWindow(800, 600, "raylib example")

   for !rayjule::WindowShouldClose() {
      rayjule::BeginDrawing()
      rayjule::ClearBackground(rayjule::Color{255, 255, 255, 255})
      rayjule::EndDrawing()
   }

   rayjule::CloseWindow()
}
```
Then just do `julec build .` and it should run.
