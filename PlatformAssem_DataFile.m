% Simscape(TM) Multibody(TM) version: 5.0

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData

payload_mass = 10; % kg
%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(97).translation = [0.0 0.0 0.0];
smiData.RigidTransform(97).angle = 0.0;
smiData.RigidTransform(97).axis = [0.0 0.0 0.0];
smiData.RigidTransform(97).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [2.0000000000000004 0 0.12500000000000044];  % in
smiData.RigidTransform(1).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(1).axis = [1 0 0];
smiData.RigidTransform(1).ID = 'B[servo arm-1:-:uxcell SA5T ball-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [4.8299633789145805e-16 1.2251171524161246e-15 -0.28248031496062964];  % in
smiData.RigidTransform(2).angle = 1.0752774549891787e-15;  % rad
smiData.RigidTransform(2).axis = [0.74418305035482935 0.66797573875447103 2.6725818068432403e-16];
smiData.RigidTransform(2).ID = 'F[servo arm-1:-:uxcell SA5T ball-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [2.0000000000000009 0 0.12500000000000044];  % in
smiData.RigidTransform(3).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(3).axis = [1 0 0];
smiData.RigidTransform(3).ID = 'B[servo arm-2:-:uxcell SA5T ball-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [4.2450897183576362e-12 2.6998146036046239e-12 -0.2824803149576125];  % in
smiData.RigidTransform(4).angle = 8.7945133214263594e-13;  % rad
smiData.RigidTransform(4).axis = [-0.53674880399782532 0.84374209413001566 -1.9914188667881766e-13];
smiData.RigidTransform(4).ID = 'F[servo arm-2:-:uxcell SA5T ball-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [2.0000000000000004 0 0.12500000000000044];  % in
smiData.RigidTransform(5).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(5).axis = [1 0 0];
smiData.RigidTransform(5).ID = 'B[servo arm-3:-:uxcell SA5T ball-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [3.858025010572419e-15 1.4176160245682468e-14 0.1574803149606184];  % in
smiData.RigidTransform(6).angle = 2.5499278588316473e-15;  % rad
smiData.RigidTransform(6).axis = [0.99987395195078688 0.015877034052856009 2.0240094177493778e-17];
smiData.RigidTransform(6).ID = 'F[servo arm-3:-:uxcell SA5T ball-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [-0.39370078740157516 0 1.8110236220472435];  % in
smiData.RigidTransform(7).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(7).axis = [1 0 0];
smiData.RigidTransform(7).ID = 'B[Servo Motor-11:-:servo arm-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [9.7144514654701197e-16 -5.7245874707234634e-17 0.12500000000000117];  % in
smiData.RigidTransform(8).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(8).axis = [-1 1.09233982937878e-31 -3.8970476997140215e-16];
smiData.RigidTransform(8).ID = 'F[Servo Motor-11:-:servo arm-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [2.0000000000000004 0 0.12500000000000044];  % in
smiData.RigidTransform(9).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(9).axis = [1 0 0];
smiData.RigidTransform(9).ID = 'B[servo arm-4:-:uxcell SA5T ball-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(10).translation = [4.7739590058881731e-15 -2.8643754035329039e-14 0.15748031496062259];  % in
smiData.RigidTransform(10).angle = 4.7561954698886344e-15;  % rad
smiData.RigidTransform(10).axis = [-0.97456532981069544 -0.22410358750133941 5.1938507475175824e-16];
smiData.RigidTransform(10).ID = 'F[servo arm-4:-:uxcell SA5T ball-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(11).translation = [1.9999999999999987 0 0.12500000000000044];  % in
smiData.RigidTransform(11).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(11).axis = [1 0 0];
smiData.RigidTransform(11).ID = 'B[servo arm-5:-:uxcell SA5T ball-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(12).translation = [1.1796119636642288e-14 -6.4739880123454441e-15 0.15748031496062953];  % in
smiData.RigidTransform(12).angle = 2.2089781020526466e-15;  % rad
smiData.RigidTransform(12).axis = [-0.57154526703888875 -0.82057053793409218 5.1799786238880841e-16];
smiData.RigidTransform(12).ID = 'F[servo arm-5:-:uxcell SA5T ball-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(13).translation = [-0.39370078740157516 0 1.8110236220472442];  % in
smiData.RigidTransform(13).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(13).axis = [1 0 0];
smiData.RigidTransform(13).ID = 'B[Servo Motor-10:-:servo arm-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(14).translation = [1.9428902930940239e-16 -3.8163916471489756e-17 0.12500000000000078];  % in
smiData.RigidTransform(14).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(14).axis = [-1 6.164689744194078e-33 -6.5880317863138537e-17];
smiData.RigidTransform(14).ID = 'F[Servo Motor-10:-:servo arm-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(15).translation = [2.0000000000000013 0 0.12500000000000153];  % in
smiData.RigidTransform(15).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(15).axis = [1 0 5.5511151231257827e-17];
smiData.RigidTransform(15).ID = 'B[servo arm-6:-:uxcell SA5T ball-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(16).translation = [6.8312300260942038e-12 -2.8356345049829201e-12 0.1574803149642115];  % in
smiData.RigidTransform(16).angle = 1.2656541799010875e-12;  % rad
smiData.RigidTransform(16).axis = [-0.38287254355593625 -0.92380117741373746 2.238297434804261e-13];
smiData.RigidTransform(16).ID = 'F[servo arm-6:-:uxcell SA5T ball-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(17).translation = [0 0 0];  % in
smiData.RigidTransform(17).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(17).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(17).ID = 'B[platform rods-1:-:uxcell SA5T ball joint housing-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(18).translation = [3.3306690738754696e-16 0.55118110236220585 1.6653345369377348e-15];  % in
smiData.RigidTransform(18).angle = 2.0943951023931979;  % rad
smiData.RigidTransform(18).axis = [0.57735026918962651 -0.57735026918962451 0.57735026918962629];
smiData.RigidTransform(18).ID = 'F[platform rods-1:-:uxcell SA5T ball joint housing-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(19).translation = [0 0 0];  % in
smiData.RigidTransform(19).angle = 0;  % rad
smiData.RigidTransform(19).axis = [0 0 0];
smiData.RigidTransform(19).ID = 'B[platform rods-1:-:uxcell SA5T ball joint housing-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(20).translation = [-1.5543122344752192e-14 4.0511811023622037 1.3322676295501878e-15];  % in
smiData.RigidTransform(20).angle = 3.1415926535897896;  % rad
smiData.RigidTransform(20).axis = [1.6653345369377348e-16 8.3266726846886741e-17 -1];
smiData.RigidTransform(20).ID = 'F[platform rods-1:-:uxcell SA5T ball joint housing-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(21).translation = [0 0 0];  % in
smiData.RigidTransform(21).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(21).axis = [0.57735026918962584 -0.57735026918962573 0.57735026918962573];
smiData.RigidTransform(21).ID = 'B[platform rods-2:-:uxcell SA5T ball joint housing-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(22).translation = [1.1796119636642288e-14 0.55118110236220463 -6.106226635438361e-16];  % in
smiData.RigidTransform(22).angle = 2.094395102393197;  % rad
smiData.RigidTransform(22).axis = [0.5773502691896264 -0.57735026918962451 0.57735026918962651];
smiData.RigidTransform(22).ID = 'F[platform rods-2:-:uxcell SA5T ball joint housing-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(23).translation = [0 0 0];  % in
smiData.RigidTransform(23).angle = 2.7755575615628909e-16;  % rad
smiData.RigidTransform(23).axis = [-0 -1 0];
smiData.RigidTransform(23).ID = 'B[platform rods-2:-:uxcell SA5T ball joint housing-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(24).translation = [-2.5313084961453569e-14 4.0511811023622091 -1.3322676295501878e-15];  % in
smiData.RigidTransform(24).angle = 3.14159265358979;  % rad
smiData.RigidTransform(24).axis = [2.7755575615628909e-16 -5.5511151231257815e-17 -1];
smiData.RigidTransform(24).ID = 'F[platform rods-2:-:uxcell SA5T ball joint housing-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(25).translation = [0 0 0];  % in
smiData.RigidTransform(25).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(25).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(25).ID = 'B[platform rods-3:-:uxcell SA5T ball joint housing-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(26).translation = [0 0.55118110236220497 -8.1185058675714572e-16];  % in
smiData.RigidTransform(26).angle = 2.0943951023931948;  % rad
smiData.RigidTransform(26).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962573];
smiData.RigidTransform(26).ID = 'F[platform rods-3:-:uxcell SA5T ball joint housing-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(27).translation = [0 0 0];  % in
smiData.RigidTransform(27).angle = 0;  % rad
smiData.RigidTransform(27).axis = [0 0 0];
smiData.RigidTransform(27).ID = 'B[platform rods-3:-:uxcell SA5T ball joint housing-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(28).translation = [-1.5543122344752192e-14 4.0511811023622064 -4.5796699765787707e-16];  % in
smiData.RigidTransform(28).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(28).axis = [-6.2450045135165055e-17 2.0990154059319366e-16 1];
smiData.RigidTransform(28).ID = 'F[platform rods-3:-:uxcell SA5T ball joint housing-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(29).translation = [0 0 0];  % in
smiData.RigidTransform(29).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(29).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(29).ID = 'B[platform rods-4:-:uxcell SA5T ball joint housing-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(30).translation = [-1.3877787807814457e-15 0.55118110236220519 3.8857805861880479e-16];  % in
smiData.RigidTransform(30).angle = 2.0943951023931984;  % rad
smiData.RigidTransform(30).axis = [0.57735026918962684 -0.57735026918962418 0.57735026918962629];
smiData.RigidTransform(30).ID = 'F[platform rods-4:-:uxcell SA5T ball joint housing-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(31).translation = [0 0 0];  % in
smiData.RigidTransform(31).angle = 0;  % rad
smiData.RigidTransform(31).axis = [0 0 0];
smiData.RigidTransform(31).ID = 'B[platform rods-4:-:uxcell SA5T ball joint housing-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(32).translation = [-1.4654943925052066e-14 4.05118110236221 -1.3322676295501878e-15];  % in
smiData.RigidTransform(32).angle = 3.1415926535897891;  % rad
smiData.RigidTransform(32).axis = [5.5511151231257802e-17 -6.106226635438358e-16 -1];
smiData.RigidTransform(32).ID = 'F[platform rods-4:-:uxcell SA5T ball joint housing-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(33).translation = [0 0 0];  % in
smiData.RigidTransform(33).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(33).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(33).ID = 'B[platform rods-5:-:uxcell SA5T ball joint housing-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(34).translation = [1.3239409568654992e-14 0.55118110236220508 -8.8817841970012523e-16];  % in
smiData.RigidTransform(34).angle = 2.0943951023931975;  % rad
smiData.RigidTransform(34).axis = [0.57735026918962651 -0.57735026918962429 0.57735026918962651];
smiData.RigidTransform(34).ID = 'F[platform rods-5:-:uxcell SA5T ball joint housing-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(35).translation = [0 0 0];  % in
smiData.RigidTransform(35).angle = 0;  % rad
smiData.RigidTransform(35).axis = [0 0 0];
smiData.RigidTransform(35).ID = 'B[platform rods-5:-:uxcell SA5T ball joint housing-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(36).translation = [-3.0642155479654321e-14 4.0511811023622064 -3.5527136788005009e-15];  % in
smiData.RigidTransform(36).angle = 3.1415926535897896;  % rad
smiData.RigidTransform(36).axis = [-0 5.5511151231257815e-17 -1];
smiData.RigidTransform(36).ID = 'F[platform rods-5:-:uxcell SA5T ball joint housing-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(37).translation = [0 0 0];  % in
smiData.RigidTransform(37).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(37).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(37).ID = 'B[platform rods-6:-:uxcell SA5T ball joint housing-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(38).translation = [2.2204460492503131e-16 0.55118110236220419 4.5102810375396984e-17];  % in
smiData.RigidTransform(38).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(38).axis = [0.57735026918962562 -0.57735026918962595 0.57735026918962562];
smiData.RigidTransform(38).ID = 'F[platform rods-6:-:uxcell SA5T ball joint housing-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(39).translation = [0 0 0];  % in
smiData.RigidTransform(39).angle = 0;  % rad
smiData.RigidTransform(39).axis = [0 0 0];
smiData.RigidTransform(39).ID = 'B[platform rods-6:-:uxcell SA5T ball joint housing-12]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(40).translation = [-1.6875389974302379e-14 4.0511811023622091 1.6237011735142914e-15];  % in
smiData.RigidTransform(40).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(40).axis = [-8.6736173798840355e-18 3.6429192995512949e-17 1];
smiData.RigidTransform(40).ID = 'F[platform rods-6:-:uxcell SA5T ball joint housing-12]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(41).translation = [0 0 0];  % in
smiData.RigidTransform(41).angle = 0;  % rad
smiData.RigidTransform(41).axis = [0 0 0];
smiData.RigidTransform(41).ID = 'B[uxcell SA5T ball-1:-:uxcell SA5T ball joint housing-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(42).translation = [1.1330128952584677e-12 6.6591384755869999e-12 -1.1886276198143702e-12];  % in
smiData.RigidTransform(42).angle = 1.6123885137104828;  % rad
smiData.RigidTransform(42).axis = [0.072415280559422451 0.097379038526526296 0.99260936425018143];
smiData.RigidTransform(42).ID = 'F[uxcell SA5T ball-1:-:uxcell SA5T ball joint housing-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(43).translation = [0 0 0];  % in
smiData.RigidTransform(43).angle = 0;  % rad
smiData.RigidTransform(43).axis = [0 0 0];
smiData.RigidTransform(43).ID = 'B[uxcell SA5T ball joint housing-2:-:uxcell SA5T ball-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(44).translation = [-7.2885439000681109e-12 -2.5081908657012529e-12 -9.1632656185038739e-13];  % in
smiData.RigidTransform(44).angle = 1.3814939083505857;  % rad
smiData.RigidTransform(44).axis = [-0.1047762664668833 0.09159958830833477 0.99026837241578325];
smiData.RigidTransform(44).ID = 'F[uxcell SA5T ball joint housing-2:-:uxcell SA5T ball-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(45).translation = [1.0000000000000697 0.12499999999999935 -5.8999999999999844];  % in
smiData.RigidTransform(45).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(45).axis = [1 0 0];
smiData.RigidTransform(45).ID = 'B[upper platform-1:-:uxcell SA5T ball-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(46).translation = [7.177591854201637e-14 3.6172453921068382e-14 0.15748031496064291];  % in
smiData.RigidTransform(46).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(46).axis = [-1 2.5618861521731052e-32 -2.3107399253640647e-16];
smiData.RigidTransform(46).ID = 'F[upper platform-1:-:uxcell SA5T ball-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(47).translation = [0 0 0];  % in
smiData.RigidTransform(47).angle = 0;  % rad
smiData.RigidTransform(47).axis = [0 0 0];
smiData.RigidTransform(47).ID = 'B[uxcell SA5T ball-3:-:uxcell SA5T ball joint housing-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(48).translation = [1.9782300436866008e-15 -3.1523797000660257e-14 8.2634815141870564e-15];  % in
smiData.RigidTransform(48).angle = 3.0350405917595316;  % rad
smiData.RigidTransform(48).axis = [0.083603671516520414 0.018945353809285848 0.99631897486598076];
smiData.RigidTransform(48).ID = 'F[uxcell SA5T ball-3:-:uxcell SA5T ball joint housing-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(49).translation = [0 0 0];  % in
smiData.RigidTransform(49).angle = 0;  % rad
smiData.RigidTransform(49).axis = [0 0 0];
smiData.RigidTransform(49).ID = 'B[uxcell SA5T ball joint housing-4:-:uxcell SA5T ball-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(50).translation = [-1.917613680475032e-14 6.5982043061792514e-15 -1.3728473344610904e-14];  % in
smiData.RigidTransform(50).angle = 0.25202530429449405;  % rad
smiData.RigidTransform(50).axis = [-0.061205920700315046 0.6776330562224292 -0.73284874045458837];
smiData.RigidTransform(50).ID = 'F[uxcell SA5T ball joint housing-4:-:uxcell SA5T ball-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(51).translation = [-0.99999999999993061 0.12499999999999935 -5.9000000000000075];  % in
smiData.RigidTransform(51).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(51).axis = [1 0 0];
smiData.RigidTransform(51).ID = 'B[upper platform-1:-:uxcell SA5T ball-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(52).translation = [6.0118576783452227e-14 5.3713977710145855e-14 0.15748031496062037];  % in
smiData.RigidTransform(52).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(52).axis = [-1 2.796686281253294e-32 -2.5351894853685251e-16];
smiData.RigidTransform(52).ID = 'F[upper platform-1:-:uxcell SA5T ball-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(53).translation = [0 0 0];  % in
smiData.RigidTransform(53).angle = 0;  % rad
smiData.RigidTransform(53).axis = [0 0 0];
smiData.RigidTransform(53).ID = 'B[uxcell SA5T ball-5:-:uxcell SA5T ball joint housing-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(54).translation = [2.5633433153035996e-12 -4.572767408596148e-12 -3.081430824911359e-12];  % in
smiData.RigidTransform(54).angle = 1.5612330966448231;  % rad
smiData.RigidTransform(54).axis = [0.021589331756674445 0.050697617432629807 0.99848067199167889];
smiData.RigidTransform(54).ID = 'F[uxcell SA5T ball-5:-:uxcell SA5T ball joint housing-5]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(55).translation = [0 0 0];  % in
smiData.RigidTransform(55).angle = 0;  % rad
smiData.RigidTransform(55).axis = [0 0 0];
smiData.RigidTransform(55).ID = 'B[uxcell SA5T ball joint housing-6:-:uxcell SA5T ball-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(56).translation = [-3.4198878747813376e-14 7.3447639813455223e-14 6.3905983293468702e-14];  % in
smiData.RigidTransform(56).angle = 1.3681685640711894;  % rad
smiData.RigidTransform(56).axis = [-0.06259061609699107 0.031395083410436161 0.99754536915082237];
smiData.RigidTransform(56).ID = 'F[uxcell SA5T ball joint housing-6:-:uxcell SA5T ball-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(57).translation = [5.6095498823281797 0.12500000000000044 2.0839745962155733];  % in
smiData.RigidTransform(57).angle = 1.8234765819369747;  % rad
smiData.RigidTransform(57).axis = [0.44721359549995743 0.44721359549995743 0.77459666924148385];
smiData.RigidTransform(57).ID = 'B[upper platform-1:-:uxcell SA5T ball-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(58).translation = [4.4143183032530064e-14 2.2638791882800824e-14 -0.1574803149606267];  % in
smiData.RigidTransform(58).angle = 4.2822911509329796e-16;  % rad
smiData.RigidTransform(58).axis = [-0.39049914785940804 -0.92060328889325405 7.6973070005789732e-17];
smiData.RigidTransform(58).ID = 'F[upper platform-1:-:uxcell SA5T ball-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(59).translation = [0 0 0];  % in
smiData.RigidTransform(59).angle = 0;  % rad
smiData.RigidTransform(59).axis = [0 0 0];
smiData.RigidTransform(59).ID = 'B[uxcell SA5T ball-7:-:uxcell SA5T ball joint housing-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(60).translation = [-5.5058510176961577e-15 -1.1940757773286751e-14 -1.7519115392873539e-15];  % in
smiData.RigidTransform(60).angle = 1.7551905145715367;  % rad
smiData.RigidTransform(60).axis = [-0.079858911914993336 -0.097898300179830672 0.99198713550612794];
smiData.RigidTransform(60).ID = 'F[uxcell SA5T ball-7:-:uxcell SA5T ball joint housing-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(61).translation = [0 0 0];  % in
smiData.RigidTransform(61).angle = 0;  % rad
smiData.RigidTransform(61).axis = [0 0 0];
smiData.RigidTransform(61).ID = 'B[uxcell SA5T ball joint housing-8:-:uxcell SA5T ball-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(62).translation = [3.4296195261551282e-14 -8.6957865074060851e-14 7.5308923688431334e-14];  % in
smiData.RigidTransform(62).angle = 1.2765836062349931;  % rad
smiData.RigidTransform(62).axis = [0.1116387629426996 -0.10933903168544841 0.98771542600017759];
smiData.RigidTransform(62).ID = 'F[uxcell SA5T ball joint housing-8:-:uxcell SA5T ball-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(63).translation = [-5.6095498823282002 0.12499999999999935 2.0839745962155201];  % in
smiData.RigidTransform(63).angle = 1.823476581936978;  % rad
smiData.RigidTransform(63).axis = [-0.44721359549995998 -0.44721359549995998 0.77459666924148107];
smiData.RigidTransform(63).ID = 'B[upper platform-1:-:uxcell SA5T ball-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(64).translation = [-2.5451862839531714e-14 -7.9103390504542404e-15 0.15748031496061912];  % in
smiData.RigidTransform(64).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(64).axis = [1 -3.8652436973489976e-33 -1.954751291547193e-17];
smiData.RigidTransform(64).ID = 'F[upper platform-1:-:uxcell SA5T ball-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(65).translation = [0 0 0];  % in
smiData.RigidTransform(65).angle = 0;  % rad
smiData.RigidTransform(65).axis = [0 0 0];
smiData.RigidTransform(65).ID = 'B[uxcell SA5T ball-9:-:uxcell SA5T ball joint housing-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(66).translation = [7.4092452244233596e-12 -3.2565179901925678e-12 -2.2429968694244572e-12];  % in
smiData.RigidTransform(66).angle = 3.0770150258164963;  % rad
smiData.RigidTransform(66).axis = [-0.10152534363324353 -0.021418283684822022 0.99460236362284427];
smiData.RigidTransform(66).ID = 'F[uxcell SA5T ball-9:-:uxcell SA5T ball joint housing-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(67).translation = [-4.6095498823282126 0.12499999999999935 3.816025403784403];  % in
smiData.RigidTransform(67).angle = 1.823476581936978;  % rad
smiData.RigidTransform(67).axis = [-0.44721359549995998 -0.44721359549995998 0.77459666924148107];
smiData.RigidTransform(67).ID = 'B[upper platform-1:-:uxcell SA5T ball-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(68).translation = [-2.3314683517128287e-14 -1.742356259271105e-14 0.15748031496060161];  % in
smiData.RigidTransform(68).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(68).axis = [1 4.0654464412474545e-32 2.3487389361793487e-16];
smiData.RigidTransform(68).ID = 'F[upper platform-1:-:uxcell SA5T ball-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(69).translation = [0 0 0];  % in
smiData.RigidTransform(69).angle = 0;  % rad
smiData.RigidTransform(69).axis = [0 0 0];
smiData.RigidTransform(69).ID = 'B[uxcell SA5T ball joint housing-10:-:uxcell SA5T ball-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(70).translation = [2.267087477145337e-14 -9.0026476426748405e-14 7.1440168258669451e-14];  % in
smiData.RigidTransform(70).angle = 0.31898334247366467;  % rad
smiData.RigidTransform(70).axis = [0.0087699744520570461 -0.66412680744373465 -0.74756850601312985];
smiData.RigidTransform(70).ID = 'F[uxcell SA5T ball joint housing-10:-:uxcell SA5T ball-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(71).translation = [0 0 0];  % in
smiData.RigidTransform(71).angle = 0;  % rad
smiData.RigidTransform(71).axis = [0 0 0];
smiData.RigidTransform(71).ID = 'B[uxcell SA5T ball-11:-:uxcell SA5T ball joint housing-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(72).translation = [-1.2030895951647457e-12 1.6654110676622539e-12 -5.3586245119696428e-13];  % in
smiData.RigidTransform(72).angle = 3.0051282479729524;  % rad
smiData.RigidTransform(72).axis = [-0.021384301037657059 0.013100727524134806 0.99968549184604516];
smiData.RigidTransform(72).ID = 'F[uxcell SA5T ball-11:-:uxcell SA5T ball joint housing-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(73).translation = [4.6095498823281753 0.12500000000000044 3.8160254037844479];  % in
smiData.RigidTransform(73).angle = 1.8234765819369747;  % rad
smiData.RigidTransform(73).axis = [0.44721359549995743 0.44721359549995743 0.77459666924148385];
smiData.RigidTransform(73).ID = 'B[upper platform-1:-:uxcell SA5T ball-12]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(74).translation = [5.0194603248149283e-14 7.1503133275419017e-15 -0.15748031496062873];  % in
smiData.RigidTransform(74).angle = 1.0336752580713411e-15;  % rad
smiData.RigidTransform(74).axis = [-0.45205800683012581 -0.89198854166450681 2.0840472775326538e-16];
smiData.RigidTransform(74).ID = 'F[upper platform-1:-:uxcell SA5T ball-12]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(75).translation = [0 0 0];  % in
smiData.RigidTransform(75).angle = 0;  % rad
smiData.RigidTransform(75).axis = [0 0 0];
smiData.RigidTransform(75).ID = 'B[uxcell SA5T ball joint housing-12:-:uxcell SA5T ball-12]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(76).translation = [2.2311420648269048e-12 2.307111167310805e-13 7.9385696775900118e-16];  % in
smiData.RigidTransform(76).angle = 0.78211052787035196;  % rad
smiData.RigidTransform(76).axis = [-0.070479631376910323 -0.037702061409358632 -0.99680046956572999];
smiData.RigidTransform(76).ID = 'F[uxcell SA5T ball joint housing-12:-:uxcell SA5T ball-12]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(77).translation = [-0.39370078740157516 0 1.8110236220472447];  % in
smiData.RigidTransform(77).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(77).axis = [1 0 0];
smiData.RigidTransform(77).ID = 'B[Servo Motor-1:-:servo arm-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(78).translation = [0 0 0];  % in
smiData.RigidTransform(78).angle = 7.2846268562402528e-22;  % rad
smiData.RigidTransform(78).axis = [-0.78878695505442331 0.61466668978884098 -1.7659431274246866e-22];
smiData.RigidTransform(78).ID = 'F[Servo Motor-1:-:servo arm-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(79).translation = [-0.39370078740157544 0 1.8110236220472442];  % in
smiData.RigidTransform(79).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(79).axis = [1 0 0];
smiData.RigidTransform(79).ID = 'B[Servo Motor-7:-:servo arm-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(80).translation = [2.0661198618646761e-16 -2.3647219776690327e-16 5.7692399435477187e-32];  % in
smiData.RigidTransform(80).angle = 2.3124505832733431e-16;  % rad
smiData.RigidTransform(80).axis = [-0.83175137016720291 0.55514832092421962 -5.3388168269201555e-17];
smiData.RigidTransform(80).ID = 'F[Servo Motor-7:-:servo arm-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(81).translation = [-0.39370078740157488 0 1.8110236220472447];  % in
smiData.RigidTransform(81).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(81).axis = [1 0 0];
smiData.RigidTransform(81).ID = 'B[Servo Motor-8:-:servo arm-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(82).translation = [-4.163336342344337e-16 -7.9797279894933126e-17 0.12500000000000083];  % in
smiData.RigidTransform(82).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(82).axis = [1 7.332428450744836e-32 4.2380016566744306e-16];
smiData.RigidTransform(82).ID = 'F[Servo Motor-8:-:servo arm-6]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(83).translation = [-0.39370078740157516 0 1.8110236220472442];  % in
smiData.RigidTransform(83).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(83).axis = [1 0 0];
smiData.RigidTransform(83).ID = 'B[Servo Motor-9:-:servo arm-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(84).translation = [9.0205620750793969e-16 8.569533971325427e-16 0.12500000000000155];  % in
smiData.RigidTransform(84).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(84).axis = [1 2.8391832608791176e-32 3.6412527125095701e-16];
smiData.RigidTransform(84).ID = 'F[Servo Motor-9:-:servo arm-4]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(85).translation = [0 0 0];  % in
smiData.RigidTransform(85).angle = 0;  % rad
smiData.RigidTransform(85).axis = [0 0 0];
smiData.RigidTransform(85).ID = 'RootGround[bottom platform-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(86).translation = [1.9958383227653027 1.4056105401714116 4.0328446345316493];  % in
smiData.RigidTransform(86).angle = 1.573785667655806;  % rad
smiData.RigidTransform(86).axis = [8.6538107241077453e-17 3.6945575597144692e-16 -1];
smiData.RigidTransform(86).ID = 'RootGround[Servo Motor-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(87).translation = [1.9999999999999993 0.125 4.0178599004805493];  % in
smiData.RigidTransform(87).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(87).axis = [-0 -1 -0];
smiData.RigidTransform(87).ID = 'RootGround[servo mount-7]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(88).translation = [-2.0012204724409455 1.4048999999999998 4.0328446345316493];  % in
smiData.RigidTransform(88).angle = 1.5707963267948968;  % rad
smiData.RigidTransform(88).axis = [-2.494450403014839e-16 2.494450403014839e-16 -1];
smiData.RigidTransform(88).ID = 'RootGround[Servo Motor-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(89).translation = [-2.0000000000000009 0.125 4.0178599004805493];  % in
smiData.RigidTransform(89).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(89).axis = [-0 -1 -0];
smiData.RigidTransform(89).ID = 'RootGround[servo mount-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(90).translation = [-4.4919290260103448 1.4049031876736648 -0.28543997202001548];  % in
smiData.RigidTransform(90).angle = 2.418863506083726;  % rad
smiData.RigidTransform(90).axis = [0.65465745667512276 -0.65464862271772517 -0.37796665883837616];
smiData.RigidTransform(90).ID = 'RootGround[Servo Motor-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(91).translation = [4.4795687426629751 0.125 -0.27687914267135499];  % in
smiData.RigidTransform(91).angle = 1.0471975511966067;  % rad
smiData.RigidTransform(91).axis = [0 -1 0];
smiData.RigidTransform(91).ID = 'RootGround[servo mount-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(92).translation = [2.4795687426630071 0.125 -3.7409807578091283];  % in
smiData.RigidTransform(92).angle = 1.0471975511966067;  % rad
smiData.RigidTransform(92).axis = [0 -1 0];
smiData.RigidTransform(92).ID = 'RootGround[servo mount-11]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(93).translation = [-2.4795687426629547 0.125 -3.7409807578091643];  % in
smiData.RigidTransform(93).angle = 1.0471975511965936;  % rad
smiData.RigidTransform(93).axis = [0 1 0];
smiData.RigidTransform(93).ID = 'RootGround[servo mount-8]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(94).translation = [-4.4795687426629716 0.125 -0.27687914267141839];  % in
smiData.RigidTransform(94).angle = 1.0471975511965936;  % rad
smiData.RigidTransform(94).axis = [0 1 0];
smiData.RigidTransform(94).ID = 'RootGround[servo mount-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(95).translation = [2.4931579036479117 1.4048993878105365 -3.7474131086532383];  % in
smiData.RigidTransform(95).angle = 2.4188570669020728;  % rad
smiData.RigidTransform(95).axis = [-0.65465267684954553 0.65465499585020348 -0.37796389920479756];
smiData.RigidTransform(95).ID = 'RootGround[Servo Motor-9]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(96).translation = [-2.491939038067382 1.4049016181840686 -3.7495242457662612];  % in
smiData.RigidTransform(96).angle = 2.4188609949919071;  % rad
smiData.RigidTransform(96).axis = [0.65465559269453033 -0.65465110805046289 -0.37796558266867952];
smiData.RigidTransform(96).ID = 'RootGround[Servo Motor-10]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(97).translation = [4.4931527413548151 1.4049016286529898 -0.28332043486933878];  % in
smiData.RigidTransform(97).angle = 2.418861015659282;  % rad
smiData.RigidTransform(97).axis = [-0.65465560803596146 0.65465108759507762 -0.37796559152606435];
smiData.RigidTransform(97).ID = 'RootGround[Servo Motor-11]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(8).mass = 0.0;
smiData.Solid(8).CoM = [0.0 0.0 0.0];
smiData.Solid(8).MoI = [0.0 0.0 0.0];
smiData.Solid(8).PoI = [0.0 0.0 0.0];
smiData.Solid(8).color = [0.0 0.0 0.0];
smiData.Solid(8).opacity = 0.0;
smiData.Solid(8).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.35333758815542687;  % kg
smiData.Solid(1).CoM = [0 0.062500000000000014 -8.6549013279760715e-05];  % in
smiData.Solid(1).MoI = [3.8799137375997526 7.7640733398392348 3.8850797522086369];  % kg*in^2
smiData.Solid(1).PoI = [0 0 0];  % kg*in^2
smiData.Solid(1).color = [0.29803921568627451 0.29803921568627451 0.29803921568627451];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = 'bottom platform*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.031284738361272747;  % kg
smiData.Solid(2).CoM = [-0.11056138312339056 1.7497038570459446e-07 19.491986912177726];  % mm
smiData.Solid(2).MoI = [4.8980350469077836 8.2183687252907944 5.3758485678065284];  % kg*mm^2
smiData.Solid(2).PoI = [-6.8030100189432764e-08 0.069702074727304456 8.0272040458428451e-08];  % kg*mm^2
smiData.Solid(2).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = 'Servo Motor*:*Varsayilan';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.002193721609124997;  % kg
smiData.Solid(3).CoM = [0.875301388355884 0 0.062500000000000014];  % in
smiData.Solid(3).MoI = [5.2167188284836131e-05 0.00095870165116023311 0.0010051560227546396];  % kg*in^2
smiData.Solid(3).PoI = [0 0 0];  % kg*in^2
smiData.Solid(3).color = [0.49803921568627452 0.49803921568627452 0.49803921568627452];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = 'servo arm*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.40241116696294255 + payload_mass;  % kg
smiData.Solid(4).CoM = [0 0.125 0];  % in
smiData.Solid(4).MoI = [2.8067395658151351 5.6092781310793498 2.8067395658151342];  % kg*in^2
smiData.Solid(4).PoI = [0 0 0];  % kg*in^2
smiData.Solid(4).color = [1 1 1];
smiData.Solid(4).opacity = 0.30000000000000004;
smiData.Solid(4).ID = 'upper platform*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 0.030209527528994241;  % kg
smiData.Solid(5).CoM = [0 0.76661545481990123 -0.87088227075888358];  % in
smiData.Solid(5).MoI = [0.026156715532409915 0.010424412061758951 0.029807956692273988];  % kg*in^2
smiData.Solid(5).PoI = [0.0048198255287185384 0 0];  % kg*in^2
smiData.Solid(5).color = [0.6470588235294118 0.61960784313725492 0.58823529411764708];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = 'servo mount*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(6).mass = 0.0040640050052996191;  % kg
smiData.Solid(6).CoM = [0.00019738428365432872 6.5934821527072556 -0.00048994520531649881];  % mm
smiData.Solid(6).MoI = [0.45976007606110647 0.084106909641847347 0.5228991083473068];  % kg*mm^2
smiData.Solid(6).PoI = [4.6116030133775594e-07 3.9471601084618809e-07 -2.5482898606714583e-05];  % kg*mm^2
smiData.Solid(6).color = [0.89803921568627454 0.91764705882352937 0.92941176470588238];
smiData.Solid(6).opacity = 1;
smiData.Solid(6).ID = 'uxcell SA5T ball joint housing*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(7).mass = 0.00047048028368165467;  % kg
smiData.Solid(7).CoM = [0 0 0];  % mm
smiData.Solid(7).MoI = [0.0057521052234599402 0.0057528782868261005 0.0076310140806627163];  % kg*mm^2
smiData.Solid(7).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(7).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(7).opacity = 1;
smiData.Solid(7).ID = 'uxcell SA5T ball*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(8).mass = 0.0073396627674277718;  % kg
smiData.Solid(8).CoM = [0 1.7495864528186142 0];  % in
smiData.Solid(8).MoI = [0.0063445870863749025 8.1254980164902521e-05 0.0063445870863749025];  % kg*in^2
smiData.Solid(8).PoI = [0 0 0];  % kg*in^2
smiData.Solid(8).color = [0.89803921568627454 0.91764705882352937 0.92941176470588238];
smiData.Solid(8).opacity = 1;
smiData.Solid(8).ID = 'platform rods*:*Default';


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(18).Rz.Pos = 0.0;
smiData.RevoluteJoint(18).ID = '';

