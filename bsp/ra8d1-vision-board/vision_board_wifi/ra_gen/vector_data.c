/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_NUM_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = sci_b_uart_rxi_isr, /* SCI9 RXI (Receive data full) */
            [1] = sci_b_uart_txi_isr, /* SCI9 TXI (Transmit data empty) */
            [2] = sci_b_uart_tei_isr, /* SCI9 TEI (Transmit end) */
            [3] = sci_b_uart_eri_isr, /* SCI9 ERI (Receive error) */
            [4] = r_icu_isr, /* ICU IRQ11 (External pin interrupt 11) */
            [5] = spi_b_rxi_isr, /* SPI1 RXI (Receive buffer full) */
            [6] = spi_b_txi_isr, /* SPI1 TXI (Transmit buffer empty) */
            [7] = spi_b_tei_isr, /* SPI1 TEI (Transmission complete event) */
            [8] = spi_b_eri_isr, /* SPI1 ERI (Error) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_NUM_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_SCI9_RXI,GROUP0), /* SCI9 RXI (Receive data full) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_SCI9_TXI,GROUP1), /* SCI9 TXI (Transmit data empty) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_SCI9_TEI,GROUP2), /* SCI9 TEI (Transmit end) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_SCI9_ERI,GROUP3), /* SCI9 ERI (Receive error) */
            [4] = BSP_PRV_VECT_ENUM(EVENT_ICU_IRQ11,GROUP4), /* ICU IRQ11 (External pin interrupt 11) */
            [5] = BSP_PRV_VECT_ENUM(EVENT_SPI1_RXI,GROUP5), /* SPI1 RXI (Receive buffer full) */
            [6] = BSP_PRV_VECT_ENUM(EVENT_SPI1_TXI,GROUP6), /* SPI1 TXI (Transmit buffer empty) */
            [7] = BSP_PRV_VECT_ENUM(EVENT_SPI1_TEI,GROUP7), /* SPI1 TEI (Transmission complete event) */
            [8] = BSP_PRV_VECT_ENUM(EVENT_SPI1_ERI,GROUP0), /* SPI1 ERI (Error) */
        };
        #endif
        #endif