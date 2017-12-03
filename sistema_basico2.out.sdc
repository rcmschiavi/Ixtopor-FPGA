## Generated SDC file "sistema_basico2.out.sdc"

## Copyright (C) 1991-2013 Altera Corporation
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and its AMPP partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, Altera MegaCore Function License 
## Agreement, or other applicable license agreement, including, 
## without limitation, that your use is for the sole purpose of 
## programming logic devices manufactured by Altera and sold by 
## Altera or its authorized distributors.  Please refer to the 
## applicable agreement for further details.


## VENDOR  "Altera"
## PROGRAM "Quartus II"
## VERSION "Version 13.0.0 Build 156 04/24/2013 SJ Web Edition"

## DATE    "Thu Oct 16 15:24:45 2014"

##
## DEVICE  "EP4CE15E22C8"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {clock} -period 20.000 -waveform { 0.000 10.000 } [get_ports {clk}]


#**************************************************************
# Create Generated Clock
#**************************************************************



#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************

set_clock_uncertainty -rise_from [get_clocks {clock}] -rise_to [get_clocks {clock}] -setup 3.020  
set_clock_uncertainty -rise_from [get_clocks {clock}] -rise_to [get_clocks {clock}] -hold 0.020  
set_clock_uncertainty -rise_from [get_clocks {clock}] -fall_to [get_clocks {clock}] -setup 3.020  
set_clock_uncertainty -rise_from [get_clocks {clock}] -fall_to [get_clocks {clock}] -hold 0.020  
set_clock_uncertainty -fall_from [get_clocks {clock}] -rise_to [get_clocks {clock}] -setup 3.020  
set_clock_uncertainty -fall_from [get_clocks {clock}] -rise_to [get_clocks {clock}] -hold 0.020  
set_clock_uncertainty -fall_from [get_clocks {clock}] -fall_to [get_clocks {clock}] -setup 3.020  
set_clock_uncertainty -fall_from [get_clocks {clock}] -fall_to [get_clocks {clock}] -hold 0.020  


#**************************************************************
# Set Input Delay
#**************************************************************



#**************************************************************
# Set Output Delay
#**************************************************************



#**************************************************************
# Set Clock Groups
#**************************************************************



#**************************************************************
# Set False Path
#**************************************************************



#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

