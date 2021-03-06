/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DKDiagnosticHostRemoteContext <NSObject>
@required
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostShowUI:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostRequestPluginReloadOnFinishWithCompletion:(/*^block*/id)arg1;

@end

