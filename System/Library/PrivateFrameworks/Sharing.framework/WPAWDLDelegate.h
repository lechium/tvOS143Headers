/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPAWDLDelegate <NSObject>
@optional
-(void)awdlStartedAdvertising:(id)arg1;
-(void)awdlStoppedAdvertising:(id)arg1;
-(void)awdlAdvertisingPending:(id)arg1;
-(void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)awdlStartedScanning:(id)arg1;
-(void)awdlStoppedScanning:(id)arg1;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(BOOL)awdl:(id)arg1 foundDevice:(id)arg2;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;

@required
-(void)awdlDidUpdateState:(id)arg1;

@end

