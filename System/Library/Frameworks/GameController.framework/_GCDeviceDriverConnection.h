/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GCDeviceDriverConnection
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@required
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1;
-(BOOL)isInvalid;
-(id)addInvalidationHandler:(/*^block*/id)arg1;
-(id)addInterruptionHandler:(/*^block*/id)arg1;
-(void)connectToDeviceService:(id)arg1 withClient:(id)arg2 reply:(/*^block*/id)arg3;

@end

