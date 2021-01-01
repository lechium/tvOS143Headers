/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BRLTBrailleStateManagerDelegate <NSObject>
@required
-(void)brailleDisplayInsertedCharacter:(id)arg1;
-(void)brailleDisplayDeletedCharacter:(id)arg1;
-(void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange)arg2;
-(void)replaceScriptStringRange:(NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
-(void)scriptSelectionDidChange:(NSRange)arg1;
-(void)didInsertScriptString:(id)arg1;

@end

