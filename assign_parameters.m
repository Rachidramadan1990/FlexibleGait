

param=zeros(45,1);
 
 %% Basis Stimulation 
 param(1)=0.008598263637539;
 param(2)=0.002560374076028;
 param(3)=0.001620752260236;
 param(4)=0.010359422514029;
 param(5)=0.030408778236257;
 param(6)=0.000201178751375;
 param(7)=0.033382791982204;
 param(8)=0.002026679377026;
 param(9)= 0.006818211291121;
 param(10)=0.001141229105197;
 param(11)= 0.023766444935868;
 
 BasisStim=param(1:11);
 
 
 % Compliant Leg                  
 param(12)=0.001030660225848;%0.001530660225848
 param(13)=0.000609163672865;
 param(14)=0.000154152777915;
 
 CompliantLeg=param(12:14);
 
 % Compliant Leg Lateral
 param(15)=1.112412002620313e-04;
 CompliantLegLat=param(15);
   
                 
 % Prevent Knee Overextension (13:18)             
 param(16)= 0.000070084044639; 
 param(17)= 5.080684947593116;
 param(18)= 0.096658418750310;
 param(19)= 2.870300019986082;
 param(20)= 0.812585678592052;
 param(21)= 0.000977890689071;
 
 PreventKneeOverextension=param(16:21);
  
 
 
% Balance Trunk                    
 param(22)=2.201963664035377;
 param(23)=0.233171395293302;
 BalanceTrunk=param(22:23);
 
            
 % Balance Trunk Old Lat
param(24)=4.269296408336134;
param(25)=0.516492706663585;
param(26)=0.312203130963664;
param(27)=0.263275466881572;
BalanceTrunkLat=param(24:27);


 
 
% Balance02 
param(28)= 0.371990243994403; %cd02
param(29)= 0.094042826353683; %cv02
param(30)= 0.011596666505603; %cd02lat
param(31)= 0.401934248294249; %cv02lat


Balance02=param(28:31);

% Balance 13 

param(32)=  0.770763027246204; %cd13
param(33)=  0.194629779093185; %cv13
param(34)=  0.011596666505603; %cd13lat 0.4091
param(35)=  0.401934248294249; %cv13lat

Balance13=param(32:35);


% Target 02 

param(36)= 4.043475033838776 ; %swh02 % -1.1 
param(37)= pi+0.9;%4.703873169815919; %swk02
param(38)= 2.833489140112643; %swa02

Target02=param(36:38);

  
% Target 13

param(39)=  2.702549183619629; %swh13 0.4
param(40)=  2*pi; %swk13     0
param(41)=  2.833489140112643; %swa13 0

Target13=param(39:41);

% theta0 
param(42)=2.935491351449777; %-0.033
theta0=param(42);

 
 %Propulsion Extra
 param(43)=0.440993299219605; %+0.47
 propulsion=param(43);


 
 
 % Step Duration
 param(44)=0.58; % -0.15
 stepDur=param(44);
 
 
 param(45)=0.05;
 Target_lat=param(45);
 
 v_init=1.25;
 

 

 
 
 
 





