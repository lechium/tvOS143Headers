/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2CoAPClientDelegate <NSObject>
@optional
-(void)clientDidGetRegistered:(id)arg1;
-(void)clientDidGetUnregistered:(id)arg1;

@required
-(void)clientDidDisconnect:(id)arg1 error:(id)arg2;
-(void)client:(id)arg1 didReceiveEvent:(id)arg2;

@end