smiData.RevoluteJoint(1).Rz.Pos = -58.358576157814277;  % deg
smiData.RevoluteJoint(1).ID = '[servo arm-1:-:uxcell SA5T ball-11]';

smiData.RevoluteJoint(2).Rz.Pos = 136.52777893110701;  % deg
smiData.RevoluteJoint(2).ID = '[servo arm-2:-:uxcell SA5T ball-5]';

smiData.RevoluteJoint(3).Rz.Pos = 142.69120621835208;  % deg
smiData.RevoluteJoint(3).ID = '[servo arm-3:-:uxcell SA5T ball-1]';

smiData.RevoluteJoint(4).Rz.Pos = 79.741207836427776;  % deg
smiData.RevoluteJoint(4).ID = '[Servo Motor-11:-:servo arm-3]';

smiData.RevoluteJoint(5).Rz.Pos = -58.434126767903386;  % deg
smiData.RevoluteJoint(5).ID = '[servo arm-4:-:uxcell SA5T ball-3]';

smiData.RevoluteJoint(6).Rz.Pos = 151.30912371974222;  % deg
smiData.RevoluteJoint(6).ID = '[servo arm-5:-:uxcell SA5T ball-7]';

smiData.RevoluteJoint(7).Rz.Pos = 81.633007984265731;  % deg
smiData.RevoluteJoint(7).ID = '[Servo Motor-10:-:servo arm-5]';

