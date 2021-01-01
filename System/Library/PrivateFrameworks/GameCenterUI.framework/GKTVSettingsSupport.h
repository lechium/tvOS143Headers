/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKTVSettingsSupport : NSObject

@property (readonly) BOOL shouldShowSandboxSeverSwitch; 
@property (readonly) BOOL isDevelopmentDevice; 
@property (assign,nonatomic) BOOL shouldUseSandboxServer; 
@property (assign,nonatomic) BOOL shouldAllowNearbyMultiplayer; 
@property (assign,getter=isLoggingEnabled,nonatomic) BOOL loggingEnabled; 
+(id)sharedSupport;
-(BOOL)isInternalBuild;
-(BOOL)isLoggingEnabled;
-(BOOL)shouldAllowNearbyMultiplayer;
-(void)setShouldAllowNearbyMultiplayer:(BOOL)arg1 ;
-(BOOL)isDevelopmentDevice;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)markLogsWithMessage:(id)arg1 ;
-(BOOL)isTestFlightInstalled;
-(BOOL)shouldShowSandboxSeverSwitch;
-(BOOL)shouldUseSandboxServer;
-(void)setShouldUseSandboxServer:(BOOL)arg1 ;
-(void)dumpLogs;
@end

