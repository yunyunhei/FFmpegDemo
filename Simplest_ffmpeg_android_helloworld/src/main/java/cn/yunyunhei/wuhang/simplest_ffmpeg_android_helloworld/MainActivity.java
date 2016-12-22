package cn.yunyunhei.wuhang.simplest_ffmpeg_android_helloworld;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

import cn.yunyunhei.mylibrary.utils.LogUtil;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        NdkJniUtils ndkJniUtils = new NdkJniUtils();
        String cLanguageString = ndkJniUtils.getCLanguageString();
        LogUtil.d("infoinfo","cLanguageString : "+cLanguageString);

        String stringFromJNI = ndkJniUtils.stringFromJNI();
        LogUtil.d("infoinfo","stringFromJNI : "+stringFromJNI);
    }
}
