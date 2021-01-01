/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString;

@interface CADisplayModeCriteria : NSObject {

	CADisplayModeCriteriaPriv* _priv;

}

@property (assign) CGSize resolution; 
@property (assign) double refreshRate; 
@property (copy) NSString * hdrMode; 
-(id)init;
-(void)dealloc;
-(double)refreshRate;
-(NSString *)hdrMode;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(NSString *)arg1 ;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
@end

