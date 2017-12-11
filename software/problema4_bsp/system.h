/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'sopc_2'
 * SOPC Builder design path: ../../sopc_2.sopcinfo
 *
 * Generated: Thu Dec 07 05:25:28 BRST 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00020820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00010020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00010000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00020820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00010020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00010000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SPI
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_ADC
#define __ALTERA_UP_AVALON_RS232


/*
 * PORTA_A configuration
 *
 */

#define ALT_MODULE_CLASS_PORTA_A altera_avalon_pio
#define PORTA_A_BASE 0x210e0
#define PORTA_A_BIT_CLEARING_EDGE_REGISTER 0
#define PORTA_A_BIT_MODIFYING_OUTPUT_REGISTER 1
#define PORTA_A_CAPTURE 1
#define PORTA_A_DATA_WIDTH 8
#define PORTA_A_DO_TEST_BENCH_WIRING 1
#define PORTA_A_DRIVEN_SIM_VALUE 0
#define PORTA_A_EDGE_TYPE "RISING"
#define PORTA_A_FREQ 50000000
#define PORTA_A_HAS_IN 0
#define PORTA_A_HAS_OUT 0
#define PORTA_A_HAS_TRI 1
#define PORTA_A_IRQ -1
#define PORTA_A_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PORTA_A_IRQ_TYPE "NONE"
#define PORTA_A_NAME "/dev/PORTA_A"
#define PORTA_A_RESET_VALUE 0
#define PORTA_A_SPAN 32
#define PORTA_A_TYPE "altera_avalon_pio"


/*
 * PORTA_B configuration
 *
 */

#define ALT_MODULE_CLASS_PORTA_B altera_avalon_pio
#define PORTA_B_BASE 0x210c0
#define PORTA_B_BIT_CLEARING_EDGE_REGISTER 0
#define PORTA_B_BIT_MODIFYING_OUTPUT_REGISTER 1
#define PORTA_B_CAPTURE 1
#define PORTA_B_DATA_WIDTH 8
#define PORTA_B_DO_TEST_BENCH_WIRING 1
#define PORTA_B_DRIVEN_SIM_VALUE 0
#define PORTA_B_EDGE_TYPE "RISING"
#define PORTA_B_FREQ 50000000
#define PORTA_B_HAS_IN 0
#define PORTA_B_HAS_OUT 0
#define PORTA_B_HAS_TRI 1
#define PORTA_B_IRQ 1
#define PORTA_B_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PORTA_B_IRQ_TYPE "LEVEL"
#define PORTA_B_NAME "/dev/PORTA_B"
#define PORTA_B_RESET_VALUE 0
#define PORTA_B_SPAN 32
#define PORTA_B_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x21218
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x21218
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x21218
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "sopc_2"


/*
 * adc_1 configuration
 *
 */

#define ADC_1_BASE 0x21100
#define ADC_1_IRQ -1
#define ADC_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ADC_1_NAME "/dev/adc_1"
#define ADC_1_SPAN 32
#define ADC_1_TYPE "altera_up_avalon_adc"
#define ALT_MODULE_CLASS_adc_1 altera_up_avalon_adc


/*
 * botao configuration
 *
 */

#define ALT_MODULE_CLASS_botao altera_avalon_pio
#define BOTAO_BASE 0x211d0
#define BOTAO_BIT_CLEARING_EDGE_REGISTER 0
#define BOTAO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BOTAO_CAPTURE 1
#define BOTAO_DATA_WIDTH 1
#define BOTAO_DO_TEST_BENCH_WIRING 1
#define BOTAO_DRIVEN_SIM_VALUE 0
#define BOTAO_EDGE_TYPE "RISING"
#define BOTAO_FREQ 50000000
#define BOTAO_HAS_IN 1
#define BOTAO_HAS_OUT 0
#define BOTAO_HAS_TRI 0
#define BOTAO_IRQ 4
#define BOTAO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BOTAO_IRQ_TYPE "EDGE"
#define BOTAO_NAME "/dev/botao"
#define BOTAO_RESET_VALUE 0
#define BOTAO_SPAN 16
#define BOTAO_TYPE "altera_avalon_pio"


