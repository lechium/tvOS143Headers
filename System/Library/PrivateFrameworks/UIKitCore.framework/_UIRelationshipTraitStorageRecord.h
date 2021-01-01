/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection, NSSet;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	NSSet* _addedObjects;
	NSSet* _removedObjects;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) NSSet * addedObjects;                             //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSSet * removedObjects;                           //@synthesize removedObjects=_removedObjects - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UITraitCollection *)traitCollection;
-(NSSet *)removedObjects;
-(NSSet *)addedObjects;
-(id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end

