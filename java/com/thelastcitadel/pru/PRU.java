/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.thelastcitadel.pru;

public class PRU implements PRUConstants {
  public static int prussdrv_init() {
    return PRUJNI.prussdrv_init();
  }

  public static int prussdrv_open(long pru_evtout_num) {
    return PRUJNI.prussdrv_open(pru_evtout_num);
  }

  public static int prussdrv_pru_reset(long prunum) {
    return PRUJNI.prussdrv_pru_reset(prunum);
  }

  public static int prussdrv_pru_disable(long prunum) {
    return PRUJNI.prussdrv_pru_disable(prunum);
  }

  public static int prussdrv_pru_enable(long prunum) {
    return PRUJNI.prussdrv_pru_enable(prunum);
  }

  public static int prussdrv_pru_write_memory(long pru_ram_id, long wordoffset, SWIGTYPE_p_unsigned_int memarea, long bytelength) {
    return PRUJNI.prussdrv_pru_write_memory(pru_ram_id, wordoffset, SWIGTYPE_p_unsigned_int.getCPtr(memarea), bytelength);
  }

  public static int prussdrv_pruintc_init(SWIGTYPE_p_tpruss_intc_initdata prussintc_init_data) {
    return PRUJNI.prussdrv_pruintc_init(SWIGTYPE_p_tpruss_intc_initdata.getCPtr(prussintc_init_data));
  }

  public static int prussdrv_map_l3mem(SWIGTYPE_p_p_void address) {
    return PRUJNI.prussdrv_map_l3mem(SWIGTYPE_p_p_void.getCPtr(address));
  }

  public static int prussdrv_map_extmem(SWIGTYPE_p_p_void address) {
    return PRUJNI.prussdrv_map_extmem(SWIGTYPE_p_p_void.getCPtr(address));
  }

  public static int prussdrv_map_prumem(long pru_ram_id, SWIGTYPE_p_p_void address) {
    return PRUJNI.prussdrv_map_prumem(pru_ram_id, SWIGTYPE_p_p_void.getCPtr(address));
  }

  public static int prussdrv_map_peripheral_io(long per_id, SWIGTYPE_p_p_void address) {
    return PRUJNI.prussdrv_map_peripheral_io(per_id, SWIGTYPE_p_p_void.getCPtr(address));
  }

  public static long prussdrv_get_phys_addr(SWIGTYPE_p_void address) {
    return PRUJNI.prussdrv_get_phys_addr(SWIGTYPE_p_void.getCPtr(address));
  }

  public static SWIGTYPE_p_void prussdrv_get_virt_addr(long phyaddr) {
    long cPtr = PRUJNI.prussdrv_get_virt_addr(phyaddr);
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static int prussdrv_pru_wait_event(long pru_evtout_num) {
    return PRUJNI.prussdrv_pru_wait_event(pru_evtout_num);
  }

  public static int prussdrv_pru_send_event(long eventnum) {
    return PRUJNI.prussdrv_pru_send_event(eventnum);
  }

  public static int prussdrv_pru_clear_event(long eventnum) {
    return PRUJNI.prussdrv_pru_clear_event(eventnum);
  }

  public static int prussdrv_pru_send_wait_clear_event(long send_eventnum, long pru_evtout_num, long ack_eventnum) {
    return PRUJNI.prussdrv_pru_send_wait_clear_event(send_eventnum, pru_evtout_num, ack_eventnum);
  }

  public static int prussdrv_exit() {
    return PRUJNI.prussdrv_exit();
  }

  public static int prussdrv_exec_program(int prunum, String filename) {
    return PRUJNI.prussdrv_exec_program(prunum, filename);
  }

  public static int prussdrv_start_irqthread(long pru_evtout_num, int priority, SWIGTYPE_p_f_p_void__p_void irqhandler) {
    return PRUJNI.prussdrv_start_irqthread(pru_evtout_num, priority, SWIGTYPE_p_f_p_void__p_void.getCPtr(irqhandler));
  }

  public static void pruss_intc_initdata_ptr_set(SWIGTYPE_p_tpruss_intc_initdata value) {
    PRUJNI.pruss_intc_initdata_ptr_set(SWIGTYPE_p_tpruss_intc_initdata.getCPtr(value));
  }

  public static SWIGTYPE_p_tpruss_intc_initdata pruss_intc_initdata_ptr_get() {
    long cPtr = PRUJNI.pruss_intc_initdata_ptr_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_tpruss_intc_initdata(cPtr, false);
  }

}
