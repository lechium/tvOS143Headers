/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VUINetworkReachabilityMonitor : NSObject {

	BOOL _networkReachable;
	id _networkTypeChangedNotificationToken;
	id _networkReachabilityChangedNotificationToken;

}

@property (getter=isNetworkReachable) BOOL networkReachable;                              //@synthesize networkReachable=_networkReachable - In the implementation block
@property (nonatomic,retain) id networkTypeChangedNotificationToken;                      //@synthesize networkTypeChangedNotificationToken=_networkTypeChangedNotificationToken - In the implementation block
@property (nonatomic,retain) id networkReachabilityChangedNotificationToken;              //@synthesize networkReachabilityChangedNotificationToken=_networkReachabilityChangedNotificationToken - In the implementation block
+(id)sharedInstance;
+(BOOL)_isNetworkReachable;
-(id)init;
-(id)_init;
-(BOOL)isNetworkReachable;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(void)_updateNetworkReachability;
-(id)networkTypeChangedNotificationToken;
-(void)setNetworkTypeChangedNotificationToken:(id)arg1 ;
-(id)networkReachabilityChangedNotificationToken;
-(void)setNetworkReachabilityChangedNotificationToken:(id)arg1 ;
@end

