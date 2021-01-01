/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLReductiveFilterOptions : NSObject {

	unsigned long long _beaconType;
	double _transmitPower;

}

@property (nonatomic,readonly) unsigned long long beaconType;              //@synthesize beaconType=_beaconType - In the implementation block
@property (nonatomic,readonly) double transmitPower;                       //@synthesize transmitPower=_transmitPower - In the implementation block
-(id)init;
-(id)initWithBeaconType:(unsigned long long)arg1 ;
-(id)initWithBeaconType:(unsigned long long)arg1 transmitPower:(double)arg2 ;
-(unsigned long long)beaconType;
-(double)transmitPower;
@end

