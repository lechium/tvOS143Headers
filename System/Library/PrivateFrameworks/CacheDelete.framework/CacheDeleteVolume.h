/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CacheDelete/CacheDelete-Structs.h>
@class NSString, NSDictionary;

@interface CacheDeleteVolume : NSObject {

	BOOL _isRoot;
	int _dev;
	unsigned _block_size;
	NSString* _fsType;
	NSString* _mountPoint;
	unsigned long long _initialFreespace;
	NSDictionary* _thresholds;
	NSString* _bsdName;

}

@property (readonly) BOOL isRoot;                                      //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,readonly) NSString * fsType;                      //@synthesize fsType=_fsType - In the implementation block
@property (nonatomic,readonly) NSString * mountPoint;                  //@synthesize mountPoint=_mountPoint - In the implementation block
@property (readonly) unsigned long long initialFreespace;              //@synthesize initialFreespace=_initialFreespace - In the implementation block
@property (nonatomic,readonly) NSDictionary * thresholds;              //@synthesize thresholds=_thresholds - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) int dev;                                          //@synthesize dev=_dev - In the implementation block
@property (readonly) unsigned block_size;                              //@synthesize block_size=_block_size - In the implementation block
@property (nonatomic,readonly) NSString * bsdName;                     //@synthesize bsdName=_bsdName - In the implementation block
+(id)validateVolumeAtPath:(id)arg1 ;
+(id)volumeWithPath:(id)arg1 ;
+(id)volumeWithMountpoint:(id)arg1 ;
+(id)mountPointForUUID:(id)arg1 ;
+(id)rootVolume;
+(long long)stateForPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)size;
-(long long)state;
-(id)initWithPath:(id)arg1 ;
-(id)uuid;
-(BOOL)validate;
-(BOOL)isRoot;
-(NSString *)mountPoint;
-(unsigned long long)freespace;
-(NSDictionary *)thresholds;
-(NSString *)fsType;
-(NSString *)bsdName;
-(int)dev;
-(unsigned)block_size;
-(id)initWithVolume:(id)arg1 ;
-(unsigned long long)initialFreespace;
-(BOOL)isEqualTo:(id)arg1 ;
-(unsigned long long)amountPurged;
-(id)FSEventsUUID;
@end

