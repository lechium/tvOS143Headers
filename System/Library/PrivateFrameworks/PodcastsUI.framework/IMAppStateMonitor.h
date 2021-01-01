/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIApplication;

@interface IMAppStateMonitor : NSObject {

	UIApplication* _app;
	long long _applicationState;
	double _backgroundTimeRemaining;

}

@property (nonatomic,retain) UIApplication * app;                         //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) long long applicationState;                  //@synthesize applicationState=_applicationState - In the implementation block
@property (assign,nonatomic) double backgroundTimeRemaining;              //@synthesize backgroundTimeRemaining=_backgroundTimeRemaining - In the implementation block
+(id)sharedInstance;
-(id)init;
-(double)backgroundTimeRemaining;
-(long long)applicationState;
-(void)applicationDidEnterBackground;
-(void)setApplicationState:(long long)arg1 ;
-(UIApplication *)app;
-(void)setApp:(UIApplication *)arg1 ;
-(void)applicationWillResignActive;
-(void)applicationDidBecomeActive;
-(void)applicationDidFinishLaunching;
-(void)setBackgroundTimeRemaining:(double)arg1 ;
@end

