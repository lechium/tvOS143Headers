/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANConnectionDelegate <NSObject>
@required
-(void)connection:(id)arg1 failedDeliveryForMessage:(id)arg2 withError:(id)arg3;
-(void)connection:(id)arg1 didReceiveMessage:(id)arg2 fromSender:(id)arg3 senderContext:(id)arg4 handler:(/*^block*/id)arg5;

@end
