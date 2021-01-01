/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {

	id _store;
	_NS128bitWrapper* _uuid128;

}
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)persistentStore;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
-(id)_storeIdentifier;
@end