smiData.RevoluteJoint(8).Rz.Pos = -58.126310459392577;  % deg
smiData.RevoluteJoint(8).ID = '[servo arm-6:-:uxcell SA5T ball-9]';

smiData.RevoluteJoint(9).Rz.Pos = -141.17101394446456;  % deg
smiData.RevoluteJoint(9).ID = '[upper platform-1:-:uxcell SA5T ball-2]';

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.RevoluteJoint(10).Rz.Pos = -150.29052101367921;  % deg
smiData.RevoluteJoint(10).ID = '[upper platform-1:-:uxcell SA5T ball-4]';

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.RevoluteJoint(11).Rz.Pos = 54.799685824754711;  % deg
smiData.RevoluteJoint(11).ID = '[upper platform-1:-:uxcell SA5T ball-6]';

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.RevoluteJoint(12).Rz.Pos = -60.841738128439587;  % deg
smiData.RevoluteJoint(12).ID = '[upper platform-1:-:uxcell SA5T ball-8]';

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.RevoluteJoint(13).Rz.Pos = -67.32418590678526;  % deg
smiData.RevoluteJoint(13).ID = '[upper platform-1:-:uxcell SA5T ball-10]';

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.RevoluteJoint(14).Rz.Pos = 97.291925826701004;  % deg
smiData.RevoluteJoint(14).ID = '[upper platform-1:-:uxcell SA5T ball-12]';

smiData.RevoluteJoint(15).Rz.Pos = 76.61308816363362;  % deg
smiData.RevoluteJoint(15).ID = '[Servo Motor-1:-:servo arm-1]';

smiData.RevoluteJoint(16).Rz.Pos = -86.315844284961827;  % deg
smiData.RevoluteJoint(16).ID = '[Servo Motor-7:-:servo arm-2]';

smiData.RevoluteJoint(17).Rz.Pos = -72.487907693186443;  % deg
smiData.RevoluteJoint(17).ID = '[Servo Motor-8:-:servo arm-6]';

smiData.RevoluteJoint(18).Rz.Pos = -77.303326523826868;  % deg
smiData.RevoluteJoint(18).ID = '[Servo Motor-9:-:servo arm-4]';

