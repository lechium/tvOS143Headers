/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVSWiFiNetworkConnectionOperationDelegate <NSObject>
@required
-(void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(void)operation:(id)arg1 didConnectToNetwork:(id)arg2;
-(void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3;
-(void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3;
-(void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(/*^block*/id)arg3;

@end

