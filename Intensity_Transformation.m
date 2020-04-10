
% Initialize
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