# Nanosaur ROVER

## Introduce This Ropository

This repository is implementing a line tracer using the Jetson Nano board as a team project assignment for robot programming.

The Nanosaur moves along the line of the provided track from the starting point to the destination.

#

## Package List

- nanosaur_hardware
- image_pub
- rover_line_follower

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

## Simulation video
![Video Label](http://img.youtube.com/vi/2_ZZi862BUA/0.jpg)  
(https://youtu.be/2_ZZi862BUA)