/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedImage.h>

@interface CUINamedLayerImage : CUINamedImage {

	CGRect _frame;
	double _opacity;
	int _blendMode;
	BOOL _fixedFrame;

}

@property (assign,nonatomic) CGRect frame;                 //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;              //@synthesize fixedFrame=_fixedFrame - In the implementation block
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setBlendMode:(int)arg1 ;
-(void)setFixedFrame:(BOOL)arg1 ;
@end

