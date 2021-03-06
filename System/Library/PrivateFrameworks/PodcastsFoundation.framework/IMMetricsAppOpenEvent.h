/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsFoundation/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(id)initWithReason:(long long)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
@end

