load dataset.mat;
i=47;


% Find Basis Point that lies closest to the target point
% (Step length=0.85,Cadence=120)
i=NN(0.85,120,dataset, 1);
dataset(i,:)


%% Assign Parameters of closest basis point
v_init=dataset(i,1);
stepDur=dataset(i,2);
propulsion=dataset(i,3);
theta0=dataset(i,4);
Target13=dataset(i,5:7);
Target02=dataset(i,8:10);
pMod_data=[Target02(1) Target02(2) Target13(1) Target13(3)  theta0 propulsion v_init];