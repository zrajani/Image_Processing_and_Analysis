
% Author: Zain Rajani

% Program Name: Image Intensity Transformation (Monochrome Image)

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
g2=imadjust(f,[0.5 0.75],[1 0],2);

%% Display Images 

% Diffrent Image operations are shown using the subplot command 
figure;
subplot (2,2,1)
imshow(f);
title('Input Image')
subplot (2,2,2)
imshow(g1)
title('Negative Image')
subplot(2,2,3)
imshow(f_comp)
title('Negative Image')
subplot(2,2,4)
imshow(g2)
title('Adjusting Intensities with parameters')
