/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITextRange, NSString;

@interface UITextReplacementGenerator : NSObject {

	UITextRange* _replacementRange;
	NSString* _stringToReplace;

}

@property (nonatomic,retain) UITextRange * replacementRange;              //@synthesize replacementRange=_replacementRange - In the implementation block
@property (nonatomic,copy) NSString * stringToReplace;                    //@synthesize stringToReplace=_stringToReplace - In the implementation block
-(UITextRange *)replacementRange;
-(id)replacements;
-(void)setReplacementRange:(UITextRange *)arg1 ;
-(void)setStringToReplace:(NSString *)arg1 ;
-(NSString *)stringToReplace;
-(BOOL)isStringToReplaceMisspelled;
-(BOOL)shouldAllowString:(id)arg1 intoReplacements:(id)arg2 ;
-(id)replacementWithText:(id)arg1 ;
-(void)addPlaceholderForEmptyReplacements:(id)arg1 ;
@end

