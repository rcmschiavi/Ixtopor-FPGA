# Reading C:/intelFPGA_pro/17.0/modelsim_ase/tcl/vsim/pref.tcl
# do sistema_basico2_run_msim_rtl_vhdl.do
# if {[file exists rtl_work]} {
# 	vdel -lib rtl_work -all
# }
# vlib rtl_work
# vmap work rtl_work
# Model Technology ModelSim - Intel FPGA Edition vmap 10.5c Lib Mapping Utility 2017.01 Jan 23 2017
# vmap work rtl_work 
# Copying C:/intelFPGA_pro/17.0/modelsim_ase/win32aloem/../modelsim.ini to modelsim.ini
# Modifying modelsim.ini
# 
# vcom -93 -work work {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/stepper_ctrl.vhd}
# Model Technology ModelSim - Intel FPGA Edition vcom 10.5c Compiler 2017.01 Jan 23 2017
# Start time: 19:41:00 on Nov 07,2017
# vcom -reportprogress 300 -93 -work work C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/stepper_ctrl.vhd 
# -- Loading package STANDARD
# -- Loading package TEXTIO
# -- Loading package std_logic_1164
# -- Loading package NUMERIC_STD
# -- Compiling entity stepper_ctrl
# -- Compiling architecture Behavioral of stepper_ctrl
# End time: 19:41:00 on Nov 07,2017, Elapsed time: 0:00:00
# Errors: 0, Warnings: 0
# vlib sopc_2
# ** Warning: (vlib-34) Library already exists at "sopc_2".
# vmap sopc_2 sopc_2
# Model Technology ModelSim - Intel FPGA Edition vmap 10.5c Lib Mapping Utility 2017.01 Jan 23 2017
# vmap sopc_2 sopc_2 
# Modifying modelsim.ini
# 
vsim work.stepper_ctrl
# vsim work.stepper_ctrl 
# Start time: 19:41:03 on Nov 07,2017
# Loading std.standard
# Loading std.textio(body)
# Loading ieee.std_logic_1164(body)
# Loading ieee.numeric_std(body)
# Loading work.stepper_ctrl(behavioral)
add wave -position end  sim:/stepper_ctrl/clk_50Mhz
add wave -position end  sim:/stepper_ctrl/acel_vel
add wave -position end  sim:/stepper_ctrl/clk_step
add wave -position 2  sim:/stepper_ctrl/fator_acel
add wave -position 3  sim:/stepper_ctrl/rst_pc
add wave -position 4  sim:/stepper_ctrl/velocidade_pc
force -freeze sim:/stepper_ctrl/velocidade_pc 7 0
force -freeze sim:/stepper_ctrl/velocidade_pc 5 0
force -freeze sim:/stepper_ctrl/clk_50Mhz 1 0, 0 {5 ps} -r 10
force -freeze sim:/stepper_ctrl/rst_pc 1 0
run
force -freeze sim:/stepper_ctrl/rst_pc 0 0
run
run
# ** Fatal: (vsim-3421) Value 11 is out of range 0 to 10.
#    Time: 802220 ps  Iteration: 0  Process: /stepper_ctrl/gen_clk File: C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/stepper_ctrl.vhd
# Fatal error in Process gen_clk at C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/stepper_ctrl.vhd line 46
# 
# HDL call sequence:
# Stopped at C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/stepper_ctrl.vhd 46 Process gen_clk
# 
