/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TIKeyboardTouchEvent;

@interface TIKBSessionTouchInfo : NSObject {

	TIKeyboardTouchEvent* _touch;
	unsigned long long _layoutId;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touch;              //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) unsigned long long layoutId;               //@synthesize layoutId=_layoutId - In the implementation block
-(TIKeyboardTouchEvent *)touch;
-(void)setTouch:(TIKeyboardTouchEvent *)arg1 ;
-(unsigned long long)layoutId;
-(void)setLayoutId:(unsigned long long)arg1 ;
@end

