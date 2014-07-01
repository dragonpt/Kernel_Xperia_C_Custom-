

//#ifndef _MTK_CUSTOM_PROJECT_HAL_IMGSENSOR_SRC_CONFIGFTBL__H_
//#define _MTK_CUSTOM_PROJECT_HAL_IMGSENSOR_SRC_CONFIGFTBL__H_
#if 1
//


/*******************************************************************************
 *
 ******************************************************************************/
FTABLE_DEFINITION(SENSOR_DRVNAME_IMX111_MIPI_RAW)
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
FTABLE_SCENE_INDEP()
    //==========================================================================
#if 1
    //  Scene Mode
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_SCENE_MODE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::SCENE_MODE_AUTO), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::SCENE_MODE_AUTO,           
//                MtkCameraParameters::SCENE_MODE_NORMAL, 
                MtkCameraParameters::SCENE_MODE_PORTRAIT,       
                MtkCameraParameters::SCENE_MODE_LANDSCAPE, 
                MtkCameraParameters::SCENE_MODE_NIGHT,          
                MtkCameraParameters::SCENE_MODE_NIGHT_PORTRAIT, 
                MtkCameraParameters::SCENE_MODE_THEATRE,        
                MtkCameraParameters::SCENE_MODE_BEACH, 
                MtkCameraParameters::SCENE_MODE_SNOW,           
                MtkCameraParameters::SCENE_MODE_SUNSET, 
                MtkCameraParameters::SCENE_MODE_STEADYPHOTO,    
                MtkCameraParameters::SCENE_MODE_FIREWORKS, 
                MtkCameraParameters::SCENE_MODE_SPORTS,         
                MtkCameraParameters::SCENE_MODE_PARTY, 
                MtkCameraParameters::SCENE_MODE_CANDLELIGHT, 
                MtkCameraParameters::SCENE_MODE_HDR, 
            )
        ), 
    )
#endif
    //==========================================================================
#if 1
    //  Effect
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_EFFECT), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::EFFECT_NONE), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::EFFECT_NONE,       
                MtkCameraParameters::EFFECT_MONO,   
                MtkCameraParameters::EFFECT_NEGATIVE,
                MtkCameraParameters::EFFECT_SEPIA,      
                MtkCameraParameters::EFFECT_AQUA,   
                MtkCameraParameters::EFFECT_WHITEBOARD, 
                MtkCameraParameters::EFFECT_BLACKBOARD, 
            )
        ), 
    )
#endif
    //==========================================================================
//Begin_Arima_HCSW7_20130430_JerryTai -8M 16:9 fix_20130607_add_5M 16:9 3104X1746_2M 16:9 1920X1080
//Begin_Arima_HCSW7_20130726_JerryTai -change 3104X1746 to 3072x1728

#if 1
    //  Picture Size (Both width & height must be 16-aligned)
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_PICTURE_SIZE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("2560x1920"), 
            ITEM_AS_VALUES_(
                "320x240",      "640x480",      "1024x768",     "1280x720",     "1280x768",     "1280x960", 
                "1600x1200",    "2048x1536",    "2560x1440",    "2560x1920",    "3264x2448",    "3328x1872",
                "3264x1840",    "3072x1728",    "1920x1080",    
            )
        ), 
    )
#endif
//End_Arima_HCSW7_20130726_JerryTai -change 3104X1746 to 3072x1728
//End_Arima_HCSW7_20130430_JerryTai -8M 16:9 fix_20130607_add_5M 16:9 3104X1746_2M 16:9 1920X1080
    //==========================================================================
//Begin_Arima_HCSW7_20130412_JerryTai -ATS00159061 Panorama issue 
#if 1
    //  Preview Size
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_PREVIEW_SIZE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("640x480"), 
            ITEM_AS_VALUES_(
                "176x144",      "320x240",      "352x288",      "480x320",      "480x368", 
                "640x480",      "720x480",      "800x480",      "800x600",      "864x480", 
                "960x540",      "1280x720",     "1600x1200",    "1920x1080",
            )
        ), 
    )
#endif
//End_Arima_HCSW7_20130412_JerryTai -ATS00159061 Panorama issue 
    //==========================================================================
#if 1
    //  Video Size
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_VIDEO_SIZE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("640x480"), 
            ITEM_AS_VALUES_(
                "176x144",      "480x320",      "640x480", 
                "864x480",      "1280x720",     "1920x1080", 
            )
        ), 
    )
#endif
    //==========================================================================
