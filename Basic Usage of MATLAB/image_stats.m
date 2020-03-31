function s = image_stats(f)

s.dm = size(f);
s.AI =mean2(f);
s.AIrows = mean(f,2);
s.AIcols = mean(f,1);

end
