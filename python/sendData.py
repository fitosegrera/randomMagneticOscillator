#!/usr/bin/python

import time
from RFduino import RFduino
import sys
from SimpleCV import *
import sys, time, socket

DONGLE_ID = "hci1"
RFDUINO_NAME = "RFduino"
device = RFduino(DONGLE_ID, RFDUINO_NAME)

cam = Camera(1)

if(device.find()):
  print "RFduino found"
else:
    print "RFduino not found."
    sys.exit(-1)

while True:
    video = cam.getImage().flipHorizontal().smooth()
    video = video.binarize(117)
    blobs = video.findBlobs()
    for b in blobs: 
      if b.area() > 7000 and b.isCircle(10):
        b.draw()
        #print b.x , b.y
        #time.sleep(.1)
        width = 320
        height = 240
        grid = 5
        if b.x != 320 and b.y != 240:
          valx = int(b.x/64)-1
          valy = int(b.y/48)-1
          #print valx, valy

          if (valx*valy == 0):
            device.send('a')
            #print ('a') 
          elif (valx*valy == 1):
            device.send('b')
            #print ('b')
          elif (valx*valy == 2):
            device.send('c')
            #print 'c'
          elif (valx*valy == 3):
            device.send('d')
            #print 'd'
          elif (valx*valy == 4):
            device.send('e')
            #print 'e'
          elif (valx*valy == 6):
            device.send('f')
            #print 'f'
          elif (valx*valy == 8):
            device.send('g')
            #print 'g'
          elif (valx*valy == 9):
            device.send('h')
            #print 'h'
          elif (valx*valy == 10):
            device.send('i')
            #print 'i'
          elif (valx*valy == 12):
            device.send('j')
          elif (valx*valy == 14):
            device.send('k')
          elif (valx*valy == 15):
            device.send('l')
          else:
            device.send('x')
          #time.sleep(0.1)
     
    video.show() 
    #time.sleep(0.001) # Let the program sleep for 1 millisecond so the computer can do other things