/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextFieldDelegate <NSObject>
@optional
-(BOOL)textFieldShouldBeginEditing:(id)arg1;
-(void)textFieldDidBeginEditing:(id)arg1;
-(BOOL)textFieldShouldEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(void)textFieldDidChangeSelection:(id)arg1;
-(BOOL)textFieldShouldClear:(id)arg1;
-(BOOL)textFieldShouldReturn:(id)arg1;

@end

