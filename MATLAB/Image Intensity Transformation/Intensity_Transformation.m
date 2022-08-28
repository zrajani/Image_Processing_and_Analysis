
% Author: Zain Rajani

% Program Name: Image Intensity Transformation (Monochrome Image)
% Gamma Correction (a.k.a)

%% Initialize
clear all;
close all;
clc;

%imshow('Lena.png');

%% Reading Image
f=imread('Jason_membrane.jpg');  % Can be replaced by any image by your choice (any type of Image)

%% Complement of an Image

f_comp=imcomplement(f);


%% Intensity Transformation functions

g1=imadjust(f,[0 1],[1 0]); % Getting Negative Image Alternative suggestion (Negative Image)
g2=imadjust(f,[0.5 0.75],[0.25 1],2);

%% Display Images 

% Diffrent Image operations are shown using the subplot command 
figure;
subplot (3,2,1)
imshow(f);
title('Input Image')
subplot (3,2,2)
imshow(f_comp)
title('Negative Image')
subplot(3,2,3)
imshow(g1)
title('Negative Image')
subplot(3,2,4)
imshow(g2)
title('Adjusting Intensities with \gamma=2')

g3=imadjust(f,[],[],0.25);
subplot(3,2,5)
imshow(g3);
title('Adjusting Intensities with \gamma=0.25')

g=imadjust(f,stretchlim(f),[ ]);
subplot(3,2,6)
imshow(g)
title('Image Intensities with stretchlim() \gamma=0')