/*
 * entrada_C configuration
 *
 */

#define ALT_MODULE_CLASS_entrada_C altera_avalon_pio
#define ENTRADA_C_BASE 0x211e0
#define ENTRADA_C_BIT_CLEARING_EDGE_REGISTER 0
#define ENTRADA_C_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ENTRADA_C_CAPTURE 0
#define ENTRADA_C_DATA_WIDTH 8
#define ENTRADA_C_DO_TEST_BENCH_WIRING 1
#define ENTRADA_C_DRIVEN_SIM_VALUE 0
#define ENTRADA_C_EDGE_TYPE "NONE"
#define ENTRADA_C_FREQ 50000000
#define ENTRADA_C_HAS_IN 1
#define ENTRADA_C_HAS_OUT 0
#define ENTRADA_C_HAS_TRI 0
#define ENTRADA_C_IRQ -1
#define ENTRADA_C_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ENTRADA_C_IRQ_TYPE "NONE"
#define ENTRADA_C_NAME "/dev/entrada_C"
#define ENTRADA_C_RESET_VALUE 0
#define ENTRADA_C_SPAN 16
#define ENTRADA_C_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYS_CLK_TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * hex_0 configuration
 *
 */

#define ALT_MODULE_CLASS_hex_0 altera_avalon_pio
#define HEX_0_BASE 0x211c0
#define HEX_0_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_0_CAPTURE 0
#define HEX_0_DATA_WIDTH 8
#define HEX_0_DO_TEST_BENCH_WIRING 0
#define HEX_0_DRIVEN_SIM_VALUE 0
#define HEX_0_EDGE_TYPE "NONE"
#define HEX_0_FREQ 50000000
#define HEX_0_HAS_IN 0
#define HEX_0_HAS_OUT 1
#define HEX_0_HAS_TRI 0
#define HEX_0_IRQ -1
#define HEX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_0_IRQ_TYPE "NONE"
#define HEX_0_NAME "/dev/hex_0"
#define HEX_0_RESET_VALUE 255
#define HEX_0_SPAN 16
#define HEX_0_TYPE "altera_avalon_pio"


/*
 * hex_1 configuration
 *
 */

#define ALT_MODULE_CLASS_hex_1 altera_avalon_pio
#define HEX_1_BASE 0x21170
#define HEX_1_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_1_CAPTURE 0
#define HEX_1_DATA_WIDTH 8
#define HEX_1_DO_TEST_BENCH_WIRING 0
#define HEX_1_DRIVEN_SIM_VALUE 0
#define HEX_1_EDGE_TYPE "NONE"
#define HEX_1_FREQ 50000000
#define HEX_1_HAS_IN 0
#define HEX_1_HAS_OUT 1
#define HEX_1_HAS_TRI 0
#define HEX_1_IRQ -1
#define HEX_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_1_IRQ_TYPE "NONE"
#define HEX_1_NAME "/dev/hex_1"
#define HEX_1_RESET_VALUE 255
#define HEX_1_SPAN 16
#define HEX_1_TYPE "altera_avalon_pio"


/*
 * hex_2 configuration
 *
 */

#define ALT_MODULE_CLASS_hex_2 altera_avalon_pio
#define HEX_2_BASE 0x21180
#define HEX_2_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_2_CAPTURE 0
#define HEX_2_DATA_WIDTH 8
#define HEX_2_DO_TEST_BENCH_WIRING 0
#define HEX_2_DRIVEN_SIM_VALUE 0
#define HEX_2_EDGE_TYPE "NONE"
#define HEX_2_FREQ 50000000
#define HEX_2_HAS_IN 0
#define HEX_2_HAS_OUT 1
#define HEX_2_HAS_TRI 0
#define HEX_2_IRQ -1
#define HEX_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_2_IRQ_TYPE "NONE"
#define HEX_2_NAME "/dev/hex_2"
#define HEX_2_RESET_VALUE 255
#define HEX_2_SPAN 16
#define HEX_2_TYPE "altera_avalon_pio"


/*
 * hex_3 configuration
 *
 */

