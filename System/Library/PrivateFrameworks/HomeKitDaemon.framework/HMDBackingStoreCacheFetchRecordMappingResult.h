/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreRecordMapping.h>

@class NSString, NSUUID, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping> {

	NSString* _recordName;
	NSUUID* _uuid;
	NSUUID* _parentUuid;
	NSString* _type;
	HMDBackingStoreCacheGroup* _group;

}

@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSString * recordName;                          //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUuid;                            //@synthesize parentUuid=_parentUuid - In the implementation block
@property (nonatomic,readonly) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)type;
-(HMDBackingStoreCacheGroup *)group;
-(NSUUID *)uuid;
-(NSString *)recordName;
-(NSUUID *)parentUuid;
-(id)initWithGroup:(id)arg1 recordName:(id)arg2 uuid:(id)arg3 parentUuid:(id)arg4 type:(id)arg5 ;
@end
