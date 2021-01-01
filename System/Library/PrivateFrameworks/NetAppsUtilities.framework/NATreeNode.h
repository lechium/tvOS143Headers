/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSMutableSet, NSSet, NSEnumerator;

@interface NATreeNode : NSObject <NSObject, NSCopying, NSMutableCopying, NAIdentifiable, NSFastEnumeration> {

	id _representedObject;
	NSMutableSet* _internalChildNodes;

}

@property (nonatomic,copy) NSMutableSet * internalChildNodes;                                  //@synthesize internalChildNodes=_internalChildNodes - In the implementation block
@property (nonatomic,retain) id representedObject;                                             //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) NSSet * childNodes; 
@property (nonatomic,readonly) NSEnumerator * shallowRepresentedObjectEnumerator; 
@property (nonatomic,readonly) NSEnumerator * shallowNodeEnumerator; 
@property (nonatomic,readonly) NSEnumerator * deepNodeEnumerator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NA1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSSet *)childNodes;
-(void)setRepresentedObject:(id)arg1 ;
-(id)representedObject;
-(id)initWithRepresentedObject:(id)arg1 ;
-(NSEnumerator *)shallowNodeEnumerator;
-(id)initWithRepresentedObject:(id)arg1 childNodes:(id)arg2 ;
-(NSMutableSet *)internalChildNodes;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSEnumerator *)deepNodeEnumerator;
-(id)childrenSortedByComparator:(/*^block*/id)arg1 ;
-(id)childAtIndexPath:(id)arg1 withChildrenSortedByComparator:(/*^block*/id)arg2 ;
-(NSEnumerator *)shallowRepresentedObjectEnumerator;
-(void)setInternalChildNodes:(NSMutableSet *)arg1 ;
@end

