/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSDate, NSSet, NSData;

@interface HMDCameraRecordingSessionSignificantEvent : HMFObject <NSCopying, NSMutableCopying> {

	NSUUID* _UUID;
	unsigned long long _reason;
	NSDate* _dateOfOccurrence;
	unsigned long long _confidenceLevel;
	NSUUID* _sessionEntityUUID;
	NSSet* _faceClassifications;
	NSData* _heroFrameData;
	NSData* _faceCropData;
	double _timeOffsetWithinClip;

}

@property (assign) unsigned long long reason;                       //@synthesize reason=_reason - In the implementation block
@property (copy) NSDate * dateOfOccurrence;                         //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (assign) unsigned long long confidenceLevel;              //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (copy) NSUUID * sessionEntityUUID;                        //@synthesize sessionEntityUUID=_sessionEntityUUID - In the implementation block
@property (copy) NSSet * faceClassifications;                       //@synthesize faceClassifications=_faceClassifications - In the implementation block
@property (retain) NSData * heroFrameData;                          //@synthesize heroFrameData=_heroFrameData - In the implementation block
@property (retain) NSData * faceCropData;                           //@synthesize faceCropData=_faceCropData - In the implementation block
@property (assign) double timeOffsetWithinClip;                     //@synthesize timeOffsetWithinClip=_timeOffsetWithinClip - In the implementation block
@property (copy,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)reason;
-(NSUUID *)UUID;
-(void)setReason:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(unsigned long long)confidenceLevel;
-(void)setConfidenceLevel:(unsigned long long)arg1 ;
-(NSData *)faceCropData;
-(id)attributeDescriptions;
-(NSDate *)dateOfOccurrence;
-(double)timeOffsetWithinClip;
-(NSUUID *)sessionEntityUUID;
-(NSSet *)faceClassifications;
-(NSData *)heroFrameData;
-(void)setDateOfOccurrence:(NSDate *)arg1 ;
-(void)setSessionEntityUUID:(NSUUID *)arg1 ;
-(void)setFaceClassifications:(NSSet *)arg1 ;
-(void)setHeroFrameData:(NSData *)arg1 ;
-(void)setFaceCropData:(NSData *)arg1 ;
-(void)setTimeOffsetWithinClip:(double)arg1 ;
@end

