#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_6013312621321988663);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_859444703069037077);
void car_H_mod_fun(double *state, double *out_6012836658678105946);
void car_f_fun(double *state, double dt, double *out_1242451129020597584);
void car_F_fun(double *state, double dt, double *out_1946512517403504011);
void car_h_25(double *state, double *unused, double *out_689772175321388301);
void car_H_25(double *state, double *unused, double *out_1514765360324712778);
void car_h_24(double *state, double *unused, double *out_532768920875316661);
void car_H_24(double *state, double *unused, double *out_1044307878281374054);
void car_h_30(double *state, double *unused, double *out_760859217307494866);
void car_H_30(double *state, double *unused, double *out_1385426413181472708);
void car_h_26(double *state, double *unused, double *out_6450050268946726645);
void car_H_26(double *state, double *unused, double *out_2171619424435024682);
void car_h_27(double *state, double *unused, double *out_5566052546637658953);
void car_H_27(double *state, double *unused, double *out_789336898618952203);
void car_h_29(double *state, double *unused, double *out_1928603018383636603);
void car_H_29(double *state, double *unused, double *out_1895657757495864892);
void car_h_28(double *state, double *unused, double *out_3290523729024606819);
void car_H_28(double *state, double *unused, double *out_3186741259573665682);
void car_h_31(double *state, double *unused, double *out_9117094421669621431);
void car_H_31(double *state, double *unused, double *out_1545411322201673206);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}