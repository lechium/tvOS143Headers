/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MPUNotificationObserver : NSObject {

	id _notificationObservationToken;

}

@property (nonatomic,retain) id notificationObservationToken;              //@synthesize notificationObservationToken=_notificationObservationToken - In the implementation block
+(id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)notificationObservationToken;
-(void)setNotificationObservationToken:(id)arg1 ;
@end

