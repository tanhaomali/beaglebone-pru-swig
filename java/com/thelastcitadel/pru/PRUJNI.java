/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.thelastcitadel.pru;

public class PRUJNI {
    /* make sure the shared library is loaded by the same classloader as the class */
    public static void loadLibrary(String l) {
        System.loadLibrary(l);
    }
    public static void load(String l) {
        System.load(l);
    }
  public final static native long new_unsinged_int_array(int jarg1);
  public final static native void delete_unsinged_int_array(long jarg1);
  public final static native long unsinged_int_array_getitem(long jarg1, int jarg2);
  public final static native void unsinged_int_array_setitem(long jarg1, int jarg2, long jarg3);
  public final static native int NUM_PRU_HOSTIRQS_get();
  public final static native int NUM_PRU_HOSTS_get();
  public final static native int NUM_PRU_CHANNELS_get();
  public final static native int NUM_PRU_SYS_EVTS_get();
  public final static native int PRUSS0_PRU0_DATARAM_get();
  public final static native int PRUSS0_PRU1_DATARAM_get();
  public final static native int PRUSS0_PRU0_IRAM_get();
  public final static native int PRUSS0_PRU1_IRAM_get();
  public final static native int PRUSS0_SHARED_DATARAM_get();
  public final static native int PRUSS0_CFG_get();
  public final static native int PRUSS0_UART_get();
  public final static native int PRUSS0_IEP_get();
  public final static native int PRUSS0_ECAP_get();
  public final static native int PRUSS0_MII_RT_get();
  public final static native int PRUSS0_MDIO_get();
  public final static native int PRU_EVTOUT_0_get();
  public final static native int PRU_EVTOUT_1_get();
  public final static native int PRU_EVTOUT_2_get();
  public final static native int PRU_EVTOUT_3_get();
  public final static native int PRU_EVTOUT_4_get();
  public final static native int PRU_EVTOUT_5_get();
  public final static native int PRU_EVTOUT_6_get();
  public final static native int PRU_EVTOUT_7_get();
  public final static native int prussdrv_init();
  public final static native int prussdrv_open(long jarg1);
  public final static native int prussdrv_pru_reset(long jarg1);
  public final static native int prussdrv_pru_disable(long jarg1);
  public final static native int prussdrv_pru_enable(long jarg1);
  public final static native int prussdrv_pru_write_memory(long jarg1, long jarg2, long jarg3, long jarg4);
  public final static native int prussdrv_pruintc_init(long jarg1);
  public final static native int prussdrv_map_l3mem(long jarg1);
  public final static native int prussdrv_map_extmem(long jarg1);
  public final static native int prussdrv_map_prumem(long jarg1, long jarg2);
  public final static native int prussdrv_map_peripheral_io(long jarg1, long jarg2);
  public final static native long prussdrv_get_phys_addr(long jarg1);
  public final static native long prussdrv_get_virt_addr(long jarg1);
  public final static native int prussdrv_pru_wait_event(long jarg1);
  public final static native int prussdrv_pru_send_event(long jarg1);
  public final static native int prussdrv_pru_clear_event(long jarg1);
  public final static native int prussdrv_pru_send_wait_clear_event(long jarg1, long jarg2, long jarg3);
  public final static native int prussdrv_exit();
  public final static native int prussdrv_exec_program(int jarg1, String jarg2);
  public final static native int prussdrv_start_irqthread(long jarg1, int jarg2, long jarg3);
  public final static native void pruss_intc_initdata_ptr_set(long jarg1);
  public final static native long pruss_intc_initdata_ptr_get();
  public final static native int PRU0_PRU1_INTERRUPT_get();
  public final static native int PRU1_PRU0_INTERRUPT_get();
  public final static native int PRU0_ARM_INTERRUPT_get();
  public final static native int PRU1_ARM_INTERRUPT_get();
  public final static native int ARM_PRU0_INTERRUPT_get();
  public final static native int ARM_PRU1_INTERRUPT_get();
  public final static native int CHANNEL0_get();
  public final static native int CHANNEL1_get();
  public final static native int CHANNEL2_get();
  public final static native int CHANNEL3_get();
  public final static native int CHANNEL4_get();
  public final static native int CHANNEL5_get();
  public final static native int CHANNEL6_get();
  public final static native int CHANNEL7_get();
  public final static native int CHANNEL8_get();
  public final static native int CHANNEL9_get();
  public final static native int PRU0_get();
  public final static native int PRU1_get();
  public final static native int PRU_EVTOUT0_get();
  public final static native int PRU_EVTOUT1_get();
  public final static native int PRU_EVTOUT2_get();
  public final static native int PRU_EVTOUT3_get();
  public final static native int PRU_EVTOUT4_get();
  public final static native int PRU_EVTOUT5_get();
  public final static native int PRU_EVTOUT6_get();
  public final static native int PRU_EVTOUT7_get();
  public final static native int PRU0_HOSTEN_MASK_get();
  public final static native int PRU1_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT0_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT1_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT2_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT3_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT4_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT5_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT6_HOSTEN_MASK_get();
  public final static native int PRU_EVTOUT7_HOSTEN_MASK_get();
}
