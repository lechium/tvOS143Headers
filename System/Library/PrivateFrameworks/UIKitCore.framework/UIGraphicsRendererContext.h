/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject {

	CGContextRef _backingContext;
	UIGraphicsRendererFormat* _format;
	BOOL ___createsImages;

}

@property (assign,nonatomic) BOOL __createsImages;                             //@synthesize __createsImages=___createsImages - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext; 
@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
-(void)dealloc;
-(UIGraphicsRendererFormat *)format;
-(CGContextRef)CGContext;
-(void)fillRect:(CGRect)arg1 ;
-(void)fillRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(void)strokeRect:(CGRect)arg1 ;
-(void)clipToRect:(CGRect)arg1 ;
-(BOOL)__createsImages;
-(void)strokeRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(id)initWithCGContext:(CGContextRef)arg1 format:(id)arg2 ;
-(void)set__createsImages:(BOOL)arg1 ;
@end

