/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) BOOL additive; 
@property (getter=isCumulative) BOOL cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(BOOL)additive;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)isAdditive;
-(CAValueFunction *)valueFunction;
-(BOOL)isCumulative;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setCumulative:(BOOL)arg1 ;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
-(BOOL)cumulative;
@end

