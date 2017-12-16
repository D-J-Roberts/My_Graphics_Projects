# My_Graphics_Projects

Some simple graphics projects for visualization and game development using SDL, SFML, OpenGL, VTK, Cairo, et al. The projects have been built for x64 using Microsoft Visual Studio Community 2017.

Projects and directions: 

Particle_Fire_Explosion - A simple particle explosion visualization using the SDL library. (John Purcell's "C++ Tutorial For Complete Beginners"). 

1. Download and unzip SDL2-devel-2.0.7-VC.zip from https://www.libsdl.org/download-2.0.php to your libraries folder. 
2. Open the project solution and set it to Release and x64. 
3. Include the SDL include folder in the solution's Properties -> C/C++ -> General -> Additional Include Directories. 
4. Link the SDL lib folder in the solution's Properties -> Linker -> General -> Additional Library Directories. 
5. Add SDL2.lib and SDL2main.lib to the solution's Properties - Linker -> Input -> Additional Dependencies. 
6. After building the project remember to copy the x64 SDL2.dll from the SDL lib folder to your x64 -> Release folder. 

Fractal_Creator - A simple project that renders Mandelbrot fractal images to a bitmap. (John Purcell's "Learn Advanced C++ Programming").

1. Open the project solution and set it to Release and x64. 
2. Experiment with colour ranges and zooms in Main.cpp. 
3. Experiment with MAX_ITERATIONS in Mandelbrot.h. 

Note: A MAX_ITERATIONS of 100000 gets rid of the pixelation almost completely, but takes a very long time to compile and run. 