#if 1
    //  Preview Frame Rate Range
    FTABLE_CONFIG_AS_TYPE_OF_USER(
        KEY_AS_(MtkCameraParameters::KEY_PREVIEW_FPS_RANGE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("30000,30000"), 
            ITEM_AS_USER_LIST_(
                "(15000,15000)", 
                "(24000,24000)", 
                "(30000,30000)", 
            )
        ), 
    )
#endif
    //==========================================================================
//Begin_Arima_HCSW7_20130508_JerryTai -ATS00159164 Exposure compensation modify max from 3 to 12,min from -3 to -12,step from 1.0 to 0.166667
#if 1
    //  Exposure Compensation
    FTABLE_CONFIG_AS_TYPE_OF_USER(
        KEY_AS_(MtkCameraParameters::KEY_EXPOSURE_COMPENSATION), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("0"), 
            ITEM_AS_USER_LIST_(
                "-12",       //min exposure compensation index
                "12",        //max exposure compensation index
                "0.166667",      //exposure compensation step; EV = step x index
            )
        ), 
    )
#endif
//End_Arima_HCSW7_20130508_JerryTai -ATS00159164 Exposure compensation
    //==========================================================================
//<2013/05/29-25447-alberthsiao, Set imx111 anti-banding default  to auto
#if 1
    //  Anti-banding (Flicker)
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_ANTIBANDING), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::ANTIBANDING_AUTO), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::ANTIBANDING_OFF, 
                MtkCameraParameters::ANTIBANDING_50HZ, 
                MtkCameraParameters::ANTIBANDING_60HZ, 
                MtkCameraParameters::ANTIBANDING_AUTO, 
            )
        ), 
    )
#endif
//>2013/05/29-25447-alberthsiao
    //==========================================================================
#if 1
    //  Video Stabilization (EIS)
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_SUPPORTED(
        KEY_AS_(MtkCameraParameters::KEY_VIDEO_STABILIZATION), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::FALSE), 
            ITEM_AS_SUPPORTED_(
            #if 0
                MtkCameraParameters::FALSE
            #else
                MtkCameraParameters::TRUE
            #endif
            )
        ), 
    )
#endif
    //==========================================================================
#if 1
    //  Zoom
    FTABLE_CONFIG_AS_TYPE_OF_USER(
        KEY_AS_(MtkCameraParameters::KEY_ZOOM), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("0"),  //Zoom Index
            ITEM_AS_USER_LIST_(
                //Zoom Ratio
//<2013/10/01-ClarkLin-modify zoom step from 11 to 40.
#if 0	// MTK original
                "100", "114", "132", "151", "174", 
                "200", "229", "263", "303", "348", 
                "400", 
#endif
			"100","103","105","107","109",
			"111","114","116","119","121",
			"124","127","130","132","136",
			"139","142","146","149","153",
			"157","161","165","170","175",
			"180","186","192","198","205",
			"213","222","231","242","255",
			"270","288","311","344","400",
//>2013/10/01
            )
        ), 
    )
#endif
    //==========================================================================
#if 1
    //  Zsd
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_ZSD_MODE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::OFF), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::OFF, 
                MtkCameraParameters::ON
            )
        ), 
    )
#endif
    //==========================================================================
#if 1
    //  (Shot) Capture Mode
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_CAPTURE_MODE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::CAPTURE_MODE_NORMAL), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::CAPTURE_MODE_NORMAL, 
                MtkCameraParameters::CAPTURE_MODE_FACE_BEAUTY, 
                MtkCameraParameters::CAPTURE_MODE_CONTINUOUS_SHOT, 
                MtkCameraParameters::CAPTURE_MODE_SMILE_SHOT, 
                MtkCameraParameters::CAPTURE_MODE_BEST_SHOT, 
                MtkCameraParameters::CAPTURE_MODE_EV_BRACKET_SHOT, 
                MtkCameraParameters::CAPTURE_MODE_AUTO_PANORAMA_SHOT, 
            )
        ), 
    )
#endif
    //==========================================================================
#if 1
    //	Video Hdr
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_VIDEO_HDR), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::OFF), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::OFF, 
                MtkCameraParameters::ON, 
            )
        ), 
    )
#endif
    //==========================================================================    
END_FTABLE_SCENE_INDEP()
//------------------------------------------------------------------------------
/*******************************************************************************
 *
 ******************************************************************************/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
FTABLE_SCENE_DEP()
    //==========================================================================
