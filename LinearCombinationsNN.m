function [dist, parameter_vec]=LinearCombinationsNN(Target_sl, Target_cad, data, points)



data=data(:,1:12);

plotNN=0;
% Max and Min Values
cad_max=135;
cad_min=91;

sl_max=1.85/2;
sl_min=1.25/2;

step_max=1.85/2;
step_min=1.25/2;



% Normalize Target SL and CAD
cad_norm=normalize(Target_cad, cad_min, cad_max);
sl_norm=normalize(Target_sl, sl_min, sl_max);






d=zeros(length(data),1);

for i=1:length(data)
    
    data(i,12)=normalize(data(i,12), sl_min, sl_max);
    data(i,11)=normalize(data(i,11), cad_min, cad_max);
    d(i)=pdist([cad_norm, sl_norm; data(i,11),data(i,12)], 'euclidean');

    

end




%find(data)

% Find close points

[B,I]=mink(d,points);

% Shift data relative to closest point
    
shifted_data=data(I,:)-data(I(1),:);

shifted_norm=vecnorm(shifted_data(:,11:12),2,2);
shifted_data_norm=shifted_data./shifted_norm;
shifted_data_norm(isnan(shifted_data_norm))=0;
%% Add Length norm
%shifted_data_norm=shifted_data_norm./B;
%for i=1:length(I)-1
   
%    Factor(i)=norm(shifted_data(I(i),11:12));
%    shifted_data_norm(I(i),:)=shifted_data(I(i),:)./Factor(i);
%end

%shifted_data_norm;


target_vec_norm=[cad_norm, sl_norm]';
shifted_target=target_vec_norm-data(I(1),11:12)';



% Compute Parameter Vector
%linear_comb_norm_shifted=pinv(shifted_data(1:length(I),11:12)')*shifted_target;
%parameter_shifted=shifted_data(1:length(I),:)'*linear_comb_norm_shifted;

%% Norm
linear_comb_norm_shifted=pinv(shifted_data_norm(:,11:12)')*shifted_target;
parameter_shifted=shifted_data_norm(:,:)'*linear_comb_norm_shifted;


%% No Norm
%linear_comb_shifted=pinv(shifted_data(:,11:12)')*shifted_target;
%parameter_shifted=shifted_data(:,:)'*linear_comb_shifted;

parameter_vec=parameter_shifted+data(I(1),:)';

for i=1:length(data)
    
    data(i,12)=denormalize(data(i,12), sl_min, sl_max);
    data(i,11)=denormalize(data(i,11), cad_min, cad_max);
    %d(i)=pdist([cad_norm, sl_norm; data(i,11),data(i,12)], 'euclidean');

    

end








parameter_vec(11)=denormalize(parameter_vec(11),cad_min, cad_max);
parameter_vec(12)=denormalize(parameter_vec(12),sl_min, sl_max);



for i=1:length(data)
    
    data_norm(i,1)=normalize(data(i,1), min(data(:,1)), max(data(:,1)));
    data_norm(i,2)=normalize(data(i,2), min(data(:,2)), max(data(:,2)));
    data_norm(i,3)=normalize(data(i,3), min(data(:,3)), max(data(:,3)));
    data_norm(i,4)=normalize(data(i,4), min(data(:,4)), max(data(:,4)));
    data_norm(i,5)=normalize(data(i,5), min(data(:,5)), max(data(:,5)));
    data_norm(i,6)=normalize(data(i,6), min(data(:,6)), max(data(:,6)));
    data_norm(i,7)=normalize(data(i,7), min(data(:,7)), max(data(:,7)));
    data_norm(i,8)=normalize(data(i,8), min(data(:,8)), max(data(:,8)));
    data_norm(i,9)=normalize(data(i,9), min(data(:,9)), max(data(:,9)));
    data_norm(i,10)=normalize(data(i,10), min(data(:,10)), max(data(:,10)));
   
end

d_data=zeros(length(I),length(I))';

for i=1:length(I)
    for j=1:length(I)
  
    d_data(i,j)=pdist([data_norm(I(i),:); data_norm(I(j),:)], 'euclidean');
    end
end

if plotNN==1
    figure
    x=[0.925; 0.925; 0.8; 0.625; 0.625; 0.7284];
    y=[91; 116.8; 135; 135; 106.2;91];
    c=[getspeed(x(1),y(1));getspeed(x(2),y(2));getspeed(x(3),y(3));getspeed(x(4),y(4));getspeed(x(5),y(5));getspeed(x(6),y(6))];
    patch(y,x, c, 'EdgeColor', 'None')
    colorbar
    col=colorbar;
    col.Label.String = 'Speed in m/s';


    ylim([step_min-0.15 step_max+0.1])
    xlim([cad_min-20 cad_max+20])
    xlabel('Cadence in [1/min]')
    ylabel('Step length in [m]')
    alpha(0.5)
    hold on
    scatter(data(:,11), data(:,12))
    scatter(data(99:end,11), data(99:end,12), 'filled')
    scatter(data(I,11), data(I,12))
end


dist=sum(triu(d_data),'all');
Data_vec=sum(d_data,2);



function speed=getspeed(cad,step)

    speed=(cad/60)*step;
    
end





function norm= normalize(Target, min, max)

norm=(Target-min)/(max-min);


end

function Target=denormalize(norm, min, max)
Target=norm*(max-min)+min;

end



end