/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDictionary, HMDResidentMesh, NSMutableSet, NSMutableDictionary;

@interface HMDResidentMeshMeshStorage : HMFObject {

	BOOL _enabled;
	HMDDevice* _device;
	NSDictionary* _metrics;
	HMDResidentMesh* _owner;
	NSMutableSet* _accessoryUUIDs;
	unsigned long long _generationCount;
	NSMutableDictionary* _accessoryListWithLinkQuality;

}

@property (assign,nonatomic,__weak) HMDResidentMesh * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                          //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSMutableSet * accessoryUUIDs;                                   //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long generationCount;                              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryListWithLinkQuality;              //@synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                            //@synthesize device=_device - In the implementation block
-(unsigned long long)generationCount;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOwner:(HMDResidentMesh *)arg1 ;
-(HMDDevice *)device;
-(void)_requestStatus;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(HMDResidentMesh *)owner;
-(void)setGenerationCount:(unsigned long long)arg1 ;
-(NSMutableSet *)accessoryUUIDs;
-(void)setAccessoryUUIDs:(NSMutableSet *)arg1 ;
-(void)setAccessoryListWithLinkQuality:(NSMutableDictionary *)arg1 ;
-(id)initWithDevice:(id)arg1 owner:(id)arg2 ;
-(NSMutableDictionary *)accessoryListWithLinkQuality;
@end

