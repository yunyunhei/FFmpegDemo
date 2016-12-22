package cn.yunyunhei.wuhang.simplest_ffmpeg_android_helloworld;

/**
 * Created by wuhang on 16/12/22.
 */

public class NdkJniUtils {
    static {
        System.loadLibrary("testjni");	//defaultConfig.ndk.moduleName
    }
    public native String getCLanguageString();
    public native String stringFromJNI();
    public native String unimplementedStringFromJNI();
}
