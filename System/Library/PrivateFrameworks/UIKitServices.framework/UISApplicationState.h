/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {

	NSString* _bundleIdentifier;
	UISApplicationStateClient* _client;

}

@property (assign,setter=_setUsesBackgroundNetwork:,nonatomic) BOOL _usesBackgroundNetwork; 
@property (assign,setter=_setNextWakeDate:,nonatomic) NSDate * _nextWakeDate; 
@property (nonatomic,copy) id badgeValue; 
-(id)init;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1 ;
-(id)initForCurrentApplication;
-(void)_setUsesBackgroundNetwork:(BOOL)arg1 ;
-(BOOL)_usesBackgroundNetwork;
-(void)_setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)_setNextWakeDate:(id)arg1 ;
-(NSDate *)_nextWakeDate;
@end