#if 1
    //  Focus Mode
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_FOCUS_MODE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::FOCUS_MODE_AUTO), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::FOCUS_MODE_AUTO,   
                MtkCameraParameters::FOCUS_MODE_MACRO, 
                MtkCameraParameters::FOCUS_MODE_INFINITY, 
                MtkCameraParameters::FOCUS_MODE_CONTINUOUS_PICTURE, 
                MtkCameraParameters::FOCUS_MODE_CONTINUOUS_VIDEO, 
                "manual",   "fullscan", 
            )
        ), 
        //......................................................................
    )
#endif
    //==========================================================================
#if 1
    //  ISO
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_ISO_SPEED), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_("auto"), 
            ITEM_AS_VALUES_(
                "auto", 
            )
        ), 
        //......................................................................
        #if 1   //  SCENE AUTO
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_AUTO, 
            ITEM_AS_DEFAULT_("auto"), 
            ITEM_AS_VALUES_(
                "auto", "100", "200", "400", "800", "1600", 
            )
        )
        #endif
        //......................................................................
        #if 1   //  SCENE NORMAL
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_NORMAL, 
            ITEM_AS_DEFAULT_("auto"), 
            ITEM_AS_VALUES_(
                "auto", "100", "200", "400", "800", "1600", 
            )
        )
        #endif
        //......................................................................
    )
#endif
    //==========================================================================
#if 1
    //  White Balance.
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_WHITE_BALANCE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::WHITE_BALANCE_AUTO), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::WHITE_BALANCE_AUTO,            MtkCameraParameters::WHITE_BALANCE_INCANDESCENT, 
                MtkCameraParameters::WHITE_BALANCE_FLUORESCENT,     MtkCameraParameters::WHITE_BALANCE_WARM_FLUORESCENT, 
                MtkCameraParameters::WHITE_BALANCE_DAYLIGHT,        MtkCameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT, 
                MtkCameraParameters::WHITE_BALANCE_TWILIGHT,        MtkCameraParameters::WHITE_BALANCE_SHADE, 
            )
        ), 
        //......................................................................
        #if 1   //  SCENE LANDSCAPE
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_LANDSCAPE, 
            ITEM_AS_DEFAULT_(MtkCameraParameters::WHITE_BALANCE_DAYLIGHT), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::WHITE_BALANCE_AUTO,            MtkCameraParameters::WHITE_BALANCE_INCANDESCENT, 
                MtkCameraParameters::WHITE_BALANCE_FLUORESCENT,     MtkCameraParameters::WHITE_BALANCE_WARM_FLUORESCENT, 
                MtkCameraParameters::WHITE_BALANCE_DAYLIGHT,        MtkCameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT, 
                MtkCameraParameters::WHITE_BALANCE_TWILIGHT,        MtkCameraParameters::WHITE_BALANCE_SHADE, 
            )
        )
        #endif
        //......................................................................
        #if 1   //  SCENE SUNSET
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_SUNSET, 
            ITEM_AS_DEFAULT_(MtkCameraParameters::WHITE_BALANCE_DAYLIGHT), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::WHITE_BALANCE_AUTO,            MtkCameraParameters::WHITE_BALANCE_INCANDESCENT, 
                MtkCameraParameters::WHITE_BALANCE_FLUORESCENT,     MtkCameraParameters::WHITE_BALANCE_WARM_FLUORESCENT, 
                MtkCameraParameters::WHITE_BALANCE_DAYLIGHT,        MtkCameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT, 
                MtkCameraParameters::WHITE_BALANCE_TWILIGHT,        MtkCameraParameters::WHITE_BALANCE_SHADE, 
            )
        )
        #endif
        //......................................................................
        #if 1   //  SCENE CANDLELIGHT
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_CANDLELIGHT, 
            ITEM_AS_DEFAULT_(MtkCameraParameters::WHITE_BALANCE_INCANDESCENT), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::WHITE_BALANCE_AUTO,            MtkCameraParameters::WHITE_BALANCE_INCANDESCENT, 
                MtkCameraParameters::WHITE_BALANCE_FLUORESCENT,     MtkCameraParameters::WHITE_BALANCE_WARM_FLUORESCENT, 
                MtkCameraParameters::WHITE_BALANCE_DAYLIGHT,        MtkCameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT, 
                MtkCameraParameters::WHITE_BALANCE_TWILIGHT,        MtkCameraParameters::WHITE_BALANCE_SHADE, 
            )
        )
        #endif
        //......................................................................
