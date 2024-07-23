# Software Setup

This page explains how to setup the coding environment for Linux and Windows.

## Windows

Please use these instructions if your laptop is running Windows.

Please note that only Windows 10 version 2004 and higher or Windows 11 are supported.

**Step 1: Open Windows Power Shell**

Enter `Windows Power Shell` in the system search bar and open the application.

**Step 2: Install Ubuntu using WSL**

WSL is _Windows Subsystem for Linux_ and it supports running Linux inside Windows. For this course we'll be using the Linux distribution Ubuntu 24.04.

Run the following command in the power shell to download and install Ubuntu.

```
wsl --install
```

Please make sure you have a fast internet connection as this step downloads more than 1GB of data.

**Step 3: Open Ubuntu Terminal**

Enter `Ubuntu` in the system search bar and open the application.

**Step 4: Install C compiler**

Run the following commands to install C compiler and other build tools.

```
sudo apt-get update
sudo apt-get install build-essential
```

## Linux

Please use these instructions if your laptop is running Linux.

For this course, we support only Ubuntu distribution of Linux. If you have any other distribution, please find out how to install c compiler.

Run the following commands to install C compiler and other build tools.

```
sudo apt-get update
sudo apt-get install build-essential
```

## References

* [How to install Linux on Windows with WSL][1]

[1]: https://learn.microsoft.com/en-us/windows/wsl/install
