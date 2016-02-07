function [] = GUI_1()
% Demonstrate how to delete an entry from a uicontrol string.  
% Creates a listbox with some strings in it and a pushbutton.  When user  
% pushes the pushbutton, the selected entry in the listbox will be deleted.
%
% Suggested exercise:  Modify the GUI so when the user deletes a certain
% string, the 'value' property is set to the previous string instead of to
% the first string.
%
%
% Author:  Matt Fig
% Date:  7/15/2009

S.fh = figure('units','pixels',...
              'position',[500 500 200 260],...
              'menubar','none',...
              'name','GUI_1',...
              'numbertitle','off',...
              'resize','off');

S.ls = uicontrol('style','list',...
                 'unit','pix',...
                 'position',[10 60 180 180],...
                 'min',0,'max',2,...
                 'fontsize',14,...
                 'string',{'one';'two';'three';'four'});    
             
S.pb = uicontrol('style','push',...
                 'units','pix',...
                 'position',[10 10 180 40],...
                 'fontsize',14,...
                 'string','Delete String',...
                 'callback',{@pb_call,S});

            
            
function [] = pb_call(varargin)
% Callback for pushbutton, deletes one line from listbox.
S = varargin{3};  % Get the structure.
L = get(S.ls,{'string','value'});  % Get the users choice.

% We need to make sure we don't try to assign an empty string.
if ~isempty(L{1})
    L{1}(L{2}(:)) = [];  % Delete the selected strings.
    set(S.ls,'string',L{1},'val',1) % Set the new string.
end