#include <stdio.h>

int main(){
printf("\x1b[1m\x1b[4m\x1b[40m\x1b[33mANSI CODE FOR TEXT COLOR AND DECORATIONS\x1b[0m\n");
printf("\n\x1b[2m\x1b[4mTEXT COLORS:\x1b[0m\n");
printf("\x1b[30mBLACK \\x1b[30.\x1b[0m\n");
printf("\x1b[31mRED \\x1b[31.\x1b[0m\n");
printf("\x1b[32mGREEN \\x1b[32.\x1b[0m\n");
printf("\x1b[33mYELLOW \\x1b[33.\x1b[0m\n");
printf("\x1b[34mBLUE \\x1b[34.\x1b[0m\n");
printf("\x1b[35mMAGENTA \\x1b[35.\x1b[0m\n");
printf("\x1b[36mCYNE \\x1b[36.\x1b[0m\n");
printf("\x1b[37mWHITE \\x1b[37.\x1b[0m\n");
printf("\n\x1b[2m\x1b[4mTEXT BACKGROUND COLORS:\x1b[0m\n");
printf("\x1b[40mBG BLACK \\x1b[40.\x1b[0m\n");
printf("\x1b[41mBG RED \\x1b[41.\x1b[0m\n");
printf("\x1b[42mBG GREEN \\x1b[42.\x1b[0m\n");
printf("\x1b[43mBG YELLOW \\x1b[43.\x1b[0m\n");
printf("\x1b[44mBG BLUE \\x1b[44.\x1b[0m\n");
printf("\x1b[45mBG MAGENTA \\x1b[45.\x1b[0m\n");
printf("\x1b[46mBG CYAN \\x1b[46.\x1b[0m\n");
printf("\n\x1b[2m\x1b[4mTEXT DECORATIONS:\x1b[0m\n");
printf("RESET ALL ATTRIBUTES \\x1b[om\n");
printf("\x1b[1mBold or incr intensity \\x1b[1m.\x1b[0m\n");
printf("\x1b[2mFaint or decr intensity \\x1b[2m.\x1b[0m\n");
printf("\x1b[3mITALIC \\x1b[3m.\x1b[0m\n");
printf("\x1b[4mUNDERLINE \\x1b[4m.\x1b[0m\n");
printf("\x1b[5mSLOW BLINK \\x1b[5m.\x1b[0m\n");
printf("\x1b[7mReverse video \x1b[0m");printf("(swap foreground and background colors)\\x1b[7m.\n");
printf("Conceal (hidden text) \\x1b[8m.\x1b[0m");
printf("\x1b[9mCrossed-out \\x1b[9m.\x1b[0m\n");
printf("\x1b[22mNormal (neither bold nor faint) \\x1b[22m.\x1b[0m\n");
printf("\x1b[23mCrossed-out \\x1b[23m.\x1b[0m\n");
printf("\x1b[24mRemove underline \\x1b[24m.\x1b[0m\n");
printf("\x1b[25mRemove blink \\x1b[25m.\x1b[0m\n");
printf("\x1b[27mRemove reverse video \\x1b[27m.\x1b[0m\n");
printf("\x1b[28mRemove conceal \\x1b[28m.\x1b[0m\n");
printf("\x1b[29mRemove crossed-out \\x1b[29m.\x1b[0m\n");
}

/*ANSI CODE FOR TEXT COLOR AND DECORATIONS 
Text Color:
\x1b[30m: Black
\x1b[31m: Red
\x1b[32m: Green
\x1b[33m: Yellow
\x1b[34m: Blue
\x1b[35m: Magenta
\x1b[36m: Cyan
\x1b[37m: White
Background Color:
\x1b[40m: Black
\x1b[41m: Red
\x1b[42m: Green
\x1b[43m: Yellow
\x1b[44m: Blue
\x1b[45m: Magenta
\x1b[46m: Cyan
\x1b[47m: White

Text Decorations:
\x1b[0m: Reset all attributes
\x1b[1m: Bold or increased intensity
\x1b[2m: Faint or decreased intensity
\x1b[3m: Italic
\x1b[4m: Underline
\x1b[5m: Slow blink
\x1b[7m: Reverse video (swap foreground and background colors)
\x1b[8m: Conceal (hidden text)
\x1b[9m: Crossed-out
\x1b[22m: Normal (neither bold nor faint)
\x1b[24m: Remove underline
\x1b[25m: Remove blink
\x1b[27m: Remove reverse video
\x1b[28m: Remove conceal
\x1b[29m: Remove crossed-out */