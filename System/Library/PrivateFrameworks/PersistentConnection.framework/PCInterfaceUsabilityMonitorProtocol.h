/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@required
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isRadioHot;
-(void)setTrackedTimeInterval:(double)arg1;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1;
-(void)setTrackUsability:(BOOL)arg1;

@end