#define ALT_MODULE_CLASS_hex_3 altera_avalon_pio
#define HEX_3_BASE 0x21190
#define HEX_3_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_3_CAPTURE 0
#define HEX_3_DATA_WIDTH 8
#define HEX_3_DO_TEST_BENCH_WIRING 0
#define HEX_3_DRIVEN_SIM_VALUE 0
#define HEX_3_EDGE_TYPE "NONE"
#define HEX_3_FREQ 50000000
#define HEX_3_HAS_IN 0
#define HEX_3_HAS_OUT 1
#define HEX_3_HAS_TRI 0
#define HEX_3_IRQ -1
#define HEX_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_3_IRQ_TYPE "NONE"
#define HEX_3_NAME "/dev/hex_3"
#define HEX_3_RESET_VALUE 255
#define HEX_3_SPAN 16
#define HEX_3_TYPE "altera_avalon_pio"


/*
 * hex_4 configuration
 *
 */

#define ALT_MODULE_CLASS_hex_4 altera_avalon_pio
#define HEX_4_BASE 0x211a0
#define HEX_4_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_4_CAPTURE 0
#define HEX_4_DATA_WIDTH 8
#define HEX_4_DO_TEST_BENCH_WIRING 0
#define HEX_4_DRIVEN_SIM_VALUE 0
#define HEX_4_EDGE_TYPE "NONE"
#define HEX_4_FREQ 50000000
#define HEX_4_HAS_IN 0
#define HEX_4_HAS_OUT 1
#define HEX_4_HAS_TRI 0
#define HEX_4_IRQ -1
#define HEX_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_4_IRQ_TYPE "NONE"
#define HEX_4_NAME "/dev/hex_4"
#define HEX_4_RESET_VALUE 255
#define HEX_4_SPAN 16
#define HEX_4_TYPE "altera_avalon_pio"


/*
 * hex_5 configuration
 *
 */

#define ALT_MODULE_CLASS_hex_5 altera_avalon_pio
#define HEX_5_BASE 0x211b0
#define HEX_5_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_5_CAPTURE 0
#define HEX_5_DATA_WIDTH 8
#define HEX_5_DO_TEST_BENCH_WIRING 0
#define HEX_5_DRIVEN_SIM_VALUE 0
#define HEX_5_EDGE_TYPE "NONE"
#define HEX_5_FREQ 50000000
#define HEX_5_HAS_IN 0
#define HEX_5_HAS_OUT 1
#define HEX_5_HAS_TRI 0
#define HEX_5_IRQ -1
#define HEX_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_5_IRQ_TYPE "NONE"
#define HEX_5_NAME "/dev/hex_5"
#define HEX_5_RESET_VALUE 255
#define HEX_5_SPAN 16
#define HEX_5_TYPE "altera_avalon_pio"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x21218
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * memoria configuration
 *
 */

#define ALT_MODULE_CLASS_memoria altera_avalon_onchip_memory2
#define MEMORIA_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define MEMORIA_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define MEMORIA_BASE 0x10000
#define MEMORIA_CONTENTS_INFO ""
#define MEMORIA_DUAL_PORT 0
#define MEMORIA_GUI_RAM_BLOCK_TYPE "AUTO"
#define MEMORIA_INIT_CONTENTS_FILE "sopc_2_memoria"
#define MEMORIA_INIT_MEM_CONTENT 1
#define MEMORIA_INSTANCE_ID "NONE"
#define MEMORIA_IRQ -1
#define MEMORIA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEMORIA_NAME "/dev/memoria"
#define MEMORIA_NON_DEFAULT_INIT_FILE_ENABLED 0
#define MEMORIA_RAM_BLOCK_TYPE "AUTO"
#define MEMORIA_READ_DURING_WRITE_MODE "DONT_CARE"
#define MEMORIA_SINGLE_CLOCK_OP 0
#define MEMORIA_SIZE_MULTIPLE 1
#define MEMORIA_SIZE_VALUE 50000
#define MEMORIA_SPAN 50000
#define MEMORIA_TYPE "altera_avalon_onchip_memory2"
#define MEMORIA_WRITABLE 1


/*
 * motora configuration
 *
 */

