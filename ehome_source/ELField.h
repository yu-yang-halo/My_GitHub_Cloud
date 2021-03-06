//
//  ELField.h
//  objectc_ehome
//
//  Created by admin on 14-9-25.
//  Copyright (c) 2014年 cn.lztech  合肥联正电子科技有限公司. All rights reserved.
//

#ifndef objectc_ehome_ELField_h
#define objectc_ehome_ELField_h
typedef NS_ENUM(NSInteger,FieldsEnum){
    FieldsEnum_AC_MODE=1,
    FieldsEnum_AC_TEMP,
    FieldsEnum_AC_HUMI,
    FieldsEnum_AC_WIND,
    FieldsEnum_AC_SWITCH,
    FieldsEnum_AC_STATUS,
    FieldsEnum_AC_LEARN,
    FieldsEnum_AC_TEMPSET,
    FieldsEnum_AC_BATTERY,
	FieldsEnum_AC_LOCATION,
	FieldsEnum_AC_BRAND,
	FieldsEnum_AC_TYPE,
	FieldsEnum_AC_CODETEST,
	FieldsEnum_DOORSENSOR_ALERT=21,
	FieldsEnum_DOORSENSOR_STATUS,
	FieldsEnum_DOORSENSOR_BATTERY,
	FieldsEnum_DOORSENSOR_LOCATION,
	FieldsEnum_POWERMT_STATUS=31,
	FieldsEnum_POWERMT_SWITCH,
	FieldsEnum_POWERMT_VOLUME,
	FieldsEnum_POWERMT_VOLTAGE,
	FieldsEnum_POWERMT_CURRENT,
	FieldsEnum_POWERMT_EPOWER,
	FieldsEnum_POWERMT_PRICE,
	FieldsEnum_POWERMT_LOCATION,
	FieldsEnum_POWERMT_SAVEMODE,
	FieldsEnum_PTMOTIONDET_ALERT=51,
	FieldsEnum_PTMOTIONDET_BATTERY,
	FieldsEnum_PTMOTIONDET_TEMP,
	FieldsEnum_PTMOTIONDET_LOCATION,
	FieldsEnum_SCHEDULE_WEEK=61,
	FieldsEnum_SCHEDULE_HOUR,
	FieldsEnum_SCHEDULE_MINUTE,
	FieldsEnum_SCHEDULE_ACTION,
	FieldsEnum_ELMOTIONDET_ALERT=71,
	FieldsEnum_ELMOTIONDET_BATTERY,
	FieldsEnum_ELMOTIONDET_TEMP,
	FieldsEnum_ELMOTIONDET_LOCATION,
	FieldsEnum_SMOKEDETECTOR_ALERT=81,
	FieldsEnum_SMOKEDETECTOR_BATTERY,
	FieldsEnum_SMOKEDETECTOR_LOCATION,
    FieldsEnum_BPMONITOR_BPHIGH=91,
	FieldsEnum_BPMONITOR_BPLOW,
	FieldsEnum_BPMONITOR_HEARTRATE,
	FieldsEnum_BPMONITOR_DATA,
	FieldsEnum_IPCAMERA_URL=101,
	FieldsEnum_IPCAMERA_PORT,
	FieldsEnum_IPCAMERA_USERNAME,
	FieldsEnum_IPCAMERA_PASSWORD,
	FieldsEnum_IPCAMERA_CHANNEL,
	FieldsEnum_IPCAMERA_ENCODE,
	FieldsEnum_IPCAMERA_LOCATION,
	FieldsEnum_POWERCTRL_STATUS=111,
	FieldsEnum_POWERCTRL_SWITCH,
	FieldsEnum_POWERCTRL_LOCATION,
	FieldsEnum_POWERCTRL_SAVEMODE,
	FieldsEnum_POWERCTRL_PRICE,
    FieldsEnum_POWERCTRL_ICON=117,
    
	FieldsEnum_CODETECTOR_ALERT=130,
	FieldsEnum_CODETECTOR_BATTERY,
	FieldsEnum_CODETECTOR_LOCATION,
	FieldsEnum_POWERSTRIPS_STATUS=140,
	FieldsEnum_POWERSTRIPS_SWITCH,
	FieldsEnum_POWERSTRIPS_LOCATION,
	FieldsEnum_POWERSTRIPS_SAVEMODE,
	FieldsEnum_POWERSTRIPS_PRICE,
	FieldsEnum_POWERSTRIPS_ALERT,
	FieldsEnum_CURTAIN_STATUS=150,
	FieldsEnum_CURTAIN_SWITCH,
	FieldsEnum_CURTAIN_LOCATION,
	FieldsEnum_PROJSCREEN_STATUS=170,
	FieldsEnum_PROJSCREEN_SWITCH,
	FieldsEnum_PROJSCREEN_LOCATION,
	FieldsEnum_EMERBUTTON_ALERT=180,
	FieldsEnum_EMERBUTTON_BATTERY,
	FieldsEnum_EMERBUTTON_NAME,
	FieldsEnum_EMERBUTTON_SEX,
	FieldsEnum_EMERBUTTON_AGE,
	FieldsEnum_EMERBUTTON_PHONE,
	FieldsEnum_EMERBUTTON_ADDRESS,
	FieldsEnum_EMERBUTTON_HEALTH,
	FieldsEnum_GASDETECTOR_ALERT=190,
	FieldsEnum_GASDETECTOR_LOCATION,
	FieldsEnum_WALLPOWERCTRL_STATUS=200,
	FieldsEnum_WALLPOWERCTRL_SWITCH,
	FieldsEnum_WALLPOWERCTRL_LOCATION,
	FieldsEnum_WALLPOWERCTRL_SAVEMODE,
	FieldsEnum_WALLPOWERCTRL_PRICE,
	FieldsEnum_WALLPOWERCTRL_ALERT,
	FieldsEnum_WALLPOWERCTRL_LOCK,
    FieldsEnum_WALLPOWERCTRL_ICON,
	FieldsEnum_WAllSWITCH_STATUS=210,
	FieldsEnum_WAllSWITCH_SWITCH,
	FieldsEnum_WAllSWITCH_LOCATION,
	FieldsEnum_WAllSWITCH_SAVEMODE,
	FieldsEnum_WAllSWITCH_PRICE,
	FieldsEnum_WAllSWITCH_ALERT,
	FieldsEnum_WAllSWITCH_LED,
	FieldsEnum_WAllSWITCH_LOCK,
	FieldsEnum_WAllSWITCH_LINENUM,
	FieldsEnum_WATERDET_ALERT=220,
	FieldsEnum_WATERDET_LOCATION,
	FieldsEnum_TEMPHUMISENSOR_ALERT1=230,
	FieldsEnum_TEMPHUMISENSOR_TEMP1,
	FieldsEnum_TEMPHUMISENSOR_HUMI1,
	FieldsEnum_TEMPHUMISENSOR_LOCATION1,
	FieldsEnum_TEMPHUMISENSOR_ALERT2,
	FieldsEnum_TEMPHUMISENSOR_TEMP2,
	FieldsEnum_TEMPHUMISENSOR_HUMI2,
	FieldsEnum_TEMPHUMISENSOR_LOCATION2,
	FieldsEnum_TEMPHUMISENSOR_ALERT3,
	FieldsEnum_TEMPHUMISENSOR_TEMP3,
	FieldsEnum_TEMPHUMISENSOR_HUMI3,
	FieldsEnum_TEMPHUMISENSOR_LOCATION3,
	FieldsEnum_TEMPHUMISENSOR_ALERT4,
	FieldsEnum_TEMPHUMISENSOR_TEMP4,
	FieldsEnum_TEMPHUMISENSOR_HUMI4,
	FieldsEnum_TEMPHUMISENSOR_LOCATION4,
	FieldsEnum_TEMPHUMISENSOR_ALERT5,
	FieldsEnum_TEMPHUMISENSOR_TEMP5,
	FieldsEnum_TEMPHUMISENSOR_HUMI5,
	FieldsEnum_TEMPHUMISENSOR_LOCATION5,
	FieldsEnum_TEMPHUMISENSOR_ALERT6,
	FieldsEnum_TEMPHUMISENSOR_TEMP6,
	FieldsEnum_TEMPHUMISENSOR_HUMI6,
	FieldsEnum_TEMPHUMISENSOR_LOCATION6,
	FieldsEnum_TEMPHUMISENSOR_LOCATION,
	FieldsEnum_SCENARIOSWITCH_STATUS=270,
	FieldsEnum_SCENARIOSWITCH_SWITCH,
	FieldsEnum_SCENARIOSWITCH_LOCATION,
	FieldsEnum_THERMOSTAT_TEMPSET=280,
	FieldsEnum_THERMOSTAT_TEMP,
	FieldsEnum_THERMOSTAT_MODESET,
	FieldsEnum_THERMOSTAT_MODE,
	FieldsEnum_THERMOSTAT_SWITCH,
	FieldsEnum_THERMOSTAT_STATUS,
	FieldsEnum_THERMOSTAT_LOCATION,
	FieldsEnum_THERMOSTAT_HEATING,
	FieldsEnum_FIREDETECTOR_ALERT=290,
	FieldsEnum_FIREDETECTOR_LOCATION,
	FieldsEnum_ACFAN_TEMPSET=300,
	FieldsEnum_ACFAN_TEMP,
	FieldsEnum_ACFAN_WINDSET,
	FieldsEnum_ACFAN_WIND,
	FieldsEnum_ACFAN_MODESET,
	FieldsEnum_ACFAN_MODE,
	FieldsEnum_ACFAN_WINDING,
	FieldsEnum_ACFAN_SWITCH,
	FieldsEnum_ACFAN_LOCATION,
	FieldsEnum_ACFAN_STATUS,
	
    /**红外转发器**/
    FieldsEnum_IR_ACMODE=320,
    FieldsEnum_IR_ACTEMP,
    FieldsEnum_IR_ACHUMIDITY,
    FieldsEnum_IR_ACWIND,
    FieldsEnum_IR_ACSWITCH,
    FieldsEnum_IR_ACSTATUS,
    FieldsEnum_IR_ACLEARN,
    FieldsEnum_IR_ACTEMPSET,
    FieldsEnum_IR_ACBATTERY,
    FieldsEnum_IR_ACLOCATION,
    FieldsEnum_IR_ACBRAND,
    FieldsEnum_IR_ACTYPE,
    FieldsEnum_IR_TVSWITCH,
    FieldsEnum_IR_TVCHANNEL,
    FieldsEnum_IR_TVVOLUME,
    FieldsEnum_IR_TVBRAND,
    FieldsEnum_IR_TVTYPE,
    FieldsEnum_IR_AUDIOSWITCH,
    FieldsEnum_IR_AUDIOCHANNEL,
    FieldsEnum_IR_AUDIOVOLUME,
    FieldsEnum_IR_AUDIOBRAND,
    FieldsEnum_IR_AUDIOTYPE,
    
    /** 温湿度传感器2*/
    FieldsEnum_TEMPHUMISENSOR2_ALERT=370,
    FieldsEnum_TEMPHUMISENSOR2_TEMP,
    FieldsEnum_TEMPHUMISENSOR2_HUMI,
    FieldsEnum_TEMPHUMISENSOR2_LOCATION,
    
    /**智能门锁 fieldID*/
    FieldsEnum_DOORLOCK_SWITCH=380,
    FieldsEnum_DOORLOCK_MODE,
    FieldsEnum_DOORLOCK_STATUS,
    FieldsEnum_DOORLOCK_ALERT,
    FieldsEnum_DOORLOCK_LOCATION,
    FieldsEnum_DOORLOCK_MESSAGE,//格式 编号：名称：密码；~；~；...
    
    /**博联红外转发器 */
    FieldsEnum_BLIR_MAC=390,
    //学习码 about 313byte
    FieldsEnum_BLIR_AC_ON,
    FieldsEnum_BLIR_AC_OFF,
    
    FieldsEnum_BLIR_AUDIO_ON,
    FieldsEnum_BLIR_AUDIO_OFF,
    FieldsEnum_BLIR_AUDIO_VOLUME_ADD,
    FieldsEnum_BLIR_AUDIO_VOLUME_MINUS,
    FieldsEnum_BLIR_AUDIO_CHANNEL_ADD,
    FieldsEnum_BLIR_AUDIO_CHANNEL_MINUS,
    
    FieldsEnum_BLIR_TV_ON,
    FieldsEnum_BLIR_TV_OFF,
    FieldsEnum_BLIR_TV_VOLUME_ADD,
    FieldsEnum_BLIR_TV_VOLUME_MINUS,
    FieldsEnum_BLIR_TV_CHANNEL_ADD,
    FieldsEnum_BLIR_TV_CHANNEL_MINUS,
    
    FieldsEnum_KPL_DOORSENSOR_ALERT=430,
    FieldsEnum_KPL_DOORSENSOR_STATUS,
    FieldsEnum_KPL_DOORSENSOR_BATTERY,
    FieldsEnum_KPL_DOORSENSOR_BROKEN,
    FieldsEnum_KPL_DOORSENSOR_LOCATION,
    
    FieldsEnum_KPL_MOTIONDET_ALERT=440,
    FieldsEnum_KPL_MOTIONDET_BATTERY,
    FieldsEnum_KPL_MOTIONDET_BROKEN,
    FieldsEnum_KPL_MOTIONDET_LOCATION,
    
    
    FieldsEnum_KPL_DOORBELL_TOUCH=450,
    FieldsEnum_KPL_DOORBELL_BATTERY,
    FieldsEnum_KPL_DOORBELL_BROKEN,
    FieldsEnum_KPL_DOORBELL_LOCATION,
    
    
    FieldsEnum_KPL_SMOKE_DETECTOR_ALERT=460,
    FieldsEnum_KPL_SMOKE_DETECTOR_BATTERY,
    FieldsEnum_KPL_SMOKE_DETECTOR_BROKEN,
    FieldsEnum_KPL_SMOKE_DETECTOR_LOCATION,
    
    
    FieldsEnum_KPL_GAS_DETECTOR_ALERT=470,
    FieldsEnum_KPL_GAS_DETECTOR_BATTERY,
    FieldsEnum_KPL_GAS_DETECTOR_BROKEN,
    FieldsEnum_KPL_GAS_DETECTOR_LOCATION
    
    
};


#endif
