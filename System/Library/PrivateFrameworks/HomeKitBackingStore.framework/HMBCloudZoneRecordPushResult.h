/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSSet, NSDictionary, NSError;

@interface HMBCloudZoneRecordPushResult : HMFObject {

	BOOL _fatalError;
	NSSet* _updated;
	NSSet* _deleted;
	NSDictionary* _partialErrors;
	NSDictionary* _conflicts;
	NSError* _error;

}

@property (nonatomic,readonly) NSSet * updated;                           //@synthesize updated=_updated - In the implementation block
@property (nonatomic,readonly) NSSet * deleted;                           //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) NSDictionary * partialErrors;              //@synthesize partialErrors=_partialErrors - In the implementation block
@property (nonatomic,readonly) NSDictionary * conflicts;                  //@synthesize conflicts=_conflicts - In the implementation block
@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL fatalError;                           //@synthesize fatalError=_fatalError - In the implementation block
+(id)pushResultByMergingPushResult:(id)arg1 withPushResult:(id)arg2 ;
-(NSError *)error;
-(NSSet *)updated;
-(NSSet *)deleted;
-(NSDictionary *)conflicts;
-(id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 error:(id)arg4 ;
-(id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 partialErrors:(id)arg4 fatalError:(BOOL)arg5 error:(id)arg6 ;
-(NSDictionary *)partialErrors;
-(BOOL)fatalError;
@end

