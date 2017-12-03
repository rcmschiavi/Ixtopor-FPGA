transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlib sopc_2
vmap sopc_2 sopc_2
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_reset_controller.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_reset_synchronizer.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_avalon_st_adapter.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_avalon_sc_fifo.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_watchdog_timer.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_uart.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_timestamp_timer.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_timer_geral.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_sysid.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_sys_clk_timer.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_sw.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_spi.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_saida_C.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_motor1.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_memoria.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_jtag_uart.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_hex_0.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_entrada_C.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_cpu.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_cpu_cpu.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_cpu_cpu_debug_slave_sysclk.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_cpu_cpu_debug_slave_tck.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_cpu_cpu_debug_slave_wrapper.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_cpu_cpu_test_bench.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_botao.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_PORTA_B.v}
vlog -vlog01compat -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_PORTA_A.v}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_irq_mapper.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_avalon_st_adapter_error_adapter_0.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_rsp_mux_001.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_merlin_arbitrator.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_rsp_mux.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_rsp_demux_004.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_rsp_demux.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_cmd_mux_004.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_cmd_mux.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_cmd_demux_001.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_cmd_demux.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_router_006.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_router_002.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_router_001.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/sopc_2_mm_interconnect_0_router.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_merlin_slave_agent.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_merlin_burst_uncompressor.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_merlin_master_agent.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_merlin_slave_translator.sv}
vlog -sv -work sopc_2 +incdir+C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/submodules/altera_merlin_master_translator.sv}
vcom -93 -work sopc_2 {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/sopc_2/synthesis/sopc_2.vhd}
vcom -93 -work work {C:/intelFPGA_lite/_Projeto_Nios/SistBasi2_ixtopor/stepper_ctrl.vhd}
