package com.hzy.lvgl.demo.ui;

import android.annotation.SuppressLint;
import android.os.Bundle;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintSet;

import com.blankj.utilcode.util.StringUtils;
import com.hzy.lvgl.demo.databinding.ActivityFullScreenBinding;

public class FullScreenActivity extends AppCompatActivity {
    private ActivityFullScreenBinding mB;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        mB = ActivityFullScreenBinding.inflate(getLayoutInflater());
        setContentView(mB.getRoot());
        String name = getIntent().getStringExtra("app");
        if (StringUtils.isTrimEmpty(name)) {
            name = "watch";
        }
        int width = getIntent().getIntExtra("width", 240);
        int height = getIntent().getIntExtra("height", 240);
        ConstraintSet constraintSet = new ConstraintSet();
        constraintSet.clone(mB.lvRoot);
        @SuppressLint("DefaultLocale")
        String ratio = String.format("%d:%d", width, height);
        constraintSet.setDimensionRatio(mB.lvFrame.getId(), ratio);
        constraintSet.applyTo(mB.lvRoot);
        mB.lvView.setApp(name);
        mB.lvView.setSize(width, height);
    }
}
