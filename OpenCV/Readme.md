
# Installation of OpenCV 

Host Machine: Ubuntu (Linux) 18.04LTS 

## Basic Installation on Linux 

To start the installation we first need to keep in mind that we need to make sure that we have g++ and build configuration tool i.e. make installed. 

If you don't have it already installed use the following commands 

* For g++ Installation

	```sudo apt install -y g++```

* OpenCV uses CMake build configuration tool

	```sudo apt install -y cmake```

* CMake can generate scripts for different build systems e.g. make, ninja:

	```sudo apt install -y make```

* Install tool for getting and unpacking sources:

	```sudo apt install -y wget unzip```

   or git

	```sudo apt install -y git```

### Getting Started with Installation:

**Install minimal pre-requistes**

```
sudo apt update && sudo apt install -y cmake g++ wget unzip
```

**Download and Unpack OpenCV Resources**

```wget -O opencv.zip https://github.com/opencv/opencv/archive/master.zip
wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/master.zip
unzip opencv.zip
unzip opencv_contrib.zip
```

**Create build directory (parent) and switch into it**

```mkdir -p build && cd build```

**Configure OpenCV Resources**

```cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-master/modules ../opencv-master```

**Build and get the Makefile**

``` cmake --build```    _CMake the current project_

**Configure - Generate build scripts for the preferred build system**

``` cmake ../opencv```

**Build - run actual compilation process**

```make -j4```    **_"j4 is for processor supporting multi-threading operation if not eliminate it"_**

### Verify the Installation

After successful build you will find libraries in the ```build/lib``` directory and executables (test, samples, apps) in the ```build/bin``` directory:

```
ls bin
ls lib
```

CMake package files will be located in the build root:

```
ls OpenCVConfig*.cmake
ls OpenCVModules.cmake
```

### Issues after the Installation

After successful installation of the libraries we tried to run a simple program but encountered a issue [#6](https://github.com/zrajani/Image_Beautification_and_Advancement/issues/6) 

## Alternative just to install all the required Libraries for OpenCV

**_This method was suggested to me by [Dr. Takis Zourntos](https://github.com/takiszourntos)_**

In Ubuntu, the easiest way to get started with OpenCV is as follows:

```sudo apt install libopencv-dev```

This gets you OpenCV ver. 3.2 which is a great place to start!


## Working on OpenCV with Eclipse 








