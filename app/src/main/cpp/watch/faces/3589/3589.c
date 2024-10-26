
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: 3589

#include "3589.h"

#ifdef ENABLE_FACE_3589

lv_obj_t *face_3589;
lv_obj_t *face_3589_0_244;
lv_obj_t *face_3589_2_198052;
lv_obj_t *face_3589_3_69392;
lv_obj_t *face_3589_4_69392;
lv_obj_t *face_3589_5_69392;
lv_obj_t *face_3589_6_69392;
lv_obj_t *face_3589_7_70336;
lv_obj_t *face_3589_8_101556;
lv_obj_t *face_3589_9_70446;
lv_obj_t *face_3589_10_163774;
lv_obj_t *face_3589_11_132664;


#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit for watchfaces"
#endif

const lv_img_dsc_t *face_3589_dial_img_1_194882_group[] = {
	&face_3589_dial_img_1_194882_0,
	&face_3589_dial_img_1_194882_1,
	&face_3589_dial_img_1_194882_2,
	&face_3589_dial_img_1_194882_3,
	&face_3589_dial_img_1_194882_4,
	&face_3589_dial_img_1_194882_5,
	&face_3589_dial_img_1_194882_6,
};
const lv_img_dsc_t *face_3589_dial_img_2_198052_group[] = {
	&face_3589_dial_img_2_198052_0,
	&face_3589_dial_img_2_198052_1,
	&face_3589_dial_img_2_198052_2,
	&face_3589_dial_img_2_198052_3,
	&face_3589_dial_img_2_198052_4,
	&face_3589_dial_img_2_198052_5,
	&face_3589_dial_img_2_198052_6,
};
const lv_img_dsc_t *face_3589_dial_img_3_69392_group[] = {
	&face_3589_dial_img_3_69392_0,
	&face_3589_dial_img_3_69392_1,
	&face_3589_dial_img_3_69392_2,
	&face_3589_dial_img_3_69392_3,
	&face_3589_dial_img_3_69392_4,
	&face_3589_dial_img_3_69392_5,
	&face_3589_dial_img_3_69392_6,
	&face_3589_dial_img_3_69392_7,
	&face_3589_dial_img_3_69392_8,
	&face_3589_dial_img_3_69392_9,
};
const lv_img_dsc_t *face_3589_dial_img_8_101556_group[] = {
	&face_3589_dial_img_8_101556_0,
	&face_3589_dial_img_8_101556_1,
	&face_3589_dial_img_8_101556_2,
	&face_3589_dial_img_8_101556_3,
	&face_3589_dial_img_8_101556_4,
	&face_3589_dial_img_8_101556_5,
	&face_3589_dial_img_8_101556_6,
	&face_3589_dial_img_8_101556_7,
	&face_3589_dial_img_8_101556_8,
	&face_3589_dial_img_8_101556_9,
};
const lv_img_dsc_t *face_3589_dial_img_9_70446_group[] = {
	&face_3589_dial_img_9_70446_0,
	&face_3589_dial_img_9_70446_1,
	&face_3589_dial_img_9_70446_2,
	&face_3589_dial_img_9_70446_3,
	&face_3589_dial_img_9_70446_4,
	&face_3589_dial_img_9_70446_5,
	&face_3589_dial_img_9_70446_6,
	&face_3589_dial_img_9_70446_7,
	&face_3589_dial_img_9_70446_8,
	&face_3589_dial_img_9_70446_9,
};
const lv_img_dsc_t *face_3589_dial_img_10_163774_group[] = {
	&face_3589_dial_img_10_163774_0,
	&face_3589_dial_img_10_163774_1,
	&face_3589_dial_img_10_163774_2,
	&face_3589_dial_img_10_163774_3,
	&face_3589_dial_img_10_163774_4,
	&face_3589_dial_img_10_163774_5,
	&face_3589_dial_img_10_163774_6,
	&face_3589_dial_img_10_163774_7,
	&face_3589_dial_img_10_163774_8,
	&face_3589_dial_img_10_163774_9,
};
const lv_img_dsc_t *face_3589_dial_img_11_132664_group[] = {
	&face_3589_dial_img_11_132664_0,
	&face_3589_dial_img_11_132664_1,
	&face_3589_dial_img_11_132664_2,
	&face_3589_dial_img_11_132664_3,
	&face_3589_dial_img_11_132664_4,
	&face_3589_dial_img_11_132664_5,
	&face_3589_dial_img_11_132664_6,
	&face_3589_dial_img_11_132664_7,
	&face_3589_dial_img_11_132664_8,
	&face_3589_dial_img_11_132664_9,
};




#endif

