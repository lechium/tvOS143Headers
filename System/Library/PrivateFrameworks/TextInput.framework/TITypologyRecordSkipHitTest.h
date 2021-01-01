/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardTouchEvent, TIKeyboardState, TIKeyboardLayout;

@interface TITypologyRecordSkipHitTest : TITypologyRecord {

	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardState* _keyboardState;
	TIKeyboardLayout* _keyLayout;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;              //@synthesize touchEvent=_touchEvent - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                   //@synthesize keyLayout=_keyLayout - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardTouchEvent *)touchEvent;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

