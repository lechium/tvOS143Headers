/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2Accessory;
@class NSMutableArray;

@interface HAP2CharacteristicTuple : NSObject {

	id<HAP2Accessory> _accessory;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) id<HAP2Accessory> accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
-(NSMutableArray *)values;
-(id<HAP2Accessory>)accessory;
-(id)initWithAccessory:(id)arg1 ;
@end

