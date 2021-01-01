/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WiFiUsageLinkQuality : NSObject {

	long long _rssi;
	long long _noise;
	long long _snr;
	long long _selfCca;
	long long _otherCca;
	long long _interference;
	long long _totalReportedCca;
	long long _beaconPer;

}

@property (assign,nonatomic) long long rssi;                          //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long noise;                         //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) long long snr;                           //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) long long selfCca;                       //@synthesize selfCca=_selfCca - In the implementation block
@property (assign,nonatomic) long long otherCca;                      //@synthesize otherCca=_otherCca - In the implementation block
@property (assign,nonatomic) long long interference;                  //@synthesize interference=_interference - In the implementation block
@property (assign,nonatomic) long long totalReportedCca;              //@synthesize totalReportedCca=_totalReportedCca - In the implementation block
@property (assign,nonatomic) long long beaconPer;                     //@synthesize beaconPer=_beaconPer - In the implementation block
+(id)linkQualityWithRssi:(long long)arg1 noise:(long long)arg2 snr:(long long)arg3 selfCca:(long long)arg4 otherCca:(long long)arg5 interference:(long long)arg6 totalReportedCca:(long long)arg7 beaconPer:(long long)arg8 ;
-(long long)rssi;
-(long long)snr;
-(void)setRssi:(long long)arg1 ;
-(void)setSnr:(long long)arg1 ;
-(void)setBeaconPer:(long long)arg1 ;
-(long long)beaconPer;
-(void)setNoise:(long long)arg1 ;
-(long long)noise;
-(long long)selfCca;
-(long long)otherCca;
-(long long)interference;
-(long long)totalReportedCca;
-(void)setSelfCca:(long long)arg1 ;
-(void)setOtherCca:(long long)arg1 ;
-(void)setInterference:(long long)arg1 ;
-(void)setTotalReportedCca:(long long)arg1 ;
@end

