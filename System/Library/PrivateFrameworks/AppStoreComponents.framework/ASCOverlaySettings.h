/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface ASCOverlaySettings : NSObject

@property (nonatomic,copy) NSNumber * rateLimitRequestsPerSecond; 
@property (nonatomic,copy) NSNumber * rateLimitTimeWindow; 
@property (nonatomic,copy) NSNumber * overlaysLoadTimeout; 
+(id)sharedSettings;
-(id)_init;
-(NSNumber *)overlaysLoadTimeout;
-(void)setOverlaysLoadTimeout:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitRequestsPerSecond;
-(void)setRateLimitRequestsPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitTimeWindow;
-(void)setRateLimitTimeWindow:(NSNumber *)arg1 ;
@end

