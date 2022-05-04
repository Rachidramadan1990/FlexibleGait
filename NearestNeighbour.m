
%close all;

% Initialize
nms3D_prep;
load dataset.mat
data=dataset;

% Select Step length and Cadence

Target_sl=0.85;
Target_cad=111;

% Select Number of Neighbours
k=5;


% Max and Min Values
cad_max=135;
cad_min=91;

sl_max=1.85/2;
sl_min=1.25/2;


% Normalize Target SL and CAD to Human Regime
cad_norm=normalize(Target_cad, cad_min, cad_max);
sl_norm=normalize(Target_sl, sl_min, sl_max);



 



data=sortrows(data,3);

d=zeros(length(data),1);

for i=1:length(data)
    
    data(i,12)=normalize(data(i,12), sl_min, sl_max);
    data(i,11)=normalize(data(i,11), cad_min, cad_max);
    d(i)=pdist([cad_norm, sl_norm; data(i,11),data(i,12)], 'euclidean');



end

% Find k nearest neighours

%I=find(d<0.2);
%if isempty(I)
    
    [B,I]=mink(d,k);
    w=zeros(1,length(I));
    

    
    
    for i=1:length(B)
        w(i)=1/B(i);
        if B(i)<0.05
           I=I(i);
            break
         end
    end
   %disp(I) 
    
%sl_norm=normalize(Target_sl, sl_min, sl_max);
%cad_norm=normalize(Target_cad, cad_min, cad_max);    
%target_vec_norm=[cad_norm, sl_norm]';


%end

%find(d<0.1)

%%  with linear Combinations

%linear_comb_norm=pinv(data(I,11:12)')*target_vec_norm;
%P=data(I,:)'*linear_comb_norm;

%target_vec_norm
%P(11:12)


%% with Polynominal Interpolation

%R(1)=vInitFit(Target_sl, Target_cad);
%R(2)=stepDurFit(Target_sl, Target_cad);
%R(3)=PropulsionFit(Target_sl, Target_cad);
%R(4)=theta0Fit(Target_sl, Target_cad);
%R(5)=Target13HipFit(Target_sl, Target_cad);
%R(6)=Target13KneeFit(Target_sl, Target_cad);
%R(7)=Target13AnkleFit(Target_sl, Target_cad);
%R(8)=Target02HipFit(Target_sl, Target_cad);
%R(9)=Target02KneeFit(Target_sl, Target_cad);
%R(10)=Target02AnkleFit(Target_sl, Target_cad);



for i=1:length(data)
    data(i,12)=denormalize(data(i,12), sl_min, sl_max);
    data(i,11)=denormalize(data(i,11), cad_min, cad_max);
    
end
%P(12)=denormalize(P(12), sl_min, sl_max);
%P(11)=denormalize(P(11), cad_min, cad_max);
%P;

%% Nearest Neighbours
P=data(I,:);
%linear_comb=pinv(data(I,11:12)')*target_vec;
%Solution=data(I,1:12)'*linear_comb
%disp(Solution)
%disp(target_vec)


if length(I)>1
    
    for i=1:length(B)
        
        Pw(i,:)=P(i,:)*w(i);
    end
    
    p=sum(Pw)/sum(w);
    %p=mean(P)
else
    p=P;
end
%disp(p)
AssignDataset_ArbitraryPoints;


%gait_parameter_grid;
%hold on;
%scatter(P(:,11),P(:,12));
s_data=20;
s_NN=50;

%scatter(data(:,11), data(:,12), s_data, 'filled')
%scatter(P(:,11),P(:,12), s_NN);
%scatter(p(11),p(12),s_NN, 'filled')
%scatter(Target_cad, Target_sl, 'filled')
%legend('human', 'Grid','NN','Solution','Target');


function norm= normalize(Target, min, max)

norm=(Target-min)/(max-min);


end

function Target=denormalize(norm, min, max)
Target=norm*(max-min)+min;

end