#define ALT_MODULE_CLASS_motora altera_avalon_pio
#define MOTORA_BASE 0x21130
#define MOTORA_BIT_CLEARING_EDGE_REGISTER 0
#define MOTORA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MOTORA_CAPTURE 0
#define MOTORA_DATA_WIDTH 16
#define MOTORA_DO_TEST_BENCH_WIRING 0
#define MOTORA_DRIVEN_SIM_VALUE 0
#define MOTORA_EDGE_TYPE "NONE"
#define MOTORA_FREQ 50000000
#define MOTORA_HAS_IN 0
#define MOTORA_HAS_OUT 1
#define MOTORA_HAS_TRI 0
#define MOTORA_IRQ -1
#define MOTORA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MOTORA_IRQ_TYPE "NONE"
#define MOTORA_NAME "/dev/motora"
#define MOTORA_RESET_VALUE 0
#define MOTORA_SPAN 16
#define MOTORA_TYPE "altera_avalon_pio"


/*
 * motorb configuration
 *
 */

#define ALT_MODULE_CLASS_motorb altera_avalon_pio
#define MOTORB_BASE 0x21120
#define MOTORB_BIT_CLEARING_EDGE_REGISTER 0
#define MOTORB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MOTORB_CAPTURE 0
#define MOTORB_DATA_WIDTH 16
#define MOTORB_DO_TEST_BENCH_WIRING 0
#define MOTORB_DRIVEN_SIM_VALUE 0
#define MOTORB_EDGE_TYPE "NONE"
#define MOTORB_FREQ 50000000
#define MOTORB_HAS_IN 0
#define MOTORB_HAS_OUT 1
#define MOTORB_HAS_TRI 0
#define MOTORB_IRQ -1
#define MOTORB_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MOTORB_IRQ_TYPE "NONE"
#define MOTORB_NAME "/dev/motorb"
#define MOTORB_RESET_VALUE 0
#define MOTORB_SPAN 16
#define MOTORB_TYPE "altera_avalon_pio"


/*
 * motorx configuration
 *
 */

#define ALT_MODULE_CLASS_motorx altera_avalon_pio
#define MOTORX_BASE 0x21150
#define MOTORX_BIT_CLEARING_EDGE_REGISTER 0
#define MOTORX_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MOTORX_CAPTURE 0
#define MOTORX_DATA_WIDTH 16
#define MOTORX_DO_TEST_BENCH_WIRING 0
#define MOTORX_DRIVEN_SIM_VALUE 0
#define MOTORX_EDGE_TYPE "NONE"
#define MOTORX_FREQ 50000000
#define MOTORX_HAS_IN 0
#define MOTORX_HAS_OUT 1
#define MOTORX_HAS_TRI 0
#define MOTORX_IRQ -1
#define MOTORX_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MOTORX_IRQ_TYPE "NONE"
#define MOTORX_NAME "/dev/motorx"
#define MOTORX_RESET_VALUE 0
#define MOTORX_SPAN 16
#define MOTORX_TYPE "altera_avalon_pio"


/*
 * motory configuration
 *
 */

#define ALT_MODULE_CLASS_motory altera_avalon_pio
#define MOTORY_BASE 0x21140
#define MOTORY_BIT_CLEARING_EDGE_REGISTER 0
#define MOTORY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MOTORY_CAPTURE 0
#define MOTORY_DATA_WIDTH 16
#define MOTORY_DO_TEST_BENCH_WIRING 0
#define MOTORY_DRIVEN_SIM_VALUE 0
#define MOTORY_EDGE_TYPE "NONE"
#define MOTORY_FREQ 50000000
#define MOTORY_HAS_IN 0
#define MOTORY_HAS_OUT 1
#define MOTORY_HAS_TRI 0
#define MOTORY_IRQ -1
#define MOTORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MOTORY_IRQ_TYPE "NONE"
#define MOTORY_NAME "/dev/motory"
#define MOTORY_RESET_VALUE 0
#define MOTORY_SPAN 16
#define MOTORY_TYPE "altera_avalon_pio"


/*
 * saida_C configuration
 *
 */

