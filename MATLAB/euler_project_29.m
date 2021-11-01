clear;clc;close all
f = "";
for a = 2 : 100
    for b = 2 : 100
        c = sprintf("%d",repelem(factor(a),b));
        if ~ismember(c,f)
            f = [f,c];
        end
    end
end
length(f)-1;
