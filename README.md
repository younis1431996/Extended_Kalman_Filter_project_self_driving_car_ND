[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

# The Project
In this project a kalman filter is used to estimate the state of a moving object of interest with noisy lidar and radar measurements. 

[//]: # (Image References)

[image1]: ./images/Dataset1.png "Result of Dataset 1"
[image2]: ./images/Dataset2.png "Result of Dataset 2"

## Prerequisites

This project involves the Term 2 Simulator which can be downloaded [here](https://github.com/udacity/self-driving-car-sim/releases)

Required tools are:
* cmake >= 3.5
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

This repository includes two files that can be used to set up and install [uWebSocketIO](https://github.com/uWebSockets/uWebSockets) for either Linux or Mac systems. For windows you can use either Docker, VMware, or even [Windows 10 Bash on Ubuntu](https://www.howtogeek.com/249966/how-to-install-and-use-the-linux-bash-shell-on-windows-10/) to install uWebSocketIO. Please see [this concept in the classroom](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/16cf4a78-4fc7-49e1-8621-3450ca938b77) for the required version and installation scripts.

## Build and Install
Once the install for uWebSocketIO is complete, the main program can be built and run by doing the following from the project top directory.

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./exf

## Interaction with the Term 2 Simulator

Here is the main protcol that main.cpp uses for uWebSocketIO in communicating with the simulator.

### INPUT: values provided by the simulator to the c++ program

* ["sensor_measurement"] => the measurement that the simulator observed (either lidar or radar)

### OUTPUT: values provided by the c++ program to the simulator

* ["estimate_x"] <= kalman filter estimated position x
* ["estimate_y"] <= kalman filter estimated position y
* ["rmse_x"]
* ["rmse_y"]
* ["rmse_vx"]
* ["rmse_vy"]


## Code Style
I tried to stick to the [Google's C++ style guide](https://google.github.io/styleguide/cppguide.html).
In order to check the guidelines I installed cpplint using 
`pip install cpplint`


## Results
The simulator provides noisy lidar and radar measurements which are shown as blue and red dots. The position that is calculated by the kalman filter is displayed as green dots.

The results for dataset 1 are shown in the following image
![alt text][image1]

The results for dataset 2 are shown in the following image
![alt text][image2]



## Pro Tips

* [All About Kalman Filters](https://medium.com/self-driving-cars/all-about-kalman-filters-8924abe3aa88)
* [Sensor Fusion and Object Tracking using an Extended Kalman Filter Algorithm — Part 1](https://medium.com/@mithi/object-tracking-and-fusing-sensor-measurements-using-the-extended-kalman-filter-algorithm-part-1-f2158ef1e4f0)
* [Estimation of Sideslip Angle Based on Extended Kalman Filter](https://www.hindawi.com/journals/jece/2017/5301602/)
* [Udacity Self-Driving Car Nanodegree Project 6 - Extended Kalman Filter](http://jeremyshannon.com/2017/04/21/udacity-sdcnd-extended-kalman-filter.html)
* [Extended Kalman Filter for Channel Estimation in Rayleigh Fading Environment and Fadingless Environment](https://www.ijser.org/paper/Extended-Kalman-Filter-for-Channel-Estimation-in-Rayleigh-Fading-Environment-and-Fadingless-Environment.html)
* [A Complete Guide to Programming in C++](http://www.lmpt.univ-tours.fr/~volkov/C++.pdf)
* [C++ Tutorial](https://www.tutorialspoint.com/cplusplus/index.htm)
* [C++ Programming](https://en.wikibooks.org/wiki/C%2B%2B_Programming)
* [C++ Language](http://www.cplusplus.com/doc/tutorial/)
* [Cmake FAQS](https://cmake.org/Wiki/CMake_FAQ)
* [Using make and writing Makefiles](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html)
* [Youtube set of tutorials on using make and writing Makefile](https://www.youtube.com/watch?v=aw9wHbFTnAQ)
 

