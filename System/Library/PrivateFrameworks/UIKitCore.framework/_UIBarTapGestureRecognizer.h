/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {

	BOOL _failWhenTappingInBars;
	long long _tapCategory;

}

@property (nonatomic,readonly) long long tapCategory;                 //@synthesize tapCategory=_tapCategory - In the implementation block
@property (assign,nonatomic) BOOL failWhenTappingInBars;              //@synthesize failWhenTappingInBars=_failWhenTappingInBars - In the implementation block
-(id)description;
-(void)setDelegate:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(long long)_categoryForTapLocation:(CGPoint)arg1 ;
-(long long)tapCategory;
-(BOOL)failWhenTappingInBars;
-(void)setFailWhenTappingInBars:(BOOL)arg1 ;
@end

