FROM osrf/ros:humble-desktop
  
RUN apt-get update
RUN apt-get -y upgrade
RUN apt-get install -y git wget flex bison gperf cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0 nano
RUN apt-get install -y usbutils udev
RUN apt-get install -y python3 python3-pip python3-setuptools
RUN apt-get install -y lsb-core

# Install Git
RUN apt-get install -y git

# Install Gazebo Simulator
RUN apt-get install -y gazebo \
    && apt-get install -y ros-humble-gazebo-ros-pkgs

# Install ROS2 Dependent Packages
# Cartographer
RUN apt-get install -y ros-humble-cartographer \
    && apt-get install -y ros-humble-cartographer-ros

# Navigation Stack
RUN apt-get install -y ros-humble-navigation2 \
    && apt-get install -y ros-humble-nav2-bringup

# Install RQT
RUN apt-get install -y ros-humble-rqt*

# Install XACRO
RUN apt-get install -y ros-humble-xacro

# Rosdep update
RUN rosdep update

# Install Joint State Publisher GUI
RUN apt-get install -y ros-humble-joint-state-publisher-gui
RUN apt install ros-humble-ros2-control -y


# Source the ROS setup file
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> ~/.bashrc
RUN echo 'export TURTLEBOT3_MODEL=burger' >> ~/.bashrc
RUN echo "alias rb='colcon build && source install/setup.bash && echo \"Build and Source Completed\"'" >> ~/.bashrc
RUN echo "alias sb='source install/setup.bash && echo  \"Source Completed\"'" >> ~/.bashrc
RUN echo "alias rds='rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO'" >> ~/.bashrc
RUN echo "source /usr/share/gazebo/setup.sh" >> ~/.bashrc 
RUN echo "source /usr/share/gazebo-11/setup.bash" >> ~/.bashrc
RUN echo "pwd" >> ~/.bashrc