/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSCrossDeviceTransportEndpoint <NSObject>
@optional
-(void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3;
-(void)messageWithIdentifierHasBeenDelivered:(id)arg1;

@required
-(void)messageReceivedFromIDS:(id)arg1;

@end

