/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDate, NSString;

@interface HMICameraVideoResourceAttributes : HMFObject <HMFLogging> {

	NSDate* _creationDate;
	unsigned long long _lastSequenceNumber;
	unsigned long long _firstSequenceNumber;
	double _nominalFrameRate;
	CGSize _dimensions;
	SCD_Struct_HM3 _assetDuration;
	SCD_Struct_HM3 _baseDecodeTimeStamp;

}

@property (readonly) SCD_Struct_HM3 assetDuration;                        //@synthesize assetDuration=_assetDuration - In the implementation block
@property (readonly) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long lastSequenceNumber;               //@synthesize lastSequenceNumber=_lastSequenceNumber - In the implementation block
@property (readonly) unsigned long long firstSequenceNumber;              //@synthesize firstSequenceNumber=_firstSequenceNumber - In the implementation block
@property (readonly) double nominalFrameRate;                             //@synthesize nominalFrameRate=_nominalFrameRate - In the implementation block
@property (readonly) CGSize dimensions;                                   //@synthesize dimensions=_dimensions - In the implementation block
@property (readonly) SCD_Struct_HM3 baseDecodeTimeStamp;                  //@synthesize baseDecodeTimeStamp=_baseDecodeTimeStamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)creationDate;
-(CGSize)dimensions;
-(double)nominalFrameRate;
-(SCD_Struct_HM3)assetDuration;
-(unsigned long long)lastSequenceNumber;
-(id)initWithAssetData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)firstSequenceNumber;
-(SCD_Struct_HM3)baseDecodeTimeStamp;
-(id)initWithAssetDuration:(SCD_Struct_HM3)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4 ;
-(id)initWithAssetDuration:(SCD_Struct_HM3)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4 nominalFrameRate:(double)arg5 dimensions:(CGSize)arg6 baseDecodeTimeStamp:(SCD_Struct_HM3)arg7 ;
-(id)initWithAssetDuration:(SCD_Struct_HM3)arg1 creationDate:(id)arg2 ;
@end