void init_face_3589(void (*callback)(const char*, const lv_img_dsc_t *, lv_obj_t **, lv_obj_t **)){
#ifdef ENABLE_FACE_3589
    face_3589 = lv_obj_create(NULL);
    lv_obj_clear_flag(face_3589, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(face_3589, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(face_3589, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(face_3589, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(face_3589, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(face_3589, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(face_3589, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(face_3589, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

    lv_obj_add_event_cb(face_3589, onFaceEvent, LV_EVENT_ALL, NULL);

    
    face_3589_0_244 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_0_244, &face_3589_dial_img_0_244_0);
    lv_obj_set_width(face_3589_0_244, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_0_244, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_0_244, 0);
    lv_obj_set_y(face_3589_0_244, 0);
    lv_obj_add_flag(face_3589_0_244, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_0_244, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_2_198052 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_2_198052, &face_3589_dial_img_2_198052_0);
    lv_obj_set_width(face_3589_2_198052, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_2_198052, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_2_198052, 62);
    lv_obj_set_y(face_3589_2_198052, 117);
    lv_obj_add_flag(face_3589_2_198052, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_2_198052, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_3_69392 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_3_69392, &face_3589_dial_img_3_69392_0);
    lv_obj_set_width(face_3589_3_69392, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_3_69392, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_3_69392, 68);
    lv_obj_set_y(face_3589_3_69392, 137);
    lv_obj_add_flag(face_3589_3_69392, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_3_69392, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_4_69392 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_4_69392, &face_3589_dial_img_3_69392_0);
    lv_obj_set_width(face_3589_4_69392, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_4_69392, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_4_69392, 60);
    lv_obj_set_y(face_3589_4_69392, 137);
    lv_obj_add_flag(face_3589_4_69392, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_4_69392, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_5_69392 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_5_69392, &face_3589_dial_img_3_69392_0);
    lv_obj_set_width(face_3589_5_69392, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_5_69392, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_5_69392, 92);
    lv_obj_set_y(face_3589_5_69392, 137);
    lv_obj_add_flag(face_3589_5_69392, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_5_69392, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_6_69392 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_6_69392, &face_3589_dial_img_3_69392_0);
    lv_obj_set_width(face_3589_6_69392, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_6_69392, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_6_69392, 84);
    lv_obj_set_y(face_3589_6_69392, 137);
    lv_obj_add_flag(face_3589_6_69392, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_6_69392, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_7_70336 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_7_70336, &face_3589_dial_img_7_70336_0);
    lv_obj_set_width(face_3589_7_70336, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_7_70336, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_7_70336, 76);
    lv_obj_set_y(face_3589_7_70336, 136);
    lv_obj_add_flag(face_3589_7_70336, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_7_70336, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_8_101556 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_8_101556, &face_3589_dial_img_8_101556_0);
    lv_obj_set_width(face_3589_8_101556, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_8_101556, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_8_101556, 156);
    lv_obj_set_y(face_3589_8_101556, 63);
    lv_obj_add_flag(face_3589_8_101556, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_8_101556, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_9_70446 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_9_70446, &face_3589_dial_img_9_70446_0);
    lv_obj_set_width(face_3589_9_70446, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_9_70446, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_9_70446, 107);
    lv_obj_set_y(face_3589_9_70446, 63);
    lv_obj_add_flag(face_3589_9_70446, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_9_70446, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_10_163774 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_10_163774, &face_3589_dial_img_10_163774_0);
    lv_obj_set_width(face_3589_10_163774, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_10_163774, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_10_163774, 156);
    lv_obj_set_y(face_3589_10_163774, 137);
    lv_obj_add_flag(face_3589_10_163774, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_10_163774, LV_OBJ_FLAG_SCROLLABLE );

    face_3589_11_132664 = lv_img_create(face_3589);
    lv_img_set_src(face_3589_11_132664, &face_3589_dial_img_11_132664_0);
    lv_obj_set_width(face_3589_11_132664, LV_SIZE_CONTENT);
    lv_obj_set_height(face_3589_11_132664, LV_SIZE_CONTENT);
    lv_obj_set_x(face_3589_11_132664, 107);
    lv_obj_set_y(face_3589_11_132664, 137);
    lv_obj_add_flag(face_3589_11_132664, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_3589_11_132664, LV_OBJ_FLAG_SCROLLABLE );


    callback("3589", &face_3589_dial_img_preview_0, &face_3589, NULL);

#endif
}

void update_time_3589(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday)
{
#ifdef ENABLE_FACE_3589
    if (!face_3589)
    {
        return;
    }
	lv_img_set_src(face_3589_2_198052, face_3589_dial_img_2_198052_group[((weekday + 6) / 1) % 7]);
	lv_img_set_src(face_3589_3_69392, face_3589_dial_img_3_69392_group[(month / 1) % 10]);
	lv_img_set_src(face_3589_4_69392, face_3589_dial_img_3_69392_group[(month / 10) % 10]);
	lv_img_set_src(face_3589_5_69392, face_3589_dial_img_3_69392_group[(day / 1) % 10]);
	lv_img_set_src(face_3589_6_69392, face_3589_dial_img_3_69392_group[(day / 10) % 10]);
	lv_img_set_src(face_3589_8_101556, face_3589_dial_img_8_101556_group[(hour / 1) % 10]);
	lv_img_set_src(face_3589_9_70446, face_3589_dial_img_9_70446_group[(hour / 10) % 10]);
	lv_img_set_src(face_3589_10_163774, face_3589_dial_img_10_163774_group[(minute / 1) % 10]);
	lv_img_set_src(face_3589_11_132664, face_3589_dial_img_11_132664_group[(minute / 10) % 10]);

#endif
}

void update_weather_3589(int temp, int icon)
{
#ifdef ENABLE_FACE_3589
    if (!face_3589)
    {
        return;
    }

#endif
}

void update_status_3589(int battery, bool connection){
#ifdef ENABLE_FACE_3589
    if (!face_3589)
    {
        return;
    }

#endif
}

void update_activity_3589(int steps, int distance, int kcal)
{
#ifdef ENABLE_FACE_3589
    if (!face_3589)
    {
        return;
    }

#endif
}

void update_health_3589(int bpm, int oxygen)
{
#ifdef ENABLE_FACE_3589
    if (!face_3589)
    {
        return;
    }

#endif
}

void update_all_3589(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_3589
    update_time_3589(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_3589(temp, icon);
    update_status_3589(battery, connection);
    update_activity_3589(steps, distance, kcal);
    update_health_3589(bpm, oxygen);
#endif
}

void update_check_3589(lv_obj_t *root, int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_3589
    if (root != face_3589)
    {
        return;
    }
    update_time_3589(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_3589(temp, icon);
    update_status_3589(battery, connection);
    update_activity_3589(steps, distance, kcal);
    update_health_3589(bpm, oxygen);
#endif
}

