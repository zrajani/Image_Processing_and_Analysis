% M- Function Programming 

% Author: Zain Rajani

% Initialise 

clear all;
close all;
clc;


% Function defination in MATLAB is function [outputs] = name(inputs)
% For illustration purpose we shall be creating a function to compute image
% stats 

f=imread('office_1.jpg');

image_details = image_stats(f);

imshow(f)