#define ALT_MODULE_CLASS_saida_C altera_avalon_pio
#define SAIDA_C_BASE 0x211f0
#define SAIDA_C_BIT_CLEARING_EDGE_REGISTER 0
#define SAIDA_C_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SAIDA_C_CAPTURE 0
#define SAIDA_C_DATA_WIDTH 8
#define SAIDA_C_DO_TEST_BENCH_WIRING 0
#define SAIDA_C_DRIVEN_SIM_VALUE 0
#define SAIDA_C_EDGE_TYPE "NONE"
#define SAIDA_C_FREQ 50000000
#define SAIDA_C_HAS_IN 0
#define SAIDA_C_HAS_OUT 1
#define SAIDA_C_HAS_TRI 0
#define SAIDA_C_IRQ -1
#define SAIDA_C_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SAIDA_C_IRQ_TYPE "NONE"
#define SAIDA_C_NAME "/dev/saida_C"
#define SAIDA_C_RESET_VALUE 0
#define SAIDA_C_SPAN 16
#define SAIDA_C_TYPE "altera_avalon_pio"


/*
 * spi configuration
 *
 */

#define ALT_MODULE_CLASS_spi altera_avalon_spi
#define SPI_BASE 0x21000
#define SPI_CLOCKMULT 1
#define SPI_CLOCKPHASE 0
#define SPI_CLOCKPOLARITY 0
#define SPI_CLOCKUNITS "Hz"
#define SPI_DATABITS 8
#define SPI_DATAWIDTH 16
#define SPI_DELAYMULT "1.0E-9"
#define SPI_DELAYUNITS "ns"
#define SPI_EXTRADELAY 0
#define SPI_INSERT_SYNC 0
#define SPI_IRQ 3
#define SPI_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SPI_ISMASTER 1
#define SPI_LSBFIRST 1
#define SPI_NAME "/dev/spi"
#define SPI_NUMSLAVES 2
#define SPI_PREFIX "spi_"
#define SPI_SPAN 32
#define SPI_SYNC_REG_DEPTH 2
#define SPI_TARGETCLOCK 128000u
#define SPI_TARGETSSDELAY "0.0"
#define SPI_TYPE "altera_avalon_spi"


/*
 * sw configuration
 *
 */

#define ALT_MODULE_CLASS_sw altera_avalon_pio
#define SW_BASE 0x21160
#define SW_BIT_CLEARING_EDGE_REGISTER 0
#define SW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SW_CAPTURE 0
#define SW_DATA_WIDTH 10
#define SW_DO_TEST_BENCH_WIRING 1
#define SW_DRIVEN_SIM_VALUE 0
#define SW_EDGE_TYPE "NONE"
#define SW_FREQ 50000000
#define SW_HAS_IN 1
#define SW_HAS_OUT 0
#define SW_HAS_TRI 0
#define SW_IRQ -1
#define SW_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SW_IRQ_TYPE "NONE"
#define SW_NAME "/dev/sw"
#define SW_RESET_VALUE 0
#define SW_SPAN 16
#define SW_TYPE "altera_avalon_pio"


/*
 * sys_clk_timer configuration
 *
 */

#define ALT_MODULE_CLASS_sys_clk_timer altera_avalon_timer
#define SYS_CLK_TIMER_ALWAYS_RUN 1
#define SYS_CLK_TIMER_BASE 0x21080
#define SYS_CLK_TIMER_COUNTER_SIZE 32
#define SYS_CLK_TIMER_FIXED_PERIOD 0
#define SYS_CLK_TIMER_FREQ 50000000
#define SYS_CLK_TIMER_IRQ 5
#define SYS_CLK_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYS_CLK_TIMER_LOAD_VALUE 49999
#define SYS_CLK_TIMER_MULT 0.001
#define SYS_CLK_TIMER_NAME "/dev/sys_clk_timer"
#define SYS_CLK_TIMER_PERIOD 1
#define SYS_CLK_TIMER_PERIOD_UNITS "ms"
#define SYS_CLK_TIMER_RESET_OUTPUT 0
#define SYS_CLK_TIMER_SNAPSHOT 1
#define SYS_CLK_TIMER_SPAN 32
#define SYS_CLK_TIMER_TICKS_PER_SEC 1000
#define SYS_CLK_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYS_CLK_TIMER_TYPE "altera_avalon_timer"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x21210
#define SYSID_ID 242
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1512614213
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_geral configuration
 *
 */

