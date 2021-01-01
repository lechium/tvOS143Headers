/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PRRangingClientProtocol <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
-(void)didReceiveSessionStartNotification:(id)arg1;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;

@end
