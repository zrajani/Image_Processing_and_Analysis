
% Author: Zain Rajani

% Program Name: Image Intensity Transformation (Monochrome Image)

%% Initialize
clear all;
close all;
clc;

%% Reading Image
f=imread('Jason_membrane.jpg');

%% Complement of an Image

f_comp=imcomplement(f);

%% Intensity Transformation functions

g1=imadjust(f,[0 1],[1 0]);
g2=imadjust(f,[0.5 0.75],[1 0],2);

%% Display Images 

% Diffrent Image operations are shown using the subplot command 
figure;
subplot (2,2,1)
imshow(f);
subplot (2,2,2)
imshow(g1)
subplot(2,2,3)
imshow(f_comp)
subplot(2,2,4)
imshow(g2)
