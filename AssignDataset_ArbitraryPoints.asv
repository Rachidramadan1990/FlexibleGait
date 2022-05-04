nms3D_prep;
load dataset.mat


% Define Target Gait
Target_sl=0.76;
Target_cad=112;

% Compute Nearest Neighours and Recombine information to a new parameter
% value
[Dist, p]=LinearCombinationsNN(Target_sl, Target_cad, dataset, 5); 



% Assign Parameters
v_init=p(1);
stepDur=p(2);
propulsion=p(3);
theta0=p(4);
Target13=p(5:7);
Target02=p(8:10);
