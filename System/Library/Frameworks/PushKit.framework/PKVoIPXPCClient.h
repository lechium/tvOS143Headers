/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKVoIPXPCClient
@optional
-(void)voipRegistrationFailed;

@required
-(void)voipPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

