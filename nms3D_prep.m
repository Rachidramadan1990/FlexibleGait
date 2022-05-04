


% run old start files to load variables
%run(['parameters' filesep 'old' filesep 'runScripts.m'])


load('paramRR.mat')
load('paramIC_02cm.mat')
nms3D_sInit
nms3D_mInit
nms3D_cInit
nms3D_icInit
load model_left_ball.mat
load model_right_ball.mat
load model_swing_left.mat
load model_swing_right.mat
load model_trunk.mat
WramameiSL_1000 = readmatrix('WSL_1000_Norm_Sigmoid_MSE_cont.csv');
ZramameiSL_1000 = readmatrix('ZSL_1000_Norm_Sigmoid_MSE_cont.csv');



%parameters
assign_parameters;









