/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSQueryGenerationToken.h>

@class NSString, _PFWeakReference;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	NSString* _storeIdentifier;
	_PFWeakReference* _store;
	id _generationIdentifier;
	struct {
		unsigned _isCompound : 1;
		unsigned _isSingleton : 1;
		unsigned _freeValueOnDealloc : 1;
		unsigned _isUnmoored : 1;
		unsigned _reservedFlags : 12;
	}  _flags;

}
+(BOOL)supportsSecureCoding;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)persistentStoreCoordinator;
@end

