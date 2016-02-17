package br.ufc.gtel.ndktest;

import android.provider.Settings;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    public native int calculatorNDKtest(int num1, int num2);

    static{
        System.loadLibrary("ndktest");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        int resp = calculatorNDKtest(10, 2);
        ((TextView)findViewById(R.id.hello_text)).setText(String.valueOf(resp));
    }
}