#define ALT_MODULE_CLASS_timer_geral altera_avalon_timer
#define TIMER_GERAL_ALWAYS_RUN 0
#define TIMER_GERAL_BASE 0x21040
#define TIMER_GERAL_COUNTER_SIZE 32
#define TIMER_GERAL_FIXED_PERIOD 0
#define TIMER_GERAL_FREQ 50000000
#define TIMER_GERAL_IRQ 7
#define TIMER_GERAL_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_GERAL_LOAD_VALUE 49999
#define TIMER_GERAL_MULT 0.001
#define TIMER_GERAL_NAME "/dev/timer_geral"
#define TIMER_GERAL_PERIOD 1
#define TIMER_GERAL_PERIOD_UNITS "ms"
#define TIMER_GERAL_RESET_OUTPUT 0
#define TIMER_GERAL_SNAPSHOT 1
#define TIMER_GERAL_SPAN 32
#define TIMER_GERAL_TICKS_PER_SEC 1000
#define TIMER_GERAL_TIMEOUT_PULSE_OUTPUT 1
#define TIMER_GERAL_TYPE "altera_avalon_timer"


/*
 * timestamp_timer configuration
 *
 */

#define ALT_MODULE_CLASS_timestamp_timer altera_avalon_timer
#define TIMESTAMP_TIMER_ALWAYS_RUN 0
#define TIMESTAMP_TIMER_BASE 0x21060
#define TIMESTAMP_TIMER_COUNTER_SIZE 32
#define TIMESTAMP_TIMER_FIXED_PERIOD 0
#define TIMESTAMP_TIMER_FREQ 50000000
#define TIMESTAMP_TIMER_IRQ 6
#define TIMESTAMP_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMESTAMP_TIMER_LOAD_VALUE 49999
#define TIMESTAMP_TIMER_MULT 0.001
#define TIMESTAMP_TIMER_NAME "/dev/timestamp_timer"
#define TIMESTAMP_TIMER_PERIOD 1
#define TIMESTAMP_TIMER_PERIOD_UNITS "ms"
#define TIMESTAMP_TIMER_RESET_OUTPUT 0
#define TIMESTAMP_TIMER_SNAPSHOT 1
#define TIMESTAMP_TIMER_SPAN 32
#define TIMESTAMP_TIMER_TICKS_PER_SEC 1000
#define TIMESTAMP_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMESTAMP_TIMER_TYPE "altera_avalon_timer"


/*
 * uart_rs232 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_rs232 altera_up_avalon_rs232
#define UART_RS232_BASE 0x0
#define UART_RS232_IRQ 9
#define UART_RS232_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_RS232_NAME "/dev/uart_rs232"
#define UART_RS232_SPAN 8
#define UART_RS232_TYPE "altera_up_avalon_rs232"


/*
 * watchdog_timer configuration
 *
 */

#define ALT_MODULE_CLASS_watchdog_timer altera_avalon_timer
#define WATCHDOG_TIMER_ALWAYS_RUN 1
#define WATCHDOG_TIMER_BASE 0x21020
#define WATCHDOG_TIMER_COUNTER_SIZE 32
#define WATCHDOG_TIMER_FIXED_PERIOD 1
#define WATCHDOG_TIMER_FREQ 50000000
#define WATCHDOG_TIMER_IRQ 8
#define WATCHDOG_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define WATCHDOG_TIMER_LOAD_VALUE 4999999
#define WATCHDOG_TIMER_MULT 0.001
#define WATCHDOG_TIMER_NAME "/dev/watchdog_timer"
#define WATCHDOG_TIMER_PERIOD 100
#define WATCHDOG_TIMER_PERIOD_UNITS "ms"
#define WATCHDOG_TIMER_RESET_OUTPUT 1
#define WATCHDOG_TIMER_SNAPSHOT 0
#define WATCHDOG_TIMER_SPAN 32
#define WATCHDOG_TIMER_TICKS_PER_SEC 10
#define WATCHDOG_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define WATCHDOG_TIMER_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
