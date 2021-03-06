/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ANSystemNotificationObserver : NSObject {

	/*^block*/id _observerHandler;

}

@property (copy) id observerHandler;              //@synthesize observerHandler=_observerHandler - In the implementation block
+(id)observer:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)startObservingNotifications;
-(void)removeNotificationObservers;
-(id)observerHandler;
-(void)_languageDidChange;
-(void)setObserverHandler:(id)arg1 ;
@end

