/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCExternalAccessoryXPCClientProtocol <NSObject>
@required
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
-(void)stopDestinationSharingForUUID:(id)arg1;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)ExternalAccessoryArrived:(id)arg1;
-(void)ExternalAccessoryLeft:(id)arg1;
-(void)accessoryCloseExternalAccessorySession:(id)arg1;
-(void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;
-(void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;
-(void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;

@end
