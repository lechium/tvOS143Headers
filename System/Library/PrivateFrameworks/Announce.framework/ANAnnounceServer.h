/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ANAnnounceServiceListener, ANPlaybackSessionServiceListener, ANAnnounceReachabilityServiceListener, ANRapportEventStreamHandler, ANSystemNotificationObserver;

@interface ANAnnounceServer : NSObject {

	ANAnnounceServiceListener* _announceServiceListener;
	ANPlaybackSessionServiceListener* _playbackSessionServiceListener;
	ANAnnounceReachabilityServiceListener* _announceReachabilityServiceListener;
	ANRapportEventStreamHandler* _rapportEventStreamHandler;
	ANSystemNotificationObserver* _systemNotificationObserver;

}

@property (nonatomic,readonly) ANAnnounceServiceListener * announceServiceListener;                                      //@synthesize announceServiceListener=_announceServiceListener - In the implementation block
@property (nonatomic,readonly) ANPlaybackSessionServiceListener * playbackSessionServiceListener;                        //@synthesize playbackSessionServiceListener=_playbackSessionServiceListener - In the implementation block
@property (nonatomic,readonly) ANAnnounceReachabilityServiceListener * announceReachabilityServiceListener;              //@synthesize announceReachabilityServiceListener=_announceReachabilityServiceListener - In the implementation block
@property (nonatomic,readonly) ANRapportEventStreamHandler * rapportEventStreamHandler;                                  //@synthesize rapportEventStreamHandler=_rapportEventStreamHandler - In the implementation block
@property (nonatomic,readonly) ANSystemNotificationObserver * systemNotificationObserver;                                //@synthesize systemNotificationObserver=_systemNotificationObserver - In the implementation block
+(id)sharedServer;
-(id)init;
-(void)cleanForExit:(/*^block*/id)arg1 ;
-(ANPlaybackSessionServiceListener *)playbackSessionServiceListener;
-(ANAnnounceServiceListener *)announceServiceListener;
-(ANAnnounceReachabilityServiceListener *)announceReachabilityServiceListener;
-(ANRapportEventStreamHandler *)rapportEventStreamHandler;
-(ANSystemNotificationObserver *)systemNotificationObserver;
@end

