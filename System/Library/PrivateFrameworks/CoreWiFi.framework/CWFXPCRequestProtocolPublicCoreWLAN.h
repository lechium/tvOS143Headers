/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CWFXPCRequestProtocolPublicCoreWLAN
@required
-(void)cancelRequestsWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringAllEventsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNamesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryKnownNetworkProfilesWithProperties:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)addKnownNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setPower:(BOOL)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setChannel:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performScanWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)associateWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)disassociateWithReason:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryRSSIWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNoiseWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxRateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySecurityWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWEPSubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWAPISubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedChannelsWithCountryCode:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryChannelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPHYModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCountryCodeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryOpModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMACAddressWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIsNetworkServiceEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;

@end