//<2013/09/18-ClarkLin-[Camera] add Beach & Snow effect
        #if 1   //  SCENE BEACH 20130917_KevinLin
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_BEACH, 
            ITEM_AS_DEFAULT_(MtkCameraParameters::WHITE_BALANCE_DAYLIGHT), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::WHITE_BALANCE_AUTO,            MtkCameraParameters::WHITE_BALANCE_INCANDESCENT, 
                MtkCameraParameters::WHITE_BALANCE_FLUORESCENT,     MtkCameraParameters::WHITE_BALANCE_WARM_FLUORESCENT, 
                MtkCameraParameters::WHITE_BALANCE_DAYLIGHT,        MtkCameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT, 
                MtkCameraParameters::WHITE_BALANCE_TWILIGHT,        MtkCameraParameters::WHITE_BALANCE_SHADE, 
            )
        )
        #endif
	//......................................................................
        #if 1   //  SCENE SNOW 20130917_KevinLin
        SCENE_AS_(MtkCameraParameters::SCENE_MODE_SNOW, 
            ITEM_AS_DEFAULT_(MtkCameraParameters::WHITE_BALANCE_DAYLIGHT), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::WHITE_BALANCE_AUTO,            MtkCameraParameters::WHITE_BALANCE_INCANDESCENT, 
                MtkCameraParameters::WHITE_BALANCE_FLUORESCENT,     MtkCameraParameters::WHITE_BALANCE_WARM_FLUORESCENT, 
                MtkCameraParameters::WHITE_BALANCE_DAYLIGHT,        MtkCameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT, 
                MtkCameraParameters::WHITE_BALANCE_TWILIGHT,        MtkCameraParameters::WHITE_BALANCE_SHADE, 
            )
        )
        #endif
       //......................................................................
//>2013/09/18
    )
#endif
    //==========================================================================
#if 1
    //  ISP Edge
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_EDGE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::MIDDLE), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::LOW, MtkCameraParameters::MIDDLE, MtkCameraParameters::HIGH, 
            )
        ), 
        //......................................................................
        //......................................................................
    )
#endif
    //==========================================================================
#if 1
    //  ISP Hue
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_HUE), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::MIDDLE), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::LOW, MtkCameraParameters::MIDDLE, MtkCameraParameters::HIGH, 
            )
        ), 
        //......................................................................
        //......................................................................
    )
#endif
    //==========================================================================
#if 1
    //  ISP Saturation
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_SATURATION), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::MIDDLE), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::LOW, MtkCameraParameters::MIDDLE, MtkCameraParameters::HIGH, 
            )
        ), 
        //......................................................................
        //......................................................................
    )
#endif
    //==========================================================================
#if 1
    //  ISP Brightness
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_BRIGHTNESS), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::MIDDLE), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::LOW, MtkCameraParameters::MIDDLE, MtkCameraParameters::HIGH, 
            )
        ), 
        //......................................................................
        //......................................................................
    )
#endif
    //==========================================================================
#if 1
    //  ISP Contrast
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_CONTRAST), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::MIDDLE), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::LOW, MtkCameraParameters::MIDDLE, MtkCameraParameters::HIGH, 
            )
        ), 
        //......................................................................
        //......................................................................
    )
#endif
    //==========================================================================
//Begin_Arima_HCSW7_20130422_JerryTai - AE metering adding 
  // ==========================================================================
#if 1
    // Exposure Meter
    FTABLE_CONFIG_AS_TYPE_OF_DEFAULT_VALUES(
        KEY_AS_(MtkCameraParameters::KEY_EXPOSURE_METER), 
        SCENE_AS_DEFAULT_SCENE(
            ITEM_AS_DEFAULT_(MtkCameraParameters::EXPOSURE_METER_CENTER), 
            ITEM_AS_VALUES_(
                MtkCameraParameters::EXPOSURE_METER_CENTER, 
                MtkCameraParameters::EXPOSURE_METER_AVERAGE, 
                MtkCameraParameters::EXPOSURE_METER_SPOT,
            )
        ), 
    )
#endif
    //==========================================================================
//End_Arima_HCSW7_20130422_JerryTai - AE metering adding
END_FTABLE_SCENE_DEP()
//------------------------------------------------------------------------------
END_FTABLE_DEFINITION()


/*******************************************************************************
 *
 ******************************************************************************/
#endif
//#endif //_MTK_CUSTOM_PROJECT_HAL_IMGSENSOR_SRC_CONFIGFTBL__H_

