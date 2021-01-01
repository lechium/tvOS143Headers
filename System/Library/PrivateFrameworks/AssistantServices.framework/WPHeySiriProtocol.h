/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPHeySiriProtocol <NSObject>
@optional
-(void)heySiriStartedAdvertising:(id)arg1;
-(void)heySiriStoppedAdvertising:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)heySiriAdvertisingPending:(id)arg1;
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withInfo:(id)arg3;
-(void)heySiriStartedScanning:(id)arg1;
-(void)heySiriStoppedScanning:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;

@required
-(void)heySiriDidUpdateState:(id)arg1;

@end

