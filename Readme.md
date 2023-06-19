# Nanosaur ROVER

## Introduce This Ropository

This repository is implementing a line tracer using the Jetson Nano board as a team project assignment for robot programming.

The Nanosaur moves along the line of the provided track from the starting point to the destination.

#

## Package List

1. nanosaur_hardware
2. image_pub
3. rover_line_follower

#

## Publish

- image_pub
    - camera/image_raw

- rover_line_follower
    - cmd_vel

### 

#

## Subscribe

- nanosaur_hardware
    - cmd_vel

- rover_line_follower
    - camera/image_raw
#

## Environment Setting

make work space

```
$ cd ~/  
$ git clone https://github.com/gihwanJang/ROS_NANOSUAR.git
```

ros setting 
```
$ cd ./

$ . opt/ros/eloquent/setup.bash
```

#

## Simulation video
![Video Label](http://img.youtube.com/vi/2_ZZi862BUA/0.jpg)  
(https://youtu.be/2_ZZi862BUA)