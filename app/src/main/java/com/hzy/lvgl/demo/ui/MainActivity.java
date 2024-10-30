package com.hzy.lvgl.demo.ui;

import android.content.Intent;
import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

import com.hzy.lvgl.demo.databinding.ActivityMainBinding;


public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding mB;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        mB = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(mB.getRoot());
        mB.btnWatchface240.setOnClickListener(v -> openLVPage(PartScreenActivity.class, "watch", 240, 240));
        mB.btnWatchface280.setOnClickListener(v -> openLVPage(PartScreenActivity.class, "watch", 240, 280));
        mB.btnWidgets240.setOnClickListener(v -> openLVPage(PartScreenActivity.class, "widgets", 240, 240));
        mB.btnWidgets.setOnClickListener(v -> openLVPage(PartScreenActivity.class, "widgets", 800, 480));
        mB.btnMusic.setOnClickListener(v -> openLVPage(PartScreenActivity.class, "music", 800, 480));
        mB.btnBenchmark.setOnClickListener(v -> openLVPage(PartScreenActivity.class, "benchmark", 800, 480));
        mB.btnLarge.setOnClickListener(v -> openLVPage(FullScreenActivity.class, "widgets", 800, 480));
    }

    private void openLVPage(Class<?> activity, String name, int width, int height) {
        Intent intent = new Intent(this, activity);
        intent.putExtra("app", name);
        intent.putExtra("width", width);
        intent.putExtra("height", height);
        startActivity(intent);
    }
}
