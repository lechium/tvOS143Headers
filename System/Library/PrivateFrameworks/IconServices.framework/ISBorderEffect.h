/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ISEffect.h>

@class ISColor, NSString;

@interface ISBorderEffect : NSObject <ISEffect> {

	ISColor* _color;
	double _lineWidth;

}

@property (retain) ISColor * color;                                 //@synthesize color=_color - In the implementation block
@property (assign) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ISColor *)color;
-(void)setColor:(ISColor *)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
-(id)initWithLineWidth:(double)arg1 color:(id)arg2 ;
@end

