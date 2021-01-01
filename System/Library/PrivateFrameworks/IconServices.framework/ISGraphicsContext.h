/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IconServices/IconServices-Structs.h>
@class ISImage, NSData, ISColor;

@interface ISGraphicsContext : NSObject {

	CGContextRef _cgContext;
	unsigned long long _preset;

}

@property (nonatomic,readonly) unsigned long long preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,readonly) CGContextRef cgContext;                 //@synthesize cgContext=_cgContext - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) ISImage * image; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,retain) ISColor * fillColor; 
@property (nonatomic,retain) ISColor * strokeColor; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) CGAffineTransform transform; 
+(id)bitmapContextWithSize:(CGSize)arg1 scale:(double)arg2 preset:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSData *)data;
-(CGAffineTransform)transform;
-(double)scale;
-(void)clear;
-(CGRect)bounds;
-(ISImage *)image;
-(ISColor *)fillColor;
-(void)setFillColor:(ISColor *)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(ISColor *)strokeColor;
-(void)setStrokeColor:(ISColor *)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(unsigned long long)preset;
-(void)fillRect:(CGRect)arg1 ;
-(CGContextRef)cgContext;
-(void)drawCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)pushState;
-(void)clipToMaskCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)popState;
-(id)initWithCGContext:(CGContextRef)arg1 preset:(unsigned long long)arg2 ;
-(void)strokeRect:(CGRect)arg1 ;
-(void)strokePath:(CGPathRef)arg1 ;
-(void)fillPath:(CGPathRef)arg1 ;
@end

