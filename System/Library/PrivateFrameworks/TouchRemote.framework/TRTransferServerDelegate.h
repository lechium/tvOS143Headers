/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRTransferServerDelegate <NSObject>
@optional
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2;
-(void)serverWillReceiveData:(id)arg1;
-(void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3;

@end
