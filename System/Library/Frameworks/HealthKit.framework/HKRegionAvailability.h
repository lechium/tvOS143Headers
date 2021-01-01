/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface HKRegionAvailability : NSObject {

	NSArray* _supportedRegions;
	long long _version;

}

@property (nonatomic,readonly) NSArray * supportedRegions;              //@synthesize supportedRegions=_supportedRegions - In the implementation block
@property (nonatomic,readonly) long long version;                       //@synthesize version=_version - In the implementation block
-(long long)version;
-(id)initWithDeserializedAvailability:(id)arg1 ;
-(NSArray *)supportedRegions;
@end

