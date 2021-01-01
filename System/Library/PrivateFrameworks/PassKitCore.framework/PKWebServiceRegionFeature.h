/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, PKOSVersionRequirementRange;

@interface PKWebServiceRegionFeature : NSObject {

	BOOL _automaticRegister;
	float _enablementThreshold;
	NSString* _region;
	long long _featureType;
	long long _registrationType;
	PKOSVersionRequirementRange* _versionRange;

}

@property (nonatomic,copy,readonly) NSString * region;                                  //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) long long featureType;                                   //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) long long registrationType;                              //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) float enablementThreshold;                               //@synthesize enablementThreshold=_enablementThreshold - In the implementation block
@property (nonatomic,readonly) BOOL automaticRegister;                                  //@synthesize automaticRegister=_automaticRegister - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * versionRange;              //@synthesize versionRange=_versionRange - In the implementation block
+(id)regionFeatureWithType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3 ;
-(NSString *)region;
-(long long)registrationType;
-(long long)featureType;
-(PKOSVersionRequirementRange *)versionRange;
-(id)initWithFeatureType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3 ;
-(float)enablementThreshold;
-(BOOL)automaticRegister;
@end

